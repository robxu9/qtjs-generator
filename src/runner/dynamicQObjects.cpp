
#include "callInfo.h"
#include "autoCallback.h"

#include "dynamicQObjects.h"
#include "dynamicQObject.h"

#include "autoCallback.h"
#include "callInfo.h"

namespace qtjs_binder {


DynamicQObjects::DynamicQObjects()
{
    nextId = 0;
    allocated = 10;
    metaObjects = (QMetaObject **) malloc(sizeof(QMetaObject *) * allocated);
}

DynamicQObjects::~DynamicQObjects()
{
    dispose();
}

void DynamicQObjects::dispose()
{
    if (metaObjects) {
        for (unsigned int i = 0; i < nextId; i++) {
            free(metaObjects[i]);
        }
        free(metaObjects);
        metaObjects = nullptr;
    }
    for (auto ci : classesInfo) {
        if (ci.second.initCallback) {
            delete ci.second.initCallback;
        }
        for (auto callback : ci.second.callbacks) {
            delete callback.second;
        }
        ci.second.callbacks.clear();
    }
    classesInfo.clear();
    nextId = 0;
    allocated = 0;
}

unsigned int DynamicQObjects::addResult(DynamicMetaObjectBuilder &builder)
{
    if (nextId >= allocated) {
        allocated *= 2;
        metaObjects = (QMetaObject **) realloc(metaObjects, sizeof(QMetaObject *) * allocated);
    }
    unsigned int currentId = nextId;
    nextId++;

    metaObjects[currentId] = builder.build(currentId);

    auto dynamicClass = dynamicClassSpecifications.byClassIdx(currentId);
    assert(dynamicClass);

    auto initFnc = builder.getInitCallback();
    if (initFnc) {
        classesInfo[currentId].initCallback =
                new CallInfo({
                                 { dynamicClass->typeId() },
                                 -1,
                                 initFnc
                             });
    } else {
        classesInfo[currentId].initCallback = nullptr;
    }
    classesInfo[currentId].callbacks.clear();
    for (auto it : builder.getCallbacks()) {

        int methodID = metaObjects[currentId]->indexOfMethod( builder.methodSignature(it.first) );
        assert(methodID >= 0);

        classesInfo[currentId].callbacks[it.first] =
                new CallInfo({
                                 QVector<int>({dynamicClass->typeId()}) << metaMethodParamTypeIds( metaObjects[currentId]->method(methodID) ),
                                 -1,
                                 it.second
                             });
    }

    return currentId;
}

QMetaObject *DynamicQObjects::getMetaObject(unsigned int classIdx)
{
    if (classIdx >= nextId) {
        return nullptr;
    }
    return metaObjects[classIdx];
}

QObject *DynamicQObjects::createInstance(unsigned int classIdx)
{
    auto dynamicClass = dynamicClassSpecifications.byClassIdx(classIdx);
    assert(dynamicClass);
    return dynamicClass->instantiate(classIdx);
}

void DynamicQObjects::callInit(size_t classIdx, void *obj)
{
    if (classesInfo[classIdx].initCallback) {
        void **data = new void*[2];
        data[0] = 0;
        data[1] = obj;
        classesInfo[classIdx].initCallback->invokeOnObject(data);
        delete [] data;
    }
}

void DynamicQObjects::metacall(size_t classIdx, QObject *obj, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        assert(classesInfo[classIdx].callbacks.find(_id) != classesInfo[classIdx].callbacks.end());
        int paramCnt = classesInfo[classIdx].callbacks[_id]->parameterTypeIds.count();
        void **data = nullptr;

        data = new void*[paramCnt+2];
        data[0] = _a[0];
        data[1] = obj;
        for (int i = 0; i < paramCnt; i++) {
            data[i+2] = _a[i+1];
        }
        AutoCallback paramDeleter([&]{
            delete [] data;
        });
        Q_UNUSED(paramDeleter);

        classesInfo[classIdx].callbacks[_id]->invokeOnObject(data);
    } else if (_c == QMetaObject::IndexOfMethod) {
        throw std::runtime_error("IndexOfMethod support is not implemented for DynamicQObject");
    }
}


DynamicQObjects &dynamicQObjects()
{
    static DynamicQObjects _obj;
    return _obj;
}

}


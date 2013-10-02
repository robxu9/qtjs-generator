
#pragma once

#include "_base.h"

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptbindapi.h"

#include <QObject>
#include <QVector>

#include <QMetaObject>
#include <QMetaMethod>

namespace qtjs_binder {

struct CallInfo {
    QVector<int> parameterTypeIds;
    int returnTypeId;
    cpgf::IScriptFunction * callback;
    void invoke(void **);
    ~CallInfo();
};

class DLL_PUBLIC QtSignalConnector : public QObject {
public:
    ~QtSignalConnector();
    bool connectToSignal(QObject *obj, const char *signal, cpgf::IScriptFunction * callback);

protected:
    QVector<CallInfo *> callbacks;
public:
    virtual int qt_metacall(QMetaObject::Call, int, void **);
};

struct DLL_PUBLIC QtSignalConnectorBinder {
    static void connect(QObject *obj, const char * signal, cpgf::IScriptFunction *callback);
    static void reset(QtSignalConnector *newConnector = nullptr);
private:
    static QtSignalConnector *connector;
};


}


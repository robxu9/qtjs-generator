// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGRENDERLOOP_P_H
#define CPGF_META_QTQML_QSGRENDERLOOP_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QSGRenderLoop(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("show", &D::ClassType::show);
    _d.CPGF_MD_TEMPLATE _method("hide", &D::ClassType::hide);
    _d.CPGF_MD_TEMPLATE _method("resize", &D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("windowDestroyed", &D::ClassType::windowDestroyed);
    _d.CPGF_MD_TEMPLATE _method("exposureChanged", &D::ClassType::exposureChanged);
    _d.CPGF_MD_TEMPLATE _method("grab", &D::ClassType::grab, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("maybeUpdate", &D::ClassType::maybeUpdate);
    _d.CPGF_MD_TEMPLATE _method("handleUpdateRequest", &D::ClassType::handleUpdateRequest);
    _d.CPGF_MD_TEMPLATE _method("animationDriver", &D::ClassType::animationDriver);
    _d.CPGF_MD_TEMPLATE _method("sceneGraphContext", &D::ClassType::sceneGraphContext);
    _d.CPGF_MD_TEMPLATE _method("createRenderContext", &D::ClassType::createRenderContext);
    _d.CPGF_MD_TEMPLATE _method("releaseResources", &D::ClassType::releaseResources);
    _d.CPGF_MD_TEMPLATE _method("addWindow", &D::ClassType::addWindow);
    _d.CPGF_MD_TEMPLATE _method("removeWindow", &D::ClassType::removeWindow);
    _d.CPGF_MD_TEMPLATE _method("windows", &D::ClassType::windows);
    _d.CPGF_MD_TEMPLATE _method("windowSurfaceType", &D::ClassType::windowSurfaceType);
    _d.CPGF_MD_TEMPLATE _method("interleaveIncubation", &D::ClassType::interleaveIncubation);
    _d.CPGF_MD_TEMPLATE _method("timeToIncubate", &D::ClassType::timeToIncubate);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("instance", &D::ClassType::instance);
    _d.CPGF_MD_TEMPLATE _method("setInstance", &D::ClassType::setInstance);
    _d.CPGF_MD_TEMPLATE _method("cleanup", &D::ClassType::cleanup);
}


class QSGRenderLoopWrapper : public QSGRenderLoop, public cpgf::GScriptWrapper {
public:
    
    QSurface::SurfaceType windowSurfaceType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("windowSurfaceType"));
        if(func)
        {
            return cpgf::fromVariant<QSurface::SurfaceType >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGRenderLoop::windowSurfaceType();
    }
    QSurface::SurfaceType super_windowSurfaceType() const
    {
        return QSGRenderLoop::windowSurfaceType();
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void releaseResources(QQuickWindow * window)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("releaseResources"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, window);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_releaseResources(QQuickWindow * window)
    {
        throw std::runtime_error("Abstract method");
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void update(QQuickWindow * window)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("update"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, window);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_update(QQuickWindow * window)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void handleContextCreationFailure(QQuickWindow * window, bool isEs)
    {
        QSGRenderLoop::handleContextCreationFailure(window, isEs);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    QImage grab(QQuickWindow * window)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("grab"));
        if(func)
        {
            return cpgf::fromVariant<QImage >(cpgf::invokeScriptFunctionOnObject(func.get(), this, window).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QImage super_grab(QQuickWindow * window)
    {
        throw std::runtime_error("Abstract method");
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    bool interleaveIncubation() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interleaveIncubation"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGRenderLoop::interleaveIncubation();
    }
    bool super_interleaveIncubation() const
    {
        return QSGRenderLoop::interleaveIncubation();
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    void handleUpdateRequest(QQuickWindow * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("handleUpdateRequest"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QSGRenderLoop::handleUpdateRequest(__arg0);
    }
    void super_handleUpdateRequest(QQuickWindow * __arg0)
    {
        QSGRenderLoop::handleUpdateRequest(__arg0);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    void maybeUpdate(QQuickWindow * window)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maybeUpdate"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, window);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_maybeUpdate(QQuickWindow * window)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void windowDestroyed(QQuickWindow * window)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("windowDestroyed"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, window);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_windowDestroyed(QQuickWindow * window)
    {
        throw std::runtime_error("Abstract method");
    }
    
    QSGContext * sceneGraphContext() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneGraphContext"));
        if(func)
        {
            return cpgf::fromVariant<QSGContext * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSGContext * super_sceneGraphContext() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    QSGRenderContext * createRenderContext(QSGContext * __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createRenderContext"));
        if(func)
        {
            return cpgf::fromVariant<QSGRenderContext * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSGRenderContext * super_createRenderContext(QSGContext * __arg0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    void resize(QQuickWindow * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resize"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QSGRenderLoop::resize(__arg0);
    }
    void super_resize(QQuickWindow * __arg0)
    {
        QSGRenderLoop::resize(__arg0);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QSGRenderLoop::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QSGRenderLoop::qt_metacast(__arg0);
    }
    
    QAnimationDriver * animationDriver() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("animationDriver"));
        if(func)
        {
            return cpgf::fromVariant<QAnimationDriver * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QAnimationDriver * super_animationDriver() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    void exposureChanged(QQuickWindow * window)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("exposureChanged"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, window);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_exposureChanged(QQuickWindow * window)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void hide(QQuickWindow * window)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hide"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, window);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_hide(QQuickWindow * window)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void show(QQuickWindow * window)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("show"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, window);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_show(QQuickWindow * window)
    {
        throw std::runtime_error("Abstract method");
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGRenderLoop::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QSGRenderLoop::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QSGRenderLoop::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QSGRenderLoop::qt_metacall(__arg0, __arg1, __arg2);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("handleContextCreationFailure", (void (D::ClassType::*) (QQuickWindow *, bool))&D::ClassType::handleContextCreationFailure);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_windowSurfaceType", (QSurface::SurfaceType (D::ClassType::*) () const)&D::ClassType::super_windowSurfaceType);
        _d.CPGF_MD_TEMPLATE _method("super_releaseResources", (void (D::ClassType::*) (QQuickWindow *))&D::ClassType::super_releaseResources);
        _d.CPGF_MD_TEMPLATE _method("super_update", (void (D::ClassType::*) (QQuickWindow *))&D::ClassType::super_update);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_grab", (QImage (D::ClassType::*) (QQuickWindow *))&D::ClassType::super_grab, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
        _d.CPGF_MD_TEMPLATE _method("super_interleaveIncubation", (bool (D::ClassType::*) () const)&D::ClassType::super_interleaveIncubation);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_handleUpdateRequest", (void (D::ClassType::*) (QQuickWindow *))&D::ClassType::super_handleUpdateRequest);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_maybeUpdate", (void (D::ClassType::*) (QQuickWindow *))&D::ClassType::super_maybeUpdate);
        _d.CPGF_MD_TEMPLATE _method("super_windowDestroyed", (void (D::ClassType::*) (QQuickWindow *))&D::ClassType::super_windowDestroyed);
        _d.CPGF_MD_TEMPLATE _method("super_sceneGraphContext", (QSGContext * (D::ClassType::*) () const)&D::ClassType::super_sceneGraphContext);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_createRenderContext", (QSGRenderContext * (D::ClassType::*) (QSGContext *) const)&D::ClassType::super_createRenderContext);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_resize", (void (D::ClassType::*) (QQuickWindow *))&D::ClassType::super_resize);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_animationDriver", (QAnimationDriver * (D::ClassType::*) () const)&D::ClassType::super_animationDriver);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_exposureChanged", (void (D::ClassType::*) (QQuickWindow *))&D::ClassType::super_exposureChanged);
        _d.CPGF_MD_TEMPLATE _method("super_hide", (void (D::ClassType::*) (QQuickWindow *))&D::ClassType::super_hide);
        _d.CPGF_MD_TEMPLATE _method("super_show", (void (D::ClassType::*) (QQuickWindow *))&D::ClassType::super_show);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
    }
};


template <typename D>
void buildMetaClass_QSGRenderLoopWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGRenderLoopWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGRenderLoop<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGDEFAULTLAYER_P_H
#define CPGF_META_QTQML_QSGDEFAULTLAYER_P_H


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
void buildMetaClass_Global_qsgdefaultlayer_p(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtQml_38")
    ;
}


template <typename D>
void buildMetaClass_QSGDefaultLayer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QSGRenderContext *)>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("updateTexture", &D::ClassType::updateTexture);
    _d.CPGF_MD_TEMPLATE _method("item", &D::ClassType::item);
    _d.CPGF_MD_TEMPLATE _method("setItem", &D::ClassType::setItem);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("setRect", &D::ClassType::setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("setSize", &D::ClassType::setSize);
    _d.CPGF_MD_TEMPLATE _method("setHasMipmaps", &D::ClassType::setHasMipmaps);
    _d.CPGF_MD_TEMPLATE _method("bind", &D::ClassType::bind);
    _d.CPGF_MD_TEMPLATE _method("hasAlphaChannel", &D::ClassType::hasAlphaChannel);
    _d.CPGF_MD_TEMPLATE _method("hasMipmaps", &D::ClassType::hasMipmaps);
    _d.CPGF_MD_TEMPLATE _method("textureId", &D::ClassType::textureId);
    _d.CPGF_MD_TEMPLATE _method("textureSize", &D::ClassType::textureSize);
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("setFormat", &D::ClassType::setFormat);
    _d.CPGF_MD_TEMPLATE _method("live", &D::ClassType::live);
    _d.CPGF_MD_TEMPLATE _method("setLive", &D::ClassType::setLive);
    _d.CPGF_MD_TEMPLATE _method("recursive", &D::ClassType::recursive);
    _d.CPGF_MD_TEMPLATE _method("setRecursive", &D::ClassType::setRecursive);
    _d.CPGF_MD_TEMPLATE _method("setDevicePixelRatio", &D::ClassType::setDevicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("scheduleUpdate", &D::ClassType::scheduleUpdate);
    _d.CPGF_MD_TEMPLATE _method("toImage", &D::ClassType::toImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("markDirtyTexture", &D::ClassType::markDirtyTexture);
    _d.CPGF_MD_TEMPLATE _method("invalidated", &D::ClassType::invalidated);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QSGDefaultLayerWrapper : public QSGDefaultLayer, public cpgf::GScriptWrapper {
public:
    
    QSGDefaultLayerWrapper(QSGRenderContext * context)
        : QSGDefaultLayer(context) {}
    
    int textureId() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureId"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGDefaultLayer::textureId();
    }
    int super_textureId() const
    {
        return QSGDefaultLayer::textureId();
    }
    
    QImage toImage() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("toImage"));
        if(func)
        {
            return cpgf::fromVariant<QImage >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGDefaultLayer::toImage();
    }
    QImage super_toImage() const
    {
        return QSGDefaultLayer::toImage();
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    bool isAtlasTexture() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isAtlasTexture"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGTexture::isAtlasTexture();
    }
    bool super_isAtlasTexture() const
    {
        return QSGTexture::isAtlasTexture();
    }
    
    void invalidated()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidated"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGDefaultLayer::invalidated();
    }
    void super_invalidated()
    {
        QSGDefaultLayer::invalidated();
    }
    
    QRectF normalizedTextureSubRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("normalizedTextureSubRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGTexture::normalizedTextureSubRect();
    }
    QRectF super_normalizedTextureSubRect() const
    {
        return QSGTexture::normalizedTextureSubRect();
    }
    
    bool updateTexture()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateTexture"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGDefaultLayer::updateTexture();
    }
    bool super_updateTexture()
    {
        return QSGDefaultLayer::updateTexture();
    }
    
    void setRecursive(bool recursive)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setRecursive"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, recursive);
            return;
        }
        QSGDefaultLayer::setRecursive(recursive);
    }
    void super_setRecursive(bool recursive)
    {
        QSGDefaultLayer::setRecursive(recursive);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    bool hasMipmaps() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasMipmaps"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGDefaultLayer::hasMipmaps();
    }
    bool super_hasMipmaps() const
    {
        return QSGDefaultLayer::hasMipmaps();
    }
    
    void setHasMipmaps(bool mipmap)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setHasMipmaps"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, mipmap);
            return;
        }
        QSGDefaultLayer::setHasMipmaps(mipmap);
    }
    void super_setHasMipmaps(bool mipmap)
    {
        QSGDefaultLayer::setHasMipmaps(mipmap);
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
    
    QSize textureSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGDefaultLayer::textureSize();
    }
    QSize super_textureSize() const
    {
        return QSGDefaultLayer::textureSize();
    }
    
    void bind()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("bind"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGDefaultLayer::bind();
    }
    void super_bind()
    {
        QSGDefaultLayer::bind();
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void setFormat(GLenum format)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setFormat"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, format);
            return;
        }
        QSGDefaultLayer::setFormat(format);
    }
    void super_setFormat(GLenum format)
    {
        QSGDefaultLayer::setFormat(format);
    }
    
    void setItem(QSGNode * item)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setItem"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, item);
            return;
        }
        QSGDefaultLayer::setItem(item);
    }
    void super_setItem(QSGNode * item)
    {
        QSGDefaultLayer::setItem(item);
    }
    
    void markDirtyTexture()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("markDirtyTexture"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGDefaultLayer::markDirtyTexture();
    }
    void super_markDirtyTexture()
    {
        QSGDefaultLayer::markDirtyTexture();
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
    
    QSGTexture * removedFromAtlas() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removedFromAtlas"));
        if(func)
        {
            return cpgf::fromVariant<QSGTexture * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGTexture::removedFromAtlas();
    }
    QSGTexture * super_removedFromAtlas() const
    {
        return QSGTexture::removedFromAtlas();
    }
    
    void setRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        QSGDefaultLayer::setRect(rect);
    }
    void super_setRect(const QRectF & rect)
    {
        QSGDefaultLayer::setRect(rect);
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
    
    void setDevicePixelRatio(qreal ratio)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setDevicePixelRatio"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, ratio);
            return;
        }
        QSGDefaultLayer::setDevicePixelRatio(ratio);
    }
    void super_setDevicePixelRatio(qreal ratio)
    {
        QSGDefaultLayer::setDevicePixelRatio(ratio);
    }
    
    void setLive(bool live)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setLive"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, live);
            return;
        }
        QSGDefaultLayer::setLive(live);
    }
    void super_setLive(bool live)
    {
        QSGDefaultLayer::setLive(live);
    }
    
    Q_SLOT void invalidated()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidated"));
        if(func)
        {
            return cpgf::fromVariant<Q_SLOT void >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    Q_SLOT void super_invalidated()
    {
        throw std::runtime_error("Abstract method");
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
    
    Q_SLOT void markDirtyTexture()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("markDirtyTexture"));
        if(func)
        {
            return cpgf::fromVariant<Q_SLOT void >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    Q_SLOT void super_markDirtyTexture()
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool hasAlphaChannel() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasAlphaChannel"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGDefaultLayer::hasAlphaChannel();
    }
    bool super_hasAlphaChannel() const
    {
        return QSGDefaultLayer::hasAlphaChannel();
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QSGDefaultLayer::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QSGDefaultLayer::qt_metacast(__arg0);
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
    
    void setSize(const QSize & size)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSize"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, size);
            return;
        }
        QSGDefaultLayer::setSize(size);
    }
    void super_setSize(const QSize & size)
    {
        QSGDefaultLayer::setSize(size);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGDefaultLayer::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QSGDefaultLayer::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QSGDefaultLayer::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QSGDefaultLayer::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void scheduleUpdate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scheduleUpdate"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGDefaultLayer::scheduleUpdate();
    }
    void super_scheduleUpdate()
    {
        QSGDefaultLayer::scheduleUpdate();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_textureId", (int (D::ClassType::*) () const)&D::ClassType::super_textureId);
        _d.CPGF_MD_TEMPLATE _method("super_toImage", (QImage (D::ClassType::*) () const)&D::ClassType::super_toImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
        _d.CPGF_MD_TEMPLATE _method("super_isAtlasTexture", (bool (D::ClassType::*) () const)&D::ClassType::super_isAtlasTexture);
        _d.CPGF_MD_TEMPLATE _method("super_invalidated", (void (D::ClassType::*) ())&D::ClassType::super_invalidated);
        _d.CPGF_MD_TEMPLATE _method("super_normalizedTextureSubRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_normalizedTextureSubRect);
        _d.CPGF_MD_TEMPLATE _method("super_updateTexture", (bool (D::ClassType::*) ())&D::ClassType::super_updateTexture);
        _d.CPGF_MD_TEMPLATE _method("super_setRecursive", (void (D::ClassType::*) (bool))&D::ClassType::super_setRecursive);
        _d.CPGF_MD_TEMPLATE _method("super_hasMipmaps", (bool (D::ClassType::*) () const)&D::ClassType::super_hasMipmaps);
        _d.CPGF_MD_TEMPLATE _method("super_setHasMipmaps", (void (D::ClassType::*) (bool))&D::ClassType::super_setHasMipmaps);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_textureSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_textureSize);
        _d.CPGF_MD_TEMPLATE _method("super_bind", (void (D::ClassType::*) ())&D::ClassType::super_bind);
        _d.CPGF_MD_TEMPLATE _method("super_setFormat", (void (D::ClassType::*) (GLenum))&D::ClassType::super_setFormat);
        _d.CPGF_MD_TEMPLATE _method("super_setItem", (void (D::ClassType::*) (QSGNode *))&D::ClassType::super_setItem);
        _d.CPGF_MD_TEMPLATE _method("super_markDirtyTexture", (void (D::ClassType::*) ())&D::ClassType::super_markDirtyTexture);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_removedFromAtlas", (QSGTexture * (D::ClassType::*) () const)&D::ClassType::super_removedFromAtlas);
        _d.CPGF_MD_TEMPLATE _method("super_setRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setDevicePixelRatio", (void (D::ClassType::*) (qreal))&D::ClassType::super_setDevicePixelRatio);
        _d.CPGF_MD_TEMPLATE _method("super_setLive", (void (D::ClassType::*) (bool))&D::ClassType::super_setLive);
        _d.CPGF_MD_TEMPLATE _method("super_invalidated", (Q_SLOT void (D::ClassType::*) ())&D::ClassType::super_invalidated);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_markDirtyTexture", (Q_SLOT void (D::ClassType::*) ())&D::ClassType::super_markDirtyTexture);
        _d.CPGF_MD_TEMPLATE _method("super_hasAlphaChannel", (bool (D::ClassType::*) () const)&D::ClassType::super_hasAlphaChannel);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_setSize", (void (D::ClassType::*) (const QSize &))&D::ClassType::super_setSize);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_scheduleUpdate", (void (D::ClassType::*) ())&D::ClassType::super_scheduleUpdate);
    }
};


template <typename D>
void buildMetaClass_QSGDefaultLayerWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGDefaultLayerWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGDefaultLayer<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

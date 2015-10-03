// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGDEFAULTPAINTERNODE_P_H
#define CPGF_META_QTQML_QSGDEFAULTPAINTERNODE_P_H


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
void buildMetaClass_QSGDefaultPainterNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQuickPaintedItem *)>();
    _d.CPGF_MD_TEMPLATE _method("setPreferredRenderTarget", &D::ClassType::setPreferredRenderTarget);
    _d.CPGF_MD_TEMPLATE _method("setSize", &D::ClassType::setSize);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("setDirty", &D::ClassType::setDirty)
        ._default(copyVariantFromCopyable(QRect()))
    ;
    _d.CPGF_MD_TEMPLATE _method("setOpaquePainting", &D::ClassType::setOpaquePainting);
    _d.CPGF_MD_TEMPLATE _method("opaquePainting", &D::ClassType::opaquePainting);
    _d.CPGF_MD_TEMPLATE _method("setLinearFiltering", &D::ClassType::setLinearFiltering);
    _d.CPGF_MD_TEMPLATE _method("linearFiltering", &D::ClassType::linearFiltering);
    _d.CPGF_MD_TEMPLATE _method("setMipmapping", &D::ClassType::setMipmapping);
    _d.CPGF_MD_TEMPLATE _method("mipmapping", &D::ClassType::mipmapping);
    _d.CPGF_MD_TEMPLATE _method("setSmoothPainting", &D::ClassType::setSmoothPainting);
    _d.CPGF_MD_TEMPLATE _method("smoothPainting", &D::ClassType::smoothPainting);
    _d.CPGF_MD_TEMPLATE _method("setFillColor", &D::ClassType::setFillColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fillColor", &D::ClassType::fillColor);
    _d.CPGF_MD_TEMPLATE _method("setContentsScale", &D::ClassType::setContentsScale);
    _d.CPGF_MD_TEMPLATE _method("contentsScale", &D::ClassType::contentsScale);
    _d.CPGF_MD_TEMPLATE _method("setFastFBOResizing", &D::ClassType::setFastFBOResizing);
    _d.CPGF_MD_TEMPLATE _method("fastFBOResizing", &D::ClassType::fastFBOResizing);
    _d.CPGF_MD_TEMPLATE _method("toImage", &D::ClassType::toImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint);
    _d.CPGF_MD_TEMPLATE _method("texture", &D::ClassType::texture);
}


class QSGDefaultPainterNodeWrapper : public QSGDefaultPainterNode, public cpgf::GScriptWrapper {
public:
    
    QSGDefaultPainterNodeWrapper(QQuickPaintedItem * item)
        : QSGDefaultPainterNode(item) {}
    
    void setDirty(const QRect & dirtyRect = QRect())
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setDirty"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, dirtyRect);
            return;
        }
        QSGDefaultPainterNode::setDirty(dirtyRect);
    }
    void super_setDirty(const QRect & dirtyRect = QRect())
    {
        QSGDefaultPainterNode::setDirty(dirtyRect);
    }
    
    void setFillColor(const QColor & c)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setFillColor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, c);
            return;
        }
        QSGDefaultPainterNode::setFillColor(c);
    }
    void super_setFillColor(const QColor & c)
    {
        QSGDefaultPainterNode::setFillColor(c);
    }
    
    void setFastFBOResizing(bool dynamic)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setFastFBOResizing"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, dynamic);
            return;
        }
        QSGDefaultPainterNode::setFastFBOResizing(dynamic);
    }
    void super_setFastFBOResizing(bool dynamic)
    {
        QSGDefaultPainterNode::setFastFBOResizing(dynamic);
    }
    
    void setMipmapping(bool mipmapping)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setMipmapping"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, mipmapping);
            return;
        }
        QSGDefaultPainterNode::setMipmapping(mipmapping);
    }
    void super_setMipmapping(bool mipmapping)
    {
        QSGDefaultPainterNode::setMipmapping(mipmapping);
    }
    
    QImage toImage() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("toImage"));
        if(func)
        {
            return cpgf::fromVariant<QImage >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGDefaultPainterNode::toImage();
    }
    QImage super_toImage() const
    {
        return QSGDefaultPainterNode::toImage();
    }
    
    void setSmoothPainting(bool s)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSmoothPainting"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, s);
            return;
        }
        QSGDefaultPainterNode::setSmoothPainting(s);
    }
    void super_setSmoothPainting(bool s)
    {
        QSGDefaultPainterNode::setSmoothPainting(s);
    }
    
    void update()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("update"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGDefaultPainterNode::update();
    }
    void super_update()
    {
        QSGDefaultPainterNode::update();
    }
    
    void setPreferredRenderTarget(QQuickPaintedItem::RenderTarget target)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPreferredRenderTarget"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, target);
            return;
        }
        QSGDefaultPainterNode::setPreferredRenderTarget(target);
    }
    void super_setPreferredRenderTarget(QQuickPaintedItem::RenderTarget target)
    {
        QSGDefaultPainterNode::setPreferredRenderTarget(target);
    }
    
    void setContentsScale(qreal s)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setContentsScale"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, s);
            return;
        }
        QSGDefaultPainterNode::setContentsScale(s);
    }
    void super_setContentsScale(qreal s)
    {
        QSGDefaultPainterNode::setContentsScale(s);
    }
    
    void setOpaquePainting(bool opaque)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setOpaquePainting"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, opaque);
            return;
        }
        QSGDefaultPainterNode::setOpaquePainting(opaque);
    }
    void super_setOpaquePainting(bool opaque)
    {
        QSGDefaultPainterNode::setOpaquePainting(opaque);
    }
    
    void preprocess()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("preprocess"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGNode::preprocess();
    }
    void super_preprocess()
    {
        QSGNode::preprocess();
    }
    
    void setLinearFiltering(bool linearFiltering)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setLinearFiltering"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, linearFiltering);
            return;
        }
        QSGDefaultPainterNode::setLinearFiltering(linearFiltering);
    }
    void super_setLinearFiltering(bool linearFiltering)
    {
        QSGDefaultPainterNode::setLinearFiltering(linearFiltering);
    }
    
    bool isSubtreeBlocked() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isSubtreeBlocked"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGNode::isSubtreeBlocked();
    }
    bool super_isSubtreeBlocked() const
    {
        return QSGNode::isSubtreeBlocked();
    }
    
    void accept(QSGNodeVisitorEx * visitor)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accept"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, visitor);
            return;
        }
        QSGPainterNode::accept(visitor);
    }
    void super_accept(QSGNodeVisitorEx * visitor)
    {
        QSGPainterNode::accept(visitor);
    }
    
    QSGTexture * texture() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("texture"));
        if(func)
        {
            return cpgf::fromVariant<QSGTexture * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGDefaultPainterNode::texture();
    }
    QSGTexture * super_texture() const
    {
        return QSGDefaultPainterNode::texture();
    }
    
    void setSize(const QSize & size)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSize"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, size);
            return;
        }
        QSGDefaultPainterNode::setSize(size);
    }
    void super_setSize(const QSize & size)
    {
        QSGDefaultPainterNode::setSize(size);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setDirty", (void (D::ClassType::*) (const QRect &))&D::ClassType::super_setDirty)
            ._default(copyVariantFromCopyable(QRect()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_setFillColor", (void (D::ClassType::*) (const QColor &))&D::ClassType::super_setFillColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setFastFBOResizing", (void (D::ClassType::*) (bool))&D::ClassType::super_setFastFBOResizing);
        _d.CPGF_MD_TEMPLATE _method("super_setMipmapping", (void (D::ClassType::*) (bool))&D::ClassType::super_setMipmapping);
        _d.CPGF_MD_TEMPLATE _method("super_toImage", (QImage (D::ClassType::*) () const)&D::ClassType::super_toImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
        _d.CPGF_MD_TEMPLATE _method("super_setSmoothPainting", (void (D::ClassType::*) (bool))&D::ClassType::super_setSmoothPainting);
        _d.CPGF_MD_TEMPLATE _method("super_update", (void (D::ClassType::*) ())&D::ClassType::super_update);
        _d.CPGF_MD_TEMPLATE _method("super_setPreferredRenderTarget", (void (D::ClassType::*) (QQuickPaintedItem::RenderTarget))&D::ClassType::super_setPreferredRenderTarget);
        _d.CPGF_MD_TEMPLATE _method("super_setContentsScale", (void (D::ClassType::*) (qreal))&D::ClassType::super_setContentsScale);
        _d.CPGF_MD_TEMPLATE _method("super_setOpaquePainting", (void (D::ClassType::*) (bool))&D::ClassType::super_setOpaquePainting);
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_setLinearFiltering", (void (D::ClassType::*) (bool))&D::ClassType::super_setLinearFiltering);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_accept", (void (D::ClassType::*) (QSGNodeVisitorEx *))&D::ClassType::super_accept);
        _d.CPGF_MD_TEMPLATE _method("super_texture", (QSGTexture * (D::ClassType::*) () const)&D::ClassType::super_texture);
        _d.CPGF_MD_TEMPLATE _method("super_setSize", (void (D::ClassType::*) (const QSize &))&D::ClassType::super_setSize);
    }
};


template <typename D>
void buildMetaClass_QSGDefaultPainterNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGDefaultPainterNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGDefaultPainterNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGPainterTexture(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setDirtyRect", &D::ClassType::setDirtyRect);
    _d.CPGF_MD_TEMPLATE _method("bind", &D::ClassType::bind);
}


class QSGPainterTextureWrapper : public QSGPainterTexture, public cpgf::GScriptWrapper {
public:
    
    QSGPainterTextureWrapper()
        : QSGPainterTexture() {}
    
    int textureId() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureId"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGPlainTexture::textureId();
    }
    int super_textureId() const
    {
        return QSGPlainTexture::textureId();
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
        return QSGPlainTexture::hasMipmaps();
    }
    bool super_hasMipmaps() const
    {
        return QSGPlainTexture::hasMipmaps();
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
    
    bool hasAlphaChannel() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasAlphaChannel"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGPlainTexture::hasAlphaChannel();
    }
    bool super_hasAlphaChannel() const
    {
        return QSGPlainTexture::hasAlphaChannel();
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QSGPlainTexture::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QSGPlainTexture::qt_metacast(__arg0);
    }
    
    QSize textureSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGPlainTexture::textureSize();
    }
    QSize super_textureSize() const
    {
        return QSGPlainTexture::textureSize();
    }
    
    void bind()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("bind"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGPainterTexture::bind();
    }
    void super_bind()
    {
        QSGPainterTexture::bind();
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
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
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
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGPlainTexture::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QSGPlainTexture::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QSGPlainTexture::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QSGPlainTexture::qt_metacall(__arg0, __arg1, __arg2);
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
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_textureId", (int (D::ClassType::*) () const)&D::ClassType::super_textureId);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_isAtlasTexture", (bool (D::ClassType::*) () const)&D::ClassType::super_isAtlasTexture);
        _d.CPGF_MD_TEMPLATE _method("super_normalizedTextureSubRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_normalizedTextureSubRect);
        _d.CPGF_MD_TEMPLATE _method("super_hasMipmaps", (bool (D::ClassType::*) () const)&D::ClassType::super_hasMipmaps);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_hasAlphaChannel", (bool (D::ClassType::*) () const)&D::ClassType::super_hasAlphaChannel);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_textureSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_textureSize);
        _d.CPGF_MD_TEMPLATE _method("super_bind", (void (D::ClassType::*) ())&D::ClassType::super_bind);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_removedFromAtlas", (QSGTexture * (D::ClassType::*) () const)&D::ClassType::super_removedFromAtlas);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QSGPainterTextureWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGPainterTextureWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGPainterTexture<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

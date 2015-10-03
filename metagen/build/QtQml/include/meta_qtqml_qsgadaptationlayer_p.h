// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGADAPTATIONLAYER_P_H
#define CPGF_META_QTQML_QSGADAPTATIONLAYER_P_H


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
void buildMetaClass_QSGDistanceFieldGlyphConsumer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("invalidateGlyphs", &D::ClassType::invalidateGlyphs, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


class QSGDistanceFieldGlyphConsumerWrapper : public QSGDistanceFieldGlyphConsumer, public cpgf::GScriptWrapper {
public:
    
    void invalidateGlyphs(const QVector< quint32 > & glyphs)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidateGlyphs"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, glyphs);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_invalidateGlyphs(const QVector< quint32 > & glyphs)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_invalidateGlyphs", (void (D::ClassType::*) (const QVector< quint32 > &))&D::ClassType::super_invalidateGlyphs, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    }
};


template <typename D>
void buildMetaClass_QSGDistanceFieldGlyphConsumerWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGDistanceFieldGlyphConsumerWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGDistanceFieldGlyphConsumer<D>(_d);
}


template <typename D>
void buildMetaClass_QSGGlyphNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setGlyphs", &D::ClassType::setGlyphs, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setColor", &D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setStyle", &D::ClassType::setStyle);
    _d.CPGF_MD_TEMPLATE _method("setStyleColor", &D::ClassType::setStyleColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("baseLine", &D::ClassType::baseLine);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("setBoundingRect", &D::ClassType::setBoundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPreferredAntialiasingMode", &D::ClassType::setPreferredAntialiasingMode);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("setOwnerElement", &D::ClassType::setOwnerElement);
    _d.CPGF_MD_TEMPLATE _method("ownerElement", &D::ClassType::ownerElement);
    _d.CPGF_MD_TEMPLATE _method("accept", &D::ClassType::accept);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AntialiasingMode>("AntialiasingMode")
        ._element("GrayAntialiasing", D::ClassType::GrayAntialiasing)
        ._element("LowQualitySubPixelAntialiasing", D::ClassType::LowQualitySubPixelAntialiasing)
        ._element("HighQualitySubPixelAntialiasing", D::ClassType::HighQualitySubPixelAntialiasing)
    ;
}


class QSGGlyphNodeWrapper : public QSGGlyphNode, public cpgf::GScriptWrapper {
public:
    
    QSGGlyphNodeWrapper()
        : QSGGlyphNode() {}
    
    void setStyle(QQuickText::TextStyle style)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setStyle"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, style);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setStyle(QQuickText::TextStyle style)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void update()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("update"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_update()
    {
        throw std::runtime_error("Abstract method");
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGGlyphNode::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QSGGlyphNode::boundingRect();
    }
    
    void setBoundingRect(const QRectF & bounds)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setBoundingRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, bounds);
            return;
        }
        QSGGlyphNode::setBoundingRect(bounds);
    }
    void super_setBoundingRect(const QRectF & bounds)
    {
        QSGGlyphNode::setBoundingRect(bounds);
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
    
    void setGlyphs(const QPointF & position, const QGlyphRun & glyphs)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGlyphs"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, position, glyphs);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setGlyphs(const QPointF & position, const QGlyphRun & glyphs)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setStyleColor(const QColor & color)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setStyleColor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, color);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setStyleColor(const QColor & color)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void accept(QSGNodeVisitorEx * visitor)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accept"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, visitor);
            return;
        }
        QSGGlyphNode::accept(visitor);
    }
    void super_accept(QSGNodeVisitorEx * visitor)
    {
        QSGGlyphNode::accept(visitor);
    }
    
    void setColor(const QColor & color)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setColor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, color);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setColor(const QColor & color)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setPreferredAntialiasingMode(QSGGlyphNode::AntialiasingMode __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPreferredAntialiasingMode"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setPreferredAntialiasingMode(QSGGlyphNode::AntialiasingMode __arg0)
    {
        throw std::runtime_error("Abstract method");
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
    
    QPointF baseLine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("baseLine"));
        if(func)
        {
            return cpgf::fromVariant<QPointF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QPointF super_baseLine() const
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setStyle", (void (D::ClassType::*) (QQuickText::TextStyle))&D::ClassType::super_setStyle);
        _d.CPGF_MD_TEMPLATE _method("super_update", (void (D::ClassType::*) ())&D::ClassType::super_update);
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_setBoundingRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setBoundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_setGlyphs", (void (D::ClassType::*) (const QPointF &, const QGlyphRun &))&D::ClassType::super_setGlyphs, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setStyleColor", (void (D::ClassType::*) (const QColor &))&D::ClassType::super_setStyleColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_accept", (void (D::ClassType::*) (QSGNodeVisitorEx *))&D::ClassType::super_accept);
        _d.CPGF_MD_TEMPLATE _method("super_setColor", (void (D::ClassType::*) (const QColor &))&D::ClassType::super_setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setPreferredAntialiasingMode", (void (D::ClassType::*) (QSGGlyphNode::AntialiasingMode))&D::ClassType::super_setPreferredAntialiasingMode);
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_baseLine", (QPointF (D::ClassType::*) () const)&D::ClassType::super_baseLine);
    }
};


template <typename D>
void buildMetaClass_QSGGlyphNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QSGGlyphNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGGlyphNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGImageNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setTargetRect", &D::ClassType::setTargetRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setInnerTargetRect", &D::ClassType::setInnerTargetRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setInnerSourceRect", &D::ClassType::setInnerSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setSubSourceRect", &D::ClassType::setSubSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setTexture", &D::ClassType::setTexture);
    _d.CPGF_MD_TEMPLATE _method("setAntialiasing", &D::ClassType::setAntialiasing);
    _d.CPGF_MD_TEMPLATE _method("setMirror", &D::ClassType::setMirror);
    _d.CPGF_MD_TEMPLATE _method("setMipmapFiltering", &D::ClassType::setMipmapFiltering);
    _d.CPGF_MD_TEMPLATE _method("setFiltering", &D::ClassType::setFiltering);
    _d.CPGF_MD_TEMPLATE _method("setHorizontalWrapMode", &D::ClassType::setHorizontalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("setVerticalWrapMode", &D::ClassType::setVerticalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("accept", &D::ClassType::accept);
}


class QSGImageNodeWrapper : public QSGImageNode, public cpgf::GScriptWrapper {
public:
    
    void update()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("update"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_update()
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setHorizontalWrapMode(QSGTexture::WrapMode wrapMode)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setHorizontalWrapMode"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, wrapMode);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setHorizontalWrapMode(QSGTexture::WrapMode wrapMode)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setVerticalWrapMode(QSGTexture::WrapMode wrapMode)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setVerticalWrapMode"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, wrapMode);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setVerticalWrapMode(QSGTexture::WrapMode wrapMode)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setInnerSourceRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setInnerSourceRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setInnerSourceRect(const QRectF & rect)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setMirror(bool mirror)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setMirror"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, mirror);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setMirror(bool mirror)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setSubSourceRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSubSourceRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setSubSourceRect(const QRectF & rect)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setInnerTargetRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setInnerTargetRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setInnerTargetRect(const QRectF & rect)
    {
        throw std::runtime_error("Abstract method");
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
    
    void setFiltering(QSGTexture::Filtering filtering)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setFiltering"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, filtering);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setFiltering(QSGTexture::Filtering filtering)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setAntialiasing(bool antialiasing)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setAntialiasing"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, antialiasing);
            return;
        }
        QSGImageNode::setAntialiasing(antialiasing);
    }
    void super_setAntialiasing(bool antialiasing)
    {
        QSGImageNode::setAntialiasing(antialiasing);
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
        QSGImageNode::accept(visitor);
    }
    void super_accept(QSGNodeVisitorEx * visitor)
    {
        QSGImageNode::accept(visitor);
    }
    
    void setTargetRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTargetRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setTargetRect(const QRectF & rect)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setTexture(QSGTexture * texture)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTexture"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, texture);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setTexture(QSGTexture * texture)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setMipmapFiltering(QSGTexture::Filtering filtering)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setMipmapFiltering"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, filtering);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setMipmapFiltering(QSGTexture::Filtering filtering)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_update", (void (D::ClassType::*) ())&D::ClassType::super_update);
        _d.CPGF_MD_TEMPLATE _method("super_setHorizontalWrapMode", (void (D::ClassType::*) (QSGTexture::WrapMode))&D::ClassType::super_setHorizontalWrapMode);
        _d.CPGF_MD_TEMPLATE _method("super_setVerticalWrapMode", (void (D::ClassType::*) (QSGTexture::WrapMode))&D::ClassType::super_setVerticalWrapMode);
        _d.CPGF_MD_TEMPLATE _method("super_setInnerSourceRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setInnerSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setMirror", (void (D::ClassType::*) (bool))&D::ClassType::super_setMirror);
        _d.CPGF_MD_TEMPLATE _method("super_setSubSourceRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setSubSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setInnerTargetRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setInnerTargetRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_setFiltering", (void (D::ClassType::*) (QSGTexture::Filtering))&D::ClassType::super_setFiltering);
        _d.CPGF_MD_TEMPLATE _method("super_setAntialiasing", (void (D::ClassType::*) (bool))&D::ClassType::super_setAntialiasing);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_accept", (void (D::ClassType::*) (QSGNodeVisitorEx *))&D::ClassType::super_accept);
        _d.CPGF_MD_TEMPLATE _method("super_setTargetRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setTargetRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setTexture", (void (D::ClassType::*) (QSGTexture *))&D::ClassType::super_setTexture);
        _d.CPGF_MD_TEMPLATE _method("super_setMipmapFiltering", (void (D::ClassType::*) (QSGTexture::Filtering))&D::ClassType::super_setMipmapFiltering);
    }
};


template <typename D>
void buildMetaClass_QSGImageNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGImageNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGImageNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGLayer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setItem", &D::ClassType::setItem);
    _d.CPGF_MD_TEMPLATE _method("setRect", &D::ClassType::setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setSize", &D::ClassType::setSize);
    _d.CPGF_MD_TEMPLATE _method("scheduleUpdate", &D::ClassType::scheduleUpdate);
    _d.CPGF_MD_TEMPLATE _method("toImage", &D::ClassType::toImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setLive", &D::ClassType::setLive);
    _d.CPGF_MD_TEMPLATE _method("setRecursive", &D::ClassType::setRecursive);
    _d.CPGF_MD_TEMPLATE _method("setFormat", &D::ClassType::setFormat);
    _d.CPGF_MD_TEMPLATE _method("setHasMipmaps", &D::ClassType::setHasMipmaps);
    _d.CPGF_MD_TEMPLATE _method("setDevicePixelRatio", &D::ClassType::setDevicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("markDirtyTexture", &D::ClassType::markDirtyTexture);
    _d.CPGF_MD_TEMPLATE _method("invalidated", &D::ClassType::invalidated);
    _d.CPGF_MD_TEMPLATE _method("updateRequested", &D::ClassType::updateRequested);
    _d.CPGF_MD_TEMPLATE _method("scheduledUpdateCompleted", &D::ClassType::scheduledUpdateCompleted);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QSGLayerWrapper : public QSGLayer, public cpgf::GScriptWrapper {
public:
    
    int textureId() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureId"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_textureId() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QImage toImage() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("toImage"));
        if(func)
        {
            return cpgf::fromVariant<QImage >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QImage super_toImage() const
    {
        throw std::runtime_error("Abstract method");
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
    
    bool updateTexture()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateTexture"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_updateTexture()
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setRecursive(bool recursive)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setRecursive"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, recursive);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setRecursive(bool recursive)
    {
        throw std::runtime_error("Abstract method");
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
        throw std::runtime_error("Abstract method");
    }
    bool super_hasMipmaps() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setHasMipmaps(bool mipmap)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setHasMipmaps"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, mipmap);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setHasMipmaps(bool mipmap)
    {
        throw std::runtime_error("Abstract method");
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
        throw std::runtime_error("Abstract method");
    }
    QSize super_textureSize() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void bind()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("bind"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_bind()
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
    
    void setFormat(GLenum format)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setFormat"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, format);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setFormat(GLenum format)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setItem(QSGNode * item)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setItem"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, item);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setItem(QSGNode * item)
    {
        throw std::runtime_error("Abstract method");
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
        throw std::runtime_error("Abstract method");
    }
    void super_setRect(const QRectF & rect)
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
        throw std::runtime_error("Abstract method");
    }
    void super_setDevicePixelRatio(qreal ratio)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setLive(bool live)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setLive"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, live);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setLive(bool live)
    {
        throw std::runtime_error("Abstract method");
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
        throw std::runtime_error("Abstract method");
    }
    bool super_hasAlphaChannel() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QSGLayer::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QSGLayer::qt_metacast(__arg0);
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
        throw std::runtime_error("Abstract method");
    }
    void super_setSize(const QSize & size)
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
        return QSGLayer::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QSGLayer::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QSGLayer::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QSGLayer::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void scheduleUpdate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scheduleUpdate"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_scheduleUpdate()
    {
        throw std::runtime_error("Abstract method");
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
void buildMetaClass_QSGLayerWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGLayerWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGLayer<D>(_d);
}


template <typename D>
void buildMetaClass_QSGNinePatchNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setTexture", &D::ClassType::setTexture);
    _d.CPGF_MD_TEMPLATE _method("setBounds", &D::ClassType::setBounds, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setDevicePixelRatio", &D::ClassType::setDevicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("setPadding", &D::ClassType::setPadding);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("accept", &D::ClassType::accept);
}


class QSGNinePatchNodeWrapper : public QSGNinePatchNode, public cpgf::GScriptWrapper {
public:
    
    void update()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("update"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_update()
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setDevicePixelRatio(qreal ratio)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setDevicePixelRatio"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, ratio);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setDevicePixelRatio(qreal ratio)
    {
        throw std::runtime_error("Abstract method");
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
    
    void setPadding(qreal left, qreal top, qreal right, qreal bottom)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPadding"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, left, top, right, bottom);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setPadding(qreal left, qreal top, qreal right, qreal bottom)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void accept(QSGNodeVisitorEx * visitor)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accept"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, visitor);
            return;
        }
        QSGNinePatchNode::accept(visitor);
    }
    void super_accept(QSGNodeVisitorEx * visitor)
    {
        QSGNinePatchNode::accept(visitor);
    }
    
    void setBounds(const QRectF & bounds)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setBounds"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, bounds);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setBounds(const QRectF & bounds)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setTexture(QSGTexture * texture)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTexture"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, texture);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setTexture(QSGTexture * texture)
    {
        throw std::runtime_error("Abstract method");
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
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_update", (void (D::ClassType::*) ())&D::ClassType::super_update);
        _d.CPGF_MD_TEMPLATE _method("super_setDevicePixelRatio", (void (D::ClassType::*) (qreal))&D::ClassType::super_setDevicePixelRatio);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_setPadding", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::super_setPadding);
        _d.CPGF_MD_TEMPLATE _method("super_accept", (void (D::ClassType::*) (QSGNodeVisitorEx *))&D::ClassType::super_accept);
        _d.CPGF_MD_TEMPLATE _method("super_setBounds", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setBounds, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setTexture", (void (D::ClassType::*) (QSGTexture *))&D::ClassType::super_setTexture);
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
    }
};


template <typename D>
void buildMetaClass_QSGNinePatchNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGNinePatchNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGNinePatchNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGNodeVisitorEx(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("visit", (bool (D::ClassType::*) (QSGTransformNode *))&D::ClassType::visit);
    _d.CPGF_MD_TEMPLATE _method("endVisit", (void (D::ClassType::*) (QSGTransformNode *))&D::ClassType::endVisit);
    _d.CPGF_MD_TEMPLATE _method("visit", (bool (D::ClassType::*) (QSGClipNode *))&D::ClassType::visit);
    _d.CPGF_MD_TEMPLATE _method("endVisit", (void (D::ClassType::*) (QSGClipNode *))&D::ClassType::endVisit);
    _d.CPGF_MD_TEMPLATE _method("visit", (bool (D::ClassType::*) (QSGGeometryNode *))&D::ClassType::visit);
    _d.CPGF_MD_TEMPLATE _method("endVisit", (void (D::ClassType::*) (QSGGeometryNode *))&D::ClassType::endVisit);
    _d.CPGF_MD_TEMPLATE _method("visit", (bool (D::ClassType::*) (QSGOpacityNode *))&D::ClassType::visit);
    _d.CPGF_MD_TEMPLATE _method("endVisit", (void (D::ClassType::*) (QSGOpacityNode *))&D::ClassType::endVisit);
    _d.CPGF_MD_TEMPLATE _method("visit", (bool (D::ClassType::*) (QSGImageNode *))&D::ClassType::visit);
    _d.CPGF_MD_TEMPLATE _method("endVisit", (void (D::ClassType::*) (QSGImageNode *))&D::ClassType::endVisit);
    _d.CPGF_MD_TEMPLATE _method("visit", (bool (D::ClassType::*) (QSGPainterNode *))&D::ClassType::visit);
    _d.CPGF_MD_TEMPLATE _method("endVisit", (void (D::ClassType::*) (QSGPainterNode *))&D::ClassType::endVisit);
    _d.CPGF_MD_TEMPLATE _method("visit", (bool (D::ClassType::*) (QSGRectangleNode *))&D::ClassType::visit);
    _d.CPGF_MD_TEMPLATE _method("endVisit", (void (D::ClassType::*) (QSGRectangleNode *))&D::ClassType::endVisit);
    _d.CPGF_MD_TEMPLATE _method("visit", (bool (D::ClassType::*) (QSGGlyphNode *))&D::ClassType::visit);
    _d.CPGF_MD_TEMPLATE _method("endVisit", (void (D::ClassType::*) (QSGGlyphNode *))&D::ClassType::endVisit);
    _d.CPGF_MD_TEMPLATE _method("visit", (bool (D::ClassType::*) (QSGNinePatchNode *))&D::ClassType::visit);
    _d.CPGF_MD_TEMPLATE _method("endVisit", (void (D::ClassType::*) (QSGNinePatchNode *))&D::ClassType::endVisit);
    _d.CPGF_MD_TEMPLATE _method("visit", (bool (D::ClassType::*) (QSGRootNode *))&D::ClassType::visit);
    _d.CPGF_MD_TEMPLATE _method("endVisit", (void (D::ClassType::*) (QSGRootNode *))&D::ClassType::endVisit);
    _d.CPGF_MD_TEMPLATE _method("visitChildren", &D::ClassType::visitChildren);
}


class QSGNodeVisitorExWrapper : public QSGNodeVisitorEx, public cpgf::GScriptWrapper {
public:
    
    void endVisit(QSGOpacityNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("endVisit"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_endVisit(QSGOpacityNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void endVisit(QSGRectangleNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("endVisit"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_endVisit(QSGRectangleNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool visit(QSGOpacityNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_visit(QSGOpacityNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool visit(QSGGlyphNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_visit(QSGGlyphNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void endVisit(QSGRootNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("endVisit"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_endVisit(QSGRootNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool visit(QSGImageNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_visit(QSGImageNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool visit(QSGRectangleNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_visit(QSGRectangleNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool visit(QSGPainterNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_visit(QSGPainterNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool visit(QSGTransformNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_visit(QSGTransformNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void endVisit(QSGPainterNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("endVisit"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_endVisit(QSGPainterNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void endVisit(QSGGlyphNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("endVisit"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_endVisit(QSGGlyphNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool visit(QSGRootNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_visit(QSGRootNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void endVisit(QSGTransformNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("endVisit"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_endVisit(QSGTransformNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool visit(QSGGeometryNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_visit(QSGGeometryNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool visit(QSGNinePatchNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_visit(QSGNinePatchNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void endVisit(QSGImageNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("endVisit"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_endVisit(QSGImageNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void endVisit(QSGClipNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("endVisit"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_endVisit(QSGClipNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void endVisit(QSGGeometryNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("endVisit"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_endVisit(QSGGeometryNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool visit(QSGClipNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_visit(QSGClipNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void endVisit(QSGNinePatchNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("endVisit"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_endVisit(QSGNinePatchNode * __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_endVisit", (void (D::ClassType::*) (QSGOpacityNode *))&D::ClassType::super_endVisit);
        _d.CPGF_MD_TEMPLATE _method("super_endVisit", (void (D::ClassType::*) (QSGRectangleNode *))&D::ClassType::super_endVisit);
        _d.CPGF_MD_TEMPLATE _method("super_visit", (bool (D::ClassType::*) (QSGOpacityNode *))&D::ClassType::super_visit);
        _d.CPGF_MD_TEMPLATE _method("super_visit", (bool (D::ClassType::*) (QSGGlyphNode *))&D::ClassType::super_visit);
        _d.CPGF_MD_TEMPLATE _method("super_endVisit", (void (D::ClassType::*) (QSGRootNode *))&D::ClassType::super_endVisit);
        _d.CPGF_MD_TEMPLATE _method("super_visit", (bool (D::ClassType::*) (QSGImageNode *))&D::ClassType::super_visit);
        _d.CPGF_MD_TEMPLATE _method("super_visit", (bool (D::ClassType::*) (QSGRectangleNode *))&D::ClassType::super_visit);
        _d.CPGF_MD_TEMPLATE _method("super_visit", (bool (D::ClassType::*) (QSGPainterNode *))&D::ClassType::super_visit);
        _d.CPGF_MD_TEMPLATE _method("super_visit", (bool (D::ClassType::*) (QSGTransformNode *))&D::ClassType::super_visit);
        _d.CPGF_MD_TEMPLATE _method("super_endVisit", (void (D::ClassType::*) (QSGPainterNode *))&D::ClassType::super_endVisit);
        _d.CPGF_MD_TEMPLATE _method("super_endVisit", (void (D::ClassType::*) (QSGGlyphNode *))&D::ClassType::super_endVisit);
        _d.CPGF_MD_TEMPLATE _method("super_visit", (bool (D::ClassType::*) (QSGRootNode *))&D::ClassType::super_visit);
        _d.CPGF_MD_TEMPLATE _method("super_endVisit", (void (D::ClassType::*) (QSGTransformNode *))&D::ClassType::super_endVisit);
        _d.CPGF_MD_TEMPLATE _method("super_visit", (bool (D::ClassType::*) (QSGGeometryNode *))&D::ClassType::super_visit);
        _d.CPGF_MD_TEMPLATE _method("super_visit", (bool (D::ClassType::*) (QSGNinePatchNode *))&D::ClassType::super_visit);
        _d.CPGF_MD_TEMPLATE _method("super_endVisit", (void (D::ClassType::*) (QSGImageNode *))&D::ClassType::super_endVisit);
        _d.CPGF_MD_TEMPLATE _method("super_endVisit", (void (D::ClassType::*) (QSGClipNode *))&D::ClassType::super_endVisit);
        _d.CPGF_MD_TEMPLATE _method("super_endVisit", (void (D::ClassType::*) (QSGGeometryNode *))&D::ClassType::super_endVisit);
        _d.CPGF_MD_TEMPLATE _method("super_visit", (bool (D::ClassType::*) (QSGClipNode *))&D::ClassType::super_visit);
        _d.CPGF_MD_TEMPLATE _method("super_endVisit", (void (D::ClassType::*) (QSGNinePatchNode *))&D::ClassType::super_endVisit);
    }
};


template <typename D>
void buildMetaClass_QSGNodeVisitorExWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGNodeVisitorExWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGNodeVisitorEx<D>(_d);
}


template <typename D>
void buildMetaClass_QSGPainterNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setPreferredRenderTarget", &D::ClassType::setPreferredRenderTarget);
    _d.CPGF_MD_TEMPLATE _method("setSize", &D::ClassType::setSize);
    _d.CPGF_MD_TEMPLATE _method("setDirty", &D::ClassType::setDirty)
        ._default(copyVariantFromCopyable(QRect()))
    ;
    _d.CPGF_MD_TEMPLATE _method("setOpaquePainting", &D::ClassType::setOpaquePainting);
    _d.CPGF_MD_TEMPLATE _method("setLinearFiltering", &D::ClassType::setLinearFiltering);
    _d.CPGF_MD_TEMPLATE _method("setMipmapping", &D::ClassType::setMipmapping);
    _d.CPGF_MD_TEMPLATE _method("setSmoothPainting", &D::ClassType::setSmoothPainting);
    _d.CPGF_MD_TEMPLATE _method("setFillColor", &D::ClassType::setFillColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setContentsScale", &D::ClassType::setContentsScale);
    _d.CPGF_MD_TEMPLATE _method("setFastFBOResizing", &D::ClassType::setFastFBOResizing);
    _d.CPGF_MD_TEMPLATE _method("toImage", &D::ClassType::toImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("texture", &D::ClassType::texture);
    _d.CPGF_MD_TEMPLATE _method("accept", &D::ClassType::accept);
}


class QSGPainterNodeWrapper : public QSGPainterNode, public cpgf::GScriptWrapper {
public:
    
    void setDirty(const QRect & dirtyRect = QRect())
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setDirty"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, dirtyRect);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setDirty(const QRect & dirtyRect = QRect())
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setFillColor(const QColor & c)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setFillColor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, c);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setFillColor(const QColor & c)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setFastFBOResizing(bool dynamic)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setFastFBOResizing"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, dynamic);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setFastFBOResizing(bool dynamic)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setMipmapping(bool mipmapping)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setMipmapping"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, mipmapping);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setMipmapping(bool mipmapping)
    {
        throw std::runtime_error("Abstract method");
    }
    
    QImage toImage() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("toImage"));
        if(func)
        {
            return cpgf::fromVariant<QImage >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QImage super_toImage() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setSmoothPainting(bool s)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSmoothPainting"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, s);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setSmoothPainting(bool s)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void update()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("update"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_update()
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setPreferredRenderTarget(QQuickPaintedItem::RenderTarget target)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPreferredRenderTarget"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, target);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setPreferredRenderTarget(QQuickPaintedItem::RenderTarget target)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setContentsScale(qreal s)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setContentsScale"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, s);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setContentsScale(qreal s)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setOpaquePainting(bool opaque)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setOpaquePainting"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, opaque);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setOpaquePainting(bool opaque)
    {
        throw std::runtime_error("Abstract method");
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
        throw std::runtime_error("Abstract method");
    }
    void super_setLinearFiltering(bool linearFiltering)
    {
        throw std::runtime_error("Abstract method");
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
        throw std::runtime_error("Abstract method");
    }
    QSGTexture * super_texture() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setSize(const QSize & size)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSize"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, size);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setSize(const QSize & size)
    {
        throw std::runtime_error("Abstract method");
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
void buildMetaClass_QSGPainterNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGPainterNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGPainterNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGRectangleNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setRect", &D::ClassType::setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setColor", &D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPenColor", &D::ClassType::setPenColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPenWidth", &D::ClassType::setPenWidth);
    _d.CPGF_MD_TEMPLATE _method("setGradientStops", &D::ClassType::setGradientStops);
    _d.CPGF_MD_TEMPLATE _method("setRadius", &D::ClassType::setRadius);
    _d.CPGF_MD_TEMPLATE _method("setAntialiasing", &D::ClassType::setAntialiasing);
    _d.CPGF_MD_TEMPLATE _method("setAligned", &D::ClassType::setAligned);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("accept", &D::ClassType::accept);
}


class QSGRectangleNodeWrapper : public QSGRectangleNode, public cpgf::GScriptWrapper {
public:
    
    void setGradientStops(const QGradientStops & stops)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGradientStops"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, stops);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setGradientStops(const QGradientStops & stops)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setPenWidth(qreal width)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPenWidth"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, width);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setPenWidth(qreal width)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setAntialiasing(bool antialiasing)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setAntialiasing"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, antialiasing);
            return;
        }
        QSGRectangleNode::setAntialiasing(antialiasing);
    }
    void super_setAntialiasing(bool antialiasing)
    {
        QSGRectangleNode::setAntialiasing(antialiasing);
    }
    
    void setAligned(bool aligned)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setAligned"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, aligned);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setAligned(bool aligned)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void update()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("update"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_update()
    {
        throw std::runtime_error("Abstract method");
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
        QSGRectangleNode::accept(visitor);
    }
    void super_accept(QSGNodeVisitorEx * visitor)
    {
        QSGRectangleNode::accept(visitor);
    }
    
    void setRadius(qreal radius)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setRadius"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, radius);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setRadius(qreal radius)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setRect(const QRectF & rect)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setColor(const QColor & color)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setColor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, color);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setColor(const QColor & color)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setPenColor(const QColor & color)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPenColor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, color);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setPenColor(const QColor & color)
    {
        throw std::runtime_error("Abstract method");
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
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setGradientStops", (void (D::ClassType::*) (const QGradientStops &))&D::ClassType::super_setGradientStops);
        _d.CPGF_MD_TEMPLATE _method("super_setPenWidth", (void (D::ClassType::*) (qreal))&D::ClassType::super_setPenWidth);
        _d.CPGF_MD_TEMPLATE _method("super_setAntialiasing", (void (D::ClassType::*) (bool))&D::ClassType::super_setAntialiasing);
        _d.CPGF_MD_TEMPLATE _method("super_setAligned", (void (D::ClassType::*) (bool))&D::ClassType::super_setAligned);
        _d.CPGF_MD_TEMPLATE _method("super_update", (void (D::ClassType::*) ())&D::ClassType::super_update);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_accept", (void (D::ClassType::*) (QSGNodeVisitorEx *))&D::ClassType::super_accept);
        _d.CPGF_MD_TEMPLATE _method("super_setRadius", (void (D::ClassType::*) (qreal))&D::ClassType::super_setRadius);
        _d.CPGF_MD_TEMPLATE _method("super_setRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setColor", (void (D::ClassType::*) (const QColor &))&D::ClassType::super_setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setPenColor", (void (D::ClassType::*) (const QColor &))&D::ClassType::super_setPenColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
    }
};


template <typename D>
void buildMetaClass_QSGRectangleNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGRectangleNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGRectangleNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGVisitableNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("accept", &D::ClassType::accept);
}


class QSGVisitableNodeWrapper : public QSGVisitableNode, public cpgf::GScriptWrapper {
public:
    
    QSGVisitableNodeWrapper()
        : QSGVisitableNode() {}
    
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
    
    void accept(QSGNodeVisitorEx * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accept"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_accept(QSGNodeVisitorEx * __arg0)
    {
        throw std::runtime_error("Abstract method");
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
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_accept", (void (D::ClassType::*) (QSGNodeVisitorEx *))&D::ClassType::super_accept);
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
    }
};


template <typename D>
void buildMetaClass_QSGVisitableNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QSGVisitableNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGVisitableNode<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

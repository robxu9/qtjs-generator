// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKTEXT_P_H
#define CPGF_META_QTQML_QQUICKTEXT_P_H


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
void buildMetaClass_QQuickText(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQuickItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("color", &D::ClassType::color);
    _d.CPGF_MD_TEMPLATE _method("setColor", &D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("linkColor", &D::ClassType::linkColor);
    _d.CPGF_MD_TEMPLATE _method("setLinkColor", &D::ClassType::setLinkColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("style", &D::ClassType::style);
    _d.CPGF_MD_TEMPLATE _method("setStyle", &D::ClassType::setStyle);
    _d.CPGF_MD_TEMPLATE _method("styleColor", &D::ClassType::styleColor);
    _d.CPGF_MD_TEMPLATE _method("setStyleColor", &D::ClassType::setStyleColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("hAlign", &D::ClassType::hAlign);
    _d.CPGF_MD_TEMPLATE _method("setHAlign", &D::ClassType::setHAlign);
    _d.CPGF_MD_TEMPLATE _method("resetHAlign", &D::ClassType::resetHAlign);
    _d.CPGF_MD_TEMPLATE _method("effectiveHAlign", &D::ClassType::effectiveHAlign);
    _d.CPGF_MD_TEMPLATE _method("vAlign", &D::ClassType::vAlign);
    _d.CPGF_MD_TEMPLATE _method("setVAlign", &D::ClassType::setVAlign);
    _d.CPGF_MD_TEMPLATE _method("wrapMode", &D::ClassType::wrapMode);
    _d.CPGF_MD_TEMPLATE _method("setWrapMode", &D::ClassType::setWrapMode);
    _d.CPGF_MD_TEMPLATE _method("lineCount", &D::ClassType::lineCount);
    _d.CPGF_MD_TEMPLATE _method("truncated", &D::ClassType::truncated);
    _d.CPGF_MD_TEMPLATE _method("maximumLineCount", &D::ClassType::maximumLineCount);
    _d.CPGF_MD_TEMPLATE _method("setMaximumLineCount", &D::ClassType::setMaximumLineCount);
    _d.CPGF_MD_TEMPLATE _method("resetMaximumLineCount", &D::ClassType::resetMaximumLineCount);
    _d.CPGF_MD_TEMPLATE _method("textFormat", &D::ClassType::textFormat);
    _d.CPGF_MD_TEMPLATE _method("setTextFormat", &D::ClassType::setTextFormat);
    _d.CPGF_MD_TEMPLATE _method("elideMode", &D::ClassType::elideMode);
    _d.CPGF_MD_TEMPLATE _method("setElideMode", &D::ClassType::setElideMode);
    _d.CPGF_MD_TEMPLATE _method("lineHeight", &D::ClassType::lineHeight);
    _d.CPGF_MD_TEMPLATE _method("setLineHeight", &D::ClassType::setLineHeight);
    _d.CPGF_MD_TEMPLATE _method("lineHeightMode", &D::ClassType::lineHeightMode);
    _d.CPGF_MD_TEMPLATE _method("setLineHeightMode", &D::ClassType::setLineHeightMode);
    _d.CPGF_MD_TEMPLATE _method("baseUrl", &D::ClassType::baseUrl);
    _d.CPGF_MD_TEMPLATE _method("setBaseUrl", &D::ClassType::setBaseUrl, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("resetBaseUrl", &D::ClassType::resetBaseUrl);
    _d.CPGF_MD_TEMPLATE _method("minimumPixelSize", &D::ClassType::minimumPixelSize);
    _d.CPGF_MD_TEMPLATE _method("setMinimumPixelSize", &D::ClassType::setMinimumPixelSize);
    _d.CPGF_MD_TEMPLATE _method("minimumPointSize", &D::ClassType::minimumPointSize);
    _d.CPGF_MD_TEMPLATE _method("setMinimumPointSize", &D::ClassType::setMinimumPointSize);
    _d.CPGF_MD_TEMPLATE _method("fontSizeMode", &D::ClassType::fontSizeMode);
    _d.CPGF_MD_TEMPLATE _method("setFontSizeMode", &D::ClassType::setFontSizeMode);
    _d.CPGF_MD_TEMPLATE _method("componentComplete", &D::ClassType::componentComplete);
    _d.CPGF_MD_TEMPLATE _method("resourcesLoading", &D::ClassType::resourcesLoading);
    _d.CPGF_MD_TEMPLATE _method("contentWidth", &D::ClassType::contentWidth);
    _d.CPGF_MD_TEMPLATE _method("contentHeight", &D::ClassType::contentHeight);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("clipRect", &D::ClassType::clipRect);
    _d.CPGF_MD_TEMPLATE _method("doLayout", &D::ClassType::doLayout);
    _d.CPGF_MD_TEMPLATE _method("renderType", &D::ClassType::renderType);
    _d.CPGF_MD_TEMPLATE _method("setRenderType", &D::ClassType::setRenderType);
    _d.CPGF_MD_TEMPLATE _method("hoveredLink", &D::ClassType::hoveredLink);
    _d.CPGF_MD_TEMPLATE _method("linkAt", &D::ClassType::linkAt);
    _d.CPGF_MD_TEMPLATE _method("textChanged", &D::ClassType::textChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("linkActivated", &D::ClassType::linkActivated, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("linkHovered", &D::ClassType::linkHovered, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fontChanged", &D::ClassType::fontChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("colorChanged", &D::ClassType::colorChanged);
    _d.CPGF_MD_TEMPLATE _method("linkColorChanged", &D::ClassType::linkColorChanged);
    _d.CPGF_MD_TEMPLATE _method("styleChanged", &D::ClassType::styleChanged);
    _d.CPGF_MD_TEMPLATE _method("styleColorChanged", &D::ClassType::styleColorChanged);
    _d.CPGF_MD_TEMPLATE _method("horizontalAlignmentChanged", &D::ClassType::horizontalAlignmentChanged);
    _d.CPGF_MD_TEMPLATE _method("verticalAlignmentChanged", &D::ClassType::verticalAlignmentChanged);
    _d.CPGF_MD_TEMPLATE _method("wrapModeChanged", &D::ClassType::wrapModeChanged);
    _d.CPGF_MD_TEMPLATE _method("lineCountChanged", &D::ClassType::lineCountChanged);
    _d.CPGF_MD_TEMPLATE _method("truncatedChanged", &D::ClassType::truncatedChanged);
    _d.CPGF_MD_TEMPLATE _method("maximumLineCountChanged", &D::ClassType::maximumLineCountChanged);
    _d.CPGF_MD_TEMPLATE _method("textFormatChanged", &D::ClassType::textFormatChanged);
    _d.CPGF_MD_TEMPLATE _method("elideModeChanged", &D::ClassType::elideModeChanged);
    _d.CPGF_MD_TEMPLATE _method("contentSizeChanged", &D::ClassType::contentSizeChanged);
    _d.CPGF_MD_TEMPLATE _method("lineHeightChanged", &D::ClassType::lineHeightChanged);
    _d.CPGF_MD_TEMPLATE _method("lineHeightModeChanged", &D::ClassType::lineHeightModeChanged);
    _d.CPGF_MD_TEMPLATE _method("fontSizeModeChanged", &D::ClassType::fontSizeModeChanged);
    _d.CPGF_MD_TEMPLATE _method("minimumPixelSizeChanged", &D::ClassType::minimumPixelSizeChanged);
    _d.CPGF_MD_TEMPLATE _method("minimumPointSizeChanged", &D::ClassType::minimumPointSizeChanged);
    _d.CPGF_MD_TEMPLATE _method("effectiveHorizontalAlignmentChanged", &D::ClassType::effectiveHorizontalAlignmentChanged);
    _d.CPGF_MD_TEMPLATE _method("baseUrlChanged", &D::ClassType::baseUrlChanged);
    _d.CPGF_MD_TEMPLATE _method("renderTypeChanged", &D::ClassType::renderTypeChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::HAlignment>("HAlignment")
        ._element("AlignLeft", D::ClassType::AlignLeft)
        ._element("AlignRight", D::ClassType::AlignRight)
        ._element("AlignHCenter", D::ClassType::AlignHCenter)
        ._element("AlignJustify", D::ClassType::AlignJustify)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::VAlignment>("VAlignment")
        ._element("AlignTop", D::ClassType::AlignTop)
        ._element("AlignBottom", D::ClassType::AlignBottom)
        ._element("AlignVCenter", D::ClassType::AlignVCenter)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TextStyle>("TextStyle")
        ._element("Normal", D::ClassType::Normal)
        ._element("Outline", D::ClassType::Outline)
        ._element("Raised", D::ClassType::Raised)
        ._element("Sunken", D::ClassType::Sunken)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TextFormat>("TextFormat")
        ._element("PlainText", D::ClassType::PlainText)
        ._element("RichText", D::ClassType::RichText)
        ._element("AutoText", D::ClassType::AutoText)
        ._element("StyledText", D::ClassType::StyledText)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TextElideMode>("TextElideMode")
        ._element("ElideLeft", D::ClassType::ElideLeft)
        ._element("ElideRight", D::ClassType::ElideRight)
        ._element("ElideMiddle", D::ClassType::ElideMiddle)
        ._element("ElideNone", D::ClassType::ElideNone)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::WrapMode>("WrapMode")
        ._element("NoWrap", D::ClassType::NoWrap)
        ._element("WordWrap", D::ClassType::WordWrap)
        ._element("WrapAnywhere", D::ClassType::WrapAnywhere)
        ._element("WrapAtWordBoundaryOrAnywhere", D::ClassType::WrapAtWordBoundaryOrAnywhere)
        ._element("Wrap", D::ClassType::Wrap)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RenderType>("RenderType")
        ._element("QtRendering", D::ClassType::QtRendering)
        ._element("NativeRendering", D::ClassType::NativeRendering)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::LineHeightMode>("LineHeightMode")
        ._element("ProportionalHeight", D::ClassType::ProportionalHeight)
        ._element("FixedHeight", D::ClassType::FixedHeight)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::FontSizeMode>("FontSizeMode")
        ._element("FixedSize", D::ClassType::FixedSize)
        ._element("HorizontalFit", D::ClassType::HorizontalFit)
        ._element("VerticalFit", D::ClassType::VerticalFit)
        ._element("Fit", D::ClassType::Fit)
    ;
}


class QQuickTextWrapper : public QQuickText, public cpgf::GScriptWrapper {
public:
    
    QQuickTextWrapper(QQuickItem * parent = 0)
        : QQuickText(parent) {}
    
    void mouseDoubleClickEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QQuickItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QMouseEvent * event)
    {
        QQuickItem::mouseDoubleClickEvent(event);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void releaseResources()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("releaseResources"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QQuickItem::releaseResources();
    }
    void super_releaseResources()
    {
        QQuickItem::releaseResources();
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickText::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QQuickText::boundingRect();
    }
    
    void geometryChanged(const QRectF & newGeometry, const QRectF & oldGeometry)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("geometryChanged"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, newGeometry, oldGeometry);
            return;
        }
        QQuickText::geometryChanged(newGeometry, oldGeometry);
    }
    void super_geometryChanged(const QRectF & newGeometry, const QRectF & oldGeometry)
    {
        QQuickText::geometryChanged(newGeometry, oldGeometry);
    }
    
    void updateInputMethod(Qt::InputMethodQueries queries = Qt::ImQueryInput)
    {
        QQuickItem::updateInputMethod(queries);
    }
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QQuickItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QQuickItem::keyReleaseEvent(event);
    }
    
    void setImplicitSize(qreal __arg0, qreal __arg1)
    {
        QQuickItem::setImplicitSize(__arg0, __arg1);
    }
    
    bool widthValid() const
    {
        return QQuickItem::widthValid();
    }
    
    void wheelEvent(QWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QQuickItem::wheelEvent(event);
    }
    void super_wheelEvent(QWheelEvent * event)
    {
        QQuickItem::wheelEvent(event);
    }
    
    QRectF clipRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("clipRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickText::clipRect();
    }
    QRectF super_clipRect() const
    {
        return QQuickText::clipRect();
    }
    
    void touchEvent(QTouchEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("touchEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QQuickItem::touchEvent(event);
    }
    void super_touchEvent(QTouchEvent * event)
    {
        QQuickItem::touchEvent(event);
    }
    
    bool isComponentComplete() const
    {
        return QQuickItem::isComponentComplete();
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    void focusOutEvent(QFocusEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QQuickItem::focusOutEvent(__arg0);
    }
    void super_focusOutEvent(QFocusEvent * __arg0)
    {
        QQuickItem::focusOutEvent(__arg0);
    }
    
    void mouseReleaseEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QQuickText::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QMouseEvent * event)
    {
        QQuickText::mouseReleaseEvent(event);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void dragEnterEvent(QDragEnterEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QQuickItem::dragEnterEvent(__arg0);
    }
    void super_dragEnterEvent(QDragEnterEvent * __arg0)
    {
        QQuickItem::dragEnterEvent(__arg0);
    }
    
    void classBegin()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("classBegin"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QQuickItem::classBegin();
    }
    void super_classBegin()
    {
        QQuickItem::classBegin();
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
    
    bool childMouseEventFilter(QQuickItem * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childMouseEventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QQuickItem::childMouseEventFilter(__arg0, __arg1);
    }
    bool super_childMouseEventFilter(QQuickItem * __arg0, QEvent * __arg1)
    {
        return QQuickItem::childMouseEventFilter(__arg0, __arg1);
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
    
    void inputMethodEvent(QInputMethodEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QQuickItem::inputMethodEvent(__arg0);
    }
    void super_inputMethodEvent(QInputMethodEvent * __arg0)
    {
        QQuickItem::inputMethodEvent(__arg0);
    }
    
    void updatePolish()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updatePolish"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QQuickText::updatePolish();
    }
    void super_updatePolish()
    {
        QQuickText::updatePolish();
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
    
    void itemChange(QQuickItem::ItemChange change, const QQuickItem::ItemChangeData & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value);
            return;
        }
        QQuickText::itemChange(change, value);
    }
    void super_itemChange(QQuickItem::ItemChange change, const QQuickItem::ItemChangeData & value)
    {
        QQuickText::itemChange(change, value);
    }
    
    void mouseUngrabEvent()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseUngrabEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QQuickItem::mouseUngrabEvent();
    }
    void super_mouseUngrabEvent()
    {
        QQuickItem::mouseUngrabEvent();
    }
    
    bool contains(const QPointF & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contains"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QQuickItem::contains(point);
    }
    bool super_contains(const QPointF & point) const
    {
        return QQuickItem::contains(point);
    }
    
    void dropEvent(QDropEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QQuickItem::dropEvent(__arg0);
    }
    void super_dropEvent(QDropEvent * __arg0)
    {
        QQuickItem::dropEvent(__arg0);
    }
    
    void implicitHeightChanged2()
    {
        QQuickImplicitSizeItem::implicitHeightChanged2();
    }
    
    void touchUngrabEvent()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("touchUngrabEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QQuickItem::touchUngrabEvent();
    }
    void super_touchUngrabEvent()
    {
        QQuickItem::touchUngrabEvent();
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
    
    void hoverLeaveEvent(QHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QQuickText::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QHoverEvent * event)
    {
        QQuickText::hoverLeaveEvent(event);
    }
    
    bool isTextureProvider() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isTextureProvider"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickItem::isTextureProvider();
    }
    bool super_isTextureProvider() const
    {
        return QQuickItem::isTextureProvider();
    }
    
    void focusInEvent(QFocusEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QQuickItem::focusInEvent(__arg0);
    }
    void super_focusInEvent(QFocusEvent * __arg0)
    {
        QQuickItem::focusInEvent(__arg0);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickText::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QQuickText::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QQuickText::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QQuickText::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void hoverEnterEvent(QHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QQuickText::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QHoverEvent * event)
    {
        QQuickText::hoverEnterEvent(event);
    }
    
    QSGTextureProvider * textureProvider() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureProvider"));
        if(func)
        {
            return cpgf::fromVariant<QSGTextureProvider * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickItem::textureProvider();
    }
    QSGTextureProvider * super_textureProvider() const
    {
        return QQuickItem::textureProvider();
    }
    
    void hoverMoveEvent(QHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QQuickText::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QHoverEvent * event)
    {
        QQuickText::hoverMoveEvent(event);
    }
    
    void windowDeactivateEvent()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("windowDeactivateEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QQuickItem::windowDeactivateEvent();
    }
    void super_windowDeactivateEvent()
    {
        QQuickItem::windowDeactivateEvent();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
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
    
    QVariant inputMethodQuery(Qt::InputMethodQuery query) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QQuickItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QQuickItem::inputMethodQuery(query);
    }
    
    void dragMoveEvent(QDragMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QQuickItem::dragMoveEvent(__arg0);
    }
    void super_dragMoveEvent(QDragMoveEvent * __arg0)
    {
        QQuickItem::dragMoveEvent(__arg0);
    }
    
    void implicitWidthChanged2()
    {
        QQuickImplicitSizeItem::implicitWidthChanged2();
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
    
    void invalidateFontCaches()
    {
        QQuickText::invalidateFontCaches();
    }
    
    bool heightValid() const
    {
        return QQuickItem::heightValid();
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QQuickItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QQuickItem::keyPressEvent(event);
    }
    
    QSGNode * updatePaintNode(QSGNode * __arg0, QQuickItem::UpdatePaintNodeData * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updatePaintNode"));
        if(func)
        {
            return cpgf::fromVariant<QSGNode * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QQuickText::updatePaintNode(__arg0, __arg1);
    }
    QSGNode * super_updatePaintNode(QSGNode * __arg0, QQuickItem::UpdatePaintNodeData * __arg1)
    {
        return QQuickText::updatePaintNode(__arg0, __arg1);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QQuickText::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QQuickText::qt_metacast(__arg0);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QQuickItem::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QQuickItem::event(__arg0);
    }
    
    void mouseMoveEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QQuickItem::mouseMoveEvent(event);
    }
    void super_mouseMoveEvent(QMouseEvent * event)
    {
        QQuickItem::mouseMoveEvent(event);
    }
    
    void dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QQuickItem::dragLeaveEvent(__arg0);
    }
    void super_dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        QQuickItem::dragLeaveEvent(__arg0);
    }
    
    void componentComplete()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("componentComplete"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QQuickText::componentComplete();
    }
    void super_componentComplete()
    {
        QQuickText::componentComplete();
    }
    
    void mousePressEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QQuickText::mousePressEvent(event);
    }
    void super_mousePressEvent(QMouseEvent * event)
    {
        QQuickText::mousePressEvent(event);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("releaseResources", (void (D::ClassType::*) ())&D::ClassType::releaseResources);
        _d.CPGF_MD_TEMPLATE _method("geometryChanged", (void (D::ClassType::*) (const QRectF &, const QRectF &))&D::ClassType::geometryChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("updateInputMethod", (void (D::ClassType::*) (Qt::InputMethodQueries))&D::ClassType::updateInputMethod)
            ._default(copyVariantFromCopyable(Qt::ImQueryInput))
        ;
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("setImplicitSize", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setImplicitSize);
        _d.CPGF_MD_TEMPLATE _method("widthValid", (bool (D::ClassType::*) () const)&D::ClassType::widthValid);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("touchEvent", (void (D::ClassType::*) (QTouchEvent *))&D::ClassType::touchEvent);
        _d.CPGF_MD_TEMPLATE _method("isComponentComplete", (bool (D::ClassType::*) () const)&D::ClassType::isComponentComplete);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("classBegin", (void (D::ClassType::*) ())&D::ClassType::classBegin);
        _d.CPGF_MD_TEMPLATE _method("childMouseEventFilter", (bool (D::ClassType::*) (QQuickItem *, QEvent *))&D::ClassType::childMouseEventFilter);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("updatePolish", (void (D::ClassType::*) ())&D::ClassType::updatePolish);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("itemChange", (void (D::ClassType::*) (QQuickItem::ItemChange, const QQuickItem::ItemChangeData &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("mouseUngrabEvent", (void (D::ClassType::*) ())&D::ClassType::mouseUngrabEvent);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("implicitHeightChanged2", (void (D::ClassType::*) ())&D::ClassType::implicitHeightChanged2);
        _d.CPGF_MD_TEMPLATE _method("touchUngrabEvent", (void (D::ClassType::*) ())&D::ClassType::touchUngrabEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("windowDeactivateEvent", (void (D::ClassType::*) ())&D::ClassType::windowDeactivateEvent);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("implicitWidthChanged2", (void (D::ClassType::*) ())&D::ClassType::implicitWidthChanged2);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("invalidateFontCaches", (void (D::ClassType::*) ())&D::ClassType::invalidateFontCaches);
        _d.CPGF_MD_TEMPLATE _method("heightValid", (bool (D::ClassType::*) () const)&D::ClassType::heightValid);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("updatePaintNode", (QSGNode * (D::ClassType::*) (QSGNode *, QQuickItem::UpdatePaintNodeData *))&D::ClassType::updatePaintNode);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_releaseResources", (void (D::ClassType::*) ())&D::ClassType::super_releaseResources);
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_geometryChanged", (void (D::ClassType::*) (const QRectF &, const QRectF &))&D::ClassType::super_geometryChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_clipRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_clipRect);
        _d.CPGF_MD_TEMPLATE _method("super_touchEvent", (void (D::ClassType::*) (QTouchEvent *))&D::ClassType::super_touchEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_classBegin", (void (D::ClassType::*) ())&D::ClassType::super_classBegin);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_childMouseEventFilter", (bool (D::ClassType::*) (QQuickItem *, QEvent *))&D::ClassType::super_childMouseEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_updatePolish", (void (D::ClassType::*) ())&D::ClassType::super_updatePolish);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (void (D::ClassType::*) (QQuickItem::ItemChange, const QQuickItem::ItemChangeData &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseUngrabEvent", (void (D::ClassType::*) ())&D::ClassType::super_mouseUngrabEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_touchUngrabEvent", (void (D::ClassType::*) ())&D::ClassType::super_touchUngrabEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_isTextureProvider", (bool (D::ClassType::*) () const)&D::ClassType::super_isTextureProvider);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_textureProvider", (QSGTextureProvider * (D::ClassType::*) () const)&D::ClassType::super_textureProvider);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_windowDeactivateEvent", (void (D::ClassType::*) ())&D::ClassType::super_windowDeactivateEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_updatePaintNode", (QSGNode * (D::ClassType::*) (QSGNode *, QQuickItem::UpdatePaintNodeData *))&D::ClassType::super_updatePaintNode);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_componentComplete", (void (D::ClassType::*) ())&D::ClassType::super_componentComplete);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mousePressEvent);
    }
};


template <typename D>
void buildMetaClass_QQuickTextWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQuickTextWrapper::cpgf__register(_d);
    
    buildMetaClass_QQuickText<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

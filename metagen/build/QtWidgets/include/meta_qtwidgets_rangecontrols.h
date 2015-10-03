// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_RANGECONTROLS_H
#define CPGF_META_QTWIDGETS_RANGECONTROLS_H


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
void buildMetaClass_QAccessibleAbstractSlider(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *, QAccessible::Role)>()
        ._default(copyVariantFromCopyable(QAccessible::Slider))
    ;
    _d.CPGF_MD_TEMPLATE _method("interface_cast", &D::ClassType::interface_cast);
    _d.CPGF_MD_TEMPLATE _method("currentValue", &D::ClassType::currentValue);
    _d.CPGF_MD_TEMPLATE _method("setCurrentValue", &D::ClassType::setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("maximumValue", &D::ClassType::maximumValue);
    _d.CPGF_MD_TEMPLATE _method("minimumValue", &D::ClassType::minimumValue);
    _d.CPGF_MD_TEMPLATE _method("minimumStepSize", &D::ClassType::minimumStepSize);
}


class QAccessibleAbstractSliderWrapper : public QAccessibleAbstractSlider, public cpgf::GScriptWrapper {
public:
    
    QAccessibleAbstractSliderWrapper(QWidget * w, QAccessible::Role r = QAccessible::Slider)
        : QAccessibleAbstractSlider(w, r) {}
    
    QString localizedActionName(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionName"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionName(name);
    }
    QString super_localizedActionName(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionName(name);
    }
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleWidget::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleWidget::text(t);
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleObject::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleObject::setText(t, text);
    }
    
    void doAction(const QString & actionName)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doAction"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName);
            return;
        }
        QAccessibleWidget::doAction(actionName);
    }
    void super_doAction(const QString & actionName)
    {
        QAccessibleWidget::doAction(actionName);
    }
    
    void virtual_hook(int id, void * data)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("virtual_hook"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, id, data);
            return;
        }
        QAccessibleInterface::virtual_hook(id, data);
    }
    void super_virtual_hook(int id, void * data)
    {
        QAccessibleInterface::virtual_hook(id, data);
    }
    
    void setCurrentValue(const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCurrentValue"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, value);
            return;
        }
        QAccessibleAbstractSlider::setCurrentValue(value);
    }
    void super_setCurrentValue(const QVariant & value)
    {
        QAccessibleAbstractSlider::setCurrentValue(value);
    }
    
    int indexOfChild(const QAccessibleInterface * child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QAccessibleWidget::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleWidget::indexOfChild(child);
    }
    
    QWindow * window() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("window"));
        if(func)
        {
            return cpgf::fromVariant<QWindow * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::window();
    }
    QWindow * super_window() const
    {
        return QAccessibleWidget::window();
    }
    
    QAccessibleInterface * parent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleWidget::parent();
    }
    
    QColor foregroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("foregroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::foregroundColor();
    }
    QColor super_foregroundColor() const
    {
        return QAccessibleWidget::foregroundColor();
    }
    
    QVariant minimumStepSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumStepSize"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::minimumStepSize();
    }
    QVariant super_minimumStepSize() const
    {
        return QAccessibleAbstractSlider::minimumStepSize();
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleAbstractSlider::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleAbstractSlider::interface_cast(t);
    }
    
    QStringList keyBindingsForAction(const QString & actionName) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyBindingsForAction"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName).getValue());
        }
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    QStringList super_keyBindingsForAction(const QString & actionName) const
    {
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    
    QAccessibleInterface * focusChild() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusChild"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::focusChild();
    }
    QAccessibleInterface * super_focusChild() const
    {
        return QAccessibleWidget::focusChild();
    }
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleWidget::childCount();
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
    }
    
    QVariant maximumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::maximumValue();
    }
    QVariant super_maximumValue() const
    {
        return QAccessibleAbstractSlider::maximumValue();
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleObject::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleObject::childAt(x, y);
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleWidget::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleWidget::rect();
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleWidget::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleWidget::child(index);
    }
    
    QColor backgroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("backgroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::backgroundColor();
    }
    QColor super_backgroundColor() const
    {
        return QAccessibleWidget::backgroundColor();
    }
    
    QObject * object() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("object"));
        if(func)
        {
            return cpgf::fromVariant<QObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleObject::object();
    }
    QObject * super_object() const
    {
        return QAccessibleObject::object();
    }
    
    QAbstractSlider * abstractSlider() const
    {
        return QAccessibleAbstractSlider::abstractSlider();
    }
    
    QVariant minimumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::minimumValue();
    }
    QVariant super_minimumValue() const
    {
        return QAccessibleAbstractSlider::minimumValue();
    }
    
    void addControllingSignal(const QString & signal)
    {
        QAccessibleWidget::addControllingSignal(signal);
    }
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleWidget::role();
    }
    
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("relations"));
        if(func)
        {
            return cpgf::fromVariant<QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, match).getValue());
        }
        return QAccessibleWidget::relations(match);
    }
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > super_relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        return QAccessibleWidget::relations(match);
    }
    
    QVariant currentValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::currentValue();
    }
    QVariant super_currentValue() const
    {
        return QAccessibleAbstractSlider::currentValue();
    }
    
    QStringList actionNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionNames"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::actionNames();
    }
    QStringList super_actionNames() const
    {
        return QAccessibleWidget::actionNames();
    }
    
    QWidget * widget() const
    {
        return QAccessibleWidget::widget();
    }
    
    QString localizedActionDescription(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    QString super_localizedActionDescription(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    
    QAccessible::State state() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("state"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::State >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleWidget::state();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("abstractSlider", (QAbstractSlider * (D::ClassType::*) () const)&D::ClassType::abstractSlider);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_setCurrentValue", (void (D::ClassType::*) (const QVariant &))&D::ClassType::super_setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_minimumStepSize", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumStepSize);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_maximumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_maximumValue);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_minimumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumValue);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_currentValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_currentValue);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
    }
};


template <typename D>
void buildMetaClass_QAccessibleAbstractSliderWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleAbstractSliderWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleAbstractSlider<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleAbstractSpinBox(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("interface_cast", &D::ClassType::interface_cast);
    _d.CPGF_MD_TEMPLATE _method("currentValue", &D::ClassType::currentValue);
    _d.CPGF_MD_TEMPLATE _method("setCurrentValue", &D::ClassType::setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("maximumValue", &D::ClassType::maximumValue);
    _d.CPGF_MD_TEMPLATE _method("minimumValue", &D::ClassType::minimumValue);
    _d.CPGF_MD_TEMPLATE _method("minimumStepSize", &D::ClassType::minimumStepSize);
    _d.CPGF_MD_TEMPLATE _method("addSelection", &D::ClassType::addSelection);
    _d.CPGF_MD_TEMPLATE _method("attributes", &D::ClassType::attributes);
    _d.CPGF_MD_TEMPLATE _method("cursorPosition", &D::ClassType::cursorPosition);
    _d.CPGF_MD_TEMPLATE _method("characterRect", &D::ClassType::characterRect);
    _d.CPGF_MD_TEMPLATE _method("selectionCount", &D::ClassType::selectionCount);
    _d.CPGF_MD_TEMPLATE _method("offsetAtPoint", &D::ClassType::offsetAtPoint);
    _d.CPGF_MD_TEMPLATE _method("selection", &D::ClassType::selection);
    _d.CPGF_MD_TEMPLATE _method("text", (QString (D::ClassType::*) (int, int) const)&D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("textBeforeOffset", &D::ClassType::textBeforeOffset);
    _d.CPGF_MD_TEMPLATE _method("textAfterOffset", &D::ClassType::textAfterOffset);
    _d.CPGF_MD_TEMPLATE _method("textAtOffset", &D::ClassType::textAtOffset);
    _d.CPGF_MD_TEMPLATE _method("removeSelection", &D::ClassType::removeSelection);
    _d.CPGF_MD_TEMPLATE _method("setCursorPosition", &D::ClassType::setCursorPosition);
    _d.CPGF_MD_TEMPLATE _method("setSelection", &D::ClassType::setSelection);
    _d.CPGF_MD_TEMPLATE _method("characterCount", &D::ClassType::characterCount);
    _d.CPGF_MD_TEMPLATE _method("scrollToSubstring", &D::ClassType::scrollToSubstring);
    _d.CPGF_MD_TEMPLATE _method("deleteText", &D::ClassType::deleteText);
    _d.CPGF_MD_TEMPLATE _method("insertText", &D::ClassType::insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("replaceText", &D::ClassType::replaceText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
}


class QAccessibleAbstractSpinBoxWrapper : public QAccessibleAbstractSpinBox, public cpgf::GScriptWrapper {
public:
    
    QAccessibleAbstractSpinBoxWrapper(QWidget * w)
        : QAccessibleAbstractSpinBox(w) {}
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleAbstractSpinBox::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleAbstractSpinBox::text(t);
    }
    
    void selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleAbstractSpinBox::selection(selectionIndex, startOffset, endOffset);
    }
    void super_selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        QAccessibleAbstractSpinBox::selection(selectionIndex, startOffset, endOffset);
    }
    
    void doAction(const QString & actionName)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doAction"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName);
            return;
        }
        QAccessibleWidget::doAction(actionName);
    }
    void super_doAction(const QString & actionName)
    {
        QAccessibleWidget::doAction(actionName);
    }
    
    void virtual_hook(int id, void * data)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("virtual_hook"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, id, data);
            return;
        }
        QAccessibleInterface::virtual_hook(id, data);
    }
    void super_virtual_hook(int id, void * data)
    {
        QAccessibleInterface::virtual_hook(id, data);
    }
    
    void setCurrentValue(const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCurrentValue"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, value);
            return;
        }
        QAccessibleAbstractSpinBox::setCurrentValue(value);
    }
    void super_setCurrentValue(const QVariant & value)
    {
        QAccessibleAbstractSpinBox::setCurrentValue(value);
    }
    
    void setCursorPosition(int position)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCursorPosition"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, position);
            return;
        }
        QAccessibleAbstractSpinBox::setCursorPosition(position);
    }
    void super_setCursorPosition(int position)
    {
        QAccessibleAbstractSpinBox::setCursorPosition(position);
    }
    
    int indexOfChild(const QAccessibleInterface * child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QAccessibleWidget::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleWidget::indexOfChild(child);
    }
    
    int characterCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::characterCount();
    }
    int super_characterCount() const
    {
        return QAccessibleAbstractSpinBox::characterCount();
    }
    
    QWindow * window() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("window"));
        if(func)
        {
            return cpgf::fromVariant<QWindow * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::window();
    }
    QWindow * super_window() const
    {
        return QAccessibleWidget::window();
    }
    
    QAccessibleInterface * parent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleWidget::parent();
    }
    
    int cursorPosition() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("cursorPosition"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::cursorPosition();
    }
    int super_cursorPosition() const
    {
        return QAccessibleAbstractSpinBox::cursorPosition();
    }
    
    int offsetAtPoint(const QPoint & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("offsetAtPoint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QAccessibleAbstractSpinBox::offsetAtPoint(point);
    }
    int super_offsetAtPoint(const QPoint & point) const
    {
        return QAccessibleAbstractSpinBox::offsetAtPoint(point);
    }
    
    QAccessibleInterface * lineEditIface() const
    {
        return QAccessibleAbstractSpinBox::lineEditIface();
    }
    
    QColor foregroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("foregroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::foregroundColor();
    }
    QColor super_foregroundColor() const
    {
        return QAccessibleWidget::foregroundColor();
    }
    
    QString attributes(int offset, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("attributes"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, startOffset, endOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::attributes(offset, startOffset, endOffset);
    }
    QString super_attributes(int offset, int * startOffset, int * endOffset) const
    {
        return QAccessibleAbstractSpinBox::attributes(offset, startOffset, endOffset);
    }
    
    QRect characterRect(int offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QAccessibleAbstractSpinBox::characterRect(offset);
    }
    QRect super_characterRect(int offset) const
    {
        return QAccessibleAbstractSpinBox::characterRect(offset);
    }
    
    QStringList keyBindingsForAction(const QString & actionName) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyBindingsForAction"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName).getValue());
        }
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    QStringList super_keyBindingsForAction(const QString & actionName) const
    {
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    
    QString textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAfterOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleAbstractSpinBox::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
    }
    
    QVariant maximumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::maximumValue();
    }
    QVariant super_maximumValue() const
    {
        return QAccessibleAbstractSpinBox::maximumValue();
    }
    
    QAbstractSpinBox * abstractSpinBox() const
    {
        return QAccessibleAbstractSpinBox::abstractSpinBox();
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleWidget::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleWidget::rect();
    }
    
    void replaceText(int startOffset, int endOffset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("replaceText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset, text);
            return;
        }
        QAccessibleAbstractSpinBox::replaceText(startOffset, endOffset, text);
    }
    void super_replaceText(int startOffset, int endOffset, const QString & text)
    {
        QAccessibleAbstractSpinBox::replaceText(startOffset, endOffset, text);
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleWidget::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleWidget::child(index);
    }
    
    QColor backgroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("backgroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::backgroundColor();
    }
    QColor super_backgroundColor() const
    {
        return QAccessibleWidget::backgroundColor();
    }
    
    QObject * object() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("object"));
        if(func)
        {
            return cpgf::fromVariant<QObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleObject::object();
    }
    QObject * super_object() const
    {
        return QAccessibleObject::object();
    }
    
    void addSelection(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("addSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        QAccessibleAbstractSpinBox::addSelection(startOffset, endOffset);
    }
    void super_addSelection(int startOffset, int endOffset)
    {
        QAccessibleAbstractSpinBox::addSelection(startOffset, endOffset);
    }
    
    QVariant minimumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::minimumValue();
    }
    QVariant super_minimumValue() const
    {
        return QAccessibleAbstractSpinBox::minimumValue();
    }
    
    QVariant currentValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::currentValue();
    }
    QVariant super_currentValue() const
    {
        return QAccessibleAbstractSpinBox::currentValue();
    }
    
    QStringList actionNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionNames"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::actionNames();
    }
    QStringList super_actionNames() const
    {
        return QAccessibleWidget::actionNames();
    }
    
    QWidget * widget() const
    {
        return QAccessibleWidget::widget();
    }
    
    QString localizedActionDescription(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    QString super_localizedActionDescription(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    
    QAccessible::State state() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("state"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::State >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleWidget::state();
    }
    
    int selectionCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::selectionCount();
    }
    int super_selectionCount() const
    {
        return QAccessibleAbstractSpinBox::selectionCount();
    }
    
    QString localizedActionName(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionName"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionName(name);
    }
    QString super_localizedActionName(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionName(name);
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleObject::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleObject::setText(t, text);
    }
    
    void removeSelection(int selectionIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex);
            return;
        }
        QAccessibleAbstractSpinBox::removeSelection(selectionIndex);
    }
    void super_removeSelection(int selectionIndex)
    {
        QAccessibleAbstractSpinBox::removeSelection(selectionIndex);
    }
    
    void insertText(int offset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, text);
            return;
        }
        QAccessibleAbstractSpinBox::insertText(offset, text);
    }
    void super_insertText(int offset, const QString & text)
    {
        QAccessibleAbstractSpinBox::insertText(offset, text);
    }
    
    QVariant minimumStepSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumStepSize"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::minimumStepSize();
    }
    QVariant super_minimumStepSize() const
    {
        return QAccessibleAbstractSpinBox::minimumStepSize();
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleAbstractSpinBox::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleAbstractSpinBox::interface_cast(t);
    }
    
    QString text(int startOffset, int endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::text(startOffset, endOffset);
    }
    QString super_text(int startOffset, int endOffset) const
    {
        return QAccessibleAbstractSpinBox::text(startOffset, endOffset);
    }
    
    QAccessibleInterface * focusChild() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusChild"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::focusChild();
    }
    QAccessibleInterface * super_focusChild() const
    {
        return QAccessibleWidget::focusChild();
    }
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleWidget::childCount();
    }
    
    void setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleAbstractSpinBox::setSelection(selectionIndex, startOffset, endOffset);
    }
    void super_setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        QAccessibleAbstractSpinBox::setSelection(selectionIndex, startOffset, endOffset);
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleObject::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleObject::childAt(x, y);
    }
    
    void addControllingSignal(const QString & signal)
    {
        QAccessibleWidget::addControllingSignal(signal);
    }
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleWidget::role();
    }
    
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("relations"));
        if(func)
        {
            return cpgf::fromVariant<QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, match).getValue());
        }
        return QAccessibleWidget::relations(match);
    }
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > super_relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        return QAccessibleWidget::relations(match);
    }
    
    QString textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * endOffset, int * startOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textBeforeOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, endOffset, startOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::textBeforeOffset(offset, boundaryType, endOffset, startOffset);
    }
    QString super_textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * endOffset, int * startOffset) const
    {
        return QAccessibleAbstractSpinBox::textBeforeOffset(offset, boundaryType, endOffset, startOffset);
    }
    
    void deleteText(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("deleteText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        QAccessibleAbstractSpinBox::deleteText(startOffset, endOffset);
    }
    void super_deleteText(int startOffset, int endOffset)
    {
        QAccessibleAbstractSpinBox::deleteText(startOffset, endOffset);
    }
    
    QString textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAtOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleAbstractSpinBox::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void scrollToSubstring(int startIndex, int endIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollToSubstring"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startIndex, endIndex);
            return;
        }
        QAccessibleAbstractSpinBox::scrollToSubstring(startIndex, endIndex);
    }
    void super_scrollToSubstring(int startIndex, int endIndex)
    {
        QAccessibleAbstractSpinBox::scrollToSubstring(startIndex, endIndex);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("lineEditIface", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::lineEditIface);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("abstractSpinBox", (QAbstractSpinBox * (D::ClassType::*) () const)&D::ClassType::abstractSpinBox);
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_selection", (void (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_selection);
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_setCurrentValue", (void (D::ClassType::*) (const QVariant &))&D::ClassType::super_setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setCursorPosition", (void (D::ClassType::*) (int))&D::ClassType::super_setCursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_characterCount", (int (D::ClassType::*) () const)&D::ClassType::super_characterCount);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_cursorPosition", (int (D::ClassType::*) () const)&D::ClassType::super_cursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_offsetAtPoint", (int (D::ClassType::*) (const QPoint &) const)&D::ClassType::super_offsetAtPoint);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_attributes", (QString (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_attributes);
        _d.CPGF_MD_TEMPLATE _method("super_characterRect", (QRect (D::ClassType::*) (int) const)&D::ClassType::super_characterRect);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_textAfterOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAfterOffset);
        _d.CPGF_MD_TEMPLATE _method("super_maximumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_maximumValue);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_replaceText", (void (D::ClassType::*) (int, int, const QString &))&D::ClassType::super_replaceText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_addSelection", (void (D::ClassType::*) (int, int))&D::ClassType::super_addSelection);
        _d.CPGF_MD_TEMPLATE _method("super_minimumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumValue);
        _d.CPGF_MD_TEMPLATE _method("super_currentValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_currentValue);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_selectionCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectionCount);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_removeSelection", (void (D::ClassType::*) (int))&D::ClassType::super_removeSelection);
        _d.CPGF_MD_TEMPLATE _method("super_insertText", (void (D::ClassType::*) (int, const QString &))&D::ClassType::super_insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_minimumStepSize", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumStepSize);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (int, int) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_setSelection", (void (D::ClassType::*) (int, int, int))&D::ClassType::super_setSelection);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_textBeforeOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textBeforeOffset);
        _d.CPGF_MD_TEMPLATE _method("super_deleteText", (void (D::ClassType::*) (int, int))&D::ClassType::super_deleteText);
        _d.CPGF_MD_TEMPLATE _method("super_textAtOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAtOffset);
        _d.CPGF_MD_TEMPLATE _method("super_scrollToSubstring", (void (D::ClassType::*) (int, int))&D::ClassType::super_scrollToSubstring);
    }
};


template <typename D>
void buildMetaClass_QAccessibleAbstractSpinBoxWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleAbstractSpinBoxWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleAbstractSpinBox<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleDial(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
}


class QAccessibleDialWrapper : public QAccessibleDial, public cpgf::GScriptWrapper {
public:
    
    QAccessibleDialWrapper(QWidget * w)
        : QAccessibleDial(w) {}
    
    QString localizedActionName(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionName"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionName(name);
    }
    QString super_localizedActionName(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionName(name);
    }
    
    QString text(QAccessible::Text textType) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, textType).getValue());
        }
        return QAccessibleDial::text(textType);
    }
    QString super_text(QAccessible::Text textType) const
    {
        return QAccessibleDial::text(textType);
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleObject::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleObject::setText(t, text);
    }
    
    void doAction(const QString & actionName)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doAction"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName);
            return;
        }
        QAccessibleWidget::doAction(actionName);
    }
    void super_doAction(const QString & actionName)
    {
        QAccessibleWidget::doAction(actionName);
    }
    
    void virtual_hook(int id, void * data)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("virtual_hook"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, id, data);
            return;
        }
        QAccessibleInterface::virtual_hook(id, data);
    }
    void super_virtual_hook(int id, void * data)
    {
        QAccessibleInterface::virtual_hook(id, data);
    }
    
    void setCurrentValue(const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCurrentValue"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, value);
            return;
        }
        QAccessibleAbstractSlider::setCurrentValue(value);
    }
    void super_setCurrentValue(const QVariant & value)
    {
        QAccessibleAbstractSlider::setCurrentValue(value);
    }
    
    int indexOfChild(const QAccessibleInterface * child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QAccessibleWidget::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleWidget::indexOfChild(child);
    }
    
    QWindow * window() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("window"));
        if(func)
        {
            return cpgf::fromVariant<QWindow * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::window();
    }
    QWindow * super_window() const
    {
        return QAccessibleWidget::window();
    }
    
    QAccessibleInterface * parent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleWidget::parent();
    }
    
    QColor foregroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("foregroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::foregroundColor();
    }
    QColor super_foregroundColor() const
    {
        return QAccessibleWidget::foregroundColor();
    }
    
    QVariant minimumStepSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumStepSize"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::minimumStepSize();
    }
    QVariant super_minimumStepSize() const
    {
        return QAccessibleAbstractSlider::minimumStepSize();
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleAbstractSlider::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleAbstractSlider::interface_cast(t);
    }
    
    QStringList keyBindingsForAction(const QString & actionName) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyBindingsForAction"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName).getValue());
        }
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    QStringList super_keyBindingsForAction(const QString & actionName) const
    {
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    
    QAccessibleInterface * focusChild() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusChild"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::focusChild();
    }
    QAccessibleInterface * super_focusChild() const
    {
        return QAccessibleWidget::focusChild();
    }
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleWidget::childCount();
    }
    
    QDial * dial() const
    {
        return QAccessibleDial::dial();
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
    }
    
    QVariant maximumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::maximumValue();
    }
    QVariant super_maximumValue() const
    {
        return QAccessibleAbstractSlider::maximumValue();
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleObject::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleObject::childAt(x, y);
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleWidget::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleWidget::rect();
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleWidget::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleWidget::child(index);
    }
    
    QColor backgroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("backgroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::backgroundColor();
    }
    QColor super_backgroundColor() const
    {
        return QAccessibleWidget::backgroundColor();
    }
    
    QObject * object() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("object"));
        if(func)
        {
            return cpgf::fromVariant<QObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleObject::object();
    }
    QObject * super_object() const
    {
        return QAccessibleObject::object();
    }
    
    QAbstractSlider * abstractSlider() const
    {
        return QAccessibleAbstractSlider::abstractSlider();
    }
    
    QVariant minimumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::minimumValue();
    }
    QVariant super_minimumValue() const
    {
        return QAccessibleAbstractSlider::minimumValue();
    }
    
    void addControllingSignal(const QString & signal)
    {
        QAccessibleWidget::addControllingSignal(signal);
    }
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleWidget::role();
    }
    
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("relations"));
        if(func)
        {
            return cpgf::fromVariant<QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, match).getValue());
        }
        return QAccessibleWidget::relations(match);
    }
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > super_relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        return QAccessibleWidget::relations(match);
    }
    
    QVariant currentValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::currentValue();
    }
    QVariant super_currentValue() const
    {
        return QAccessibleAbstractSlider::currentValue();
    }
    
    QStringList actionNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionNames"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::actionNames();
    }
    QStringList super_actionNames() const
    {
        return QAccessibleWidget::actionNames();
    }
    
    QWidget * widget() const
    {
        return QAccessibleWidget::widget();
    }
    
    QString localizedActionDescription(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    QString super_localizedActionDescription(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    
    QAccessible::State state() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("state"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::State >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleWidget::state();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("dial", (QDial * (D::ClassType::*) () const)&D::ClassType::dial);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("abstractSlider", (QAbstractSlider * (D::ClassType::*) () const)&D::ClassType::abstractSlider);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_setCurrentValue", (void (D::ClassType::*) (const QVariant &))&D::ClassType::super_setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_minimumStepSize", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumStepSize);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_maximumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_maximumValue);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_minimumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumValue);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_currentValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_currentValue);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
    }
};


template <typename D>
void buildMetaClass_QAccessibleDialWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleDialWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleDial<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleDoubleSpinBox(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
}


class QAccessibleDoubleSpinBoxWrapper : public QAccessibleDoubleSpinBox, public cpgf::GScriptWrapper {
public:
    
    QAccessibleDoubleSpinBoxWrapper(QWidget * widget)
        : QAccessibleDoubleSpinBox(widget) {}
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleDoubleSpinBox::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleDoubleSpinBox::text(t);
    }
    
    void selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleAbstractSpinBox::selection(selectionIndex, startOffset, endOffset);
    }
    void super_selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        QAccessibleAbstractSpinBox::selection(selectionIndex, startOffset, endOffset);
    }
    
    void doAction(const QString & actionName)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doAction"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName);
            return;
        }
        QAccessibleWidget::doAction(actionName);
    }
    void super_doAction(const QString & actionName)
    {
        QAccessibleWidget::doAction(actionName);
    }
    
    void virtual_hook(int id, void * data)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("virtual_hook"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, id, data);
            return;
        }
        QAccessibleInterface::virtual_hook(id, data);
    }
    void super_virtual_hook(int id, void * data)
    {
        QAccessibleInterface::virtual_hook(id, data);
    }
    
    void setCurrentValue(const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCurrentValue"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, value);
            return;
        }
        QAccessibleAbstractSpinBox::setCurrentValue(value);
    }
    void super_setCurrentValue(const QVariant & value)
    {
        QAccessibleAbstractSpinBox::setCurrentValue(value);
    }
    
    void setCursorPosition(int position)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCursorPosition"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, position);
            return;
        }
        QAccessibleAbstractSpinBox::setCursorPosition(position);
    }
    void super_setCursorPosition(int position)
    {
        QAccessibleAbstractSpinBox::setCursorPosition(position);
    }
    
    int indexOfChild(const QAccessibleInterface * child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QAccessibleWidget::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleWidget::indexOfChild(child);
    }
    
    int characterCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::characterCount();
    }
    int super_characterCount() const
    {
        return QAccessibleAbstractSpinBox::characterCount();
    }
    
    QWindow * window() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("window"));
        if(func)
        {
            return cpgf::fromVariant<QWindow * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::window();
    }
    QWindow * super_window() const
    {
        return QAccessibleWidget::window();
    }
    
    QAccessibleInterface * parent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleWidget::parent();
    }
    
    int cursorPosition() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("cursorPosition"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::cursorPosition();
    }
    int super_cursorPosition() const
    {
        return QAccessibleAbstractSpinBox::cursorPosition();
    }
    
    int offsetAtPoint(const QPoint & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("offsetAtPoint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QAccessibleAbstractSpinBox::offsetAtPoint(point);
    }
    int super_offsetAtPoint(const QPoint & point) const
    {
        return QAccessibleAbstractSpinBox::offsetAtPoint(point);
    }
    
    QAccessibleInterface * lineEditIface() const
    {
        return QAccessibleAbstractSpinBox::lineEditIface();
    }
    
    QColor foregroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("foregroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::foregroundColor();
    }
    QColor super_foregroundColor() const
    {
        return QAccessibleWidget::foregroundColor();
    }
    
    QString attributes(int offset, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("attributes"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, startOffset, endOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::attributes(offset, startOffset, endOffset);
    }
    QString super_attributes(int offset, int * startOffset, int * endOffset) const
    {
        return QAccessibleAbstractSpinBox::attributes(offset, startOffset, endOffset);
    }
    
    QRect characterRect(int offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QAccessibleAbstractSpinBox::characterRect(offset);
    }
    QRect super_characterRect(int offset) const
    {
        return QAccessibleAbstractSpinBox::characterRect(offset);
    }
    
    QStringList keyBindingsForAction(const QString & actionName) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyBindingsForAction"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName).getValue());
        }
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    QStringList super_keyBindingsForAction(const QString & actionName) const
    {
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    
    QString textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAfterOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleAbstractSpinBox::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
    }
    
    QVariant maximumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::maximumValue();
    }
    QVariant super_maximumValue() const
    {
        return QAccessibleAbstractSpinBox::maximumValue();
    }
    
    QAbstractSpinBox * abstractSpinBox() const
    {
        return QAccessibleAbstractSpinBox::abstractSpinBox();
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleWidget::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleWidget::rect();
    }
    
    void replaceText(int startOffset, int endOffset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("replaceText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset, text);
            return;
        }
        QAccessibleAbstractSpinBox::replaceText(startOffset, endOffset, text);
    }
    void super_replaceText(int startOffset, int endOffset, const QString & text)
    {
        QAccessibleAbstractSpinBox::replaceText(startOffset, endOffset, text);
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleWidget::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleWidget::child(index);
    }
    
    QColor backgroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("backgroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::backgroundColor();
    }
    QColor super_backgroundColor() const
    {
        return QAccessibleWidget::backgroundColor();
    }
    
    QObject * object() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("object"));
        if(func)
        {
            return cpgf::fromVariant<QObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleObject::object();
    }
    QObject * super_object() const
    {
        return QAccessibleObject::object();
    }
    
    void addSelection(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("addSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        QAccessibleAbstractSpinBox::addSelection(startOffset, endOffset);
    }
    void super_addSelection(int startOffset, int endOffset)
    {
        QAccessibleAbstractSpinBox::addSelection(startOffset, endOffset);
    }
    
    QVariant minimumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::minimumValue();
    }
    QVariant super_minimumValue() const
    {
        return QAccessibleAbstractSpinBox::minimumValue();
    }
    
    QVariant currentValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::currentValue();
    }
    QVariant super_currentValue() const
    {
        return QAccessibleAbstractSpinBox::currentValue();
    }
    
    QStringList actionNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionNames"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::actionNames();
    }
    QStringList super_actionNames() const
    {
        return QAccessibleWidget::actionNames();
    }
    
    QWidget * widget() const
    {
        return QAccessibleWidget::widget();
    }
    
    QString localizedActionDescription(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    QString super_localizedActionDescription(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    
    QAccessible::State state() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("state"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::State >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleWidget::state();
    }
    
    int selectionCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::selectionCount();
    }
    int super_selectionCount() const
    {
        return QAccessibleAbstractSpinBox::selectionCount();
    }
    
    QString localizedActionName(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionName"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionName(name);
    }
    QString super_localizedActionName(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionName(name);
    }
    
    QDoubleSpinBox * doubleSpinBox() const
    {
        return QAccessibleDoubleSpinBox::doubleSpinBox();
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleObject::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleObject::setText(t, text);
    }
    
    void removeSelection(int selectionIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex);
            return;
        }
        QAccessibleAbstractSpinBox::removeSelection(selectionIndex);
    }
    void super_removeSelection(int selectionIndex)
    {
        QAccessibleAbstractSpinBox::removeSelection(selectionIndex);
    }
    
    void insertText(int offset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, text);
            return;
        }
        QAccessibleAbstractSpinBox::insertText(offset, text);
    }
    void super_insertText(int offset, const QString & text)
    {
        QAccessibleAbstractSpinBox::insertText(offset, text);
    }
    
    QVariant minimumStepSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumStepSize"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::minimumStepSize();
    }
    QVariant super_minimumStepSize() const
    {
        return QAccessibleAbstractSpinBox::minimumStepSize();
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleAbstractSpinBox::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleAbstractSpinBox::interface_cast(t);
    }
    
    QString text(int startOffset, int endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::text(startOffset, endOffset);
    }
    QString super_text(int startOffset, int endOffset) const
    {
        return QAccessibleAbstractSpinBox::text(startOffset, endOffset);
    }
    
    QAccessibleInterface * focusChild() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusChild"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::focusChild();
    }
    QAccessibleInterface * super_focusChild() const
    {
        return QAccessibleWidget::focusChild();
    }
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleWidget::childCount();
    }
    
    void setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleAbstractSpinBox::setSelection(selectionIndex, startOffset, endOffset);
    }
    void super_setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        QAccessibleAbstractSpinBox::setSelection(selectionIndex, startOffset, endOffset);
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleObject::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleObject::childAt(x, y);
    }
    
    void addControllingSignal(const QString & signal)
    {
        QAccessibleWidget::addControllingSignal(signal);
    }
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleWidget::role();
    }
    
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("relations"));
        if(func)
        {
            return cpgf::fromVariant<QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, match).getValue());
        }
        return QAccessibleWidget::relations(match);
    }
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > super_relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        return QAccessibleWidget::relations(match);
    }
    
    QString textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * endOffset, int * startOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textBeforeOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, endOffset, startOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::textBeforeOffset(offset, boundaryType, endOffset, startOffset);
    }
    QString super_textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * endOffset, int * startOffset) const
    {
        return QAccessibleAbstractSpinBox::textBeforeOffset(offset, boundaryType, endOffset, startOffset);
    }
    
    void deleteText(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("deleteText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        QAccessibleAbstractSpinBox::deleteText(startOffset, endOffset);
    }
    void super_deleteText(int startOffset, int endOffset)
    {
        QAccessibleAbstractSpinBox::deleteText(startOffset, endOffset);
    }
    
    QString textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAtOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleAbstractSpinBox::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void scrollToSubstring(int startIndex, int endIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollToSubstring"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startIndex, endIndex);
            return;
        }
        QAccessibleAbstractSpinBox::scrollToSubstring(startIndex, endIndex);
    }
    void super_scrollToSubstring(int startIndex, int endIndex)
    {
        QAccessibleAbstractSpinBox::scrollToSubstring(startIndex, endIndex);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("lineEditIface", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::lineEditIface);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("abstractSpinBox", (QAbstractSpinBox * (D::ClassType::*) () const)&D::ClassType::abstractSpinBox);
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("doubleSpinBox", (QDoubleSpinBox * (D::ClassType::*) () const)&D::ClassType::doubleSpinBox);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_selection", (void (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_selection);
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_setCurrentValue", (void (D::ClassType::*) (const QVariant &))&D::ClassType::super_setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setCursorPosition", (void (D::ClassType::*) (int))&D::ClassType::super_setCursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_characterCount", (int (D::ClassType::*) () const)&D::ClassType::super_characterCount);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_cursorPosition", (int (D::ClassType::*) () const)&D::ClassType::super_cursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_offsetAtPoint", (int (D::ClassType::*) (const QPoint &) const)&D::ClassType::super_offsetAtPoint);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_attributes", (QString (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_attributes);
        _d.CPGF_MD_TEMPLATE _method("super_characterRect", (QRect (D::ClassType::*) (int) const)&D::ClassType::super_characterRect);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_textAfterOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAfterOffset);
        _d.CPGF_MD_TEMPLATE _method("super_maximumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_maximumValue);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_replaceText", (void (D::ClassType::*) (int, int, const QString &))&D::ClassType::super_replaceText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_addSelection", (void (D::ClassType::*) (int, int))&D::ClassType::super_addSelection);
        _d.CPGF_MD_TEMPLATE _method("super_minimumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumValue);
        _d.CPGF_MD_TEMPLATE _method("super_currentValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_currentValue);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_selectionCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectionCount);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_removeSelection", (void (D::ClassType::*) (int))&D::ClassType::super_removeSelection);
        _d.CPGF_MD_TEMPLATE _method("super_insertText", (void (D::ClassType::*) (int, const QString &))&D::ClassType::super_insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_minimumStepSize", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumStepSize);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (int, int) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_setSelection", (void (D::ClassType::*) (int, int, int))&D::ClassType::super_setSelection);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_textBeforeOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textBeforeOffset);
        _d.CPGF_MD_TEMPLATE _method("super_deleteText", (void (D::ClassType::*) (int, int))&D::ClassType::super_deleteText);
        _d.CPGF_MD_TEMPLATE _method("super_textAtOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAtOffset);
        _d.CPGF_MD_TEMPLATE _method("super_scrollToSubstring", (void (D::ClassType::*) (int, int))&D::ClassType::super_scrollToSubstring);
    }
};


template <typename D>
void buildMetaClass_QAccessibleDoubleSpinBoxWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleDoubleSpinBoxWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleDoubleSpinBox<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleScrollBar(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
}


class QAccessibleScrollBarWrapper : public QAccessibleScrollBar, public cpgf::GScriptWrapper {
public:
    
    QAccessibleScrollBarWrapper(QWidget * w)
        : QAccessibleScrollBar(w) {}
    
    QString localizedActionName(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionName"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionName(name);
    }
    QString super_localizedActionName(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionName(name);
    }
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleScrollBar::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleScrollBar::text(t);
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleObject::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleObject::setText(t, text);
    }
    
    void doAction(const QString & actionName)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doAction"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName);
            return;
        }
        QAccessibleWidget::doAction(actionName);
    }
    void super_doAction(const QString & actionName)
    {
        QAccessibleWidget::doAction(actionName);
    }
    
    void virtual_hook(int id, void * data)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("virtual_hook"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, id, data);
            return;
        }
        QAccessibleInterface::virtual_hook(id, data);
    }
    void super_virtual_hook(int id, void * data)
    {
        QAccessibleInterface::virtual_hook(id, data);
    }
    
    void setCurrentValue(const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCurrentValue"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, value);
            return;
        }
        QAccessibleAbstractSlider::setCurrentValue(value);
    }
    void super_setCurrentValue(const QVariant & value)
    {
        QAccessibleAbstractSlider::setCurrentValue(value);
    }
    
    int indexOfChild(const QAccessibleInterface * child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QAccessibleWidget::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleWidget::indexOfChild(child);
    }
    
    QWindow * window() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("window"));
        if(func)
        {
            return cpgf::fromVariant<QWindow * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::window();
    }
    QWindow * super_window() const
    {
        return QAccessibleWidget::window();
    }
    
    QAccessibleInterface * parent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleWidget::parent();
    }
    
    QColor foregroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("foregroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::foregroundColor();
    }
    QColor super_foregroundColor() const
    {
        return QAccessibleWidget::foregroundColor();
    }
    
    QVariant minimumStepSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumStepSize"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::minimumStepSize();
    }
    QVariant super_minimumStepSize() const
    {
        return QAccessibleAbstractSlider::minimumStepSize();
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleAbstractSlider::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleAbstractSlider::interface_cast(t);
    }
    
    QStringList keyBindingsForAction(const QString & actionName) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyBindingsForAction"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName).getValue());
        }
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    QStringList super_keyBindingsForAction(const QString & actionName) const
    {
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    
    QAccessibleInterface * focusChild() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusChild"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::focusChild();
    }
    QAccessibleInterface * super_focusChild() const
    {
        return QAccessibleWidget::focusChild();
    }
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleWidget::childCount();
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
    }
    
    QVariant maximumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::maximumValue();
    }
    QVariant super_maximumValue() const
    {
        return QAccessibleAbstractSlider::maximumValue();
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleObject::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleObject::childAt(x, y);
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleWidget::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleWidget::rect();
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleWidget::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleWidget::child(index);
    }
    
    QColor backgroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("backgroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::backgroundColor();
    }
    QColor super_backgroundColor() const
    {
        return QAccessibleWidget::backgroundColor();
    }
    
    QObject * object() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("object"));
        if(func)
        {
            return cpgf::fromVariant<QObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleObject::object();
    }
    QObject * super_object() const
    {
        return QAccessibleObject::object();
    }
    
    QAbstractSlider * abstractSlider() const
    {
        return QAccessibleAbstractSlider::abstractSlider();
    }
    
    QVariant minimumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::minimumValue();
    }
    QVariant super_minimumValue() const
    {
        return QAccessibleAbstractSlider::minimumValue();
    }
    
    void addControllingSignal(const QString & signal)
    {
        QAccessibleWidget::addControllingSignal(signal);
    }
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleWidget::role();
    }
    
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("relations"));
        if(func)
        {
            return cpgf::fromVariant<QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, match).getValue());
        }
        return QAccessibleWidget::relations(match);
    }
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > super_relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        return QAccessibleWidget::relations(match);
    }
    
    QVariant currentValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::currentValue();
    }
    QVariant super_currentValue() const
    {
        return QAccessibleAbstractSlider::currentValue();
    }
    
    QStringList actionNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionNames"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::actionNames();
    }
    QStringList super_actionNames() const
    {
        return QAccessibleWidget::actionNames();
    }
    
    QWidget * widget() const
    {
        return QAccessibleWidget::widget();
    }
    
    QString localizedActionDescription(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    QString super_localizedActionDescription(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    
    QAccessible::State state() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("state"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::State >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleWidget::state();
    }
    
    QScrollBar * scrollBar() const
    {
        return QAccessibleScrollBar::scrollBar();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("abstractSlider", (QAbstractSlider * (D::ClassType::*) () const)&D::ClassType::abstractSlider);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("scrollBar", (QScrollBar * (D::ClassType::*) () const)&D::ClassType::scrollBar);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_setCurrentValue", (void (D::ClassType::*) (const QVariant &))&D::ClassType::super_setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_minimumStepSize", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumStepSize);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_maximumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_maximumValue);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_minimumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumValue);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_currentValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_currentValue);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
    }
};


template <typename D>
void buildMetaClass_QAccessibleScrollBarWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleScrollBarWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleScrollBar<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleSlider(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
}


class QAccessibleSliderWrapper : public QAccessibleSlider, public cpgf::GScriptWrapper {
public:
    
    QAccessibleSliderWrapper(QWidget * w)
        : QAccessibleSlider(w) {}
    
    QString localizedActionName(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionName"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionName(name);
    }
    QString super_localizedActionName(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionName(name);
    }
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleSlider::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleSlider::text(t);
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleObject::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleObject::setText(t, text);
    }
    
    void doAction(const QString & actionName)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doAction"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName);
            return;
        }
        QAccessibleWidget::doAction(actionName);
    }
    void super_doAction(const QString & actionName)
    {
        QAccessibleWidget::doAction(actionName);
    }
    
    void virtual_hook(int id, void * data)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("virtual_hook"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, id, data);
            return;
        }
        QAccessibleInterface::virtual_hook(id, data);
    }
    void super_virtual_hook(int id, void * data)
    {
        QAccessibleInterface::virtual_hook(id, data);
    }
    
    void setCurrentValue(const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCurrentValue"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, value);
            return;
        }
        QAccessibleAbstractSlider::setCurrentValue(value);
    }
    void super_setCurrentValue(const QVariant & value)
    {
        QAccessibleAbstractSlider::setCurrentValue(value);
    }
    
    int indexOfChild(const QAccessibleInterface * child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QAccessibleWidget::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleWidget::indexOfChild(child);
    }
    
    QWindow * window() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("window"));
        if(func)
        {
            return cpgf::fromVariant<QWindow * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::window();
    }
    QWindow * super_window() const
    {
        return QAccessibleWidget::window();
    }
    
    QAccessibleInterface * parent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleWidget::parent();
    }
    
    QSlider * slider() const
    {
        return QAccessibleSlider::slider();
    }
    
    QColor foregroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("foregroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::foregroundColor();
    }
    QColor super_foregroundColor() const
    {
        return QAccessibleWidget::foregroundColor();
    }
    
    QVariant minimumStepSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumStepSize"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::minimumStepSize();
    }
    QVariant super_minimumStepSize() const
    {
        return QAccessibleAbstractSlider::minimumStepSize();
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleAbstractSlider::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleAbstractSlider::interface_cast(t);
    }
    
    QStringList keyBindingsForAction(const QString & actionName) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyBindingsForAction"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName).getValue());
        }
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    QStringList super_keyBindingsForAction(const QString & actionName) const
    {
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    
    QAccessibleInterface * focusChild() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusChild"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::focusChild();
    }
    QAccessibleInterface * super_focusChild() const
    {
        return QAccessibleWidget::focusChild();
    }
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleWidget::childCount();
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
    }
    
    QVariant maximumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::maximumValue();
    }
    QVariant super_maximumValue() const
    {
        return QAccessibleAbstractSlider::maximumValue();
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleObject::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleObject::childAt(x, y);
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleWidget::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleWidget::rect();
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleWidget::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleWidget::child(index);
    }
    
    QColor backgroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("backgroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::backgroundColor();
    }
    QColor super_backgroundColor() const
    {
        return QAccessibleWidget::backgroundColor();
    }
    
    QObject * object() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("object"));
        if(func)
        {
            return cpgf::fromVariant<QObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleObject::object();
    }
    QObject * super_object() const
    {
        return QAccessibleObject::object();
    }
    
    QAbstractSlider * abstractSlider() const
    {
        return QAccessibleAbstractSlider::abstractSlider();
    }
    
    QVariant minimumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::minimumValue();
    }
    QVariant super_minimumValue() const
    {
        return QAccessibleAbstractSlider::minimumValue();
    }
    
    void addControllingSignal(const QString & signal)
    {
        QAccessibleWidget::addControllingSignal(signal);
    }
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleWidget::role();
    }
    
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("relations"));
        if(func)
        {
            return cpgf::fromVariant<QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, match).getValue());
        }
        return QAccessibleWidget::relations(match);
    }
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > super_relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        return QAccessibleWidget::relations(match);
    }
    
    QVariant currentValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSlider::currentValue();
    }
    QVariant super_currentValue() const
    {
        return QAccessibleAbstractSlider::currentValue();
    }
    
    QStringList actionNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionNames"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::actionNames();
    }
    QStringList super_actionNames() const
    {
        return QAccessibleWidget::actionNames();
    }
    
    QWidget * widget() const
    {
        return QAccessibleWidget::widget();
    }
    
    QString localizedActionDescription(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    QString super_localizedActionDescription(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    
    QAccessible::State state() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("state"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::State >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleWidget::state();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("slider", (QSlider * (D::ClassType::*) () const)&D::ClassType::slider);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("abstractSlider", (QAbstractSlider * (D::ClassType::*) () const)&D::ClassType::abstractSlider);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_setCurrentValue", (void (D::ClassType::*) (const QVariant &))&D::ClassType::super_setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_minimumStepSize", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumStepSize);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_maximumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_maximumValue);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_minimumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumValue);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_currentValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_currentValue);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
    }
};


template <typename D>
void buildMetaClass_QAccessibleSliderWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleSliderWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleSlider<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleSpinBox(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
}


class QAccessibleSpinBoxWrapper : public QAccessibleSpinBox, public cpgf::GScriptWrapper {
public:
    
    QAccessibleSpinBoxWrapper(QWidget * w)
        : QAccessibleSpinBox(w) {}
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleAbstractSpinBox::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleAbstractSpinBox::text(t);
    }
    
    void selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleAbstractSpinBox::selection(selectionIndex, startOffset, endOffset);
    }
    void super_selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        QAccessibleAbstractSpinBox::selection(selectionIndex, startOffset, endOffset);
    }
    
    void doAction(const QString & actionName)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doAction"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName);
            return;
        }
        QAccessibleWidget::doAction(actionName);
    }
    void super_doAction(const QString & actionName)
    {
        QAccessibleWidget::doAction(actionName);
    }
    
    void virtual_hook(int id, void * data)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("virtual_hook"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, id, data);
            return;
        }
        QAccessibleInterface::virtual_hook(id, data);
    }
    void super_virtual_hook(int id, void * data)
    {
        QAccessibleInterface::virtual_hook(id, data);
    }
    
    void setCurrentValue(const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCurrentValue"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, value);
            return;
        }
        QAccessibleAbstractSpinBox::setCurrentValue(value);
    }
    void super_setCurrentValue(const QVariant & value)
    {
        QAccessibleAbstractSpinBox::setCurrentValue(value);
    }
    
    void setCursorPosition(int position)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCursorPosition"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, position);
            return;
        }
        QAccessibleAbstractSpinBox::setCursorPosition(position);
    }
    void super_setCursorPosition(int position)
    {
        QAccessibleAbstractSpinBox::setCursorPosition(position);
    }
    
    int indexOfChild(const QAccessibleInterface * child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QAccessibleWidget::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleWidget::indexOfChild(child);
    }
    
    int characterCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::characterCount();
    }
    int super_characterCount() const
    {
        return QAccessibleAbstractSpinBox::characterCount();
    }
    
    QWindow * window() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("window"));
        if(func)
        {
            return cpgf::fromVariant<QWindow * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::window();
    }
    QWindow * super_window() const
    {
        return QAccessibleWidget::window();
    }
    
    QAccessibleInterface * parent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleWidget::parent();
    }
    
    int cursorPosition() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("cursorPosition"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::cursorPosition();
    }
    int super_cursorPosition() const
    {
        return QAccessibleAbstractSpinBox::cursorPosition();
    }
    
    int offsetAtPoint(const QPoint & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("offsetAtPoint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QAccessibleAbstractSpinBox::offsetAtPoint(point);
    }
    int super_offsetAtPoint(const QPoint & point) const
    {
        return QAccessibleAbstractSpinBox::offsetAtPoint(point);
    }
    
    QAccessibleInterface * lineEditIface() const
    {
        return QAccessibleAbstractSpinBox::lineEditIface();
    }
    
    QColor foregroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("foregroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::foregroundColor();
    }
    QColor super_foregroundColor() const
    {
        return QAccessibleWidget::foregroundColor();
    }
    
    QString attributes(int offset, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("attributes"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, startOffset, endOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::attributes(offset, startOffset, endOffset);
    }
    QString super_attributes(int offset, int * startOffset, int * endOffset) const
    {
        return QAccessibleAbstractSpinBox::attributes(offset, startOffset, endOffset);
    }
    
    QRect characterRect(int offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QAccessibleAbstractSpinBox::characterRect(offset);
    }
    QRect super_characterRect(int offset) const
    {
        return QAccessibleAbstractSpinBox::characterRect(offset);
    }
    
    QStringList keyBindingsForAction(const QString & actionName) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyBindingsForAction"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName).getValue());
        }
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    QStringList super_keyBindingsForAction(const QString & actionName) const
    {
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }
    
    QString textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAfterOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleAbstractSpinBox::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
    }
    
    QVariant maximumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::maximumValue();
    }
    QVariant super_maximumValue() const
    {
        return QAccessibleAbstractSpinBox::maximumValue();
    }
    
    QAbstractSpinBox * abstractSpinBox() const
    {
        return QAccessibleAbstractSpinBox::abstractSpinBox();
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleWidget::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleWidget::rect();
    }
    
    void replaceText(int startOffset, int endOffset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("replaceText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset, text);
            return;
        }
        QAccessibleAbstractSpinBox::replaceText(startOffset, endOffset, text);
    }
    void super_replaceText(int startOffset, int endOffset, const QString & text)
    {
        QAccessibleAbstractSpinBox::replaceText(startOffset, endOffset, text);
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleWidget::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleWidget::child(index);
    }
    
    QColor backgroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("backgroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::backgroundColor();
    }
    QColor super_backgroundColor() const
    {
        return QAccessibleWidget::backgroundColor();
    }
    
    QObject * object() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("object"));
        if(func)
        {
            return cpgf::fromVariant<QObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleObject::object();
    }
    QObject * super_object() const
    {
        return QAccessibleObject::object();
    }
    
    void addSelection(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("addSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        QAccessibleAbstractSpinBox::addSelection(startOffset, endOffset);
    }
    void super_addSelection(int startOffset, int endOffset)
    {
        QAccessibleAbstractSpinBox::addSelection(startOffset, endOffset);
    }
    
    QVariant minimumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::minimumValue();
    }
    QVariant super_minimumValue() const
    {
        return QAccessibleAbstractSpinBox::minimumValue();
    }
    
    QVariant currentValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::currentValue();
    }
    QVariant super_currentValue() const
    {
        return QAccessibleAbstractSpinBox::currentValue();
    }
    
    QStringList actionNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionNames"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::actionNames();
    }
    QStringList super_actionNames() const
    {
        return QAccessibleWidget::actionNames();
    }
    
    QWidget * widget() const
    {
        return QAccessibleWidget::widget();
    }
    
    QString localizedActionDescription(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    QString super_localizedActionDescription(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    
    QAccessible::State state() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("state"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::State >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleWidget::state();
    }
    
    int selectionCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::selectionCount();
    }
    int super_selectionCount() const
    {
        return QAccessibleAbstractSpinBox::selectionCount();
    }
    
    QString localizedActionName(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionName"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionName(name);
    }
    QString super_localizedActionName(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionName(name);
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleObject::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleObject::setText(t, text);
    }
    
    void removeSelection(int selectionIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex);
            return;
        }
        QAccessibleAbstractSpinBox::removeSelection(selectionIndex);
    }
    void super_removeSelection(int selectionIndex)
    {
        QAccessibleAbstractSpinBox::removeSelection(selectionIndex);
    }
    
    QSpinBox * spinBox() const
    {
        return QAccessibleSpinBox::spinBox();
    }
    
    void insertText(int offset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, text);
            return;
        }
        QAccessibleAbstractSpinBox::insertText(offset, text);
    }
    void super_insertText(int offset, const QString & text)
    {
        QAccessibleAbstractSpinBox::insertText(offset, text);
    }
    
    QVariant minimumStepSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumStepSize"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleAbstractSpinBox::minimumStepSize();
    }
    QVariant super_minimumStepSize() const
    {
        return QAccessibleAbstractSpinBox::minimumStepSize();
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleAbstractSpinBox::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleAbstractSpinBox::interface_cast(t);
    }
    
    QString text(int startOffset, int endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::text(startOffset, endOffset);
    }
    QString super_text(int startOffset, int endOffset) const
    {
        return QAccessibleAbstractSpinBox::text(startOffset, endOffset);
    }
    
    QAccessibleInterface * focusChild() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusChild"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::focusChild();
    }
    QAccessibleInterface * super_focusChild() const
    {
        return QAccessibleWidget::focusChild();
    }
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleWidget::childCount();
    }
    
    void setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleAbstractSpinBox::setSelection(selectionIndex, startOffset, endOffset);
    }
    void super_setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        QAccessibleAbstractSpinBox::setSelection(selectionIndex, startOffset, endOffset);
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleObject::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleObject::childAt(x, y);
    }
    
    void addControllingSignal(const QString & signal)
    {
        QAccessibleWidget::addControllingSignal(signal);
    }
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleWidget::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleWidget::role();
    }
    
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("relations"));
        if(func)
        {
            return cpgf::fromVariant<QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, match).getValue());
        }
        return QAccessibleWidget::relations(match);
    }
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > super_relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        return QAccessibleWidget::relations(match);
    }
    
    QString textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * endOffset, int * startOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textBeforeOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, endOffset, startOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::textBeforeOffset(offset, boundaryType, endOffset, startOffset);
    }
    QString super_textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * endOffset, int * startOffset) const
    {
        return QAccessibleAbstractSpinBox::textBeforeOffset(offset, boundaryType, endOffset, startOffset);
    }
    
    void deleteText(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("deleteText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        QAccessibleAbstractSpinBox::deleteText(startOffset, endOffset);
    }
    void super_deleteText(int startOffset, int endOffset)
    {
        QAccessibleAbstractSpinBox::deleteText(startOffset, endOffset);
    }
    
    QString textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAtOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleAbstractSpinBox::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleAbstractSpinBox::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void scrollToSubstring(int startIndex, int endIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollToSubstring"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startIndex, endIndex);
            return;
        }
        QAccessibleAbstractSpinBox::scrollToSubstring(startIndex, endIndex);
    }
    void super_scrollToSubstring(int startIndex, int endIndex)
    {
        QAccessibleAbstractSpinBox::scrollToSubstring(startIndex, endIndex);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("lineEditIface", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::lineEditIface);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("abstractSpinBox", (QAbstractSpinBox * (D::ClassType::*) () const)&D::ClassType::abstractSpinBox);
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("spinBox", (QSpinBox * (D::ClassType::*) () const)&D::ClassType::spinBox);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_selection", (void (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_selection);
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_setCurrentValue", (void (D::ClassType::*) (const QVariant &))&D::ClassType::super_setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setCursorPosition", (void (D::ClassType::*) (int))&D::ClassType::super_setCursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_characterCount", (int (D::ClassType::*) () const)&D::ClassType::super_characterCount);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_cursorPosition", (int (D::ClassType::*) () const)&D::ClassType::super_cursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_offsetAtPoint", (int (D::ClassType::*) (const QPoint &) const)&D::ClassType::super_offsetAtPoint);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_attributes", (QString (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_attributes);
        _d.CPGF_MD_TEMPLATE _method("super_characterRect", (QRect (D::ClassType::*) (int) const)&D::ClassType::super_characterRect);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_textAfterOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAfterOffset);
        _d.CPGF_MD_TEMPLATE _method("super_maximumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_maximumValue);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_replaceText", (void (D::ClassType::*) (int, int, const QString &))&D::ClassType::super_replaceText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_addSelection", (void (D::ClassType::*) (int, int))&D::ClassType::super_addSelection);
        _d.CPGF_MD_TEMPLATE _method("super_minimumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumValue);
        _d.CPGF_MD_TEMPLATE _method("super_currentValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_currentValue);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_selectionCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectionCount);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_removeSelection", (void (D::ClassType::*) (int))&D::ClassType::super_removeSelection);
        _d.CPGF_MD_TEMPLATE _method("super_insertText", (void (D::ClassType::*) (int, const QString &))&D::ClassType::super_insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_minimumStepSize", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumStepSize);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (int, int) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_setSelection", (void (D::ClassType::*) (int, int, int))&D::ClassType::super_setSelection);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_textBeforeOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textBeforeOffset);
        _d.CPGF_MD_TEMPLATE _method("super_deleteText", (void (D::ClassType::*) (int, int))&D::ClassType::super_deleteText);
        _d.CPGF_MD_TEMPLATE _method("super_textAtOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAtOffset);
        _d.CPGF_MD_TEMPLATE _method("super_scrollToSubstring", (void (D::ClassType::*) (int, int))&D::ClassType::super_scrollToSubstring);
    }
};


template <typename D>
void buildMetaClass_QAccessibleSpinBoxWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleSpinBoxWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleSpinBox<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

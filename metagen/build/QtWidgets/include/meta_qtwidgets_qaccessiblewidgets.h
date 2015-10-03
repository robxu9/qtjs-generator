// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QACCESSIBLEWIDGETS_H
#define CPGF_META_QTWIDGETS_QACCESSIBLEWIDGETS_H


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
void buildMetaClass_QAccessibleCalendarWidget(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
}


class QAccessibleCalendarWidgetWrapper : public QAccessibleCalendarWidget, public cpgf::GScriptWrapper {
public:
    
    QAccessibleCalendarWidgetWrapper(QWidget * widget)
        : QAccessibleCalendarWidget(widget) {}
    
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
    
    int indexOfChild(const QAccessibleInterface * child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QAccessibleCalendarWidget::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleCalendarWidget::indexOfChild(child);
    }
    
    QCalendarWidget * calendarWidget() const
    {
        return QAccessibleCalendarWidget::calendarWidget();
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
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleWidget::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleWidget::interface_cast(t);
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
        return QAccessibleCalendarWidget::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleCalendarWidget::childCount();
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
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
        return QAccessibleCalendarWidget::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleCalendarWidget::child(index);
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
        _d.CPGF_MD_TEMPLATE _method("calendarWidget", (QCalendarWidget * (D::ClassType::*) () const)&D::ClassType::calendarWidget);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
    }
};


template <typename D>
void buildMetaClass_QAccessibleCalendarWidgetWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleCalendarWidgetWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleCalendarWidget<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleDialogButtonBox(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
}


class QAccessibleDialogButtonBoxWrapper : public QAccessibleDialogButtonBox, public cpgf::GScriptWrapper {
public:
    
    QAccessibleDialogButtonBoxWrapper(QWidget * widget)
        : QAccessibleDialogButtonBox(widget) {}
    
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
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleWidget::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleWidget::interface_cast(t);
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
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
    }
};


template <typename D>
void buildMetaClass_QAccessibleDialogButtonBoxWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleDialogButtonBoxWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleDialogButtonBox<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleDockWidget(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("dockWidget", &D::ClassType::dockWidget);
}


class QAccessibleDockWidgetWrapper : public QAccessibleDockWidget, public cpgf::GScriptWrapper {
public:
    
    QAccessibleDockWidgetWrapper(QWidget * widget)
        : QAccessibleDockWidget(widget) {}
    
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
        return QAccessibleDockWidget::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleDockWidget::text(t);
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
    
    int indexOfChild(const QAccessibleInterface * child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QAccessibleDockWidget::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleDockWidget::indexOfChild(child);
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
    
    QDockWidgetLayout * dockWidgetLayout() const
    {
        return QAccessibleDockWidget::dockWidgetLayout();
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
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleWidget::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleWidget::interface_cast(t);
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
        return QAccessibleDockWidget::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleDockWidget::childCount();
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
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
        return QAccessibleDockWidget::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleDockWidget::rect();
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleDockWidget::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleDockWidget::child(index);
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
        _d.CPGF_MD_TEMPLATE _method("dockWidgetLayout", (QDockWidgetLayout * (D::ClassType::*) () const)&D::ClassType::dockWidgetLayout);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
    }
};


template <typename D>
void buildMetaClass_QAccessibleDockWidgetWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleDockWidgetWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleDockWidget<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleMainWindow(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("childAt", &D::ClassType::childAt);
    _d.CPGF_MD_TEMPLATE _method("mainWindow", &D::ClassType::mainWindow);
}


class QAccessibleMainWindowWrapper : public QAccessibleMainWindow, public cpgf::GScriptWrapper {
public:
    
    QAccessibleMainWindowWrapper(QWidget * widget)
        : QAccessibleMainWindow(widget) {}
    
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
    
    int indexOfChild(const QAccessibleInterface * iface) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, iface).getValue());
        }
        return QAccessibleMainWindow::indexOfChild(iface);
    }
    int super_indexOfChild(const QAccessibleInterface * iface) const
    {
        return QAccessibleMainWindow::indexOfChild(iface);
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
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleWidget::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleWidget::interface_cast(t);
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
        return QAccessibleMainWindow::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleMainWindow::childCount();
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleMainWindow::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleMainWindow::childAt(x, y);
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
        return QAccessibleMainWindow::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleMainWindow::child(index);
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
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
    }
};


template <typename D>
void buildMetaClass_QAccessibleMainWindowWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleMainWindowWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleMainWindow<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleMdiArea(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
}


class QAccessibleMdiAreaWrapper : public QAccessibleMdiArea, public cpgf::GScriptWrapper {
public:
    
    QAccessibleMdiAreaWrapper(QWidget * widget)
        : QAccessibleMdiArea(widget) {}
    
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
    
    int indexOfChild(const QAccessibleInterface * child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QAccessibleMdiArea::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleMdiArea::indexOfChild(child);
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
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleWidget::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleWidget::interface_cast(t);
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
        return QAccessibleMdiArea::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleMdiArea::childCount();
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
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
    
    QMdiArea * mdiArea() const
    {
        return QAccessibleMdiArea::mdiArea();
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleMdiArea::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleMdiArea::child(index);
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
        _d.CPGF_MD_TEMPLATE _method("mdiArea", (QMdiArea * (D::ClassType::*) () const)&D::ClassType::mdiArea);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
    }
};


template <typename D>
void buildMetaClass_QAccessibleMdiAreaWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleMdiAreaWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleMdiArea<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleMdiSubWindow(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
}


class QAccessibleMdiSubWindowWrapper : public QAccessibleMdiSubWindow, public cpgf::GScriptWrapper {
public:
    
    QAccessibleMdiSubWindowWrapper(QWidget * widget)
        : QAccessibleMdiSubWindow(widget) {}
    
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
        return QAccessibleMdiSubWindow::text(textType);
    }
    QString super_text(QAccessible::Text textType) const
    {
        return QAccessibleMdiSubWindow::text(textType);
    }
    
    QMdiSubWindow * mdiSubWindow() const
    {
        return QAccessibleMdiSubWindow::mdiSubWindow();
    }
    
    void setText(QAccessible::Text textType, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, textType, text);
            return;
        }
        QAccessibleMdiSubWindow::setText(textType, text);
    }
    void super_setText(QAccessible::Text textType, const QString & text)
    {
        QAccessibleMdiSubWindow::setText(textType, text);
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
    
    int indexOfChild(const QAccessibleInterface * child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QAccessibleMdiSubWindow::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleMdiSubWindow::indexOfChild(child);
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
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleWidget::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleWidget::interface_cast(t);
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
        return QAccessibleMdiSubWindow::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleMdiSubWindow::childCount();
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
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
        return QAccessibleMdiSubWindow::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleMdiSubWindow::rect();
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleMdiSubWindow::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleMdiSubWindow::child(index);
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
        return QAccessibleMdiSubWindow::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleMdiSubWindow::state();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("mdiSubWindow", (QMdiSubWindow * (D::ClassType::*) () const)&D::ClassType::mdiSubWindow);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
    }
};


template <typename D>
void buildMetaClass_QAccessibleMdiSubWindowWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleMdiSubWindowWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleMdiSubWindow<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessiblePlainTextEdit(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("interface_cast", &D::ClassType::interface_cast);
    _d.CPGF_MD_TEMPLATE _method("scrollToSubstring", &D::ClassType::scrollToSubstring);
}


class QAccessiblePlainTextEditWrapper : public QAccessiblePlainTextEdit, public cpgf::GScriptWrapper {
public:
    
    QAccessiblePlainTextEditWrapper(QWidget * o)
        : QAccessiblePlainTextEdit(o) {}
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessiblePlainTextEdit::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessiblePlainTextEdit::text(t);
    }
    
    void selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleTextWidget::selection(selectionIndex, startOffset, endOffset);
    }
    void super_selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        QAccessibleTextWidget::selection(selectionIndex, startOffset, endOffset);
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
    
    void setCursorPosition(int position)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCursorPosition"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, position);
            return;
        }
        QAccessibleTextWidget::setCursorPosition(position);
    }
    void super_setCursorPosition(int position)
    {
        QAccessibleTextWidget::setCursorPosition(position);
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
        return QAccessibleTextWidget::characterCount();
    }
    int super_characterCount() const
    {
        return QAccessibleTextWidget::characterCount();
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
        return QAccessibleTextWidget::cursorPosition();
    }
    int super_cursorPosition() const
    {
        return QAccessibleTextWidget::cursorPosition();
    }
    
    int offsetAtPoint(const QPoint & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("offsetAtPoint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QAccessibleTextWidget::offsetAtPoint(point);
    }
    int super_offsetAtPoint(const QPoint & point) const
    {
        return QAccessibleTextWidget::offsetAtPoint(point);
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
        return QAccessibleTextWidget::attributes(offset, startOffset, endOffset);
    }
    QString super_attributes(int offset, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::attributes(offset, startOffset, endOffset);
    }
    
    QTextDocument * textDocument() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textDocument"));
        if(func)
        {
            return cpgf::fromVariant<QTextDocument * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessiblePlainTextEdit::textDocument();
    }
    QTextDocument * super_textDocument() const
    {
        return QAccessiblePlainTextEdit::textDocument();
    }
    
    QRect characterRect(int offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QAccessibleTextWidget::characterRect(offset);
    }
    QRect super_characterRect(int offset) const
    {
        return QAccessibleTextWidget::characterRect(offset);
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
        return QAccessibleTextWidget::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
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
        QAccessibleTextWidget::replaceText(startOffset, endOffset, text);
    }
    void super_replaceText(int startOffset, int endOffset, const QString & text)
    {
        QAccessibleTextWidget::replaceText(startOffset, endOffset, text);
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
        QAccessibleTextWidget::addSelection(startOffset, endOffset);
    }
    void super_addSelection(int startOffset, int endOffset)
    {
        QAccessibleTextWidget::addSelection(startOffset, endOffset);
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
        return QAccessiblePlainTextEdit::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessiblePlainTextEdit::state();
    }
    
    int selectionCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextWidget::selectionCount();
    }
    int super_selectionCount() const
    {
        return QAccessibleTextWidget::selectionCount();
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
    
    QPoint scrollBarPosition() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollBarPosition"));
        if(func)
        {
            return cpgf::fromVariant<QPoint >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessiblePlainTextEdit::scrollBarPosition();
    }
    QPoint super_scrollBarPosition() const
    {
        return QAccessiblePlainTextEdit::scrollBarPosition();
    }
    
    void setTextCursor(const QTextCursor & textCursor)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTextCursor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, textCursor);
            return;
        }
        QAccessiblePlainTextEdit::setTextCursor(textCursor);
    }
    void super_setTextCursor(const QTextCursor & textCursor)
    {
        QAccessiblePlainTextEdit::setTextCursor(textCursor);
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessiblePlainTextEdit::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessiblePlainTextEdit::setText(t, text);
    }
    
    void removeSelection(int selectionIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex);
            return;
        }
        QAccessibleTextWidget::removeSelection(selectionIndex);
    }
    void super_removeSelection(int selectionIndex)
    {
        QAccessibleTextWidget::removeSelection(selectionIndex);
    }
    
    QTextCursor textCursorForRange(int startOffset, int endOffset) const
    {
        return QAccessibleTextWidget::textCursorForRange(startOffset, endOffset);
    }
    
    void insertText(int offset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, text);
            return;
        }
        QAccessibleTextWidget::insertText(offset, text);
    }
    void super_insertText(int offset, const QString & text)
    {
        QAccessibleTextWidget::insertText(offset, text);
    }
    
    QPlainTextEdit * plainTextEdit() const
    {
        return QAccessiblePlainTextEdit::plainTextEdit();
    }
    
    QWidget * viewport() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewport"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessiblePlainTextEdit::viewport();
    }
    QWidget * super_viewport() const
    {
        return QAccessiblePlainTextEdit::viewport();
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessiblePlainTextEdit::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessiblePlainTextEdit::interface_cast(t);
    }
    
    QString text(int startOffset, int endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset).getValue());
        }
        return QAccessibleTextWidget::text(startOffset, endOffset);
    }
    QString super_text(int startOffset, int endOffset) const
    {
        return QAccessibleTextWidget::text(startOffset, endOffset);
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
        QAccessibleTextWidget::setSelection(selectionIndex, startOffset, endOffset);
    }
    void super_setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        QAccessibleTextWidget::setSelection(selectionIndex, startOffset, endOffset);
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
    
    QTextCursor textCursor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textCursor"));
        if(func)
        {
            return cpgf::fromVariant<QTextCursor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessiblePlainTextEdit::textCursor();
    }
    QTextCursor super_textCursor() const
    {
        return QAccessiblePlainTextEdit::textCursor();
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
    
    QString textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textBeforeOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleTextWidget::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void deleteText(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("deleteText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        QAccessibleTextWidget::deleteText(startOffset, endOffset);
    }
    void super_deleteText(int startOffset, int endOffset)
    {
        QAccessibleTextWidget::deleteText(startOffset, endOffset);
    }
    
    QString textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAtOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleTextWidget::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void scrollToSubstring(int startIndex, int endIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollToSubstring"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startIndex, endIndex);
            return;
        }
        QAccessiblePlainTextEdit::scrollToSubstring(startIndex, endIndex);
    }
    void super_scrollToSubstring(int startIndex, int endIndex)
    {
        QAccessiblePlainTextEdit::scrollToSubstring(startIndex, endIndex);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("textDocument", (QTextDocument * (D::ClassType::*) () const)&D::ClassType::textDocument);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("scrollBarPosition", (QPoint (D::ClassType::*) () const)&D::ClassType::scrollBarPosition);
        _d.CPGF_MD_TEMPLATE _method("setTextCursor", (void (D::ClassType::*) (const QTextCursor &))&D::ClassType::setTextCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("textCursorForRange", (QTextCursor (D::ClassType::*) (int, int) const)&D::ClassType::textCursorForRange);
        _d.CPGF_MD_TEMPLATE _method("plainTextEdit", (QPlainTextEdit * (D::ClassType::*) () const)&D::ClassType::plainTextEdit);
        _d.CPGF_MD_TEMPLATE _method("viewport", (QWidget * (D::ClassType::*) () const)&D::ClassType::viewport);
        _d.CPGF_MD_TEMPLATE _method("textCursor", (QTextCursor (D::ClassType::*) () const)&D::ClassType::textCursor);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_selection", (void (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_selection);
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_setCursorPosition", (void (D::ClassType::*) (int))&D::ClassType::super_setCursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_characterCount", (int (D::ClassType::*) () const)&D::ClassType::super_characterCount);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_cursorPosition", (int (D::ClassType::*) () const)&D::ClassType::super_cursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_offsetAtPoint", (int (D::ClassType::*) (const QPoint &) const)&D::ClassType::super_offsetAtPoint);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_attributes", (QString (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_attributes);
        _d.CPGF_MD_TEMPLATE _method("super_textDocument", (QTextDocument * (D::ClassType::*) () const)&D::ClassType::super_textDocument);
        _d.CPGF_MD_TEMPLATE _method("super_characterRect", (QRect (D::ClassType::*) (int) const)&D::ClassType::super_characterRect);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_textAfterOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAfterOffset);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_replaceText", (void (D::ClassType::*) (int, int, const QString &))&D::ClassType::super_replaceText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_addSelection", (void (D::ClassType::*) (int, int))&D::ClassType::super_addSelection);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_selectionCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectionCount);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_scrollBarPosition", (QPoint (D::ClassType::*) () const)&D::ClassType::super_scrollBarPosition);
        _d.CPGF_MD_TEMPLATE _method("super_setTextCursor", (void (D::ClassType::*) (const QTextCursor &))&D::ClassType::super_setTextCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_removeSelection", (void (D::ClassType::*) (int))&D::ClassType::super_removeSelection);
        _d.CPGF_MD_TEMPLATE _method("super_insertText", (void (D::ClassType::*) (int, const QString &))&D::ClassType::super_insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_viewport", (QWidget * (D::ClassType::*) () const)&D::ClassType::super_viewport);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (int, int) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_setSelection", (void (D::ClassType::*) (int, int, int))&D::ClassType::super_setSelection);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_textCursor", (QTextCursor (D::ClassType::*) () const)&D::ClassType::super_textCursor);
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
void buildMetaClass_QAccessiblePlainTextEditWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessiblePlainTextEditWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessiblePlainTextEdit<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleStackedWidget(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("childAt", &D::ClassType::childAt);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
}


class QAccessibleStackedWidgetWrapper : public QAccessibleStackedWidget, public cpgf::GScriptWrapper {
public:
    
    QAccessibleStackedWidgetWrapper(QWidget * widget)
        : QAccessibleStackedWidget(widget) {}
    
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
    
    int indexOfChild(const QAccessibleInterface * child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QAccessibleStackedWidget::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleStackedWidget::indexOfChild(child);
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
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleWidget::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleWidget::interface_cast(t);
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
        return QAccessibleStackedWidget::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleStackedWidget::childCount();
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleStackedWidget::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleStackedWidget::childAt(x, y);
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
        return QAccessibleStackedWidget::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleStackedWidget::child(index);
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
    
    QStackedWidget * stackedWidget() const
    {
        return QAccessibleStackedWidget::stackedWidget();
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
        _d.CPGF_MD_TEMPLATE _method("stackedWidget", (QStackedWidget * (D::ClassType::*) () const)&D::ClassType::stackedWidget);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
    }
};


template <typename D>
void buildMetaClass_QAccessibleStackedWidgetWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleStackedWidgetWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleStackedWidget<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTextBrowser(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("role", &D::ClassType::role);
}


class QAccessibleTextBrowserWrapper : public QAccessibleTextBrowser, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTextBrowserWrapper(QWidget * widget)
        : QAccessibleTextBrowser(widget) {}
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleTextEdit::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleTextEdit::text(t);
    }
    
    void selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleTextWidget::selection(selectionIndex, startOffset, endOffset);
    }
    void super_selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        QAccessibleTextWidget::selection(selectionIndex, startOffset, endOffset);
    }
    
    QTextEdit * textEdit() const
    {
        return QAccessibleTextEdit::textEdit();
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
    
    void setCursorPosition(int position)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCursorPosition"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, position);
            return;
        }
        QAccessibleTextWidget::setCursorPosition(position);
    }
    void super_setCursorPosition(int position)
    {
        QAccessibleTextWidget::setCursorPosition(position);
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
        return QAccessibleTextWidget::characterCount();
    }
    int super_characterCount() const
    {
        return QAccessibleTextWidget::characterCount();
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
        return QAccessibleTextWidget::cursorPosition();
    }
    int super_cursorPosition() const
    {
        return QAccessibleTextWidget::cursorPosition();
    }
    
    int offsetAtPoint(const QPoint & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("offsetAtPoint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QAccessibleTextWidget::offsetAtPoint(point);
    }
    int super_offsetAtPoint(const QPoint & point) const
    {
        return QAccessibleTextWidget::offsetAtPoint(point);
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
        return QAccessibleTextWidget::attributes(offset, startOffset, endOffset);
    }
    QString super_attributes(int offset, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::attributes(offset, startOffset, endOffset);
    }
    
    QTextDocument * textDocument() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textDocument"));
        if(func)
        {
            return cpgf::fromVariant<QTextDocument * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextEdit::textDocument();
    }
    QTextDocument * super_textDocument() const
    {
        return QAccessibleTextEdit::textDocument();
    }
    
    QRect characterRect(int offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QAccessibleTextWidget::characterRect(offset);
    }
    QRect super_characterRect(int offset) const
    {
        return QAccessibleTextWidget::characterRect(offset);
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
        return QAccessibleTextWidget::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
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
        QAccessibleTextWidget::replaceText(startOffset, endOffset, text);
    }
    void super_replaceText(int startOffset, int endOffset, const QString & text)
    {
        QAccessibleTextWidget::replaceText(startOffset, endOffset, text);
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
        QAccessibleTextWidget::addSelection(startOffset, endOffset);
    }
    void super_addSelection(int startOffset, int endOffset)
    {
        QAccessibleTextWidget::addSelection(startOffset, endOffset);
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
        return QAccessibleTextEdit::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleTextEdit::state();
    }
    
    int selectionCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextWidget::selectionCount();
    }
    int super_selectionCount() const
    {
        return QAccessibleTextWidget::selectionCount();
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
    
    QPoint scrollBarPosition() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollBarPosition"));
        if(func)
        {
            return cpgf::fromVariant<QPoint >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextEdit::scrollBarPosition();
    }
    QPoint super_scrollBarPosition() const
    {
        return QAccessibleTextEdit::scrollBarPosition();
    }
    
    void setTextCursor(const QTextCursor & textCursor)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTextCursor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, textCursor);
            return;
        }
        QAccessibleTextEdit::setTextCursor(textCursor);
    }
    void super_setTextCursor(const QTextCursor & textCursor)
    {
        QAccessibleTextEdit::setTextCursor(textCursor);
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleTextEdit::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleTextEdit::setText(t, text);
    }
    
    void removeSelection(int selectionIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex);
            return;
        }
        QAccessibleTextWidget::removeSelection(selectionIndex);
    }
    void super_removeSelection(int selectionIndex)
    {
        QAccessibleTextWidget::removeSelection(selectionIndex);
    }
    
    QTextCursor textCursorForRange(int startOffset, int endOffset) const
    {
        return QAccessibleTextWidget::textCursorForRange(startOffset, endOffset);
    }
    
    void insertText(int offset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, text);
            return;
        }
        QAccessibleTextWidget::insertText(offset, text);
    }
    void super_insertText(int offset, const QString & text)
    {
        QAccessibleTextWidget::insertText(offset, text);
    }
    
    QWidget * viewport() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewport"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextEdit::viewport();
    }
    QWidget * super_viewport() const
    {
        return QAccessibleTextEdit::viewport();
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleTextEdit::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleTextEdit::interface_cast(t);
    }
    
    QString text(int startOffset, int endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset).getValue());
        }
        return QAccessibleTextWidget::text(startOffset, endOffset);
    }
    QString super_text(int startOffset, int endOffset) const
    {
        return QAccessibleTextWidget::text(startOffset, endOffset);
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
        QAccessibleTextWidget::setSelection(selectionIndex, startOffset, endOffset);
    }
    void super_setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        QAccessibleTextWidget::setSelection(selectionIndex, startOffset, endOffset);
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
    
    QTextCursor textCursor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textCursor"));
        if(func)
        {
            return cpgf::fromVariant<QTextCursor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextEdit::textCursor();
    }
    QTextCursor super_textCursor() const
    {
        return QAccessibleTextEdit::textCursor();
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
        return QAccessibleTextBrowser::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleTextBrowser::role();
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
    
    QString textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textBeforeOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleTextWidget::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void deleteText(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("deleteText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        QAccessibleTextWidget::deleteText(startOffset, endOffset);
    }
    void super_deleteText(int startOffset, int endOffset)
    {
        QAccessibleTextWidget::deleteText(startOffset, endOffset);
    }
    
    QString textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAtOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleTextWidget::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void scrollToSubstring(int startIndex, int endIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollToSubstring"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startIndex, endIndex);
            return;
        }
        QAccessibleTextEdit::scrollToSubstring(startIndex, endIndex);
    }
    void super_scrollToSubstring(int startIndex, int endIndex)
    {
        QAccessibleTextEdit::scrollToSubstring(startIndex, endIndex);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("textEdit", (QTextEdit * (D::ClassType::*) () const)&D::ClassType::textEdit);
        _d.CPGF_MD_TEMPLATE _method("textDocument", (QTextDocument * (D::ClassType::*) () const)&D::ClassType::textDocument);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("scrollBarPosition", (QPoint (D::ClassType::*) () const)&D::ClassType::scrollBarPosition);
        _d.CPGF_MD_TEMPLATE _method("setTextCursor", (void (D::ClassType::*) (const QTextCursor &))&D::ClassType::setTextCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("textCursorForRange", (QTextCursor (D::ClassType::*) (int, int) const)&D::ClassType::textCursorForRange);
        _d.CPGF_MD_TEMPLATE _method("viewport", (QWidget * (D::ClassType::*) () const)&D::ClassType::viewport);
        _d.CPGF_MD_TEMPLATE _method("textCursor", (QTextCursor (D::ClassType::*) () const)&D::ClassType::textCursor);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_selection", (void (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_selection);
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_setCursorPosition", (void (D::ClassType::*) (int))&D::ClassType::super_setCursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_characterCount", (int (D::ClassType::*) () const)&D::ClassType::super_characterCount);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_cursorPosition", (int (D::ClassType::*) () const)&D::ClassType::super_cursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_offsetAtPoint", (int (D::ClassType::*) (const QPoint &) const)&D::ClassType::super_offsetAtPoint);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_attributes", (QString (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_attributes);
        _d.CPGF_MD_TEMPLATE _method("super_textDocument", (QTextDocument * (D::ClassType::*) () const)&D::ClassType::super_textDocument);
        _d.CPGF_MD_TEMPLATE _method("super_characterRect", (QRect (D::ClassType::*) (int) const)&D::ClassType::super_characterRect);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_textAfterOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAfterOffset);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_replaceText", (void (D::ClassType::*) (int, int, const QString &))&D::ClassType::super_replaceText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_addSelection", (void (D::ClassType::*) (int, int))&D::ClassType::super_addSelection);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_selectionCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectionCount);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_scrollBarPosition", (QPoint (D::ClassType::*) () const)&D::ClassType::super_scrollBarPosition);
        _d.CPGF_MD_TEMPLATE _method("super_setTextCursor", (void (D::ClassType::*) (const QTextCursor &))&D::ClassType::super_setTextCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_removeSelection", (void (D::ClassType::*) (int))&D::ClassType::super_removeSelection);
        _d.CPGF_MD_TEMPLATE _method("super_insertText", (void (D::ClassType::*) (int, const QString &))&D::ClassType::super_insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_viewport", (QWidget * (D::ClassType::*) () const)&D::ClassType::super_viewport);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (int, int) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_setSelection", (void (D::ClassType::*) (int, int, int))&D::ClassType::super_setSelection);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_textCursor", (QTextCursor (D::ClassType::*) () const)&D::ClassType::super_textCursor);
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
void buildMetaClass_QAccessibleTextBrowserWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTextBrowserWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTextBrowser<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTextEdit(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("interface_cast", &D::ClassType::interface_cast);
    _d.CPGF_MD_TEMPLATE _method("scrollToSubstring", &D::ClassType::scrollToSubstring);
}


class QAccessibleTextEditWrapper : public QAccessibleTextEdit, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTextEditWrapper(QWidget * o)
        : QAccessibleTextEdit(o) {}
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleTextEdit::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleTextEdit::text(t);
    }
    
    void selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleTextWidget::selection(selectionIndex, startOffset, endOffset);
    }
    void super_selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        QAccessibleTextWidget::selection(selectionIndex, startOffset, endOffset);
    }
    
    QTextEdit * textEdit() const
    {
        return QAccessibleTextEdit::textEdit();
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
    
    void setCursorPosition(int position)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCursorPosition"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, position);
            return;
        }
        QAccessibleTextWidget::setCursorPosition(position);
    }
    void super_setCursorPosition(int position)
    {
        QAccessibleTextWidget::setCursorPosition(position);
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
        return QAccessibleTextWidget::characterCount();
    }
    int super_characterCount() const
    {
        return QAccessibleTextWidget::characterCount();
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
        return QAccessibleTextWidget::cursorPosition();
    }
    int super_cursorPosition() const
    {
        return QAccessibleTextWidget::cursorPosition();
    }
    
    int offsetAtPoint(const QPoint & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("offsetAtPoint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QAccessibleTextWidget::offsetAtPoint(point);
    }
    int super_offsetAtPoint(const QPoint & point) const
    {
        return QAccessibleTextWidget::offsetAtPoint(point);
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
        return QAccessibleTextWidget::attributes(offset, startOffset, endOffset);
    }
    QString super_attributes(int offset, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::attributes(offset, startOffset, endOffset);
    }
    
    QTextDocument * textDocument() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textDocument"));
        if(func)
        {
            return cpgf::fromVariant<QTextDocument * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextEdit::textDocument();
    }
    QTextDocument * super_textDocument() const
    {
        return QAccessibleTextEdit::textDocument();
    }
    
    QRect characterRect(int offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QAccessibleTextWidget::characterRect(offset);
    }
    QRect super_characterRect(int offset) const
    {
        return QAccessibleTextWidget::characterRect(offset);
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
        return QAccessibleTextWidget::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
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
        QAccessibleTextWidget::replaceText(startOffset, endOffset, text);
    }
    void super_replaceText(int startOffset, int endOffset, const QString & text)
    {
        QAccessibleTextWidget::replaceText(startOffset, endOffset, text);
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
        QAccessibleTextWidget::addSelection(startOffset, endOffset);
    }
    void super_addSelection(int startOffset, int endOffset)
    {
        QAccessibleTextWidget::addSelection(startOffset, endOffset);
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
        return QAccessibleTextEdit::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleTextEdit::state();
    }
    
    int selectionCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextWidget::selectionCount();
    }
    int super_selectionCount() const
    {
        return QAccessibleTextWidget::selectionCount();
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
    
    QPoint scrollBarPosition() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollBarPosition"));
        if(func)
        {
            return cpgf::fromVariant<QPoint >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextEdit::scrollBarPosition();
    }
    QPoint super_scrollBarPosition() const
    {
        return QAccessibleTextEdit::scrollBarPosition();
    }
    
    void setTextCursor(const QTextCursor & textCursor)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTextCursor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, textCursor);
            return;
        }
        QAccessibleTextEdit::setTextCursor(textCursor);
    }
    void super_setTextCursor(const QTextCursor & textCursor)
    {
        QAccessibleTextEdit::setTextCursor(textCursor);
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleTextEdit::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleTextEdit::setText(t, text);
    }
    
    void removeSelection(int selectionIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex);
            return;
        }
        QAccessibleTextWidget::removeSelection(selectionIndex);
    }
    void super_removeSelection(int selectionIndex)
    {
        QAccessibleTextWidget::removeSelection(selectionIndex);
    }
    
    QTextCursor textCursorForRange(int startOffset, int endOffset) const
    {
        return QAccessibleTextWidget::textCursorForRange(startOffset, endOffset);
    }
    
    void insertText(int offset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, text);
            return;
        }
        QAccessibleTextWidget::insertText(offset, text);
    }
    void super_insertText(int offset, const QString & text)
    {
        QAccessibleTextWidget::insertText(offset, text);
    }
    
    QWidget * viewport() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewport"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextEdit::viewport();
    }
    QWidget * super_viewport() const
    {
        return QAccessibleTextEdit::viewport();
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleTextEdit::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleTextEdit::interface_cast(t);
    }
    
    QString text(int startOffset, int endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset).getValue());
        }
        return QAccessibleTextWidget::text(startOffset, endOffset);
    }
    QString super_text(int startOffset, int endOffset) const
    {
        return QAccessibleTextWidget::text(startOffset, endOffset);
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
        QAccessibleTextWidget::setSelection(selectionIndex, startOffset, endOffset);
    }
    void super_setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        QAccessibleTextWidget::setSelection(selectionIndex, startOffset, endOffset);
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
    
    QTextCursor textCursor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textCursor"));
        if(func)
        {
            return cpgf::fromVariant<QTextCursor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextEdit::textCursor();
    }
    QTextCursor super_textCursor() const
    {
        return QAccessibleTextEdit::textCursor();
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
    
    QString textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textBeforeOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleTextWidget::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void deleteText(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("deleteText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        QAccessibleTextWidget::deleteText(startOffset, endOffset);
    }
    void super_deleteText(int startOffset, int endOffset)
    {
        QAccessibleTextWidget::deleteText(startOffset, endOffset);
    }
    
    QString textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAtOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleTextWidget::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void scrollToSubstring(int startIndex, int endIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollToSubstring"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startIndex, endIndex);
            return;
        }
        QAccessibleTextEdit::scrollToSubstring(startIndex, endIndex);
    }
    void super_scrollToSubstring(int startIndex, int endIndex)
    {
        QAccessibleTextEdit::scrollToSubstring(startIndex, endIndex);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("textEdit", (QTextEdit * (D::ClassType::*) () const)&D::ClassType::textEdit);
        _d.CPGF_MD_TEMPLATE _method("textDocument", (QTextDocument * (D::ClassType::*) () const)&D::ClassType::textDocument);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("scrollBarPosition", (QPoint (D::ClassType::*) () const)&D::ClassType::scrollBarPosition);
        _d.CPGF_MD_TEMPLATE _method("setTextCursor", (void (D::ClassType::*) (const QTextCursor &))&D::ClassType::setTextCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("textCursorForRange", (QTextCursor (D::ClassType::*) (int, int) const)&D::ClassType::textCursorForRange);
        _d.CPGF_MD_TEMPLATE _method("viewport", (QWidget * (D::ClassType::*) () const)&D::ClassType::viewport);
        _d.CPGF_MD_TEMPLATE _method("textCursor", (QTextCursor (D::ClassType::*) () const)&D::ClassType::textCursor);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_selection", (void (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_selection);
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_setCursorPosition", (void (D::ClassType::*) (int))&D::ClassType::super_setCursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_characterCount", (int (D::ClassType::*) () const)&D::ClassType::super_characterCount);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_cursorPosition", (int (D::ClassType::*) () const)&D::ClassType::super_cursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_offsetAtPoint", (int (D::ClassType::*) (const QPoint &) const)&D::ClassType::super_offsetAtPoint);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_attributes", (QString (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_attributes);
        _d.CPGF_MD_TEMPLATE _method("super_textDocument", (QTextDocument * (D::ClassType::*) () const)&D::ClassType::super_textDocument);
        _d.CPGF_MD_TEMPLATE _method("super_characterRect", (QRect (D::ClassType::*) (int) const)&D::ClassType::super_characterRect);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_textAfterOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAfterOffset);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_replaceText", (void (D::ClassType::*) (int, int, const QString &))&D::ClassType::super_replaceText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_addSelection", (void (D::ClassType::*) (int, int))&D::ClassType::super_addSelection);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_selectionCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectionCount);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_scrollBarPosition", (QPoint (D::ClassType::*) () const)&D::ClassType::super_scrollBarPosition);
        _d.CPGF_MD_TEMPLATE _method("super_setTextCursor", (void (D::ClassType::*) (const QTextCursor &))&D::ClassType::super_setTextCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_removeSelection", (void (D::ClassType::*) (int))&D::ClassType::super_removeSelection);
        _d.CPGF_MD_TEMPLATE _method("super_insertText", (void (D::ClassType::*) (int, const QString &))&D::ClassType::super_insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_viewport", (QWidget * (D::ClassType::*) () const)&D::ClassType::super_viewport);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (int, int) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_setSelection", (void (D::ClassType::*) (int, int, int))&D::ClassType::super_setSelection);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_textCursor", (QTextCursor (D::ClassType::*) () const)&D::ClassType::super_textCursor);
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
void buildMetaClass_QAccessibleTextEditWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTextEditWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTextEdit<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTextWidget(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("selection", &D::ClassType::selection);
    _d.CPGF_MD_TEMPLATE _method("selectionCount", &D::ClassType::selectionCount);
    _d.CPGF_MD_TEMPLATE _method("addSelection", &D::ClassType::addSelection);
    _d.CPGF_MD_TEMPLATE _method("removeSelection", &D::ClassType::removeSelection);
    _d.CPGF_MD_TEMPLATE _method("setSelection", &D::ClassType::setSelection);
    _d.CPGF_MD_TEMPLATE _method("cursorPosition", &D::ClassType::cursorPosition);
    _d.CPGF_MD_TEMPLATE _method("setCursorPosition", &D::ClassType::setCursorPosition);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("textBeforeOffset", &D::ClassType::textBeforeOffset);
    _d.CPGF_MD_TEMPLATE _method("textAfterOffset", &D::ClassType::textAfterOffset);
    _d.CPGF_MD_TEMPLATE _method("textAtOffset", &D::ClassType::textAtOffset);
    _d.CPGF_MD_TEMPLATE _method("characterCount", &D::ClassType::characterCount);
    _d.CPGF_MD_TEMPLATE _method("characterRect", &D::ClassType::characterRect);
    _d.CPGF_MD_TEMPLATE _method("offsetAtPoint", &D::ClassType::offsetAtPoint);
    _d.CPGF_MD_TEMPLATE _method("attributes", &D::ClassType::attributes);
    _d.CPGF_MD_TEMPLATE _method("deleteText", &D::ClassType::deleteText);
    _d.CPGF_MD_TEMPLATE _method("insertText", &D::ClassType::insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("replaceText", &D::ClassType::replaceText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
}


class QAccessibleTextWidgetWrapper : public QAccessibleTextWidget, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTextWidgetWrapper(QWidget * o, QAccessible::Role r = QAccessible::EditableText, const QString & name = QString())
        : QAccessibleTextWidget(o, r, name) {}
    
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
    
    void selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleTextWidget::selection(selectionIndex, startOffset, endOffset);
    }
    void super_selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        QAccessibleTextWidget::selection(selectionIndex, startOffset, endOffset);
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
    
    void setCursorPosition(int position)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCursorPosition"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, position);
            return;
        }
        QAccessibleTextWidget::setCursorPosition(position);
    }
    void super_setCursorPosition(int position)
    {
        QAccessibleTextWidget::setCursorPosition(position);
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
        return QAccessibleTextWidget::characterCount();
    }
    int super_characterCount() const
    {
        return QAccessibleTextWidget::characterCount();
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
        return QAccessibleTextWidget::cursorPosition();
    }
    int super_cursorPosition() const
    {
        return QAccessibleTextWidget::cursorPosition();
    }
    
    int offsetAtPoint(const QPoint & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("offsetAtPoint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QAccessibleTextWidget::offsetAtPoint(point);
    }
    int super_offsetAtPoint(const QPoint & point) const
    {
        return QAccessibleTextWidget::offsetAtPoint(point);
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
        return QAccessibleTextWidget::attributes(offset, startOffset, endOffset);
    }
    QString super_attributes(int offset, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::attributes(offset, startOffset, endOffset);
    }
    
    QTextDocument * textDocument() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textDocument"));
        if(func)
        {
            return cpgf::fromVariant<QTextDocument * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QTextDocument * super_textDocument() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QRect characterRect(int offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QAccessibleTextWidget::characterRect(offset);
    }
    QRect super_characterRect(int offset) const
    {
        return QAccessibleTextWidget::characterRect(offset);
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
        return QAccessibleTextWidget::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    QObject * parentObject() const
    {
        return QAccessibleWidget::parentObject();
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
        QAccessibleTextWidget::replaceText(startOffset, endOffset, text);
    }
    void super_replaceText(int startOffset, int endOffset, const QString & text)
    {
        QAccessibleTextWidget::replaceText(startOffset, endOffset, text);
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
        QAccessibleTextWidget::addSelection(startOffset, endOffset);
    }
    void super_addSelection(int startOffset, int endOffset)
    {
        QAccessibleTextWidget::addSelection(startOffset, endOffset);
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
        return QAccessibleTextWidget::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleTextWidget::state();
    }
    
    int selectionCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextWidget::selectionCount();
    }
    int super_selectionCount() const
    {
        return QAccessibleTextWidget::selectionCount();
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
    
    QPoint scrollBarPosition() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollBarPosition"));
        if(func)
        {
            return cpgf::fromVariant<QPoint >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTextWidget::scrollBarPosition();
    }
    QPoint super_scrollBarPosition() const
    {
        return QAccessibleTextWidget::scrollBarPosition();
    }
    
    void setTextCursor(const QTextCursor & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTextCursor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setTextCursor(const QTextCursor & __arg0)
    {
        throw std::runtime_error("Abstract method");
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
        QAccessibleTextWidget::removeSelection(selectionIndex);
    }
    void super_removeSelection(int selectionIndex)
    {
        QAccessibleTextWidget::removeSelection(selectionIndex);
    }
    
    QTextCursor textCursorForRange(int startOffset, int endOffset) const
    {
        return QAccessibleTextWidget::textCursorForRange(startOffset, endOffset);
    }
    
    void insertText(int offset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, text);
            return;
        }
        QAccessibleTextWidget::insertText(offset, text);
    }
    void super_insertText(int offset, const QString & text)
    {
        QAccessibleTextWidget::insertText(offset, text);
    }
    
    QWidget * viewport() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewport"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QWidget * super_viewport() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleWidget::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleWidget::interface_cast(t);
    }
    
    QString text(int startOffset, int endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset).getValue());
        }
        return QAccessibleTextWidget::text(startOffset, endOffset);
    }
    QString super_text(int startOffset, int endOffset) const
    {
        return QAccessibleTextWidget::text(startOffset, endOffset);
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
        QAccessibleTextWidget::setSelection(selectionIndex, startOffset, endOffset);
    }
    void super_setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        QAccessibleTextWidget::setSelection(selectionIndex, startOffset, endOffset);
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
    
    QTextCursor textCursor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textCursor"));
        if(func)
        {
            return cpgf::fromVariant<QTextCursor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QTextCursor super_textCursor() const
    {
        throw std::runtime_error("Abstract method");
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
    
    QString textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textBeforeOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleTextWidget::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void deleteText(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("deleteText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        QAccessibleTextWidget::deleteText(startOffset, endOffset);
    }
    void super_deleteText(int startOffset, int endOffset)
    {
        QAccessibleTextWidget::deleteText(startOffset, endOffset);
    }
    
    QString textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAtOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleTextWidget::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextWidget::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void scrollToSubstring(int startIndex, int endIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollToSubstring"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startIndex, endIndex);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_scrollToSubstring(int startIndex, int endIndex)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("textDocument", (QTextDocument * (D::ClassType::*) () const)&D::ClassType::textDocument);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("scrollBarPosition", (QPoint (D::ClassType::*) () const)&D::ClassType::scrollBarPosition);
        _d.CPGF_MD_TEMPLATE _method("setTextCursor", (void (D::ClassType::*) (const QTextCursor &))&D::ClassType::setTextCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("textCursorForRange", (QTextCursor (D::ClassType::*) (int, int) const)&D::ClassType::textCursorForRange);
        _d.CPGF_MD_TEMPLATE _method("viewport", (QWidget * (D::ClassType::*) () const)&D::ClassType::viewport);
        _d.CPGF_MD_TEMPLATE _method("textCursor", (QTextCursor (D::ClassType::*) () const)&D::ClassType::textCursor);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_selection", (void (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_selection);
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_setCursorPosition", (void (D::ClassType::*) (int))&D::ClassType::super_setCursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_characterCount", (int (D::ClassType::*) () const)&D::ClassType::super_characterCount);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_cursorPosition", (int (D::ClassType::*) () const)&D::ClassType::super_cursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_offsetAtPoint", (int (D::ClassType::*) (const QPoint &) const)&D::ClassType::super_offsetAtPoint);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_attributes", (QString (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_attributes);
        _d.CPGF_MD_TEMPLATE _method("super_textDocument", (QTextDocument * (D::ClassType::*) () const)&D::ClassType::super_textDocument);
        _d.CPGF_MD_TEMPLATE _method("super_characterRect", (QRect (D::ClassType::*) (int) const)&D::ClassType::super_characterRect);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_textAfterOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAfterOffset);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_replaceText", (void (D::ClassType::*) (int, int, const QString &))&D::ClassType::super_replaceText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_addSelection", (void (D::ClassType::*) (int, int))&D::ClassType::super_addSelection);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_selectionCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectionCount);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_scrollBarPosition", (QPoint (D::ClassType::*) () const)&D::ClassType::super_scrollBarPosition);
        _d.CPGF_MD_TEMPLATE _method("super_setTextCursor", (void (D::ClassType::*) (const QTextCursor &))&D::ClassType::super_setTextCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_removeSelection", (void (D::ClassType::*) (int))&D::ClassType::super_removeSelection);
        _d.CPGF_MD_TEMPLATE _method("super_insertText", (void (D::ClassType::*) (int, const QString &))&D::ClassType::super_insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_viewport", (QWidget * (D::ClassType::*) () const)&D::ClassType::super_viewport);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (int, int) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_setSelection", (void (D::ClassType::*) (int, int, int))&D::ClassType::super_setSelection);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_textCursor", (QTextCursor (D::ClassType::*) () const)&D::ClassType::super_textCursor);
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
void buildMetaClass_QAccessibleTextWidgetWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *, QAccessible::Role, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QString()))
        ._default(copyVariantFromCopyable(QAccessible::EditableText))
    ;
    
    QAccessibleTextWidgetWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTextWidget<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleToolBox(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
}


class QAccessibleToolBoxWrapper : public QAccessibleToolBox, public cpgf::GScriptWrapper {
public:
    
    QAccessibleToolBoxWrapper(QWidget * widget)
        : QAccessibleToolBox(widget) {}
    
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
    
    QToolBox * toolBox() const
    {
        return QAccessibleToolBox::toolBox();
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
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleWidget::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleWidget::interface_cast(t);
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
        _d.CPGF_MD_TEMPLATE _method("toolBox", (QToolBox * (D::ClassType::*) () const)&D::ClassType::toolBox);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
    }
};


template <typename D>
void buildMetaClass_QAccessibleToolBoxWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleToolBoxWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleToolBox<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

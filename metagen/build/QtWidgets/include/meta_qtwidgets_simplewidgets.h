// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_SIMPLEWIDGETS_H
#define CPGF_META_QTWIDGETS_SIMPLEWIDGETS_H


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
void buildMetaClass_QAccessibleButton(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("role", &D::ClassType::role);
    _d.CPGF_MD_TEMPLATE _method("actionNames", &D::ClassType::actionNames);
    _d.CPGF_MD_TEMPLATE _method("doAction", &D::ClassType::doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("keyBindingsForAction", &D::ClassType::keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


class QAccessibleButtonWrapper : public QAccessibleButton, public cpgf::GScriptWrapper {
public:
    
    QAccessibleButtonWrapper(QWidget * w)
        : QAccessibleButton(w) {}
    
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
        return QAccessibleButton::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleButton::text(t);
    }
    
    QAbstractButton * button() const
    {
        return QAccessibleButton::button();
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
        QAccessibleButton::doAction(actionName);
    }
    void super_doAction(const QString & actionName)
    {
        QAccessibleButton::doAction(actionName);
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
        return QAccessibleButton::keyBindingsForAction(actionName);
    }
    QStringList super_keyBindingsForAction(const QString & actionName) const
    {
        return QAccessibleButton::keyBindingsForAction(actionName);
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
        return QAccessibleButton::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleButton::rect();
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
        return QAccessibleButton::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleButton::role();
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
        return QAccessibleButton::actionNames();
    }
    QStringList super_actionNames() const
    {
        return QAccessibleButton::actionNames();
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
        return QAccessibleButton::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleButton::state();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("button", (QAbstractButton * (D::ClassType::*) () const)&D::ClassType::button);
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
void buildMetaClass_QAccessibleButtonWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleButtonWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleButton<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleDisplay(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *, QAccessible::Role)>()
        ._default(copyVariantFromCopyable(QAccessible::StaticText))
    ;
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("role", &D::ClassType::role);
    _d.CPGF_MD_TEMPLATE _method("relations", &D::ClassType::relations)
        ._default(copyVariantFromCopyable(QAccessible::AllRelations))
    ;
    _d.CPGF_MD_TEMPLATE _method("interface_cast", &D::ClassType::interface_cast);
    _d.CPGF_MD_TEMPLATE _method("imageDescription", &D::ClassType::imageDescription);
    _d.CPGF_MD_TEMPLATE _method("imageSize", &D::ClassType::imageSize);
    _d.CPGF_MD_TEMPLATE _method("imagePosition", &D::ClassType::imagePosition);
}


class QAccessibleDisplayWrapper : public QAccessibleDisplay, public cpgf::GScriptWrapper {
public:
    
    QAccessibleDisplayWrapper(QWidget * w, QAccessible::Role role = QAccessible::StaticText)
        : QAccessibleDisplay(w, role) {}
    
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
        return QAccessibleDisplay::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleDisplay::text(t);
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
    
    QSize imageSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("imageSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleDisplay::imageSize();
    }
    QSize super_imageSize() const
    {
        return QAccessibleDisplay::imageSize();
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
        return QAccessibleDisplay::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleDisplay::interface_cast(t);
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
    
    QString imageDescription() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("imageDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleDisplay::imageDescription();
    }
    QString super_imageDescription() const
    {
        return QAccessibleDisplay::imageDescription();
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
    
    QPoint imagePosition() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("imagePosition"));
        if(func)
        {
            return cpgf::fromVariant<QPoint >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleDisplay::imagePosition();
    }
    QPoint super_imagePosition() const
    {
        return QAccessibleDisplay::imagePosition();
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
        return QAccessibleDisplay::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleDisplay::role();
    }
    
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("relations"));
        if(func)
        {
            return cpgf::fromVariant<QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, match).getValue());
        }
        return QAccessibleDisplay::relations(match);
    }
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > super_relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        return QAccessibleDisplay::relations(match);
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
        _d.CPGF_MD_TEMPLATE _method("super_imageSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_imageSize);
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
        _d.CPGF_MD_TEMPLATE _method("super_imageDescription", (QString (D::ClassType::*) () const)&D::ClassType::super_imageDescription);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_imagePosition", (QPoint (D::ClassType::*) () const)&D::ClassType::super_imagePosition);
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
void buildMetaClass_QAccessibleDisplayWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleDisplayWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleDisplay<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleGroupBox(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("role", &D::ClassType::role);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("relations", &D::ClassType::relations)
        ._default(copyVariantFromCopyable(QAccessible::AllRelations))
    ;
    _d.CPGF_MD_TEMPLATE _method("actionNames", &D::ClassType::actionNames);
    _d.CPGF_MD_TEMPLATE _method("doAction", &D::ClassType::doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("keyBindingsForAction", &D::ClassType::keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


class QAccessibleGroupBoxWrapper : public QAccessibleGroupBox, public cpgf::GScriptWrapper {
public:
    
    QAccessibleGroupBoxWrapper(QWidget * w)
        : QAccessibleGroupBox(w) {}
    
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
        return QAccessibleGroupBox::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleGroupBox::text(t);
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
        QAccessibleGroupBox::doAction(actionName);
    }
    void super_doAction(const QString & actionName)
    {
        QAccessibleGroupBox::doAction(actionName);
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
    
    QStringList keyBindingsForAction(const QString & __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyBindingsForAction"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleGroupBox::keyBindingsForAction(__arg0);
    }
    QStringList super_keyBindingsForAction(const QString & __arg0) const
    {
        return QAccessibleGroupBox::keyBindingsForAction(__arg0);
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
        return QAccessibleGroupBox::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleGroupBox::role();
    }
    
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("relations"));
        if(func)
        {
            return cpgf::fromVariant<QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, match).getValue());
        }
        return QAccessibleGroupBox::relations(match);
    }
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > super_relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        return QAccessibleGroupBox::relations(match);
    }
    
    QStringList actionNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionNames"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleGroupBox::actionNames();
    }
    QStringList super_actionNames() const
    {
        return QAccessibleGroupBox::actionNames();
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
        return QAccessibleGroupBox::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleGroupBox::state();
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
void buildMetaClass_QAccessibleGroupBoxWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleGroupBoxWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleGroupBox<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleLineEdit(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("interface_cast", &D::ClassType::interface_cast);
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


class QAccessibleLineEditWrapper : public QAccessibleLineEdit, public cpgf::GScriptWrapper {
public:
    
    QAccessibleLineEditWrapper(QWidget * o, const QString & name = QString())
        : QAccessibleLineEdit(o, name) {}
    
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
        return QAccessibleLineEdit::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleLineEdit::text(t);
    }
    
    void selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleLineEdit::selection(selectionIndex, startOffset, endOffset);
    }
    void super_selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        QAccessibleLineEdit::selection(selectionIndex, startOffset, endOffset);
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleLineEdit::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleLineEdit::setText(t, text);
    }
    
    void removeSelection(int selectionIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex);
            return;
        }
        QAccessibleLineEdit::removeSelection(selectionIndex);
    }
    void super_removeSelection(int selectionIndex)
    {
        QAccessibleLineEdit::removeSelection(selectionIndex);
    }
    
    QLineEdit * lineEdit() const
    {
        return QAccessibleLineEdit::lineEdit();
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
        QAccessibleLineEdit::setCursorPosition(position);
    }
    void super_setCursorPosition(int position)
    {
        QAccessibleLineEdit::setCursorPosition(position);
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
        return QAccessibleLineEdit::characterCount();
    }
    int super_characterCount() const
    {
        return QAccessibleLineEdit::characterCount();
    }
    
    void insertText(int offset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, text);
            return;
        }
        QAccessibleLineEdit::insertText(offset, text);
    }
    void super_insertText(int offset, const QString & text)
    {
        QAccessibleLineEdit::insertText(offset, text);
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
        return QAccessibleLineEdit::cursorPosition();
    }
    int super_cursorPosition() const
    {
        return QAccessibleLineEdit::cursorPosition();
    }
    
    int offsetAtPoint(const QPoint & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("offsetAtPoint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QAccessibleLineEdit::offsetAtPoint(point);
    }
    int super_offsetAtPoint(const QPoint & point) const
    {
        return QAccessibleLineEdit::offsetAtPoint(point);
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
        return QAccessibleLineEdit::attributes(offset, startOffset, endOffset);
    }
    QString super_attributes(int offset, int * startOffset, int * endOffset) const
    {
        return QAccessibleLineEdit::attributes(offset, startOffset, endOffset);
    }
    
    QRect characterRect(int offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QAccessibleLineEdit::characterRect(offset);
    }
    QRect super_characterRect(int offset) const
    {
        return QAccessibleLineEdit::characterRect(offset);
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleLineEdit::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleLineEdit::interface_cast(t);
    }
    
    QString text(int startOffset, int endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset).getValue());
        }
        return QAccessibleLineEdit::text(startOffset, endOffset);
    }
    QString super_text(int startOffset, int endOffset) const
    {
        return QAccessibleLineEdit::text(startOffset, endOffset);
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
    
    QString textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAfterOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleLineEdit::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleLineEdit::textAfterOffset(offset, boundaryType, startOffset, endOffset);
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
        QAccessibleLineEdit::setSelection(selectionIndex, startOffset, endOffset);
    }
    void super_setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        QAccessibleLineEdit::setSelection(selectionIndex, startOffset, endOffset);
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
    
    void replaceText(int startOffset, int endOffset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("replaceText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset, text);
            return;
        }
        QAccessibleLineEdit::replaceText(startOffset, endOffset, text);
    }
    void super_replaceText(int startOffset, int endOffset, const QString & text)
    {
        QAccessibleLineEdit::replaceText(startOffset, endOffset, text);
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
        QAccessibleLineEdit::addSelection(startOffset, endOffset);
    }
    void super_addSelection(int startOffset, int endOffset)
    {
        QAccessibleLineEdit::addSelection(startOffset, endOffset);
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
        return QAccessibleLineEdit::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleLineEdit::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void deleteText(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("deleteText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        QAccessibleLineEdit::deleteText(startOffset, endOffset);
    }
    void super_deleteText(int startOffset, int endOffset)
    {
        QAccessibleLineEdit::deleteText(startOffset, endOffset);
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
    
    QString textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAtOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleLineEdit::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleLineEdit::textAtOffset(offset, boundaryType, startOffset, endOffset);
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
        return QAccessibleLineEdit::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleLineEdit::state();
    }
    
    int selectionCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleLineEdit::selectionCount();
    }
    int super_selectionCount() const
    {
        return QAccessibleLineEdit::selectionCount();
    }
    
    void scrollToSubstring(int startIndex, int endIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollToSubstring"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startIndex, endIndex);
            return;
        }
        QAccessibleLineEdit::scrollToSubstring(startIndex, endIndex);
    }
    void super_scrollToSubstring(int startIndex, int endIndex)
    {
        QAccessibleLineEdit::scrollToSubstring(startIndex, endIndex);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("lineEdit", (QLineEdit * (D::ClassType::*) () const)&D::ClassType::lineEdit);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_selection", (void (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_selection);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_removeSelection", (void (D::ClassType::*) (int))&D::ClassType::super_removeSelection);
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_setCursorPosition", (void (D::ClassType::*) (int))&D::ClassType::super_setCursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_characterCount", (int (D::ClassType::*) () const)&D::ClassType::super_characterCount);
        _d.CPGF_MD_TEMPLATE _method("super_insertText", (void (D::ClassType::*) (int, const QString &))&D::ClassType::super_insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_cursorPosition", (int (D::ClassType::*) () const)&D::ClassType::super_cursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_offsetAtPoint", (int (D::ClassType::*) (const QPoint &) const)&D::ClassType::super_offsetAtPoint);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_attributes", (QString (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_attributes);
        _d.CPGF_MD_TEMPLATE _method("super_characterRect", (QRect (D::ClassType::*) (int) const)&D::ClassType::super_characterRect);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (int, int) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_textAfterOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAfterOffset);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_setSelection", (void (D::ClassType::*) (int, int, int))&D::ClassType::super_setSelection);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_replaceText", (void (D::ClassType::*) (int, int, const QString &))&D::ClassType::super_replaceText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_addSelection", (void (D::ClassType::*) (int, int))&D::ClassType::super_addSelection);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_textBeforeOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textBeforeOffset);
        _d.CPGF_MD_TEMPLATE _method("super_deleteText", (void (D::ClassType::*) (int, int))&D::ClassType::super_deleteText);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_textAtOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAtOffset);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_selectionCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectionCount);
        _d.CPGF_MD_TEMPLATE _method("super_scrollToSubstring", (void (D::ClassType::*) (int, int))&D::ClassType::super_scrollToSubstring);
    }
};


template <typename D>
void buildMetaClass_QAccessibleLineEditWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleLineEditWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleLineEdit<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleProgressBar(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("interface_cast", &D::ClassType::interface_cast);
    _d.CPGF_MD_TEMPLATE _method("currentValue", &D::ClassType::currentValue);
    _d.CPGF_MD_TEMPLATE _method("maximumValue", &D::ClassType::maximumValue);
    _d.CPGF_MD_TEMPLATE _method("minimumValue", &D::ClassType::minimumValue);
    _d.CPGF_MD_TEMPLATE _method("minimumStepSize", &D::ClassType::minimumStepSize);
    _d.CPGF_MD_TEMPLATE _method("setCurrentValue", &D::ClassType::setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


class QAccessibleProgressBarWrapper : public QAccessibleProgressBar, public cpgf::GScriptWrapper {
public:
    
    QAccessibleProgressBarWrapper(QWidget * o)
        : QAccessibleProgressBar(o) {}
    
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
        return QAccessibleDisplay::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleDisplay::text(t);
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
    
    QSize imageSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("imageSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleDisplay::imageSize();
    }
    QSize super_imageSize() const
    {
        return QAccessibleDisplay::imageSize();
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
    
    void setCurrentValue(const QVariant & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCurrentValue"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QAccessibleProgressBar::setCurrentValue(__arg0);
    }
    void super_setCurrentValue(const QVariant & __arg0)
    {
        QAccessibleProgressBar::setCurrentValue(__arg0);
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
        return QAccessibleProgressBar::minimumStepSize();
    }
    QVariant super_minimumStepSize() const
    {
        return QAccessibleProgressBar::minimumStepSize();
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleProgressBar::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleProgressBar::interface_cast(t);
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
        return QAccessibleProgressBar::maximumValue();
    }
    QVariant super_maximumValue() const
    {
        return QAccessibleProgressBar::maximumValue();
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
    
    QString imageDescription() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("imageDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleDisplay::imageDescription();
    }
    QString super_imageDescription() const
    {
        return QAccessibleDisplay::imageDescription();
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
    
    QPoint imagePosition() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("imagePosition"));
        if(func)
        {
            return cpgf::fromVariant<QPoint >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleDisplay::imagePosition();
    }
    QPoint super_imagePosition() const
    {
        return QAccessibleDisplay::imagePosition();
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
    
    QVariant minimumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleProgressBar::minimumValue();
    }
    QVariant super_minimumValue() const
    {
        return QAccessibleProgressBar::minimumValue();
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
        return QAccessibleDisplay::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleDisplay::role();
    }
    
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("relations"));
        if(func)
        {
            return cpgf::fromVariant<QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, match).getValue());
        }
        return QAccessibleDisplay::relations(match);
    }
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > super_relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        return QAccessibleDisplay::relations(match);
    }
    
    QVariant currentValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleProgressBar::currentValue();
    }
    QVariant super_currentValue() const
    {
        return QAccessibleProgressBar::currentValue();
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
    
    QProgressBar * progressBar() const
    {
        return QAccessibleProgressBar::progressBar();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("widget", (QWidget * (D::ClassType::*) () const)&D::ClassType::widget);
        _d.CPGF_MD_TEMPLATE _method("progressBar", (QProgressBar * (D::ClassType::*) () const)&D::ClassType::progressBar);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_imageSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_imageSize);
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
        _d.CPGF_MD_TEMPLATE _method("super_imageDescription", (QString (D::ClassType::*) () const)&D::ClassType::super_imageDescription);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_imagePosition", (QPoint (D::ClassType::*) () const)&D::ClassType::super_imagePosition);
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
void buildMetaClass_QAccessibleProgressBarWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleProgressBarWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleProgressBar<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleToolButton(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("role", &D::ClassType::role);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
    _d.CPGF_MD_TEMPLATE _method("actionNames", &D::ClassType::actionNames);
    _d.CPGF_MD_TEMPLATE _method("doAction", &D::ClassType::doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


class QAccessibleToolButtonWrapper : public QAccessibleToolButton, public cpgf::GScriptWrapper {
public:
    
    QAccessibleToolButtonWrapper(QWidget * w)
        : QAccessibleToolButton(w) {}
    
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
        return QAccessibleButton::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleButton::text(t);
    }
    
    QAbstractButton * button() const
    {
        return QAccessibleButton::button();
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
        QAccessibleToolButton::doAction(actionName);
    }
    void super_doAction(const QString & actionName)
    {
        QAccessibleToolButton::doAction(actionName);
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
    
    bool isSplitButton() const
    {
        return QAccessibleToolButton::isSplitButton();
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
        return QAccessibleButton::keyBindingsForAction(actionName);
    }
    QStringList super_keyBindingsForAction(const QString & actionName) const
    {
        return QAccessibleButton::keyBindingsForAction(actionName);
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
        return QAccessibleToolButton::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleToolButton::childCount();
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
        return QAccessibleButton::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleButton::rect();
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleToolButton::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleToolButton::child(index);
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
        return QAccessibleToolButton::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleToolButton::role();
    }
    
    QToolButton * toolButton() const
    {
        return QAccessibleToolButton::toolButton();
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
        return QAccessibleToolButton::actionNames();
    }
    QStringList super_actionNames() const
    {
        return QAccessibleToolButton::actionNames();
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
        return QAccessibleToolButton::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleToolButton::state();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("button", (QAbstractButton * (D::ClassType::*) () const)&D::ClassType::button);
        _d.CPGF_MD_TEMPLATE _method("isSplitButton", (bool (D::ClassType::*) () const)&D::ClassType::isSplitButton);
        _d.CPGF_MD_TEMPLATE _method("parentObject", (QObject * (D::ClassType::*) () const)&D::ClassType::parentObject);
        _d.CPGF_MD_TEMPLATE _method("addControllingSignal", (void (D::ClassType::*) (const QString &))&D::ClassType::addControllingSignal, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("toolButton", (QToolButton * (D::ClassType::*) () const)&D::ClassType::toolButton);
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
void buildMetaClass_QAccessibleToolButtonWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleToolButtonWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleToolButton<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleWindowContainer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
}


class QAccessibleWindowContainerWrapper : public QAccessibleWindowContainer, public cpgf::GScriptWrapper {
public:
    
    QAccessibleWindowContainerWrapper(QWidget * w)
        : QAccessibleWindowContainer(w) {}
    
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
        return QAccessibleWindowContainer::indexOfChild(child);
    }
    int super_indexOfChild(const QAccessibleInterface * child) const
    {
        return QAccessibleWindowContainer::indexOfChild(child);
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
        return QAccessibleWindowContainer::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleWindowContainer::childCount();
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
    
    QAccessibleInterface * child(int i) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, i).getValue());
        }
        return QAccessibleWindowContainer::child(i);
    }
    QAccessibleInterface * super_child(int i) const
    {
        return QAccessibleWindowContainer::child(i);
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
void buildMetaClass_QAccessibleWindowContainerWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleWindowContainerWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleWindowContainer<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

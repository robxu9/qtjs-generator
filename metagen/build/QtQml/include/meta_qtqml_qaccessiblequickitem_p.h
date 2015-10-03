// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QACCESSIBLEQUICKITEM_P_H
#define CPGF_META_QTQML_QACCESSIBLEQUICKITEM_P_H


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
void buildMetaClass_Global_qaccessiblequickitem_p(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("itemScreenRect", (QRect (*) (QQuickItem *))&itemScreenRect);
    _d.CPGF_MD_TEMPLATE _method("accessibleUnignoredChildren", (QList< QQuickItem * > (*) (QQuickItem *, bool))&accessibleUnignoredChildren)
        ._default(copyVariantFromCopyable(false))
    ;
}


template <typename D>
void buildMetaClass_QAccessibleQuickItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQuickItem *)>();
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("viewRect", &D::ClassType::viewRect);
    _d.CPGF_MD_TEMPLATE _method("clipsChildren", &D::ClassType::clipsChildren);
    _d.CPGF_MD_TEMPLATE _method("childAt", &D::ClassType::childAt);
    _d.CPGF_MD_TEMPLATE _method("parent", &D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("childItems", &D::ClassType::childItems);
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("role", &D::ClassType::role);
    _d.CPGF_MD_TEMPLATE _method("text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("isAccessible", &D::ClassType::isAccessible);
    _d.CPGF_MD_TEMPLATE _method("actionNames", &D::ClassType::actionNames);
    _d.CPGF_MD_TEMPLATE _method("doAction", &D::ClassType::doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("keyBindingsForAction", &D::ClassType::keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("currentValue", &D::ClassType::currentValue);
    _d.CPGF_MD_TEMPLATE _method("setCurrentValue", &D::ClassType::setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("maximumValue", &D::ClassType::maximumValue);
    _d.CPGF_MD_TEMPLATE _method("minimumValue", &D::ClassType::minimumValue);
    _d.CPGF_MD_TEMPLATE _method("minimumStepSize", &D::ClassType::minimumStepSize);
    _d.CPGF_MD_TEMPLATE _method("selection", &D::ClassType::selection);
    _d.CPGF_MD_TEMPLATE _method("selectionCount", &D::ClassType::selectionCount);
    _d.CPGF_MD_TEMPLATE _method("addSelection", &D::ClassType::addSelection);
    _d.CPGF_MD_TEMPLATE _method("removeSelection", &D::ClassType::removeSelection);
    _d.CPGF_MD_TEMPLATE _method("setSelection", &D::ClassType::setSelection);
    _d.CPGF_MD_TEMPLATE _method("cursorPosition", &D::ClassType::cursorPosition);
    _d.CPGF_MD_TEMPLATE _method("setCursorPosition", &D::ClassType::setCursorPosition);
    _d.CPGF_MD_TEMPLATE _method("text", (QString (D::ClassType::*) (int, int) const)&D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("textBeforeOffset", &D::ClassType::textBeforeOffset);
    _d.CPGF_MD_TEMPLATE _method("textAfterOffset", &D::ClassType::textAfterOffset);
    _d.CPGF_MD_TEMPLATE _method("textAtOffset", &D::ClassType::textAtOffset);
    _d.CPGF_MD_TEMPLATE _method("characterCount", &D::ClassType::characterCount);
    _d.CPGF_MD_TEMPLATE _method("characterRect", &D::ClassType::characterRect);
    _d.CPGF_MD_TEMPLATE _method("offsetAtPoint", &D::ClassType::offsetAtPoint);
    _d.CPGF_MD_TEMPLATE _method("scrollToSubstring", &D::ClassType::scrollToSubstring);
    _d.CPGF_MD_TEMPLATE _method("attributes", &D::ClassType::attributes);
    _d.CPGF_MD_TEMPLATE _method("textDocument", &D::ClassType::textDocument);
}


class QAccessibleQuickItemWrapper : public QAccessibleQuickItem, public cpgf::GScriptWrapper {
public:
    
    QAccessibleQuickItemWrapper(QQuickItem * item)
        : QAccessibleQuickItem(item) {}
    
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
    
    QString text(QAccessible::Text __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleQuickItem::text(__arg0);
    }
    QString super_text(QAccessible::Text __arg0) const
    {
        return QAccessibleQuickItem::text(__arg0);
    }
    
    void selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleQuickItem::selection(selectionIndex, startOffset, endOffset);
    }
    void super_selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        QAccessibleQuickItem::selection(selectionIndex, startOffset, endOffset);
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
        QAccessibleQuickItem::removeSelection(selectionIndex);
    }
    void super_removeSelection(int selectionIndex)
    {
        QAccessibleQuickItem::removeSelection(selectionIndex);
    }
    
    void doAction(const QString & actionName)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doAction"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName);
            return;
        }
        QAccessibleQuickItem::doAction(actionName);
    }
    void super_doAction(const QString & actionName)
    {
        QAccessibleQuickItem::doAction(actionName);
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
        QAccessibleQuickItem::setCurrentValue(value);
    }
    void super_setCurrentValue(const QVariant & value)
    {
        QAccessibleQuickItem::setCurrentValue(value);
    }
    
    QQuickItem * item() const
    {
        return QAccessibleQuickItem::item();
    }
    
    void setCursorPosition(int position)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCursorPosition"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, position);
            return;
        }
        QAccessibleQuickItem::setCursorPosition(position);
    }
    void super_setCursorPosition(int position)
    {
        QAccessibleQuickItem::setCursorPosition(position);
    }
    
    int indexOfChild(const QAccessibleInterface * iface) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, iface).getValue());
        }
        return QAccessibleQuickItem::indexOfChild(iface);
    }
    int super_indexOfChild(const QAccessibleInterface * iface) const
    {
        return QAccessibleQuickItem::indexOfChild(iface);
    }
    
    int characterCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleQuickItem::characterCount();
    }
    int super_characterCount() const
    {
        return QAccessibleQuickItem::characterCount();
    }
    
    QWindow * window() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("window"));
        if(func)
        {
            return cpgf::fromVariant<QWindow * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleInterface::window();
    }
    QWindow * super_window() const
    {
        return QAccessibleInterface::window();
    }
    
    QAccessibleInterface * parent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleQuickItem::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleQuickItem::parent();
    }
    
    int cursorPosition() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("cursorPosition"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleQuickItem::cursorPosition();
    }
    int super_cursorPosition() const
    {
        return QAccessibleQuickItem::cursorPosition();
    }
    
    int offsetAtPoint(const QPoint & __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("offsetAtPoint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleQuickItem::offsetAtPoint(__arg0);
    }
    int super_offsetAtPoint(const QPoint & __arg0) const
    {
        return QAccessibleQuickItem::offsetAtPoint(__arg0);
    }
    
    QColor foregroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("foregroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleInterface::foregroundColor();
    }
    QColor super_foregroundColor() const
    {
        return QAccessibleInterface::foregroundColor();
    }
    
    QVariant minimumStepSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumStepSize"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleQuickItem::minimumStepSize();
    }
    QVariant super_minimumStepSize() const
    {
        return QAccessibleQuickItem::minimumStepSize();
    }
    
    QString attributes(int __arg0, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("attributes"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, startOffset, endOffset).getValue());
        }
        return QAccessibleQuickItem::attributes(__arg0, startOffset, endOffset);
    }
    QString super_attributes(int __arg0, int * startOffset, int * endOffset) const
    {
        return QAccessibleQuickItem::attributes(__arg0, startOffset, endOffset);
    }
    
    QRect characterRect(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleQuickItem::characterRect(__arg0);
    }
    QRect super_characterRect(int __arg0) const
    {
        return QAccessibleQuickItem::characterRect(__arg0);
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleQuickItem::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleQuickItem::interface_cast(t);
    }
    
    QString text(int startOffset, int endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset).getValue());
        }
        return QAccessibleQuickItem::text(startOffset, endOffset);
    }
    QString super_text(int startOffset, int endOffset) const
    {
        return QAccessibleQuickItem::text(startOffset, endOffset);
    }
    
    QStringList keyBindingsForAction(const QString & actionName) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyBindingsForAction"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName).getValue());
        }
        return QAccessibleQuickItem::keyBindingsForAction(actionName);
    }
    QStringList super_keyBindingsForAction(const QString & actionName) const
    {
        return QAccessibleQuickItem::keyBindingsForAction(actionName);
    }
    
    QAccessibleInterface * focusChild() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusChild"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleInterface::focusChild();
    }
    QAccessibleInterface * super_focusChild() const
    {
        return QAccessibleInterface::focusChild();
    }
    
    QString textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAfterOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleQuickItem::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleQuickItem::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleQuickItem::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleQuickItem::childCount();
    }
    
    void setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        QAccessibleQuickItem::setSelection(selectionIndex, startOffset, endOffset);
    }
    void super_setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        QAccessibleQuickItem::setSelection(selectionIndex, startOffset, endOffset);
    }
    
    QVariant maximumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleQuickItem::maximumValue();
    }
    QVariant super_maximumValue() const
    {
        return QAccessibleQuickItem::maximumValue();
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleQuickItem::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleQuickItem::childAt(x, y);
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleObject::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleObject::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleQuickItem::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleQuickItem::rect();
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleQuickItem::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleQuickItem::child(index);
    }
    
    QColor backgroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("backgroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleInterface::backgroundColor();
    }
    QColor super_backgroundColor() const
    {
        return QAccessibleInterface::backgroundColor();
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
        QAccessibleQuickItem::addSelection(startOffset, endOffset);
    }
    void super_addSelection(int startOffset, int endOffset)
    {
        QAccessibleQuickItem::addSelection(startOffset, endOffset);
    }
    
    QVariant minimumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleQuickItem::minimumValue();
    }
    QVariant super_minimumValue() const
    {
        return QAccessibleQuickItem::minimumValue();
    }
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleQuickItem::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleQuickItem::role();
    }
    
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("relations"));
        if(func)
        {
            return cpgf::fromVariant<QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, match).getValue());
        }
        return QAccessibleInterface::relations(match);
    }
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > super_relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        return QAccessibleInterface::relations(match);
    }
    
    QVariant currentValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleQuickItem::currentValue();
    }
    QVariant super_currentValue() const
    {
        return QAccessibleQuickItem::currentValue();
    }
    
    QString textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textBeforeOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleQuickItem::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleQuickItem::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    QStringList actionNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionNames"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleQuickItem::actionNames();
    }
    QStringList super_actionNames() const
    {
        return QAccessibleQuickItem::actionNames();
    }
    
    QString textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAtOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleQuickItem::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleQuickItem::textAtOffset(offset, boundaryType, startOffset, endOffset);
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
        return QAccessibleQuickItem::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleQuickItem::state();
    }
    
    int selectionCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleQuickItem::selectionCount();
    }
    int super_selectionCount() const
    {
        return QAccessibleQuickItem::selectionCount();
    }
    
    void scrollToSubstring(int __arg0, int __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollToSubstring"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1);
            return;
        }
        QAccessibleQuickItem::scrollToSubstring(__arg0, __arg1);
    }
    void super_scrollToSubstring(int __arg0, int __arg1)
    {
        QAccessibleQuickItem::scrollToSubstring(__arg0, __arg1);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("item", (QQuickItem * (D::ClassType::*) () const)&D::ClassType::item);
        _d.CPGF_MD_TEMPLATE _method("interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_selection", (void (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_selection);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_removeSelection", (void (D::ClassType::*) (int))&D::ClassType::super_removeSelection);
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
        _d.CPGF_MD_TEMPLATE _method("super_minimumStepSize", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumStepSize);
        _d.CPGF_MD_TEMPLATE _method("super_attributes", (QString (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_attributes);
        _d.CPGF_MD_TEMPLATE _method("super_characterRect", (QRect (D::ClassType::*) (int) const)&D::ClassType::super_characterRect);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (int, int) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_textAfterOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAfterOffset);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_setSelection", (void (D::ClassType::*) (int, int, int))&D::ClassType::super_setSelection);
        _d.CPGF_MD_TEMPLATE _method("super_maximumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_maximumValue);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_addSelection", (void (D::ClassType::*) (int, int))&D::ClassType::super_addSelection);
        _d.CPGF_MD_TEMPLATE _method("super_minimumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumValue);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_currentValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_currentValue);
        _d.CPGF_MD_TEMPLATE _method("super_textBeforeOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textBeforeOffset);
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_textAtOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAtOffset);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_selectionCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectionCount);
        _d.CPGF_MD_TEMPLATE _method("super_scrollToSubstring", (void (D::ClassType::*) (int, int))&D::ClassType::super_scrollToSubstring);
    }
};


template <typename D>
void buildMetaClass_QAccessibleQuickItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleQuickItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleQuickItem<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

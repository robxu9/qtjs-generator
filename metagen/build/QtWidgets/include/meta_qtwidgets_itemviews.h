// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_ITEMVIEWS_H
#define CPGF_META_QTWIDGETS_ITEMVIEWS_H


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
void buildMetaClass_QAccessibleTable(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("role", &D::ClassType::role);
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("childAt", &D::ClassType::childAt);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("parent", &D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
    _d.CPGF_MD_TEMPLATE _method("interface_cast", &D::ClassType::interface_cast);
    _d.CPGF_MD_TEMPLATE _method("cellAt", &D::ClassType::cellAt);
    _d.CPGF_MD_TEMPLATE _method("caption", &D::ClassType::caption);
    _d.CPGF_MD_TEMPLATE _method("summary", &D::ClassType::summary);
    _d.CPGF_MD_TEMPLATE _method("columnDescription", &D::ClassType::columnDescription);
    _d.CPGF_MD_TEMPLATE _method("rowDescription", &D::ClassType::rowDescription);
    _d.CPGF_MD_TEMPLATE _method("columnCount", &D::ClassType::columnCount);
    _d.CPGF_MD_TEMPLATE _method("rowCount", &D::ClassType::rowCount);
    _d.CPGF_MD_TEMPLATE _method("selectedCellCount", &D::ClassType::selectedCellCount);
    _d.CPGF_MD_TEMPLATE _method("selectedColumnCount", &D::ClassType::selectedColumnCount);
    _d.CPGF_MD_TEMPLATE _method("selectedRowCount", &D::ClassType::selectedRowCount);
    _d.CPGF_MD_TEMPLATE _method("selectedCells", &D::ClassType::selectedCells);
    _d.CPGF_MD_TEMPLATE _method("selectedColumns", &D::ClassType::selectedColumns);
    _d.CPGF_MD_TEMPLATE _method("selectedRows", &D::ClassType::selectedRows);
    _d.CPGF_MD_TEMPLATE _method("isColumnSelected", &D::ClassType::isColumnSelected);
    _d.CPGF_MD_TEMPLATE _method("isRowSelected", &D::ClassType::isRowSelected);
    _d.CPGF_MD_TEMPLATE _method("selectRow", &D::ClassType::selectRow);
    _d.CPGF_MD_TEMPLATE _method("selectColumn", &D::ClassType::selectColumn);
    _d.CPGF_MD_TEMPLATE _method("unselectRow", &D::ClassType::unselectRow);
    _d.CPGF_MD_TEMPLATE _method("unselectColumn", &D::ClassType::unselectColumn);
    _d.CPGF_MD_TEMPLATE _method("view", &D::ClassType::view);
    _d.CPGF_MD_TEMPLATE _method("modelChange", &D::ClassType::modelChange);
}


class QAccessibleTableWrapper : public QAccessibleTable, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTableWrapper(QWidget * w)
        : QAccessibleTable(w) {}
    
    bool unselectRow(int row)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("unselectRow"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row).getValue());
        }
        return QAccessibleTable::unselectRow(row);
    }
    bool super_unselectRow(int row)
    {
        return QAccessibleTable::unselectRow(row);
    }
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleTable::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleTable::text(t);
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
    
    QList< int > selectedColumns() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedColumns"));
        if(func)
        {
            return cpgf::fromVariant<QList< int > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::selectedColumns();
    }
    QList< int > super_selectedColumns() const
    {
        return QAccessibleTable::selectedColumns();
    }
    
    bool selectRow(int row)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectRow"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row).getValue());
        }
        return QAccessibleTable::selectRow(row);
    }
    bool super_selectRow(int row)
    {
        return QAccessibleTable::selectRow(row);
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
    
    int rowCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::rowCount();
    }
    int super_rowCount() const
    {
        return QAccessibleTable::rowCount();
    }
    
    int indexOfChild(const QAccessibleInterface * __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleTable::indexOfChild(__arg0);
    }
    int super_indexOfChild(const QAccessibleInterface * __arg0) const
    {
        return QAccessibleTable::indexOfChild(__arg0);
    }
    
    QList< QAccessibleInterface * > selectedCells() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedCells"));
        if(func)
        {
            return cpgf::fromVariant<QList< QAccessibleInterface * > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::selectedCells();
    }
    QList< QAccessibleInterface * > super_selectedCells() const
    {
        return QAccessibleTable::selectedCells();
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
        return QAccessibleTable::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleTable::parent();
    }
    
    QHeaderView * horizontalHeader() const
    {
        return QAccessibleTable::horizontalHeader();
    }
    
    QString columnDescription(int column) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column).getValue());
        }
        return QAccessibleTable::columnDescription(column);
    }
    QString super_columnDescription(int column) const
    {
        return QAccessibleTable::columnDescription(column);
    }
    
    QAccessible::Role cellRole() const
    {
        return QAccessibleTable::cellRole();
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
    
    QHeaderView * verticalHeader() const
    {
        return QAccessibleTable::verticalHeader();
    }
    
    QList< int > selectedRows() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedRows"));
        if(func)
        {
            return cpgf::fromVariant<QList< int > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::selectedRows();
    }
    QList< int > super_selectedRows() const
    {
        return QAccessibleTable::selectedRows();
    }
    
    bool isColumnSelected(int column) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isColumnSelected"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column).getValue());
        }
        return QAccessibleTable::isColumnSelected(column);
    }
    bool super_isColumnSelected(int column) const
    {
        return QAccessibleTable::isColumnSelected(column);
    }
    
    bool isRowSelected(int row) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isRowSelected"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row).getValue());
        }
        return QAccessibleTable::isRowSelected(row);
    }
    bool super_isRowSelected(int row) const
    {
        return QAccessibleTable::isRowSelected(row);
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleTable::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleTable::interface_cast(t);
    }
    
    QString rowDescription(int row) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row).getValue());
        }
        return QAccessibleTable::rowDescription(row);
    }
    QString super_rowDescription(int row) const
    {
        return QAccessibleTable::rowDescription(row);
    }
    
    int columnCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::columnCount();
    }
    int super_columnCount() const
    {
        return QAccessibleTable::columnCount();
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
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleTable::childCount();
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleTable::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleTable::childAt(x, y);
    }
    
    QAccessibleInterface * caption() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("caption"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::caption();
    }
    QAccessibleInterface * super_caption() const
    {
        return QAccessibleTable::caption();
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleTable::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleTable::rect();
    }
    
    int selectedCellCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedCellCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::selectedCellCount();
    }
    int super_selectedCellCount() const
    {
        return QAccessibleTable::selectedCellCount();
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleTable::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleTable::child(index);
    }
    
    void modelChange(QAccessibleTableModelChangeEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("modelChange"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QAccessibleTable::modelChange(event);
    }
    void super_modelChange(QAccessibleTableModelChangeEvent * event)
    {
        QAccessibleTable::modelChange(event);
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
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleTable::role();
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
    
    QAccessibleInterface * cellAt(int row, int column) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("cellAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row, column).getValue());
        }
        return QAccessibleTable::cellAt(row, column);
    }
    QAccessibleInterface * super_cellAt(int row, int column) const
    {
        return QAccessibleTable::cellAt(row, column);
    }
    
    int selectedColumnCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedColumnCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::selectedColumnCount();
    }
    int super_selectedColumnCount() const
    {
        return QAccessibleTable::selectedColumnCount();
    }
    
    QAccessible::State state() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("state"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::State >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleTable::state();
    }
    
    QAccessibleInterface * summary() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("summary"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::summary();
    }
    QAccessibleInterface * super_summary() const
    {
        return QAccessibleTable::summary();
    }
    
    int selectedRowCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedRowCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::selectedRowCount();
    }
    int super_selectedRowCount() const
    {
        return QAccessibleTable::selectedRowCount();
    }
    
    bool selectColumn(int column)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectColumn"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column).getValue());
        }
        return QAccessibleTable::selectColumn(column);
    }
    bool super_selectColumn(int column)
    {
        return QAccessibleTable::selectColumn(column);
    }
    
    bool unselectColumn(int column)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("unselectColumn"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column).getValue());
        }
        return QAccessibleTable::unselectColumn(column);
    }
    bool super_unselectColumn(int column)
    {
        return QAccessibleTable::unselectColumn(column);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("horizontalHeader", (QHeaderView * (D::ClassType::*) () const)&D::ClassType::horizontalHeader);
        _d.CPGF_MD_TEMPLATE _method("cellRole", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::cellRole);
        _d.CPGF_MD_TEMPLATE _method("verticalHeader", (QHeaderView * (D::ClassType::*) () const)&D::ClassType::verticalHeader);
        _d.CPGF_MD_TEMPLATE _method("super_unselectRow", (bool (D::ClassType::*) (int))&D::ClassType::super_unselectRow);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_selectedColumns", (QList< int > (D::ClassType::*) () const)&D::ClassType::super_selectedColumns);
        _d.CPGF_MD_TEMPLATE _method("super_selectRow", (bool (D::ClassType::*) (int))&D::ClassType::super_selectRow);
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_rowCount", (int (D::ClassType::*) () const)&D::ClassType::super_rowCount);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_selectedCells", (QList< QAccessibleInterface * > (D::ClassType::*) () const)&D::ClassType::super_selectedCells);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_columnDescription", (QString (D::ClassType::*) (int) const)&D::ClassType::super_columnDescription);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_selectedRows", (QList< int > (D::ClassType::*) () const)&D::ClassType::super_selectedRows);
        _d.CPGF_MD_TEMPLATE _method("super_isColumnSelected", (bool (D::ClassType::*) (int) const)&D::ClassType::super_isColumnSelected);
        _d.CPGF_MD_TEMPLATE _method("super_isRowSelected", (bool (D::ClassType::*) (int) const)&D::ClassType::super_isRowSelected);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_rowDescription", (QString (D::ClassType::*) (int) const)&D::ClassType::super_rowDescription);
        _d.CPGF_MD_TEMPLATE _method("super_columnCount", (int (D::ClassType::*) () const)&D::ClassType::super_columnCount);
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_caption", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_caption);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_selectedCellCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectedCellCount);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_modelChange", (void (D::ClassType::*) (QAccessibleTableModelChangeEvent *))&D::ClassType::super_modelChange);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_cellAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_cellAt);
        _d.CPGF_MD_TEMPLATE _method("super_selectedColumnCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectedColumnCount);
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_summary", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_summary);
        _d.CPGF_MD_TEMPLATE _method("super_selectedRowCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectedRowCount);
        _d.CPGF_MD_TEMPLATE _method("super_selectColumn", (bool (D::ClassType::*) (int))&D::ClassType::super_selectColumn);
        _d.CPGF_MD_TEMPLATE _method("super_unselectColumn", (bool (D::ClassType::*) (int))&D::ClassType::super_unselectColumn);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTableWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTableWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTable<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTableCell(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAbstractItemView *, const QModelIndex &, QAccessible::Role)>();
    _d.CPGF_MD_TEMPLATE _method("interface_cast", &D::ClassType::interface_cast);
    _d.CPGF_MD_TEMPLATE _method("object", &D::ClassType::object);
    _d.CPGF_MD_TEMPLATE _method("role", &D::ClassType::role);
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("childAt", &D::ClassType::childAt);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("parent", &D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
    _d.CPGF_MD_TEMPLATE _method("columnExtent", &D::ClassType::columnExtent);
    _d.CPGF_MD_TEMPLATE _method("columnHeaderCells", &D::ClassType::columnHeaderCells);
    _d.CPGF_MD_TEMPLATE _method("columnIndex", &D::ClassType::columnIndex);
    _d.CPGF_MD_TEMPLATE _method("rowExtent", &D::ClassType::rowExtent);
    _d.CPGF_MD_TEMPLATE _method("rowHeaderCells", &D::ClassType::rowHeaderCells);
    _d.CPGF_MD_TEMPLATE _method("rowIndex", &D::ClassType::rowIndex);
    _d.CPGF_MD_TEMPLATE _method("isSelected", &D::ClassType::isSelected);
    _d.CPGF_MD_TEMPLATE _method("table", &D::ClassType::table);
    _d.CPGF_MD_TEMPLATE _method("actionNames", &D::ClassType::actionNames);
    _d.CPGF_MD_TEMPLATE _method("doAction", &D::ClassType::doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("keyBindingsForAction", &D::ClassType::keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


class QAccessibleTableCellWrapper : public QAccessibleTableCell, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTableCellWrapper(QAbstractItemView * view, const QModelIndex & m_index, QAccessible::Role role)
        : QAccessibleTableCell(view, m_index, role) {}
    
    int columnExtent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnExtent"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::columnExtent();
    }
    int super_columnExtent() const
    {
        return QAccessibleTableCell::columnExtent();
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
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleTableCell::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleTableCell::text(t);
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleTableCell::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleTableCell::setText(t, text);
    }
    
    void doAction(const QString & actionName)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doAction"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName);
            return;
        }
        QAccessibleTableCell::doAction(actionName);
    }
    void super_doAction(const QString & actionName)
    {
        QAccessibleTableCell::doAction(actionName);
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
    
    bool isSelected() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isSelected"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::isSelected();
    }
    bool super_isSelected() const
    {
        return QAccessibleTableCell::isSelected();
    }
    
    int indexOfChild(const QAccessibleInterface * __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleTableCell::indexOfChild(__arg0);
    }
    int super_indexOfChild(const QAccessibleInterface * __arg0) const
    {
        return QAccessibleTableCell::indexOfChild(__arg0);
    }
    
    int columnIndex() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnIndex"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::columnIndex();
    }
    int super_columnIndex() const
    {
        return QAccessibleTableCell::columnIndex();
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
        return QAccessibleTableCell::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleTableCell::parent();
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
    
    QList< QAccessibleInterface * > rowHeaderCells() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowHeaderCells"));
        if(func)
        {
            return cpgf::fromVariant<QList< QAccessibleInterface * > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::rowHeaderCells();
    }
    QList< QAccessibleInterface * > super_rowHeaderCells() const
    {
        return QAccessibleTableCell::rowHeaderCells();
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleTableCell::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleTableCell::interface_cast(t);
    }
    
    QStringList keyBindingsForAction(const QString & actionName) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyBindingsForAction"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName).getValue());
        }
        return QAccessibleTableCell::keyBindingsForAction(actionName);
    }
    QStringList super_keyBindingsForAction(const QString & actionName) const
    {
        return QAccessibleTableCell::keyBindingsForAction(actionName);
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
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleTableCell::childCount();
    }
    
    QAccessibleInterface * childAt(int __arg0, int __arg1) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QAccessibleTableCell::childAt(__arg0, __arg1);
    }
    QAccessibleInterface * super_childAt(int __arg0, int __arg1) const
    {
        return QAccessibleTableCell::childAt(__arg0, __arg1);
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleTableCell::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleTableCell::rect();
    }
    
    QAccessibleInterface * child(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleTableCell::child(__arg0);
    }
    QAccessibleInterface * super_child(int __arg0) const
    {
        return QAccessibleTableCell::child(__arg0);
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
    
    QList< QAccessibleInterface * > columnHeaderCells() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnHeaderCells"));
        if(func)
        {
            return cpgf::fromVariant<QList< QAccessibleInterface * > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::columnHeaderCells();
    }
    QList< QAccessibleInterface * > super_columnHeaderCells() const
    {
        return QAccessibleTableCell::columnHeaderCells();
    }
    
    QObject * object() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("object"));
        if(func)
        {
            return cpgf::fromVariant<QObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::object();
    }
    QObject * super_object() const
    {
        return QAccessibleTableCell::object();
    }
    
    int rowIndex() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowIndex"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::rowIndex();
    }
    int super_rowIndex() const
    {
        return QAccessibleTableCell::rowIndex();
    }
    
    QAccessibleInterface * table() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("table"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::table();
    }
    QAccessibleInterface * super_table() const
    {
        return QAccessibleTableCell::table();
    }
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleTableCell::role();
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
    
    QStringList actionNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionNames"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::actionNames();
    }
    QStringList super_actionNames() const
    {
        return QAccessibleTableCell::actionNames();
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
        return QAccessibleTableCell::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleTableCell::state();
    }
    
    int rowExtent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowExtent"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCell::rowExtent();
    }
    int super_rowExtent() const
    {
        return QAccessibleTableCell::rowExtent();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_columnExtent", (int (D::ClassType::*) () const)&D::ClassType::super_columnExtent);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_isSelected", (bool (D::ClassType::*) () const)&D::ClassType::super_isSelected);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_columnIndex", (int (D::ClassType::*) () const)&D::ClassType::super_columnIndex);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_rowHeaderCells", (QList< QAccessibleInterface * > (D::ClassType::*) () const)&D::ClassType::super_rowHeaderCells);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_columnHeaderCells", (QList< QAccessibleInterface * > (D::ClassType::*) () const)&D::ClassType::super_columnHeaderCells);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_rowIndex", (int (D::ClassType::*) () const)&D::ClassType::super_rowIndex);
        _d.CPGF_MD_TEMPLATE _method("super_table", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_table);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_rowExtent", (int (D::ClassType::*) () const)&D::ClassType::super_rowExtent);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTableCellWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTableCellWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTableCell<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTableCornerButton(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAbstractItemView *)>();
    _d.CPGF_MD_TEMPLATE _method("object", &D::ClassType::object);
    _d.CPGF_MD_TEMPLATE _method("role", &D::ClassType::role);
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("childAt", &D::ClassType::childAt);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("parent", &D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
}


class QAccessibleTableCornerButtonWrapper : public QAccessibleTableCornerButton, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTableCornerButtonWrapper(QAbstractItemView * view_)
        : QAccessibleTableCornerButton(view_) {}
    
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
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCornerButton::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleTableCornerButton::childCount();
    }
    
    QString text(QAccessible::Text __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleTableCornerButton::text(__arg0);
    }
    QString super_text(QAccessible::Text __arg0) const
    {
        return QAccessibleTableCornerButton::text(__arg0);
    }
    
    QAccessibleInterface * childAt(int __arg0, int __arg1) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QAccessibleTableCornerButton::childAt(__arg0, __arg1);
    }
    QAccessibleInterface * super_childAt(int __arg0, int __arg1) const
    {
        return QAccessibleTableCornerButton::childAt(__arg0, __arg1);
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCornerButton::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleTableCornerButton::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCornerButton::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleTableCornerButton::rect();
    }
    
    void setText(QAccessible::Text __arg0, const QString & __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1);
            return;
        }
        QAccessibleTableCornerButton::setText(__arg0, __arg1);
    }
    void super_setText(QAccessible::Text __arg0, const QString & __arg1)
    {
        QAccessibleTableCornerButton::setText(__arg0, __arg1);
    }
    
    QAccessibleInterface * child(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleTableCornerButton::child(__arg0);
    }
    QAccessibleInterface * super_child(int __arg0) const
    {
        return QAccessibleTableCornerButton::child(__arg0);
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
        return QAccessibleTableCornerButton::object();
    }
    QObject * super_object() const
    {
        return QAccessibleTableCornerButton::object();
    }
    
    int indexOfChild(const QAccessibleInterface * __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleTableCornerButton::indexOfChild(__arg0);
    }
    int super_indexOfChild(const QAccessibleInterface * __arg0) const
    {
        return QAccessibleTableCornerButton::indexOfChild(__arg0);
    }
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCornerButton::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleTableCornerButton::role();
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
    
    QAccessibleInterface * parent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCornerButton::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleTableCornerButton::parent();
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
    
    QAccessible::State state() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("state"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::State >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableCornerButton::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleTableCornerButton::state();
    }
    
    void * interface_cast(QAccessible::InterfaceType __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleInterface::interface_cast(__arg0);
    }
    void * super_interface_cast(QAccessible::InterfaceType __arg0)
    {
        return QAccessibleInterface::interface_cast(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTableCornerButtonWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTableCornerButtonWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTableCornerButton<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTableHeaderCell(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAbstractItemView *, int, Qt::Orientation)>();
    _d.CPGF_MD_TEMPLATE _method("object", &D::ClassType::object);
    _d.CPGF_MD_TEMPLATE _method("role", &D::ClassType::role);
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("childAt", &D::ClassType::childAt);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("parent", &D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
}


class QAccessibleTableHeaderCellWrapper : public QAccessibleTableHeaderCell, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTableHeaderCellWrapper(QAbstractItemView * view, int index, Qt::Orientation orientation)
        : QAccessibleTableHeaderCell(view, index, orientation) {}
    
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
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableHeaderCell::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleTableHeaderCell::childCount();
    }
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleTableHeaderCell::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleTableHeaderCell::text(t);
    }
    
    QAccessibleInterface * childAt(int __arg0, int __arg1) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QAccessibleTableHeaderCell::childAt(__arg0, __arg1);
    }
    QAccessibleInterface * super_childAt(int __arg0, int __arg1) const
    {
        return QAccessibleTableHeaderCell::childAt(__arg0, __arg1);
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableHeaderCell::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleTableHeaderCell::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableHeaderCell::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleTableHeaderCell::rect();
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleTableHeaderCell::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleTableHeaderCell::setText(t, text);
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleTableHeaderCell::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleTableHeaderCell::child(index);
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
        return QAccessibleTableHeaderCell::object();
    }
    QObject * super_object() const
    {
        return QAccessibleTableHeaderCell::object();
    }
    
    int indexOfChild(const QAccessibleInterface * __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleTableHeaderCell::indexOfChild(__arg0);
    }
    int super_indexOfChild(const QAccessibleInterface * __arg0) const
    {
        return QAccessibleTableHeaderCell::indexOfChild(__arg0);
    }
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableHeaderCell::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleTableHeaderCell::role();
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
    
    QAccessibleInterface * parent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableHeaderCell::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleTableHeaderCell::parent();
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
    
    QAccessible::State state() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("state"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::State >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTableHeaderCell::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleTableHeaderCell::state();
    }
    
    void * interface_cast(QAccessible::InterfaceType __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleInterface::interface_cast(__arg0);
    }
    void * super_interface_cast(QAccessible::InterfaceType __arg0)
    {
        return QAccessibleInterface::interface_cast(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTableHeaderCellWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTableHeaderCellWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTableHeaderCell<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTree(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("childAt", &D::ClassType::childAt);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("rowCount", &D::ClassType::rowCount);
    _d.CPGF_MD_TEMPLATE _method("cellAt", &D::ClassType::cellAt);
    _d.CPGF_MD_TEMPLATE _method("rowDescription", &D::ClassType::rowDescription);
    _d.CPGF_MD_TEMPLATE _method("isRowSelected", &D::ClassType::isRowSelected);
    _d.CPGF_MD_TEMPLATE _method("selectRow", &D::ClassType::selectRow);
}


class QAccessibleTreeWrapper : public QAccessibleTree, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTreeWrapper(QWidget * w)
        : QAccessibleTree(w) {}
    
    bool unselectRow(int row)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("unselectRow"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row).getValue());
        }
        return QAccessibleTable::unselectRow(row);
    }
    bool super_unselectRow(int row)
    {
        return QAccessibleTable::unselectRow(row);
    }
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleTable::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleTable::text(t);
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
    
    QList< int > selectedColumns() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedColumns"));
        if(func)
        {
            return cpgf::fromVariant<QList< int > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::selectedColumns();
    }
    QList< int > super_selectedColumns() const
    {
        return QAccessibleTable::selectedColumns();
    }
    
    bool selectRow(int row)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectRow"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row).getValue());
        }
        return QAccessibleTree::selectRow(row);
    }
    bool super_selectRow(int row)
    {
        return QAccessibleTree::selectRow(row);
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
    
    int rowCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTree::rowCount();
    }
    int super_rowCount() const
    {
        return QAccessibleTree::rowCount();
    }
    
    int indexOfChild(const QAccessibleInterface * __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleTree::indexOfChild(__arg0);
    }
    int super_indexOfChild(const QAccessibleInterface * __arg0) const
    {
        return QAccessibleTree::indexOfChild(__arg0);
    }
    
    QList< QAccessibleInterface * > selectedCells() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedCells"));
        if(func)
        {
            return cpgf::fromVariant<QList< QAccessibleInterface * > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::selectedCells();
    }
    QList< QAccessibleInterface * > super_selectedCells() const
    {
        return QAccessibleTable::selectedCells();
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
        return QAccessibleTable::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleTable::parent();
    }
    
    QHeaderView * horizontalHeader() const
    {
        return QAccessibleTable::horizontalHeader();
    }
    
    QString columnDescription(int column) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column).getValue());
        }
        return QAccessibleTable::columnDescription(column);
    }
    QString super_columnDescription(int column) const
    {
        return QAccessibleTable::columnDescription(column);
    }
    
    QAccessible::Role cellRole() const
    {
        return QAccessibleTable::cellRole();
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
    
    QHeaderView * verticalHeader() const
    {
        return QAccessibleTable::verticalHeader();
    }
    
    QList< int > selectedRows() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedRows"));
        if(func)
        {
            return cpgf::fromVariant<QList< int > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::selectedRows();
    }
    QList< int > super_selectedRows() const
    {
        return QAccessibleTable::selectedRows();
    }
    
    bool isColumnSelected(int column) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isColumnSelected"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column).getValue());
        }
        return QAccessibleTable::isColumnSelected(column);
    }
    bool super_isColumnSelected(int column) const
    {
        return QAccessibleTable::isColumnSelected(column);
    }
    
    bool isRowSelected(int row) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isRowSelected"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row).getValue());
        }
        return QAccessibleTree::isRowSelected(row);
    }
    bool super_isRowSelected(int row) const
    {
        return QAccessibleTree::isRowSelected(row);
    }
    
    void * interface_cast(QAccessible::InterfaceType t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleTable::interface_cast(t);
    }
    void * super_interface_cast(QAccessible::InterfaceType t)
    {
        return QAccessibleTable::interface_cast(t);
    }
    
    QString rowDescription(int row) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row).getValue());
        }
        return QAccessibleTree::rowDescription(row);
    }
    QString super_rowDescription(int row) const
    {
        return QAccessibleTree::rowDescription(row);
    }
    
    int columnCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::columnCount();
    }
    int super_columnCount() const
    {
        return QAccessibleTable::columnCount();
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
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTree::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleTree::childCount();
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleTree::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleTree::childAt(x, y);
    }
    
    QAccessibleInterface * caption() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("caption"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::caption();
    }
    QAccessibleInterface * super_caption() const
    {
        return QAccessibleTable::caption();
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleTable::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleTable::rect();
    }
    
    int selectedCellCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedCellCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::selectedCellCount();
    }
    int super_selectedCellCount() const
    {
        return QAccessibleTable::selectedCellCount();
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleTree::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleTree::child(index);
    }
    
    void modelChange(QAccessibleTableModelChangeEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("modelChange"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QAccessibleTable::modelChange(event);
    }
    void super_modelChange(QAccessibleTableModelChangeEvent * event)
    {
        QAccessibleTable::modelChange(event);
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
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleTable::role();
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
    
    QAccessibleInterface * cellAt(int row, int column) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("cellAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row, column).getValue());
        }
        return QAccessibleTree::cellAt(row, column);
    }
    QAccessibleInterface * super_cellAt(int row, int column) const
    {
        return QAccessibleTree::cellAt(row, column);
    }
    
    int selectedColumnCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedColumnCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::selectedColumnCount();
    }
    int super_selectedColumnCount() const
    {
        return QAccessibleTable::selectedColumnCount();
    }
    
    QAccessible::State state() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("state"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::State >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleTable::state();
    }
    
    QAccessibleInterface * summary() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("summary"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::summary();
    }
    QAccessibleInterface * super_summary() const
    {
        return QAccessibleTable::summary();
    }
    
    int selectedRowCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedRowCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleTable::selectedRowCount();
    }
    int super_selectedRowCount() const
    {
        return QAccessibleTable::selectedRowCount();
    }
    
    bool selectColumn(int column)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectColumn"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column).getValue());
        }
        return QAccessibleTable::selectColumn(column);
    }
    bool super_selectColumn(int column)
    {
        return QAccessibleTable::selectColumn(column);
    }
    
    bool unselectColumn(int column)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("unselectColumn"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column).getValue());
        }
        return QAccessibleTable::unselectColumn(column);
    }
    bool super_unselectColumn(int column)
    {
        return QAccessibleTable::unselectColumn(column);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("horizontalHeader", (QHeaderView * (D::ClassType::*) () const)&D::ClassType::horizontalHeader);
        _d.CPGF_MD_TEMPLATE _method("cellRole", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::cellRole);
        _d.CPGF_MD_TEMPLATE _method("verticalHeader", (QHeaderView * (D::ClassType::*) () const)&D::ClassType::verticalHeader);
        _d.CPGF_MD_TEMPLATE _method("super_unselectRow", (bool (D::ClassType::*) (int))&D::ClassType::super_unselectRow);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_selectedColumns", (QList< int > (D::ClassType::*) () const)&D::ClassType::super_selectedColumns);
        _d.CPGF_MD_TEMPLATE _method("super_selectRow", (bool (D::ClassType::*) (int))&D::ClassType::super_selectRow);
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_rowCount", (int (D::ClassType::*) () const)&D::ClassType::super_rowCount);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_selectedCells", (QList< QAccessibleInterface * > (D::ClassType::*) () const)&D::ClassType::super_selectedCells);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_columnDescription", (QString (D::ClassType::*) (int) const)&D::ClassType::super_columnDescription);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_selectedRows", (QList< int > (D::ClassType::*) () const)&D::ClassType::super_selectedRows);
        _d.CPGF_MD_TEMPLATE _method("super_isColumnSelected", (bool (D::ClassType::*) (int) const)&D::ClassType::super_isColumnSelected);
        _d.CPGF_MD_TEMPLATE _method("super_isRowSelected", (bool (D::ClassType::*) (int) const)&D::ClassType::super_isRowSelected);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
        _d.CPGF_MD_TEMPLATE _method("super_rowDescription", (QString (D::ClassType::*) (int) const)&D::ClassType::super_rowDescription);
        _d.CPGF_MD_TEMPLATE _method("super_columnCount", (int (D::ClassType::*) () const)&D::ClassType::super_columnCount);
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_caption", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_caption);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_selectedCellCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectedCellCount);
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_modelChange", (void (D::ClassType::*) (QAccessibleTableModelChangeEvent *))&D::ClassType::super_modelChange);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_cellAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_cellAt);
        _d.CPGF_MD_TEMPLATE _method("super_selectedColumnCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectedColumnCount);
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_summary", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_summary);
        _d.CPGF_MD_TEMPLATE _method("super_selectedRowCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectedRowCount);
        _d.CPGF_MD_TEMPLATE _method("super_selectColumn", (bool (D::ClassType::*) (int))&D::ClassType::super_selectColumn);
        _d.CPGF_MD_TEMPLATE _method("super_unselectColumn", (bool (D::ClassType::*) (int))&D::ClassType::super_unselectColumn);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTreeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTreeWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTree<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

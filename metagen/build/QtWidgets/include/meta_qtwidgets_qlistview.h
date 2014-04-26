// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QLISTVIEW_H
#define CPGF_META_QTWIDGETS_QLISTVIEW_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QListView(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setMovement", &D::ClassType::setMovement);
    _d.CPGF_MD_TEMPLATE _method("movement", &D::ClassType::movement);
    _d.CPGF_MD_TEMPLATE _method("setFlow", &D::ClassType::setFlow);
    _d.CPGF_MD_TEMPLATE _method("flow", &D::ClassType::flow);
    _d.CPGF_MD_TEMPLATE _method("setWrapping", &D::ClassType::setWrapping);
    _d.CPGF_MD_TEMPLATE _method("isWrapping", &D::ClassType::isWrapping);
    _d.CPGF_MD_TEMPLATE _method("setResizeMode", &D::ClassType::setResizeMode);
    _d.CPGF_MD_TEMPLATE _method("resizeMode", &D::ClassType::resizeMode);
    _d.CPGF_MD_TEMPLATE _method("setLayoutMode", &D::ClassType::setLayoutMode);
    _d.CPGF_MD_TEMPLATE _method("layoutMode", &D::ClassType::layoutMode);
    _d.CPGF_MD_TEMPLATE _method("setSpacing", &D::ClassType::setSpacing);
    _d.CPGF_MD_TEMPLATE _method("spacing", &D::ClassType::spacing);
    _d.CPGF_MD_TEMPLATE _method("setBatchSize", &D::ClassType::setBatchSize);
    _d.CPGF_MD_TEMPLATE _method("batchSize", &D::ClassType::batchSize);
    _d.CPGF_MD_TEMPLATE _method("setGridSize", &D::ClassType::setGridSize);
    _d.CPGF_MD_TEMPLATE _method("gridSize", &D::ClassType::gridSize);
    _d.CPGF_MD_TEMPLATE _method("setViewMode", &D::ClassType::setViewMode);
    _d.CPGF_MD_TEMPLATE _method("viewMode", &D::ClassType::viewMode);
    _d.CPGF_MD_TEMPLATE _method("clearPropertyFlags", &D::ClassType::clearPropertyFlags);
    _d.CPGF_MD_TEMPLATE _method("isRowHidden", &D::ClassType::isRowHidden);
    _d.CPGF_MD_TEMPLATE _method("setRowHidden", &D::ClassType::setRowHidden);
    _d.CPGF_MD_TEMPLATE _method("setModelColumn", &D::ClassType::setModelColumn);
    _d.CPGF_MD_TEMPLATE _method("modelColumn", &D::ClassType::modelColumn);
    _d.CPGF_MD_TEMPLATE _method("setUniformItemSizes", &D::ClassType::setUniformItemSizes);
    _d.CPGF_MD_TEMPLATE _method("uniformItemSizes", &D::ClassType::uniformItemSizes);
    _d.CPGF_MD_TEMPLATE _method("setWordWrap", &D::ClassType::setWordWrap);
    _d.CPGF_MD_TEMPLATE _method("wordWrap", &D::ClassType::wordWrap);
    _d.CPGF_MD_TEMPLATE _method("setSelectionRectVisible", &D::ClassType::setSelectionRectVisible);
    _d.CPGF_MD_TEMPLATE _method("isSelectionRectVisible", &D::ClassType::isSelectionRectVisible);
    _d.CPGF_MD_TEMPLATE _method("visualRect", &D::ClassType::visualRect);
    _d.CPGF_MD_TEMPLATE _method("scrollTo", &D::ClassType::scrollTo)
        ._default(copyVariantFromCopyable(QAbstractItemView::EnsureVisible))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexAt", &D::ClassType::indexAt);
    _d.CPGF_MD_TEMPLATE _method("doItemsLayout", &D::ClassType::doItemsLayout);
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("setRootIndex", &D::ClassType::setRootIndex);
    _d.CPGF_MD_TEMPLATE _method("indexesMoved", &D::ClassType::indexesMoved);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Movement>("Movement")
        ._element("Static", D::ClassType::Static)
        ._element("Free", D::ClassType::Free)
        ._element("Snap", D::ClassType::Snap)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Flow>("Flow")
        ._element("LeftToRight", D::ClassType::LeftToRight)
        ._element("TopToBottom", D::ClassType::TopToBottom)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ResizeMode>("ResizeMode")
        ._element("Fixed", D::ClassType::Fixed)
        ._element("Adjust", D::ClassType::Adjust)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::LayoutMode>("LayoutMode")
        ._element("SinglePass", D::ClassType::SinglePass)
        ._element("Batched", D::ClassType::Batched)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ViewMode>("ViewMode")
        ._element("ListMode", D::ClassType::ListMode)
        ._element("IconMode", D::ClassType::IconMode)
    ;
}


class QListViewWrapper : public QListView, public cpgf::GScriptWrapper {
public:
    
    QListViewWrapper(QWidget * parent = 0)
        : QListView(parent) {}
    
    QRegion visualRegionForSelection(const QItemSelection & selection) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visualRegionForSelection"));
        if(func)
        {
            return cpgf::fromVariant<QRegion >(cpgf::invokeScriptFunction(func.get(), this, selection).getValue());
        }
        return QListView::visualRegionForSelection(selection);
    }
    QRegion super_visualRegionForSelection(const QItemSelection & selection) const
    {
        return QListView::visualRegionForSelection(selection);
    }
    
    void wheelEvent(QWheelEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::wheelEvent(__arg0);
    }
    void super_wheelEvent(QWheelEvent * __arg0)
    {
        QAbstractScrollArea::wheelEvent(__arg0);
    }
    
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const
    {
        return QAbstractItemView::dropIndicatorPosition();
    }
    
    void tabletEvent(QTabletEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("tabletEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::tabletEvent(__arg0);
    }
    void super_tabletEvent(QTabletEvent * __arg0)
    {
        QWidget::tabletEvent(__arg0);
    }
    
    void executeDelayedItemsLayout()
    {
        QAbstractItemView::executeDelayedItemsLayout();
    }
    
    void resizeEvent(QResizeEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resizeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QListView::resizeEvent(e);
    }
    void super_resizeEvent(QResizeEvent * e)
    {
        QListView::resizeEvent(e);
    }
    
    void scrollDirtyRegion(int dx, int dy)
    {
        QAbstractItemView::scrollDirtyRegion(dx, dy);
    }
    
    void hideEvent(QHideEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hideEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::hideEvent(__arg0);
    }
    void super_hideEvent(QHideEvent * __arg0)
    {
        QWidget::hideEvent(__arg0);
    }
    
    void pressed(const QModelIndex & index)
    {
        QAbstractItemView::pressed(index);
    }
    
    void keyboardSearch(const QString & search)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyboardSearch"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, search);
            return;
        }
        QAbstractItemView::keyboardSearch(search);
    }
    void super_keyboardSearch(const QString & search)
    {
        QAbstractItemView::keyboardSearch(search);
    }
    
    void verticalScrollbarAction(int action)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("verticalScrollbarAction"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, action);
            return;
        }
        QAbstractItemView::verticalScrollbarAction(action);
    }
    void super_verticalScrollbarAction(int action)
    {
        QAbstractItemView::verticalScrollbarAction(action);
    }
    
    void leaveEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::leaveEvent(__arg0);
    }
    void super_leaveEvent(QEvent * __arg0)
    {
        QWidget::leaveEvent(__arg0);
    }
    
    void dropEvent(QDropEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QListView::dropEvent(e);
    }
    void super_dropEvent(QDropEvent * e)
    {
        QListView::dropEvent(e);
    }
    
    void timerEvent(QTimerEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QListView::timerEvent(e);
    }
    void super_timerEvent(QTimerEvent * e)
    {
        QListView::timerEvent(e);
    }
    
    void commitData(QWidget * editor)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("commitData"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, editor);
            return;
        }
        QAbstractItemView::commitData(editor);
    }
    void super_commitData(QWidget * editor)
    {
        QAbstractItemView::commitData(editor);
    }
    
    void horizontalScrollbarValueChanged(int value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("horizontalScrollbarValueChanged"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, value);
            return;
        }
        QAbstractItemView::horizontalScrollbarValueChanged(value);
    }
    void super_horizontalScrollbarValueChanged(int value)
    {
        QAbstractItemView::horizontalScrollbarValueChanged(value);
    }
    
    void mouseDoubleClickEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QMouseEvent * event)
    {
        QAbstractItemView::mouseDoubleClickEvent(event);
    }
    
    void create(WId __arg0 = 0, bool initializeWindow = true, bool destroyOldWindow = true)
    {
        QWidget::create(__arg0, initializeWindow, destroyOldWindow);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1).getValue());
        }
        return QAbstractScrollArea::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QAbstractScrollArea::eventFilter(__arg0, __arg1);
    }
    
    void updateEditorGeometries()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateEditorGeometries"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QAbstractItemView::updateEditorGeometries();
    }
    void super_updateEditorGeometries()
    {
        QAbstractItemView::updateEditorGeometries();
    }
    
    void setDirtyRegion(const QRegion & region)
    {
        QAbstractItemView::setDirtyRegion(region);
    }
    
    void entered(const QModelIndex & index)
    {
        QAbstractItemView::entered(index);
    }
    
    QPaintDevice * redirected(QPoint * offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("redirected"));
        if(func)
        {
            return cpgf::fromVariant<QPaintDevice * >(cpgf::invokeScriptFunction(func.get(), this, offset).getValue());
        }
        return QWidget::redirected(offset);
    }
    QPaintDevice * super_redirected(QPoint * offset) const
    {
        return QWidget::redirected(offset);
    }
    
    QAbstractItemView::State state() const
    {
        return QAbstractItemView::state();
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0).getValue());
        }
        return QWidget::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QWidget::heightForWidth(__arg0);
    }
    
    void currentChanged(const QModelIndex & current, const QModelIndex & previous)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentChanged"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, current, previous);
            return;
        }
        QListView::currentChanged(current, previous);
    }
    void super_currentChanged(const QModelIndex & current, const QModelIndex & previous)
    {
        QListView::currentChanged(current, previous);
    }
    
    QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveCursor"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndex >(cpgf::invokeScriptFunction(func.get(), this, cursorAction, modifiers).getValue());
        }
        return QListView::moveCursor(cursorAction, modifiers);
    }
    QModelIndex super_moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers)
    {
        return QListView::moveCursor(cursorAction, modifiers);
    }
    
    void dragMoveEvent(QDragMoveEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QListView::dragMoveEvent(e);
    }
    void super_dragMoveEvent(QDragMoveEvent * e)
    {
        QListView::dragMoveEvent(e);
    }
    
    QPoint dirtyRegionOffset() const
    {
        return QAbstractItemView::dirtyRegionOffset();
    }
    
    QStyleOptionViewItem viewOptions() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewOptions"));
        if(func)
        {
            return cpgf::fromVariant<QStyleOptionViewItem >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QListView::viewOptions();
    }
    QStyleOptionViewItem super_viewOptions() const
    {
        return QListView::viewOptions();
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    void editorDestroyed(QObject * editor)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("editorDestroyed"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, editor);
            return;
        }
        QAbstractItemView::editorDestroyed(editor);
    }
    void super_editorDestroyed(QObject * editor)
    {
        QAbstractItemView::editorDestroyed(editor);
    }
    
    bool focusPreviousChild()
    {
        return QWidget::focusPreviousChild();
    }
    
    void doItemsLayout()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doItemsLayout"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QListView::doItemsLayout();
    }
    void super_doItemsLayout()
    {
        QListView::doItemsLayout();
    }
    
    void stopAutoScroll()
    {
        QAbstractItemView::stopAutoScroll();
    }
    
    QModelIndex indexAt(const QPoint & p) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexAt"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndex >(cpgf::invokeScriptFunction(func.get(), this, p).getValue());
        }
        return QListView::indexAt(p);
    }
    QModelIndex super_indexAt(const QPoint & p) const
    {
        return QListView::indexAt(p);
    }
    
    int sizeHintForColumn(int column) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHintForColumn"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, column).getValue());
        }
        return QAbstractItemView::sizeHintForColumn(column);
    }
    int super_sizeHintForColumn(int column) const
    {
        return QAbstractItemView::sizeHintForColumn(column);
    }
    
    void scheduleDelayedItemsLayout()
    {
        QAbstractItemView::scheduleDelayedItemsLayout();
    }
    
    void mouseMoveEvent(QMouseEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QListView::mouseMoveEvent(e);
    }
    void super_mouseMoveEvent(QMouseEvent * e)
    {
        QListView::mouseMoveEvent(e);
    }
    
    void setRootIndex(const QModelIndex & index)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setRootIndex"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, index);
            return;
        }
        QListView::setRootIndex(index);
    }
    void super_setRootIndex(const QModelIndex & index)
    {
        QListView::setRootIndex(index);
    }
    
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex & index, const QEvent * event = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionCommand"));
        if(func)
        {
            return cpgf::fromVariant<QItemSelectionModel::SelectionFlags >(cpgf::invokeScriptFunction(func.get(), this, index, event).getValue());
        }
        return QAbstractItemView::selectionCommand(index, event);
    }
    QItemSelectionModel::SelectionFlags super_selectionCommand(const QModelIndex & index, const QEvent * event = 0) const
    {
        return QAbstractItemView::selectionCommand(index, event);
    }
    
    void rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowsAboutToBeRemoved"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, parent, start, end);
            return;
        }
        QListView::rowsAboutToBeRemoved(parent, start, end);
    }
    void super_rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)
    {
        QListView::rowsAboutToBeRemoved(parent, start, end);
    }
    
    void selectAll()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectAll"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QAbstractItemView::selectAll();
    }
    void super_selectAll()
    {
        QAbstractItemView::selectAll();
    }
    
    void setVisible(bool visible)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setVisible"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, visible);
            return;
        }
        QWidget::setVisible(visible);
    }
    void super_setVisible(bool visible)
    {
        QWidget::setVisible(visible);
    }
    
    void clicked(const QModelIndex & index)
    {
        QAbstractItemView::clicked(index);
    }
    
    void rowsInserted(const QModelIndex & parent, int start, int end)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowsInserted"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, parent, start, end);
            return;
        }
        QListView::rowsInserted(parent, start, end);
    }
    void super_rowsInserted(const QModelIndex & parent, int start, int end)
    {
        QListView::rowsInserted(parent, start, end);
    }
    
    void dragEnterEvent(QDragEnterEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QDragEnterEvent * event)
    {
        QAbstractItemView::dragEnterEvent(event);
    }
    
    void doubleClicked(const QModelIndex & index)
    {
        QAbstractItemView::doubleClicked(index);
    }
    
    void resizeContents(int width, int height)
    {
        QListView::resizeContents(width, height);
    }
    
    void mousePressEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::mousePressEvent(event);
    }
    void super_mousePressEvent(QMouseEvent * event)
    {
        QAbstractItemView::mousePressEvent(event);
    }
    
    void setSelectionModel(QItemSelectionModel * selectionModel)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSelectionModel"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, selectionModel);
            return;
        }
        QAbstractItemView::setSelectionModel(selectionModel);
    }
    void super_setSelectionModel(QItemSelectionModel * selectionModel)
    {
        QAbstractItemView::setSelectionModel(selectionModel);
    }
    
    int sizeHintForRow(int row) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHintForRow"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, row).getValue());
        }
        return QAbstractItemView::sizeHintForRow(row);
    }
    int super_sizeHintForRow(int row) const
    {
        return QAbstractItemView::sizeHintForRow(row);
    }
    
    void setSelection(const QRect & rect, QItemSelectionModel::SelectionFlags command)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSelection"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, rect, command);
            return;
        }
        QListView::setSelection(rect, command);
    }
    void super_setSelection(const QRect & rect, QItemSelectionModel::SelectionFlags command)
    {
        QListView::setSelection(rect, command);
    }
    
    void startAutoScroll()
    {
        QAbstractItemView::startAutoScroll();
    }
    
    void startDrag(Qt::DropActions supportedActions)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("startDrag"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, supportedActions);
            return;
        }
        QListView::startDrag(supportedActions);
    }
    void super_startDrag(Qt::DropActions supportedActions)
    {
        QListView::startDrag(supportedActions);
    }
    
    void doAutoScroll()
    {
        QAbstractItemView::doAutoScroll();
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    int verticalOffset() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("verticalOffset"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QListView::verticalOffset();
    }
    int super_verticalOffset() const
    {
        return QListView::verticalOffset();
    }
    
    void viewportEntered()
    {
        QAbstractItemView::viewportEntered();
    }
    
    bool nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("nativeEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, eventType, message, result).getValue());
        }
        return QWidget::nativeEvent(eventType, message, result);
    }
    bool super_nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        return QWidget::nativeEvent(eventType, message, result);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QListView::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QListView::metaObject();
    }
    
    void setState(QAbstractItemView::State state)
    {
        QAbstractItemView::setState(state);
    }
    
    void mouseReleaseEvent(QMouseEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QListView::mouseReleaseEvent(e);
    }
    void super_mouseReleaseEvent(QMouseEvent * e)
    {
        QListView::mouseReleaseEvent(e);
    }
    
    void closeEvent(QCloseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("closeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::closeEvent(__arg0);
    }
    void super_closeEvent(QCloseEvent * __arg0)
    {
        QWidget::closeEvent(__arg0);
    }
    
    void dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QVector< int > & roles = QVector< int >())
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dataChanged"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, topLeft, bottomRight, roles);
            return;
        }
        QListView::dataChanged(topLeft, bottomRight, roles);
    }
    void super_dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QVector< int > & roles = QVector< int >())
    {
        QListView::dataChanged(topLeft, bottomRight, roles);
    }
    
    void setHorizontalStepsPerItem(int steps)
    {
        QAbstractItemView::setHorizontalStepsPerItem(steps);
    }
    
    QSize viewportSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewportSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QListView::viewportSizeHint();
    }
    QSize super_viewportSizeHint() const
    {
        return QListView::viewportSizeHint();
    }
    
    void scrollContentsBy(int dx, int dy)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollContentsBy"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, dx, dy);
            return;
        }
        QListView::scrollContentsBy(dx, dy);
    }
    void super_scrollContentsBy(int dx, int dy)
    {
        QListView::scrollContentsBy(dx, dy);
    }
    
    void setViewportMargins(int left, int top, int right, int bottom)
    {
        QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
    }
    
    void setVerticalStepsPerItem(int steps)
    {
        QAbstractItemView::setVerticalStepsPerItem(steps);
    }
    
    bool viewportEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewportEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, event).getValue());
        }
        return QAbstractItemView::viewportEvent(event);
    }
    bool super_viewportEvent(QEvent * event)
    {
        return QAbstractItemView::viewportEvent(event);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0).getValue());
        }
        return QListView::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QListView::qt_metacast(__arg0);
    }
    
    void showEvent(QShowEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("showEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::showEvent(__arg0);
    }
    void super_showEvent(QShowEvent * __arg0)
    {
        QWidget::showEvent(__arg0);
    }
    
    int horizontalStepsPerItem() const
    {
        return QAbstractItemView::horizontalStepsPerItem();
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QAbstractItemView::focusInEvent(event);
    }
    
    int metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metric"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0).getValue());
        }
        return QWidget::metric(__arg0);
    }
    int super_metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        return QWidget::metric(__arg0);
    }
    
    void contextMenuEvent(QContextMenuEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::contextMenuEvent(__arg0);
    }
    void super_contextMenuEvent(QContextMenuEvent * __arg0)
    {
        QAbstractScrollArea::contextMenuEvent(__arg0);
    }
    
    bool event(QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, e).getValue());
        }
        return QListView::event(e);
    }
    bool super_event(QEvent * e)
    {
        return QListView::event(e);
    }
    
    bool focusNextChild()
    {
        return QWidget::focusNextChild();
    }
    
    void paintEvent(QPaintEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QListView::paintEvent(e);
    }
    void super_paintEvent(QPaintEvent * e)
    {
        QListView::paintEvent(e);
    }
    
    void setViewportMargins(const QMargins & margins)
    {
        QAbstractScrollArea::setViewportMargins(margins);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void destroy(bool destroyWindow = true, bool destroySubWindows = true)
    {
        QWidget::destroy(destroyWindow, destroySubWindows);
    }
    
    void selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionChanged"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, selected, deselected);
            return;
        }
        QListView::selectionChanged(selected, deselected);
    }
    void super_selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)
    {
        QListView::selectionChanged(selected, deselected);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QAbstractItemView::focusOutEvent(event);
    }
    
    void moveEvent(QMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::moveEvent(__arg0);
    }
    void super_moveEvent(QMoveEvent * __arg0)
    {
        QWidget::moveEvent(__arg0);
    }
    
    void scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint = QAbstractItemView::EnsureVisible)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollTo"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, index, hint);
            return;
        }
        QListView::scrollTo(index, hint);
    }
    void super_scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint = QAbstractItemView::EnsureVisible)
    {
        QListView::scrollTo(index, hint);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QWidget::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QWidget::hasHeightForWidth();
    }
    
    void changeEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("changeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QFrame::changeEvent(__arg0);
    }
    void super_changeEvent(QEvent * __arg0)
    {
        QFrame::changeEvent(__arg0);
    }
    
    void updateMicroFocus()
    {
        QWidget::updateMicroFocus();
    }
    
    void horizontalScrollbarAction(int action)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("horizontalScrollbarAction"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, action);
            return;
        }
        QAbstractItemView::horizontalScrollbarAction(action);
    }
    void super_horizontalScrollbarAction(int action)
    {
        QAbstractItemView::horizontalScrollbarAction(action);
    }
    
    QPainter * sharedPainter() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sharedPainter"));
        if(func)
        {
            return cpgf::fromVariant<QPainter * >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QWidget::sharedPainter();
    }
    QPainter * super_sharedPainter() const
    {
        return QWidget::sharedPainter();
    }
    
    void setupViewport(QWidget * viewport)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setupViewport"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, viewport);
            return;
        }
        QAbstractScrollArea::setupViewport(viewport);
    }
    void super_setupViewport(QWidget * viewport)
    {
        QAbstractScrollArea::setupViewport(viewport);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QListView::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QListView::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    bool edit(const QModelIndex & index, QAbstractItemView::EditTrigger trigger, QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("edit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, index, trigger, event).getValue());
        }
        return QAbstractItemView::edit(index, trigger, event);
    }
    bool super_edit(const QModelIndex & index, QAbstractItemView::EditTrigger trigger, QEvent * event)
    {
        return QAbstractItemView::edit(index, trigger, event);
    }
    
    int verticalStepsPerItem() const
    {
        return QAbstractItemView::verticalStepsPerItem();
    }
    
    void enterEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("enterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::enterEvent(__arg0);
    }
    void super_enterEvent(QEvent * __arg0)
    {
        QWidget::enterEvent(__arg0);
    }
    
    void updateGeometries()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateGeometries"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QListView::updateGeometries();
    }
    void super_updateGeometries()
    {
        QListView::updateGeometries();
    }
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    QRect rectForIndex(const QModelIndex & index) const
    {
        return QListView::rectForIndex(index);
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QAbstractScrollArea::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QAbstractScrollArea::sizeHint();
    }
    
    bool focusNextPrevChild(bool next)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusNextPrevChild"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, next).getValue());
        }
        return QAbstractItemView::focusNextPrevChild(next);
    }
    bool super_focusNextPrevChild(bool next)
    {
        return QAbstractItemView::focusNextPrevChild(next);
    }
    
    void initPainter(QPainter * painter) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initPainter"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter);
            return;
        }
        QWidget::initPainter(painter);
    }
    void super_initPainter(QPainter * painter) const
    {
        QWidget::initPainter(painter);
    }
    
    QModelIndexList selectedIndexes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedIndexes"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndexList >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QListView::selectedIndexes();
    }
    QModelIndexList super_selectedIndexes() const
    {
        return QListView::selectedIndexes();
    }
    
    QSize contentsSize() const
    {
        return QListView::contentsSize();
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QAbstractItemView::keyPressEvent(event);
    }
    
    void actionEvent(QActionEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::actionEvent(__arg0);
    }
    void super_actionEvent(QActionEvent * __arg0)
    {
        QWidget::actionEvent(__arg0);
    }
    
    void updateEditorData()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateEditorData"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QAbstractItemView::updateEditorData();
    }
    void super_updateEditorData()
    {
        QAbstractItemView::updateEditorData();
    }
    
    bool isIndexHidden(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isIndexHidden"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, index).getValue());
        }
        return QListView::isIndexHidden(index);
    }
    bool super_isIndexHidden(const QModelIndex & index) const
    {
        return QListView::isIndexHidden(index);
    }
    
    void inputMethodEvent(QInputMethodEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QAbstractItemView::inputMethodEvent(event);
    }
    
    void setModel(QAbstractItemModel * model)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setModel"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, model);
            return;
        }
        QAbstractItemView::setModel(model);
    }
    void super_setModel(QAbstractItemModel * model)
    {
        QAbstractItemView::setModel(model);
    }
    
    void drawFrame(QPainter * __arg0)
    {
        QFrame::drawFrame(__arg0);
    }
    
    void setPositionForIndex(const QPoint & position, const QModelIndex & index)
    {
        QListView::setPositionForIndex(position, index);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery query) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, query).getValue());
        }
        return QAbstractItemView::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QAbstractItemView::inputMethodQuery(query);
    }
    
    void dragLeaveEvent(QDragLeaveEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QListView::dragLeaveEvent(e);
    }
    void super_dragLeaveEvent(QDragLeaveEvent * e)
    {
        QListView::dragLeaveEvent(e);
    }
    
    QSize minimumSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QAbstractScrollArea::minimumSizeHint();
    }
    QSize super_minimumSizeHint() const
    {
        return QAbstractScrollArea::minimumSizeHint();
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    int devType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("devType"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QWidget::devType();
    }
    int super_devType() const
    {
        return QWidget::devType();
    }
    
    void activated(const QModelIndex & index)
    {
        QAbstractItemView::activated(index);
    }
    
    QPaintEngine * paintEngine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEngine"));
        if(func)
        {
            return cpgf::fromVariant<QPaintEngine * >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QWidget::paintEngine();
    }
    QPaintEngine * super_paintEngine() const
    {
        return QWidget::paintEngine();
    }
    
    void reset()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("reset"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QListView::reset();
    }
    void super_reset()
    {
        QListView::reset();
    }
    
    void closeEditor(QWidget * editor, QAbstractItemDelegate::EndEditHint hint)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("closeEditor"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, editor, hint);
            return;
        }
        QAbstractItemView::closeEditor(editor, hint);
    }
    void super_closeEditor(QWidget * editor, QAbstractItemDelegate::EndEditHint hint)
    {
        QAbstractItemView::closeEditor(editor, hint);
    }
    
    void keyReleaseEvent(QKeyEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::keyReleaseEvent(__arg0);
    }
    void super_keyReleaseEvent(QKeyEvent * __arg0)
    {
        QWidget::keyReleaseEvent(__arg0);
    }
    
    int horizontalOffset() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("horizontalOffset"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QListView::horizontalOffset();
    }
    int super_horizontalOffset() const
    {
        return QListView::horizontalOffset();
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    QRect visualRect(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visualRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this, index).getValue());
        }
        return QListView::visualRect(index);
    }
    QRect super_visualRect(const QModelIndex & index) const
    {
        return QListView::visualRect(index);
    }
    
    void verticalScrollbarValueChanged(int value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("verticalScrollbarValueChanged"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, value);
            return;
        }
        QAbstractItemView::verticalScrollbarValueChanged(value);
    }
    void super_verticalScrollbarValueChanged(int value)
    {
        QAbstractItemView::verticalScrollbarValueChanged(value);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("visualRegionForSelection", (QRegion (D::ClassType::*) (const QItemSelection &) const)&D::ClassType::visualRegionForSelection);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("dropIndicatorPosition", (QAbstractItemView::DropIndicatorPosition (D::ClassType::*) () const)&D::ClassType::dropIndicatorPosition);
        _d.CPGF_MD_TEMPLATE _method("tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("executeDelayedItemsLayout", (void (D::ClassType::*) ())&D::ClassType::executeDelayedItemsLayout);
        _d.CPGF_MD_TEMPLATE _method("resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("scrollDirtyRegion", (void (D::ClassType::*) (int, int))&D::ClassType::scrollDirtyRegion);
        _d.CPGF_MD_TEMPLATE _method("hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::hideEvent);
        _d.CPGF_MD_TEMPLATE _method("pressed", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::pressed);
        _d.CPGF_MD_TEMPLATE _method("verticalScrollbarAction", (void (D::ClassType::*) (int))&D::ClassType::verticalScrollbarAction);
        _d.CPGF_MD_TEMPLATE _method("leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("commitData", (void (D::ClassType::*) (QWidget *))&D::ClassType::commitData);
        _d.CPGF_MD_TEMPLATE _method("horizontalScrollbarValueChanged", (void (D::ClassType::*) (int))&D::ClassType::horizontalScrollbarValueChanged);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("create", (void (D::ClassType::*) (WId, bool, bool))&D::ClassType::create)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::eventFilter);
        _d.CPGF_MD_TEMPLATE _method("updateEditorGeometries", (void (D::ClassType::*) ())&D::ClassType::updateEditorGeometries);
        _d.CPGF_MD_TEMPLATE _method("setDirtyRegion", (void (D::ClassType::*) (const QRegion &))&D::ClassType::setDirtyRegion, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("entered", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::entered);
        _d.CPGF_MD_TEMPLATE _method("redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::redirected);
        _d.CPGF_MD_TEMPLATE _method("state", (QAbstractItemView::State (D::ClassType::*) () const)&D::ClassType::state);
        _d.CPGF_MD_TEMPLATE _method("currentChanged", (void (D::ClassType::*) (const QModelIndex &, const QModelIndex &))&D::ClassType::currentChanged);
        _d.CPGF_MD_TEMPLATE _method("moveCursor", (QModelIndex (D::ClassType::*) (QAbstractItemView::CursorAction, Qt::KeyboardModifiers))&D::ClassType::moveCursor);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("dirtyRegionOffset", (QPoint (D::ClassType::*) () const)&D::ClassType::dirtyRegionOffset);
        _d.CPGF_MD_TEMPLATE _method("viewOptions", (QStyleOptionViewItem (D::ClassType::*) () const)&D::ClassType::viewOptions);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("editorDestroyed", (void (D::ClassType::*) (QObject *))&D::ClassType::editorDestroyed);
        _d.CPGF_MD_TEMPLATE _method("focusPreviousChild", (bool (D::ClassType::*) ())&D::ClassType::focusPreviousChild);
        _d.CPGF_MD_TEMPLATE _method("stopAutoScroll", (void (D::ClassType::*) ())&D::ClassType::stopAutoScroll);
        _d.CPGF_MD_TEMPLATE _method("scheduleDelayedItemsLayout", (void (D::ClassType::*) ())&D::ClassType::scheduleDelayedItemsLayout);
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("selectionCommand", (QItemSelectionModel::SelectionFlags (D::ClassType::*) (const QModelIndex &, const QEvent *) const)&D::ClassType::selectionCommand)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("rowsAboutToBeRemoved", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::rowsAboutToBeRemoved);
        _d.CPGF_MD_TEMPLATE _method("clicked", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::clicked);
        _d.CPGF_MD_TEMPLATE _method("rowsInserted", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::rowsInserted);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("doubleClicked", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::doubleClicked);
        _d.CPGF_MD_TEMPLATE _method("resizeContents", (void (D::ClassType::*) (int, int))&D::ClassType::resizeContents);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("setSelection", (void (D::ClassType::*) (const QRect &, QItemSelectionModel::SelectionFlags))&D::ClassType::setSelection);
        _d.CPGF_MD_TEMPLATE _method("startAutoScroll", (void (D::ClassType::*) ())&D::ClassType::startAutoScroll);
        _d.CPGF_MD_TEMPLATE _method("startDrag", (void (D::ClassType::*) (Qt::DropActions))&D::ClassType::startDrag);
        _d.CPGF_MD_TEMPLATE _method("doAutoScroll", (void (D::ClassType::*) ())&D::ClassType::doAutoScroll);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("verticalOffset", (int (D::ClassType::*) () const)&D::ClassType::verticalOffset);
        _d.CPGF_MD_TEMPLATE _method("viewportEntered", (void (D::ClassType::*) ())&D::ClassType::viewportEntered);
        _d.CPGF_MD_TEMPLATE _method("nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("setState", (void (D::ClassType::*) (QAbstractItemView::State))&D::ClassType::setState);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::closeEvent);
        _d.CPGF_MD_TEMPLATE _method("dataChanged", (void (D::ClassType::*) (const QModelIndex &, const QModelIndex &, const QVector< int > &))&D::ClassType::dataChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
            ._default(copyVariantFromCopyable(QVector< int >()))
        ;
        _d.CPGF_MD_TEMPLATE _method("setHorizontalStepsPerItem", (void (D::ClassType::*) (int))&D::ClassType::setHorizontalStepsPerItem);
        _d.CPGF_MD_TEMPLATE _method("viewportSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::viewportSizeHint);
        _d.CPGF_MD_TEMPLATE _method("scrollContentsBy", (void (D::ClassType::*) (int, int))&D::ClassType::scrollContentsBy);
        _d.CPGF_MD_TEMPLATE _method("setViewportMargins", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::setViewportMargins);
        _d.CPGF_MD_TEMPLATE _method("setVerticalStepsPerItem", (void (D::ClassType::*) (int))&D::ClassType::setVerticalStepsPerItem);
        _d.CPGF_MD_TEMPLATE _method("viewportEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::viewportEvent);
        _d.CPGF_MD_TEMPLATE _method("showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::showEvent);
        _d.CPGF_MD_TEMPLATE _method("horizontalStepsPerItem", (int (D::ClassType::*) () const)&D::ClassType::horizontalStepsPerItem);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::metric);
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("focusNextChild", (bool (D::ClassType::*) ())&D::ClassType::focusNextChild);
        _d.CPGF_MD_TEMPLATE _method("paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::paintEvent);
        _d.CPGF_MD_TEMPLATE _method("setViewportMargins", (void (D::ClassType::*) (const QMargins &))&D::ClassType::setViewportMargins);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("destroy", (void (D::ClassType::*) (bool, bool))&D::ClassType::destroy)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
        ;
        _d.CPGF_MD_TEMPLATE _method("selectionChanged", (void (D::ClassType::*) (const QItemSelection &, const QItemSelection &))&D::ClassType::selectionChanged);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::moveEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::changeEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("horizontalScrollbarAction", (void (D::ClassType::*) (int))&D::ClassType::horizontalScrollbarAction);
        _d.CPGF_MD_TEMPLATE _method("sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("edit", (bool (D::ClassType::*) (const QModelIndex &, QAbstractItemView::EditTrigger, QEvent *))&D::ClassType::edit);
        _d.CPGF_MD_TEMPLATE _method("verticalStepsPerItem", (int (D::ClassType::*) () const)&D::ClassType::verticalStepsPerItem);
        _d.CPGF_MD_TEMPLATE _method("enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::enterEvent);
        _d.CPGF_MD_TEMPLATE _method("updateGeometries", (void (D::ClassType::*) ())&D::ClassType::updateGeometries);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("rectForIndex", (QRect (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::rectForIndex);
        _d.CPGF_MD_TEMPLATE _method("focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::initPainter);
        _d.CPGF_MD_TEMPLATE _method("selectedIndexes", (QModelIndexList (D::ClassType::*) () const)&D::ClassType::selectedIndexes);
        _d.CPGF_MD_TEMPLATE _method("contentsSize", (QSize (D::ClassType::*) () const)&D::ClassType::contentsSize);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::actionEvent);
        _d.CPGF_MD_TEMPLATE _method("updateEditorData", (void (D::ClassType::*) ())&D::ClassType::updateEditorData);
        _d.CPGF_MD_TEMPLATE _method("isIndexHidden", (bool (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::isIndexHidden);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("drawFrame", (void (D::ClassType::*) (QPainter *))&D::ClassType::drawFrame);
        _d.CPGF_MD_TEMPLATE _method("setPositionForIndex", (void (D::ClassType::*) (const QPoint &, const QModelIndex &))&D::ClassType::setPositionForIndex);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("activated", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::activated);
        _d.CPGF_MD_TEMPLATE _method("closeEditor", (void (D::ClassType::*) (QWidget *, QAbstractItemDelegate::EndEditHint))&D::ClassType::closeEditor);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("horizontalOffset", (int (D::ClassType::*) () const)&D::ClassType::horizontalOffset);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("verticalScrollbarValueChanged", (void (D::ClassType::*) (int))&D::ClassType::verticalScrollbarValueChanged);
        _d.CPGF_MD_TEMPLATE _method("super_visualRegionForSelection", (QRegion (D::ClassType::*) (const QItemSelection &) const)&D::ClassType::super_visualRegionForSelection);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::super_tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("super_resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::super_resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::super_hideEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyboardSearch", (void (D::ClassType::*) (const QString &))&D::ClassType::super_keyboardSearch, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_verticalScrollbarAction", (void (D::ClassType::*) (int))&D::ClassType::super_verticalScrollbarAction);
        _d.CPGF_MD_TEMPLATE _method("super_leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_commitData", (void (D::ClassType::*) (QWidget *))&D::ClassType::super_commitData);
        _d.CPGF_MD_TEMPLATE _method("super_horizontalScrollbarValueChanged", (void (D::ClassType::*) (int))&D::ClassType::super_horizontalScrollbarValueChanged);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_updateEditorGeometries", (void (D::ClassType::*) ())&D::ClassType::super_updateEditorGeometries);
        _d.CPGF_MD_TEMPLATE _method("super_redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::super_redirected);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_currentChanged", (void (D::ClassType::*) (const QModelIndex &, const QModelIndex &))&D::ClassType::super_currentChanged);
        _d.CPGF_MD_TEMPLATE _method("super_moveCursor", (QModelIndex (D::ClassType::*) (QAbstractItemView::CursorAction, Qt::KeyboardModifiers))&D::ClassType::super_moveCursor);
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_viewOptions", (QStyleOptionViewItem (D::ClassType::*) () const)&D::ClassType::super_viewOptions);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_editorDestroyed", (void (D::ClassType::*) (QObject *))&D::ClassType::super_editorDestroyed);
        _d.CPGF_MD_TEMPLATE _method("super_doItemsLayout", (void (D::ClassType::*) ())&D::ClassType::super_doItemsLayout);
        _d.CPGF_MD_TEMPLATE _method("super_indexAt", (QModelIndex (D::ClassType::*) (const QPoint &) const)&D::ClassType::super_indexAt);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHintForColumn", (int (D::ClassType::*) (int) const)&D::ClassType::super_sizeHintForColumn);
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setRootIndex", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::super_setRootIndex);
        _d.CPGF_MD_TEMPLATE _method("super_selectionCommand", (QItemSelectionModel::SelectionFlags (D::ClassType::*) (const QModelIndex &, const QEvent *) const)&D::ClassType::super_selectionCommand)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_rowsAboutToBeRemoved", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::super_rowsAboutToBeRemoved);
        _d.CPGF_MD_TEMPLATE _method("super_selectAll", (void (D::ClassType::*) ())&D::ClassType::super_selectAll);
        _d.CPGF_MD_TEMPLATE _method("super_setVisible", (void (D::ClassType::*) (bool))&D::ClassType::super_setVisible);
        _d.CPGF_MD_TEMPLATE _method("super_rowsInserted", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::super_rowsInserted);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setSelectionModel", (void (D::ClassType::*) (QItemSelectionModel *))&D::ClassType::super_setSelectionModel);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHintForRow", (int (D::ClassType::*) (int) const)&D::ClassType::super_sizeHintForRow);
        _d.CPGF_MD_TEMPLATE _method("super_setSelection", (void (D::ClassType::*) (const QRect &, QItemSelectionModel::SelectionFlags))&D::ClassType::super_setSelection);
        _d.CPGF_MD_TEMPLATE _method("super_startDrag", (void (D::ClassType::*) (Qt::DropActions))&D::ClassType::super_startDrag);
        _d.CPGF_MD_TEMPLATE _method("super_verticalOffset", (int (D::ClassType::*) () const)&D::ClassType::super_verticalOffset);
        _d.CPGF_MD_TEMPLATE _method("super_nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::super_nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::super_closeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dataChanged", (void (D::ClassType::*) (const QModelIndex &, const QModelIndex &, const QVector< int > &))&D::ClassType::super_dataChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
            ._default(copyVariantFromCopyable(QVector< int >()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_viewportSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_viewportSizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_scrollContentsBy", (void (D::ClassType::*) (int, int))&D::ClassType::super_scrollContentsBy);
        _d.CPGF_MD_TEMPLATE _method("super_viewportEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_viewportEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::super_showEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::super_metric);
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::super_paintEvent);
        _d.CPGF_MD_TEMPLATE _method("super_selectionChanged", (void (D::ClassType::*) (const QItemSelection &, const QItemSelection &))&D::ClassType::super_selectionChanged);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::super_moveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_scrollTo", (void (D::ClassType::*) (const QModelIndex &, QAbstractItemView::ScrollHint))&D::ClassType::super_scrollTo)
            ._default(copyVariantFromCopyable(QAbstractItemView::EnsureVisible))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_changeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_horizontalScrollbarAction", (void (D::ClassType::*) (int))&D::ClassType::super_horizontalScrollbarAction);
        _d.CPGF_MD_TEMPLATE _method("super_sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::super_sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("super_setupViewport", (void (D::ClassType::*) (QWidget *))&D::ClassType::super_setupViewport);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_edit", (bool (D::ClassType::*) (const QModelIndex &, QAbstractItemView::EditTrigger, QEvent *))&D::ClassType::super_edit);
        _d.CPGF_MD_TEMPLATE _method("super_enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_enterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_updateGeometries", (void (D::ClassType::*) ())&D::ClassType::super_updateGeometries);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::super_focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("super_initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::super_initPainter);
        _d.CPGF_MD_TEMPLATE _method("super_selectedIndexes", (QModelIndexList (D::ClassType::*) () const)&D::ClassType::super_selectedIndexes);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::super_actionEvent);
        _d.CPGF_MD_TEMPLATE _method("super_updateEditorData", (void (D::ClassType::*) ())&D::ClassType::super_updateEditorData);
        _d.CPGF_MD_TEMPLATE _method("super_isIndexHidden", (bool (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_isIndexHidden);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setModel", (void (D::ClassType::*) (QAbstractItemModel *))&D::ClassType::super_setModel);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_minimumSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_devType", (int (D::ClassType::*) () const)&D::ClassType::super_devType);
        _d.CPGF_MD_TEMPLATE _method("super_paintEngine", (QPaintEngine * (D::ClassType::*) () const)&D::ClassType::super_paintEngine);
        _d.CPGF_MD_TEMPLATE _method("super_reset", (void (D::ClassType::*) ())&D::ClassType::super_reset);
        _d.CPGF_MD_TEMPLATE _method("super_closeEditor", (void (D::ClassType::*) (QWidget *, QAbstractItemDelegate::EndEditHint))&D::ClassType::super_closeEditor);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_horizontalOffset", (int (D::ClassType::*) () const)&D::ClassType::super_horizontalOffset);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_visualRect", (QRect (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_visualRect);
        _d.CPGF_MD_TEMPLATE _method("super_verticalScrollbarValueChanged", (void (D::ClassType::*) (int))&D::ClassType::super_verticalScrollbarValueChanged);
    }
};


template <typename D>
void buildMetaClass_QListViewWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QListViewWrapper::cpgf__register(_d);
    
    buildMetaClass_QListView<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

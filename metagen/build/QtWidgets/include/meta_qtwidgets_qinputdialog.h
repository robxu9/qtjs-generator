// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QINPUTDIALOG_H
#define CPGF_META_QTWIDGETS_QINPUTDIALOG_H


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
void buildMetaClass_QInputDialog(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *, Qt::WindowFlags)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setInputMode", &D::ClassType::setInputMode);
    _d.CPGF_MD_TEMPLATE _method("inputMode", &D::ClassType::inputMode);
    _d.CPGF_MD_TEMPLATE _method("setLabelText", &D::ClassType::setLabelText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("labelText", &D::ClassType::labelText);
    _d.CPGF_MD_TEMPLATE _method("setOption", &D::ClassType::setOption)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("testOption", &D::ClassType::testOption);
    _d.CPGF_MD_TEMPLATE _method("setOptions", &D::ClassType::setOptions);
    _d.CPGF_MD_TEMPLATE _method("options", &D::ClassType::options);
    _d.CPGF_MD_TEMPLATE _method("setTextValue", &D::ClassType::setTextValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("textValue", &D::ClassType::textValue);
    _d.CPGF_MD_TEMPLATE _method("setTextEchoMode", &D::ClassType::setTextEchoMode);
    _d.CPGF_MD_TEMPLATE _method("textEchoMode", &D::ClassType::textEchoMode);
    _d.CPGF_MD_TEMPLATE _method("setComboBoxEditable", &D::ClassType::setComboBoxEditable);
    _d.CPGF_MD_TEMPLATE _method("isComboBoxEditable", &D::ClassType::isComboBoxEditable);
    _d.CPGF_MD_TEMPLATE _method("setComboBoxItems", &D::ClassType::setComboBoxItems, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("comboBoxItems", &D::ClassType::comboBoxItems);
    _d.CPGF_MD_TEMPLATE _method("setIntValue", &D::ClassType::setIntValue);
    _d.CPGF_MD_TEMPLATE _method("intValue", &D::ClassType::intValue);
    _d.CPGF_MD_TEMPLATE _method("setIntMinimum", &D::ClassType::setIntMinimum);
    _d.CPGF_MD_TEMPLATE _method("intMinimum", &D::ClassType::intMinimum);
    _d.CPGF_MD_TEMPLATE _method("setIntMaximum", &D::ClassType::setIntMaximum);
    _d.CPGF_MD_TEMPLATE _method("intMaximum", &D::ClassType::intMaximum);
    _d.CPGF_MD_TEMPLATE _method("setIntRange", &D::ClassType::setIntRange);
    _d.CPGF_MD_TEMPLATE _method("setIntStep", &D::ClassType::setIntStep);
    _d.CPGF_MD_TEMPLATE _method("intStep", &D::ClassType::intStep);
    _d.CPGF_MD_TEMPLATE _method("setDoubleValue", &D::ClassType::setDoubleValue);
    _d.CPGF_MD_TEMPLATE _method("doubleValue", &D::ClassType::doubleValue);
    _d.CPGF_MD_TEMPLATE _method("setDoubleMinimum", &D::ClassType::setDoubleMinimum);
    _d.CPGF_MD_TEMPLATE _method("doubleMinimum", &D::ClassType::doubleMinimum);
    _d.CPGF_MD_TEMPLATE _method("setDoubleMaximum", &D::ClassType::setDoubleMaximum);
    _d.CPGF_MD_TEMPLATE _method("doubleMaximum", &D::ClassType::doubleMaximum);
    _d.CPGF_MD_TEMPLATE _method("setDoubleRange", &D::ClassType::setDoubleRange);
    _d.CPGF_MD_TEMPLATE _method("setDoubleDecimals", &D::ClassType::setDoubleDecimals);
    _d.CPGF_MD_TEMPLATE _method("doubleDecimals", &D::ClassType::doubleDecimals);
    _d.CPGF_MD_TEMPLATE _method("setOkButtonText", &D::ClassType::setOkButtonText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("okButtonText", &D::ClassType::okButtonText);
    _d.CPGF_MD_TEMPLATE _method("setCancelButtonText", &D::ClassType::setCancelButtonText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("cancelButtonText", &D::ClassType::cancelButtonText);
    _d.CPGF_MD_TEMPLATE _method("open", &D::ClassType::open);
    _d.CPGF_MD_TEMPLATE _method("minimumSizeHint", &D::ClassType::minimumSizeHint);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("setVisible", &D::ClassType::setVisible);
    _d.CPGF_MD_TEMPLATE _method("textValueChanged", &D::ClassType::textValueChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("textValueSelected", &D::ClassType::textValueSelected, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("intValueChanged", &D::ClassType::intValueChanged);
    _d.CPGF_MD_TEMPLATE _method("intValueSelected", &D::ClassType::intValueSelected);
    _d.CPGF_MD_TEMPLATE _method("doubleValueChanged", &D::ClassType::doubleValueChanged);
    _d.CPGF_MD_TEMPLATE _method("doubleValueSelected", &D::ClassType::doubleValueSelected);
    _d.CPGF_MD_TEMPLATE _method("done", &D::ClassType::done);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("getText", &D::ClassType::getText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<4> >())
        ._default(copyVariantFromCopyable(Qt::ImhNone))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(QString()))
        ._default(copyVariantFromCopyable(QLineEdit::Normal))
    ;
    _d.CPGF_MD_TEMPLATE _method("getMultiLineText", &D::ClassType::getMultiLineText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(Qt::ImhNone))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("getItem", &D::ClassType::getItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(Qt::ImhNone))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(true))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("getInt", &D::ClassType::getInt, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(2147483647))
        ._default(copyVariantFromCopyable(-2147483647))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("getDouble", &D::ClassType::getDouble, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(2147483647))
        ._default(copyVariantFromCopyable(-2147483647))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::InputDialogOption>("InputDialogOption")
        ._element("NoButtons", D::ClassType::NoButtons)
        ._element("UseListViewForComboBoxItems", D::ClassType::UseListViewForComboBoxItems)
        ._element("UsePlainTextEditForTextInput", D::ClassType::UsePlainTextEditForTextInput)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::InputMode>("InputMode")
        ._element("TextInput", D::ClassType::TextInput)
        ._element("IntInput", D::ClassType::IntInput)
        ._element("DoubleInput", D::ClassType::DoubleInput)
    ;
    {
        GDefineMetaClass<QFlags<typename QInputDialog::InputDialogOption > > _t_d = GDefineMetaClass<QFlags<typename QInputDialog::InputDialogOption > >::lazyDeclare("InputDialogOptions", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QInputDialog::InputDialogOption > >, typename QInputDialog::InputDialogOption >);
        _d._class(_t_d);
    }
}


class QInputDialogWrapper : public QInputDialog, public cpgf::GScriptWrapper {
public:
    
    QInputDialogWrapper(QWidget * parent = 0, Qt::WindowFlags flags = 0)
        : QInputDialog(parent, flags) {}
    
    void mouseDoubleClickEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mouseDoubleClickEvent(__arg0);
    }
    void super_mouseDoubleClickEvent(QMouseEvent * __arg0)
    {
        QWidget::mouseDoubleClickEvent(__arg0);
    }
    
    QPaintEngine * paintEngine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEngine"));
        if(func)
        {
            return cpgf::fromVariant<QPaintEngine * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::paintEngine();
    }
    QPaintEngine * super_paintEngine() const
    {
        return QWidget::paintEngine();
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void keyReleaseEvent(QKeyEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::keyReleaseEvent(__arg0);
    }
    void super_keyReleaseEvent(QKeyEvent * __arg0)
    {
        QWidget::keyReleaseEvent(__arg0);
    }
    
    void updateMicroFocus()
    {
        QWidget::updateMicroFocus();
    }
    
    void resizeEvent(QResizeEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resizeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QDialog::resizeEvent(__arg0);
    }
    void super_resizeEvent(QResizeEvent * __arg0)
    {
        QDialog::resizeEvent(__arg0);
    }
    
    void wheelEvent(QWheelEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::wheelEvent(__arg0);
    }
    void super_wheelEvent(QWheelEvent * __arg0)
    {
        QWidget::wheelEvent(__arg0);
    }
    
    void showEvent(QShowEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("showEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QDialog::showEvent(__arg0);
    }
    void super_showEvent(QShowEvent * __arg0)
    {
        QDialog::showEvent(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    QSize minimumSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QInputDialog::minimumSizeHint();
    }
    QSize super_minimumSizeHint() const
    {
        return QInputDialog::minimumSizeHint();
    }
    
    void mouseReleaseEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mouseReleaseEvent(__arg0);
    }
    void super_mouseReleaseEvent(QMouseEvent * __arg0)
    {
        QWidget::mouseReleaseEvent(__arg0);
    }
    
    void focusOutEvent(QFocusEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::focusOutEvent(__arg0);
    }
    void super_focusOutEvent(QFocusEvent * __arg0)
    {
        QWidget::focusOutEvent(__arg0);
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
        QWidget::dragEnterEvent(__arg0);
    }
    void super_dragEnterEvent(QDragEnterEvent * __arg0)
    {
        QWidget::dragEnterEvent(__arg0);
    }
    
    void hideEvent(QHideEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hideEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::hideEvent(__arg0);
    }
    void super_hideEvent(QHideEvent * __arg0)
    {
        QWidget::hideEvent(__arg0);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QDialog::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QDialog::eventFilter(__arg0, __arg1);
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
    
    void contextMenuEvent(QContextMenuEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QDialog::contextMenuEvent(__arg0);
    }
    void super_contextMenuEvent(QContextMenuEvent * __arg0)
    {
        QDialog::contextMenuEvent(__arg0);
    }
    
    void done(int result)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("done"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, result);
            return;
        }
        QInputDialog::done(result);
    }
    void super_done(int result)
    {
        QInputDialog::done(result);
    }
    
    void enterEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("enterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::enterEvent(__arg0);
    }
    void super_enterEvent(QEvent * __arg0)
    {
        QWidget::enterEvent(__arg0);
    }
    
    void inputMethodEvent(QInputMethodEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::inputMethodEvent(__arg0);
    }
    void super_inputMethodEvent(QInputMethodEvent * __arg0)
    {
        QWidget::inputMethodEvent(__arg0);
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
    
    bool focusPreviousChild()
    {
        return QWidget::focusPreviousChild();
    }
    
    void dropEvent(QDropEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dropEvent(__arg0);
    }
    void super_dropEvent(QDropEvent * __arg0)
    {
        QWidget::dropEvent(__arg0);
    }
    
    void closeEvent(QCloseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("closeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QDialog::closeEvent(__arg0);
    }
    void super_closeEvent(QCloseEvent * __arg0)
    {
        QDialog::closeEvent(__arg0);
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
    
    void focusInEvent(QFocusEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::focusInEvent(__arg0);
    }
    void super_focusInEvent(QFocusEvent * __arg0)
    {
        QWidget::focusInEvent(__arg0);
    }
    
    QPaintDevice * redirected(QPoint * offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("redirected"));
        if(func)
        {
            return cpgf::fromVariant<QPaintDevice * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QWidget::redirected(offset);
    }
    QPaintDevice * super_redirected(QPoint * offset) const
    {
        return QWidget::redirected(offset);
    }
    
    void initPainter(QPainter * painter) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initPainter"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter);
            return;
        }
        QWidget::initPainter(painter);
    }
    void super_initPainter(QPainter * painter) const
    {
        QWidget::initPainter(painter);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QInputDialog::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QInputDialog::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QInputDialog::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QInputDialog::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    int metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metric"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::metric(__arg0);
    }
    int super_metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        return QWidget::metric(__arg0);
    }
    
    QPainter * sharedPainter() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sharedPainter"));
        if(func)
        {
            return cpgf::fromVariant<QPainter * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::sharedPainter();
    }
    QPainter * super_sharedPainter() const
    {
        return QWidget::sharedPainter();
    }
    
    void adjustPosition(QWidget * __arg0)
    {
        QDialog::adjustPosition(__arg0);
    }
    
    void setVisible(bool visible)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setVisible"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, visible);
            return;
        }
        QInputDialog::setVisible(visible);
    }
    void super_setVisible(bool visible)
    {
        QInputDialog::setVisible(visible);
    }
    
    int exec()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("exec"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QDialog::exec();
    }
    int super_exec()
    {
        return QDialog::exec();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void leaveEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::leaveEvent(__arg0);
    }
    void super_leaveEvent(QEvent * __arg0)
    {
        QWidget::leaveEvent(__arg0);
    }
    
    void open()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("open"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QDialog::open();
    }
    void super_open()
    {
        QDialog::open();
    }
    
    void moveEvent(QMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::moveEvent(__arg0);
    }
    void super_moveEvent(QMoveEvent * __arg0)
    {
        QWidget::moveEvent(__arg0);
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
    
    bool nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("nativeEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, eventType, message, result).getValue());
        }
        return QWidget::nativeEvent(eventType, message, result);
    }
    bool super_nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        return QWidget::nativeEvent(eventType, message, result);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::inputMethodQuery(__arg0);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery __arg0) const
    {
        return QWidget::inputMethodQuery(__arg0);
    }
    
    void reject()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("reject"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QDialog::reject();
    }
    void super_reject()
    {
        QDialog::reject();
    }
    
    void dragMoveEvent(QDragMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dragMoveEvent(__arg0);
    }
    void super_dragMoveEvent(QDragMoveEvent * __arg0)
    {
        QWidget::dragMoveEvent(__arg0);
    }
    
    void actionEvent(QActionEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::actionEvent(__arg0);
    }
    void super_actionEvent(QActionEvent * __arg0)
    {
        QWidget::actionEvent(__arg0);
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
    
    void create(WId __arg0 = 0, bool initializeWindow = true, bool destroyOldWindow = true)
    {
        QWidget::create(__arg0, initializeWindow, destroyOldWindow);
    }
    
    bool focusNextPrevChild(bool next)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusNextPrevChild"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, next).getValue());
        }
        return QWidget::focusNextPrevChild(next);
    }
    bool super_focusNextPrevChild(bool next)
    {
        return QWidget::focusNextPrevChild(next);
    }
    
    void destroy(bool destroyWindow = true, bool destroySubWindows = true)
    {
        QWidget::destroy(destroyWindow, destroySubWindows);
    }
    
    void tabletEvent(QTabletEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("tabletEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::tabletEvent(__arg0);
    }
    void super_tabletEvent(QTabletEvent * __arg0)
    {
        QWidget::tabletEvent(__arg0);
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QWidget::hasHeightForWidth();
    }
    
    void accept()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accept"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QDialog::accept();
    }
    void super_accept()
    {
        QDialog::accept();
    }
    
    void changeEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("changeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::changeEvent(__arg0);
    }
    void super_changeEvent(QEvent * __arg0)
    {
        QWidget::changeEvent(__arg0);
    }
    
    void keyPressEvent(QKeyEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QDialog::keyPressEvent(__arg0);
    }
    void super_keyPressEvent(QKeyEvent * __arg0)
    {
        QDialog::keyPressEvent(__arg0);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QInputDialog::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QInputDialog::qt_metacast(__arg0);
    }
    
    bool focusNextChild()
    {
        return QWidget::focusNextChild();
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QWidget::event(__arg0);
    }
    
    int devType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("devType"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::devType();
    }
    int super_devType() const
    {
        return QWidget::devType();
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QInputDialog::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QInputDialog::sizeHint();
    }
    
    void mouseMoveEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mouseMoveEvent(__arg0);
    }
    void super_mouseMoveEvent(QMouseEvent * __arg0)
    {
        QWidget::mouseMoveEvent(__arg0);
    }
    
    void paintEvent(QPaintEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::paintEvent(__arg0);
    }
    void super_paintEvent(QPaintEvent * __arg0)
    {
        QWidget::paintEvent(__arg0);
    }
    
    void dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dragLeaveEvent(__arg0);
    }
    void super_dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        QWidget::dragLeaveEvent(__arg0);
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QWidget::heightForWidth(__arg0);
    }
    
    void mousePressEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mousePressEvent(__arg0);
    }
    void super_mousePressEvent(QMouseEvent * __arg0)
    {
        QWidget::mousePressEvent(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::showEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::hideEvent);
        _d.CPGF_MD_TEMPLATE _method("eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::eventFilter);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::enterEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("focusPreviousChild", (bool (D::ClassType::*) ())&D::ClassType::focusPreviousChild);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::closeEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::redirected);
        _d.CPGF_MD_TEMPLATE _method("initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::initPainter);
        _d.CPGF_MD_TEMPLATE _method("metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::metric);
        _d.CPGF_MD_TEMPLATE _method("sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("adjustPosition", (void (D::ClassType::*) (QWidget *))&D::ClassType::adjustPosition);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::moveEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::actionEvent);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("create", (void (D::ClassType::*) (WId, bool, bool))&D::ClassType::create)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("destroy", (void (D::ClassType::*) (bool, bool))&D::ClassType::destroy)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
        ;
        _d.CPGF_MD_TEMPLATE _method("tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::changeEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusNextChild", (bool (D::ClassType::*) ())&D::ClassType::focusNextChild);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::paintEvent);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paintEngine", (QPaintEngine * (D::ClassType::*) () const)&D::ClassType::super_paintEngine);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::super_resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::super_showEvent);
        _d.CPGF_MD_TEMPLATE _method("super_minimumSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::super_hideEvent);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_done", (void (D::ClassType::*) (int))&D::ClassType::super_done);
        _d.CPGF_MD_TEMPLATE _method("super_enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_enterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::super_closeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::super_redirected);
        _d.CPGF_MD_TEMPLATE _method("super_initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::super_initPainter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::super_metric);
        _d.CPGF_MD_TEMPLATE _method("super_sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::super_sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("super_setVisible", (void (D::ClassType::*) (bool))&D::ClassType::super_setVisible);
        _d.CPGF_MD_TEMPLATE _method("super_exec", (int (D::ClassType::*) ())&D::ClassType::super_exec);
        _d.CPGF_MD_TEMPLATE _method("super_leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_open", (void (D::ClassType::*) ())&D::ClassType::super_open);
        _d.CPGF_MD_TEMPLATE _method("super_moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::super_moveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::super_nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_reject", (void (D::ClassType::*) ())&D::ClassType::super_reject);
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::super_actionEvent);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::super_focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("super_tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::super_tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_accept", (void (D::ClassType::*) ())&D::ClassType::super_accept);
        _d.CPGF_MD_TEMPLATE _method("super_changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_changeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_devType", (int (D::ClassType::*) () const)&D::ClassType::super_devType);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::super_paintEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mousePressEvent);
    }
};


template <typename D>
void buildMetaClass_QInputDialogWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QInputDialogWrapper::cpgf__register(_d);
    
    buildMetaClass_QInputDialog<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

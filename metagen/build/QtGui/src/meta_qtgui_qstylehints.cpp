// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qstylehints.h>

#include "meta_qtgui_qstylehints.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QStyleHints()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QStyleHints, QObject> _nd = GDefineMetaClass<QStyleHints, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QStyleHints");
        buildMetaClass_QStyleHints(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QStyleHintsWrapper, QStyleHints> _nd = GDefineMetaClass<QStyleHintsWrapper, QStyleHints>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QStyleHintsWrapper");
        buildMetaClass_QStyleHintsWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


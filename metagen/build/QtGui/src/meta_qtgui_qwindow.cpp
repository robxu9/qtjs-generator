// Auto generated file, don't modify.

#include <qtGui_cpgf_compat.h>
#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include "QtGui/qwindow.h"

#include "meta_qtgui_qwindow.h"

using namespace cpgf;

namespace qt_metadata { 


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_Global_qwindow()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qwindow(_d);
    return _d.getMetaInfo();
}


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QWindow()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QWindow, QObject, QSurface> _nd = GDefineMetaClass<QWindow, QObject, QSurface>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QWindow", &buildMetaClass_QWindow);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace qt_metadata



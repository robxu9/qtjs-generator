// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQMLDEBUG_H
#define CPGF_META_QTQML_QQMLDEBUG_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQmlDebuggingEnabler(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (bool)>()
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("startTcpDebugServer", &D::ClassType::startTcpDebugServer, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QString()))
        ._default(copyVariantFromCopyable(QQmlDebuggingEnabler::DoNotWaitForClient))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StartMode>("StartMode")
        ._element("DoNotWaitForClient", D::ClassType::DoNotWaitForClient)
        ._element("WaitForClient", D::ClassType::WaitForClient)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

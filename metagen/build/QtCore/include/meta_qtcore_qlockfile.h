// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QLOCKFILE_H
#define CPGF_META_QTCORE_QLOCKFILE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QLockFile(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("lock", &D::ClassType::lock);
    _d.CPGF_MD_TEMPLATE _method("tryLock", &D::ClassType::tryLock)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("unlock", &D::ClassType::unlock);
    _d.CPGF_MD_TEMPLATE _method("setStaleLockTime", &D::ClassType::setStaleLockTime);
    _d.CPGF_MD_TEMPLATE _method("staleLockTime", &D::ClassType::staleLockTime);
    _d.CPGF_MD_TEMPLATE _method("isLocked", &D::ClassType::isLocked);
    _d.CPGF_MD_TEMPLATE _method("getLockInfo", &D::ClassType::getLockInfo);
    _d.CPGF_MD_TEMPLATE _method("removeStaleLockFile", &D::ClassType::removeStaleLockFile);
    _d.CPGF_MD_TEMPLATE _method("error", &D::ClassType::error);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::LockError>("LockError")
        ._element("NoError", D::ClassType::NoError)
        ._element("LockFailedError", D::ClassType::LockFailedError)
        ._element("PermissionError", D::ClassType::PermissionError)
        ._element("UnknownError", D::ClassType::UnknownError)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

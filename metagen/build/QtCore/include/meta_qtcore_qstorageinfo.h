// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QSTORAGEINFO_H
#define CPGF_META_QTCORE_QSTORAGEINFO_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qstorageinfo(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QStorageInfo &, const QStorageInfo &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QStorageInfo &, const QStorageInfo &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QStorageInfo & opErAToRWrapper_QStorageInfo__opAssign(QStorageInfo * self, const QStorageInfo & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QStorageInfo(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QDir &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStorageInfo &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("setPath", &D::ClassType::setPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("rootPath", &D::ClassType::rootPath);
    _d.CPGF_MD_TEMPLATE _method("device", &D::ClassType::device);
    _d.CPGF_MD_TEMPLATE _method("fileSystemType", &D::ClassType::fileSystemType);
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("displayName", &D::ClassType::displayName);
    _d.CPGF_MD_TEMPLATE _method("bytesTotal", &D::ClassType::bytesTotal);
    _d.CPGF_MD_TEMPLATE _method("bytesFree", &D::ClassType::bytesFree);
    _d.CPGF_MD_TEMPLATE _method("bytesAvailable", &D::ClassType::bytesAvailable);
    _d.CPGF_MD_TEMPLATE _method("isRoot", &D::ClassType::isRoot);
    _d.CPGF_MD_TEMPLATE _method("isReadOnly", &D::ClassType::isReadOnly);
    _d.CPGF_MD_TEMPLATE _method("isReady", &D::ClassType::isReady);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("refresh", &D::ClassType::refresh);
    _d.CPGF_MD_TEMPLATE _method("mountedVolumes", &D::ClassType::mountedVolumes);
    _d.CPGF_MD_TEMPLATE _method("root", &D::ClassType::root);
    _d.CPGF_MD_TEMPLATE _operator<QStorageInfo & (*)(cpgf::GMetaSelf, const QStorageInfo &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QStorageInfo & (*) (QStorageInfo *, const QStorageInfo &))&opErAToRWrapper_QStorageInfo__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

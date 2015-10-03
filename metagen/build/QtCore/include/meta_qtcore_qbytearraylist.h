// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QBYTEARRAYLIST_H
#define CPGF_META_QTCORE_QBYTEARRAYLIST_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtPrivate;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qbytearraylist(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("QByteArrayListIterator", &QByteArrayListIterator);
}


template <typename D>
void buildMetaClass_QListSpecialMethods< QByteArray >(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("join", (QByteArray (D::ClassType::*) () const)&D::ClassType::join);
    _d.CPGF_MD_TEMPLATE _method("join", (QByteArray (D::ClassType::*) (const QByteArray &) const)&D::ClassType::join, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("join", (QByteArray (D::ClassType::*) (char) const)&D::ClassType::join);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

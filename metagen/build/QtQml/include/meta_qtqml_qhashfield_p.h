// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QHASHFIELD_P_H
#define CPGF_META_QTQML_QHASHFIELD_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QHashField(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("clear", (void (D::ClassType::*) ())&D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("test", (bool (D::ClassType::*) (quint32))&D::ClassType::test);
    _d.CPGF_MD_TEMPLATE _method("testAndSet", (bool (D::ClassType::*) (quint32))&D::ClassType::testAndSet);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

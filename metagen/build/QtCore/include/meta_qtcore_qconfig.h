// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QCONFIG_H
#define CPGF_META_QTCORE_QCONFIG_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qconfig(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtCore_39")
        ._element("QT_LARGEFILE_SUPPORT", QT_LARGEFILE_SUPPORT)
        ._element("QT_POINTER_SIZE", QT_POINTER_SIZE)
        ._element("QT_COMPILER_SUPPORTS_SSE2", QT_COMPILER_SUPPORTS_SSE2)
        ._element("QT_COMPILER_SUPPORTS_SSE3", QT_COMPILER_SUPPORTS_SSE3)
        ._element("QT_COMPILER_SUPPORTS_SSSE3", QT_COMPILER_SUPPORTS_SSSE3)
        ._element("QT_COMPILER_SUPPORTS_SSE4_1", QT_COMPILER_SUPPORTS_SSE4_1)
        ._element("QT_COMPILER_SUPPORTS_SSE4_2", QT_COMPILER_SUPPORTS_SSE4_2)
        ._element("QT_COMPILER_SUPPORTS_AVX", QT_COMPILER_SUPPORTS_AVX)
        ._element("QT_COMPILER_SUPPORTS_AVX2", QT_COMPILER_SUPPORTS_AVX2)
        ._element("QT_QPA_DEFAULT_PLATFORM_NAME", QT_QPA_DEFAULT_PLATFORM_NAME)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

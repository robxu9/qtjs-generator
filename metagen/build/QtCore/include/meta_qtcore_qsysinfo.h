// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QSYSINFO_H
#define CPGF_META_QTCORE_QSYSINFO_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QSysInfo(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("WindowsVersion", &D::ClassType::WindowsVersion);
    _d.CPGF_MD_TEMPLATE _field("MacintoshVersion", &D::ClassType::MacintoshVersion);
    _d.CPGF_MD_TEMPLATE _method("windowsVersion", &D::ClassType::windowsVersion);
    _d.CPGF_MD_TEMPLATE _method("macVersion", &D::ClassType::macVersion);
    _d.CPGF_MD_TEMPLATE _method("buildCpuArchitecture", &D::ClassType::buildCpuArchitecture);
    _d.CPGF_MD_TEMPLATE _method("currentCpuArchitecture", &D::ClassType::currentCpuArchitecture);
    _d.CPGF_MD_TEMPLATE _method("buildAbi", &D::ClassType::buildAbi);
    _d.CPGF_MD_TEMPLATE _method("kernelType", &D::ClassType::kernelType);
    _d.CPGF_MD_TEMPLATE _method("kernelVersion", &D::ClassType::kernelVersion);
    _d.CPGF_MD_TEMPLATE _method("productType", &D::ClassType::productType);
    _d.CPGF_MD_TEMPLATE _method("productVersion", &D::ClassType::productVersion);
    _d.CPGF_MD_TEMPLATE _method("prettyProductName", &D::ClassType::prettyProductName);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Sizes>("Sizes")
        ._element("WordSize", D::ClassType::WordSize)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::WinVersion>("WinVersion")
        ._element("WV_None", D::ClassType::WV_None)
        ._element("WV_32s", D::ClassType::WV_32s)
        ._element("WV_95", D::ClassType::WV_95)
        ._element("WV_98", D::ClassType::WV_98)
        ._element("WV_Me", D::ClassType::WV_Me)
        ._element("WV_DOS_based", D::ClassType::WV_DOS_based)
        ._element("WV_NT", D::ClassType::WV_NT)
        ._element("WV_2000", D::ClassType::WV_2000)
        ._element("WV_XP", D::ClassType::WV_XP)
        ._element("WV_2003", D::ClassType::WV_2003)
        ._element("WV_VISTA", D::ClassType::WV_VISTA)
        ._element("WV_WINDOWS7", D::ClassType::WV_WINDOWS7)
        ._element("WV_WINDOWS8", D::ClassType::WV_WINDOWS8)
        ._element("WV_WINDOWS8_1", D::ClassType::WV_WINDOWS8_1)
        ._element("WV_WINDOWS10", D::ClassType::WV_WINDOWS10)
        ._element("WV_NT_based", D::ClassType::WV_NT_based)
        ._element("WV_4_0", D::ClassType::WV_4_0)
        ._element("WV_5_0", D::ClassType::WV_5_0)
        ._element("WV_5_1", D::ClassType::WV_5_1)
        ._element("WV_5_2", D::ClassType::WV_5_2)
        ._element("WV_6_0", D::ClassType::WV_6_0)
        ._element("WV_6_1", D::ClassType::WV_6_1)
        ._element("WV_6_2", D::ClassType::WV_6_2)
        ._element("WV_6_3", D::ClassType::WV_6_3)
        ._element("WV_10_0", D::ClassType::WV_10_0)
        ._element("WV_CE", D::ClassType::WV_CE)
        ._element("WV_CENET", D::ClassType::WV_CENET)
        ._element("WV_CE_5", D::ClassType::WV_CE_5)
        ._element("WV_CE_6", D::ClassType::WV_CE_6)
        ._element("WV_CE_based", D::ClassType::WV_CE_based)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::MacVersion>("MacVersion")
        ._element("MV_None", D::ClassType::MV_None)
        ._element("MV_Unknown", D::ClassType::MV_Unknown)
        ._element("MV_9", D::ClassType::MV_9)
        ._element("MV_10_0", D::ClassType::MV_10_0)
        ._element("MV_10_1", D::ClassType::MV_10_1)
        ._element("MV_10_2", D::ClassType::MV_10_2)
        ._element("MV_10_3", D::ClassType::MV_10_3)
        ._element("MV_10_4", D::ClassType::MV_10_4)
        ._element("MV_10_5", D::ClassType::MV_10_5)
        ._element("MV_10_6", D::ClassType::MV_10_6)
        ._element("MV_10_7", D::ClassType::MV_10_7)
        ._element("MV_10_8", D::ClassType::MV_10_8)
        ._element("MV_10_9", D::ClassType::MV_10_9)
        ._element("MV_10_10", D::ClassType::MV_10_10)
        ._element("MV_10_11", D::ClassType::MV_10_11)
        ._element("MV_CHEETAH", D::ClassType::MV_CHEETAH)
        ._element("MV_PUMA", D::ClassType::MV_PUMA)
        ._element("MV_JAGUAR", D::ClassType::MV_JAGUAR)
        ._element("MV_PANTHER", D::ClassType::MV_PANTHER)
        ._element("MV_TIGER", D::ClassType::MV_TIGER)
        ._element("MV_LEOPARD", D::ClassType::MV_LEOPARD)
        ._element("MV_SNOWLEOPARD", D::ClassType::MV_SNOWLEOPARD)
        ._element("MV_LION", D::ClassType::MV_LION)
        ._element("MV_MOUNTAINLION", D::ClassType::MV_MOUNTAINLION)
        ._element("MV_MAVERICKS", D::ClassType::MV_MAVERICKS)
        ._element("MV_YOSEMITE", D::ClassType::MV_YOSEMITE)
        ._element("MV_ELCAPITAN", D::ClassType::MV_ELCAPITAN)
        ._element("MV_IOS", D::ClassType::MV_IOS)
        ._element("MV_IOS_4_3", D::ClassType::MV_IOS_4_3)
        ._element("MV_IOS_5_0", D::ClassType::MV_IOS_5_0)
        ._element("MV_IOS_5_1", D::ClassType::MV_IOS_5_1)
        ._element("MV_IOS_6_0", D::ClassType::MV_IOS_6_0)
        ._element("MV_IOS_6_1", D::ClassType::MV_IOS_6_1)
        ._element("MV_IOS_7_0", D::ClassType::MV_IOS_7_0)
        ._element("MV_IOS_7_1", D::ClassType::MV_IOS_7_1)
        ._element("MV_IOS_8_0", D::ClassType::MV_IOS_8_0)
        ._element("MV_IOS_8_1", D::ClassType::MV_IOS_8_1)
        ._element("MV_IOS_8_2", D::ClassType::MV_IOS_8_2)
        ._element("MV_IOS_8_3", D::ClassType::MV_IOS_8_3)
        ._element("MV_IOS_8_4", D::ClassType::MV_IOS_8_4)
        ._element("MV_IOS_9_0", D::ClassType::MV_IOS_9_0)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

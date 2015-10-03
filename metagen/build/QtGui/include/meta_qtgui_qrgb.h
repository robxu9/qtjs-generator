// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QRGB_H
#define CPGF_META_QTGUI_QRGB_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qrgb(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("RGB_MASK", &RGB_MASK);
    _d.CPGF_MD_TEMPLATE _method("qRed", (int (*) (QRgb))&qRed);
    _d.CPGF_MD_TEMPLATE _method("qGreen", (int (*) (QRgb))&qGreen);
    _d.CPGF_MD_TEMPLATE _method("qBlue", (int (*) (QRgb))&qBlue);
    _d.CPGF_MD_TEMPLATE _method("qAlpha", (int (*) (QRgb))&qAlpha);
    _d.CPGF_MD_TEMPLATE _method("qRgb", (QRgb (*) (int, int, int))&qRgb);
    _d.CPGF_MD_TEMPLATE _method("qRgba", (QRgb (*) (int, int, int, int))&qRgba);
    _d.CPGF_MD_TEMPLATE _method("qGray", (int (*) (int, int, int))&qGray);
    _d.CPGF_MD_TEMPLATE _method("qGray", (int (*) (QRgb))&qGray);
    _d.CPGF_MD_TEMPLATE _method("qIsGray", (bool (*) (QRgb))&qIsGray);
    _d.CPGF_MD_TEMPLATE _method("qPremultiply", (Q_DECL_RELAXED_CONSTEXPR QRgb (*) (QRgb))&qPremultiply);
    _d.CPGF_MD_TEMPLATE _method("qUnpremultiply", (QRgb (*) (QRgb))&qUnpremultiply);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPIXELFORMAT_H
#define CPGF_META_QTGUI_QPIXELFORMAT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtPrivate;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qpixelformat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qPixelFormatRgba", (QPixelFormat (*) (uchar, uchar, uchar, uchar, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::AlphaPremultiplied, QPixelFormat::TypeInterpretation))&qPixelFormatRgba)
        ._default(copyVariantFromCopyable(QPixelFormat::UnsignedInteger))
        ._default(copyVariantFromCopyable(QPixelFormat::NotPremultiplied))
    ;
    _d.CPGF_MD_TEMPLATE _method("qPixelFormatGrayscale", (QPixelFormat (*) (uchar, QPixelFormat::TypeInterpretation))&qPixelFormatGrayscale)
        ._default(copyVariantFromCopyable(QPixelFormat::UnsignedInteger))
    ;
    _d.CPGF_MD_TEMPLATE _method("qPixelFormatAlpha", (QPixelFormat (*) (uchar, QPixelFormat::TypeInterpretation))&qPixelFormatAlpha)
        ._default(copyVariantFromCopyable(QPixelFormat::UnsignedInteger))
    ;
    _d.CPGF_MD_TEMPLATE _method("qPixelFormatCmyk", (QPixelFormat (*) (uchar, uchar, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::TypeInterpretation))&qPixelFormatCmyk)
        ._default(copyVariantFromCopyable(QPixelFormat::UnsignedInteger))
        ._default(copyVariantFromCopyable(QPixelFormat::AtBeginning))
        ._default(copyVariantFromCopyable(QPixelFormat::IgnoresAlpha))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qPixelFormatHsl", (QPixelFormat (*) (uchar, uchar, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::TypeInterpretation))&qPixelFormatHsl)
        ._default(copyVariantFromCopyable(QPixelFormat::FloatingPoint))
        ._default(copyVariantFromCopyable(QPixelFormat::AtBeginning))
        ._default(copyVariantFromCopyable(QPixelFormat::IgnoresAlpha))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qPixelFormatHsv", (QPixelFormat (*) (uchar, uchar, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::TypeInterpretation))&qPixelFormatHsv)
        ._default(copyVariantFromCopyable(QPixelFormat::FloatingPoint))
        ._default(copyVariantFromCopyable(QPixelFormat::AtBeginning))
        ._default(copyVariantFromCopyable(QPixelFormat::IgnoresAlpha))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qPixelFormatYuv", (QPixelFormat (*) (QPixelFormat::YUVLayout, uchar, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::AlphaPremultiplied, QPixelFormat::TypeInterpretation, QPixelFormat::ByteOrder))&qPixelFormatYuv)
        ._default(copyVariantFromCopyable(QPixelFormat::LittleEndian))
        ._default(copyVariantFromCopyable(QPixelFormat::UnsignedByte))
        ._default(copyVariantFromCopyable(QPixelFormat::NotPremultiplied))
        ._default(copyVariantFromCopyable(QPixelFormat::AtBeginning))
        ._default(copyVariantFromCopyable(QPixelFormat::IgnoresAlpha))
        ._default(copyVariantFromCopyable(0))
    ;
}


template <typename D>
void buildMetaClass_QPixelFormat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QPixelFormat::ColorModel, uchar, uchar, uchar, uchar, uchar, uchar, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::AlphaPremultiplied, QPixelFormat::TypeInterpretation, QPixelFormat::ByteOrder, uchar)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(QPixelFormat::CurrentSystemEndian))
    ;
    _d.CPGF_MD_TEMPLATE _method("colorModel", &D::ClassType::colorModel);
    _d.CPGF_MD_TEMPLATE _method("channelCount", &D::ClassType::channelCount);
    _d.CPGF_MD_TEMPLATE _method("redSize", &D::ClassType::redSize);
    _d.CPGF_MD_TEMPLATE _method("greenSize", &D::ClassType::greenSize);
    _d.CPGF_MD_TEMPLATE _method("blueSize", &D::ClassType::blueSize);
    _d.CPGF_MD_TEMPLATE _method("cyanSize", &D::ClassType::cyanSize);
    _d.CPGF_MD_TEMPLATE _method("magentaSize", &D::ClassType::magentaSize);
    _d.CPGF_MD_TEMPLATE _method("yellowSize", &D::ClassType::yellowSize);
    _d.CPGF_MD_TEMPLATE _method("blackSize", &D::ClassType::blackSize);
    _d.CPGF_MD_TEMPLATE _method("hueSize", &D::ClassType::hueSize);
    _d.CPGF_MD_TEMPLATE _method("saturationSize", &D::ClassType::saturationSize);
    _d.CPGF_MD_TEMPLATE _method("lightnessSize", &D::ClassType::lightnessSize);
    _d.CPGF_MD_TEMPLATE _method("brightnessSize", &D::ClassType::brightnessSize);
    _d.CPGF_MD_TEMPLATE _method("alphaSize", &D::ClassType::alphaSize);
    _d.CPGF_MD_TEMPLATE _method("bitsPerPixel", &D::ClassType::bitsPerPixel);
    _d.CPGF_MD_TEMPLATE _method("alphaUsage", &D::ClassType::alphaUsage);
    _d.CPGF_MD_TEMPLATE _method("alphaPosition", &D::ClassType::alphaPosition);
    _d.CPGF_MD_TEMPLATE _method("premultiplied", &D::ClassType::premultiplied);
    _d.CPGF_MD_TEMPLATE _method("typeInterpretation", &D::ClassType::typeInterpretation);
    _d.CPGF_MD_TEMPLATE _method("byteOrder", &D::ClassType::byteOrder);
    _d.CPGF_MD_TEMPLATE _method("yuvLayout", &D::ClassType::yuvLayout);
    _d.CPGF_MD_TEMPLATE _method("subEnum", &D::ClassType::subEnum);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ColorModel>("ColorModel")
        ._element("RGB", D::ClassType::RGB)
        ._element("BGR", D::ClassType::BGR)
        ._element("Indexed", D::ClassType::Indexed)
        ._element("Grayscale", D::ClassType::Grayscale)
        ._element("CMYK", D::ClassType::CMYK)
        ._element("HSL", D::ClassType::HSL)
        ._element("HSV", D::ClassType::HSV)
        ._element("YUV", D::ClassType::YUV)
        ._element("Alpha", D::ClassType::Alpha)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AlphaUsage>("AlphaUsage")
        ._element("UsesAlpha", D::ClassType::UsesAlpha)
        ._element("IgnoresAlpha", D::ClassType::IgnoresAlpha)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AlphaPosition>("AlphaPosition")
        ._element("AtBeginning", D::ClassType::AtBeginning)
        ._element("AtEnd", D::ClassType::AtEnd)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AlphaPremultiplied>("AlphaPremultiplied")
        ._element("NotPremultiplied", D::ClassType::NotPremultiplied)
        ._element("Premultiplied", D::ClassType::Premultiplied)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TypeInterpretation>("TypeInterpretation")
        ._element("UnsignedInteger", D::ClassType::UnsignedInteger)
        ._element("UnsignedShort", D::ClassType::UnsignedShort)
        ._element("UnsignedByte", D::ClassType::UnsignedByte)
        ._element("FloatingPoint", D::ClassType::FloatingPoint)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::YUVLayout>("YUVLayout")
        ._element("YUV444", D::ClassType::YUV444)
        ._element("YUV422", D::ClassType::YUV422)
        ._element("YUV411", D::ClassType::YUV411)
        ._element("YUV420P", D::ClassType::YUV420P)
        ._element("YUV420SP", D::ClassType::YUV420SP)
        ._element("YV12", D::ClassType::YV12)
        ._element("UYVY", D::ClassType::UYVY)
        ._element("YUYV", D::ClassType::YUYV)
        ._element("NV12", D::ClassType::NV12)
        ._element("NV21", D::ClassType::NV21)
        ._element("IMC1", D::ClassType::IMC1)
        ._element("IMC2", D::ClassType::IMC2)
        ._element("IMC3", D::ClassType::IMC3)
        ._element("IMC4", D::ClassType::IMC4)
        ._element("Y8", D::ClassType::Y8)
        ._element("Y16", D::ClassType::Y16)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ByteOrder>("ByteOrder")
        ._element("LittleEndian", D::ClassType::LittleEndian)
        ._element("BigEndian", D::ClassType::BigEndian)
        ._element("CurrentSystemEndian", D::ClassType::CurrentSystemEndian)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

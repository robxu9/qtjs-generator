// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKSHADEREFFECTSOURCE_P_H
#define CPGF_META_QTQML_QQUICKSHADEREFFECTSOURCE_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQuickShaderEffectSource(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQuickItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("wrapMode", &D::ClassType::wrapMode);
    _d.CPGF_MD_TEMPLATE _method("setWrapMode", &D::ClassType::setWrapMode);
    _d.CPGF_MD_TEMPLATE _method("sourceItem", &D::ClassType::sourceItem);
    _d.CPGF_MD_TEMPLATE _method("setSourceItem", &D::ClassType::setSourceItem);
    _d.CPGF_MD_TEMPLATE _method("sourceRect", &D::ClassType::sourceRect);
    _d.CPGF_MD_TEMPLATE _method("setSourceRect", &D::ClassType::setSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("textureSize", &D::ClassType::textureSize);
    _d.CPGF_MD_TEMPLATE _method("setTextureSize", &D::ClassType::setTextureSize);
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("setFormat", &D::ClassType::setFormat);
    _d.CPGF_MD_TEMPLATE _method("live", &D::ClassType::live);
    _d.CPGF_MD_TEMPLATE _method("setLive", &D::ClassType::setLive);
    _d.CPGF_MD_TEMPLATE _method("hideSource", &D::ClassType::hideSource);
    _d.CPGF_MD_TEMPLATE _method("setHideSource", &D::ClassType::setHideSource);
    _d.CPGF_MD_TEMPLATE _method("mipmap", &D::ClassType::mipmap);
    _d.CPGF_MD_TEMPLATE _method("setMipmap", &D::ClassType::setMipmap);
    _d.CPGF_MD_TEMPLATE _method("recursive", &D::ClassType::recursive);
    _d.CPGF_MD_TEMPLATE _method("setRecursive", &D::ClassType::setRecursive);
    _d.CPGF_MD_TEMPLATE _method("isTextureProvider", &D::ClassType::isTextureProvider);
    _d.CPGF_MD_TEMPLATE _method("textureProvider", &D::ClassType::textureProvider);
    _d.CPGF_MD_TEMPLATE _method("scheduleUpdate", &D::ClassType::scheduleUpdate);
    _d.CPGF_MD_TEMPLATE _method("wrapModeChanged", &D::ClassType::wrapModeChanged);
    _d.CPGF_MD_TEMPLATE _method("sourceItemChanged", &D::ClassType::sourceItemChanged);
    _d.CPGF_MD_TEMPLATE _method("sourceRectChanged", &D::ClassType::sourceRectChanged);
    _d.CPGF_MD_TEMPLATE _method("textureSizeChanged", &D::ClassType::textureSizeChanged);
    _d.CPGF_MD_TEMPLATE _method("formatChanged", &D::ClassType::formatChanged);
    _d.CPGF_MD_TEMPLATE _method("liveChanged", &D::ClassType::liveChanged);
    _d.CPGF_MD_TEMPLATE _method("hideSourceChanged", &D::ClassType::hideSourceChanged);
    _d.CPGF_MD_TEMPLATE _method("mipmapChanged", &D::ClassType::mipmapChanged);
    _d.CPGF_MD_TEMPLATE _method("recursiveChanged", &D::ClassType::recursiveChanged);
    _d.CPGF_MD_TEMPLATE _method("scheduledUpdateCompleted", &D::ClassType::scheduledUpdateCompleted);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::WrapMode>("WrapMode")
        ._element("ClampToEdge", D::ClassType::ClampToEdge)
        ._element("RepeatHorizontally", D::ClassType::RepeatHorizontally)
        ._element("RepeatVertically", D::ClassType::RepeatVertically)
        ._element("Repeat", D::ClassType::Repeat)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Format>("Format")
        ._element("Alpha", D::ClassType::Alpha)
        ._element("RGB", D::ClassType::RGB)
        ._element("RGBA", D::ClassType::RGBA)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

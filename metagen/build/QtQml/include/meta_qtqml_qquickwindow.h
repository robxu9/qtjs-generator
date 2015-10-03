// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKWINDOW_H
#define CPGF_META_QTQML_QQUICKWINDOW_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQuickWindow(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWindow *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQuickRenderControl *)>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("contentItem", &D::ClassType::contentItem);
    _d.CPGF_MD_TEMPLATE _method("activeFocusItem", &D::ClassType::activeFocusItem);
    _d.CPGF_MD_TEMPLATE _method("focusObject", &D::ClassType::focusObject);
    _d.CPGF_MD_TEMPLATE _method("mouseGrabberItem", &D::ClassType::mouseGrabberItem);
    _d.CPGF_MD_TEMPLATE _method("sendEvent", &D::ClassType::sendEvent);
    _d.CPGF_MD_TEMPLATE _method("grabWindow", &D::ClassType::grabWindow, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setRenderTarget", (void (D::ClassType::*) (QOpenGLFramebufferObject *))&D::ClassType::setRenderTarget);
    _d.CPGF_MD_TEMPLATE _method("renderTarget", &D::ClassType::renderTarget);
    _d.CPGF_MD_TEMPLATE _method("setRenderTarget", (void (D::ClassType::*) (uint, const QSize &))&D::ClassType::setRenderTarget);
    _d.CPGF_MD_TEMPLATE _method("renderTargetId", &D::ClassType::renderTargetId);
    _d.CPGF_MD_TEMPLATE _method("renderTargetSize", &D::ClassType::renderTargetSize);
    _d.CPGF_MD_TEMPLATE _method("resetOpenGLState", &D::ClassType::resetOpenGLState);
    _d.CPGF_MD_TEMPLATE _method("incubationController", &D::ClassType::incubationController);
    _d.CPGF_MD_TEMPLATE _method("accessibleRoot", &D::ClassType::accessibleRoot);
    _d.CPGF_MD_TEMPLATE _method("createTextureFromImage", (QSGTexture * (D::ClassType::*) (const QImage &) const)&D::ClassType::createTextureFromImage);
    _d.CPGF_MD_TEMPLATE _method("createTextureFromImage", (QSGTexture * (D::ClassType::*) (const QImage &, QQuickWindow::CreateTextureOptions) const)&D::ClassType::createTextureFromImage);
    _d.CPGF_MD_TEMPLATE _method("createTextureFromId", &D::ClassType::createTextureFromId)
        ._default(copyVariantFromCopyable(QQuickWindow::CreateTextureOption(0)))
    ;
    _d.CPGF_MD_TEMPLATE _method("setClearBeforeRendering", &D::ClassType::setClearBeforeRendering);
    _d.CPGF_MD_TEMPLATE _method("clearBeforeRendering", &D::ClassType::clearBeforeRendering);
    _d.CPGF_MD_TEMPLATE _method("setColor", &D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("color", &D::ClassType::color);
    _d.CPGF_MD_TEMPLATE _method("setPersistentOpenGLContext", &D::ClassType::setPersistentOpenGLContext);
    _d.CPGF_MD_TEMPLATE _method("isPersistentOpenGLContext", &D::ClassType::isPersistentOpenGLContext);
    _d.CPGF_MD_TEMPLATE _method("setPersistentSceneGraph", &D::ClassType::setPersistentSceneGraph);
    _d.CPGF_MD_TEMPLATE _method("isPersistentSceneGraph", &D::ClassType::isPersistentSceneGraph);
    _d.CPGF_MD_TEMPLATE _method("openglContext", &D::ClassType::openglContext);
    _d.CPGF_MD_TEMPLATE _method("isSceneGraphInitialized", &D::ClassType::isSceneGraphInitialized);
    _d.CPGF_MD_TEMPLATE _method("scheduleRenderJob", &D::ClassType::scheduleRenderJob);
    _d.CPGF_MD_TEMPLATE _method("effectiveDevicePixelRatio", &D::ClassType::effectiveDevicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("frameSwapped", &D::ClassType::frameSwapped);
    _d.CPGF_MD_TEMPLATE _method("openglContextCreated", &D::ClassType::openglContextCreated);
    _d.CPGF_MD_TEMPLATE _method("sceneGraphInitialized", &D::ClassType::sceneGraphInitialized);
    _d.CPGF_MD_TEMPLATE _method("sceneGraphInvalidated", &D::ClassType::sceneGraphInvalidated);
    _d.CPGF_MD_TEMPLATE _method("beforeSynchronizing", &D::ClassType::beforeSynchronizing);
    _d.CPGF_MD_TEMPLATE _method("afterSynchronizing", &D::ClassType::afterSynchronizing);
    _d.CPGF_MD_TEMPLATE _method("beforeRendering", &D::ClassType::beforeRendering);
    _d.CPGF_MD_TEMPLATE _method("afterRendering", &D::ClassType::afterRendering);
    _d.CPGF_MD_TEMPLATE _method("afterAnimating", &D::ClassType::afterAnimating);
    _d.CPGF_MD_TEMPLATE _method("sceneGraphAboutToStop", &D::ClassType::sceneGraphAboutToStop);
    _d.CPGF_MD_TEMPLATE _method("colorChanged", &D::ClassType::colorChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("activeFocusItemChanged", &D::ClassType::activeFocusItemChanged);
    _d.CPGF_MD_TEMPLATE _method("sceneGraphError", &D::ClassType::sceneGraphError, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("releaseResources", &D::ClassType::releaseResources);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("hasDefaultAlphaBuffer", &D::ClassType::hasDefaultAlphaBuffer);
    _d.CPGF_MD_TEMPLATE _method("setDefaultAlphaBuffer", &D::ClassType::setDefaultAlphaBuffer);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CreateTextureOption>("CreateTextureOption")
        ._element("TextureHasAlphaChannel", D::ClassType::TextureHasAlphaChannel)
        ._element("TextureHasMipmaps", D::ClassType::TextureHasMipmaps)
        ._element("TextureOwnsGLTexture", D::ClassType::TextureOwnsGLTexture)
        ._element("TextureCanUseAtlas", D::ClassType::TextureCanUseAtlas)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RenderStage>("RenderStage")
        ._element("BeforeSynchronizingStage", D::ClassType::BeforeSynchronizingStage)
        ._element("AfterSynchronizingStage", D::ClassType::AfterSynchronizingStage)
        ._element("BeforeRenderingStage", D::ClassType::BeforeRenderingStage)
        ._element("AfterRenderingStage", D::ClassType::AfterRenderingStage)
        ._element("AfterSwapStage", D::ClassType::AfterSwapStage)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SceneGraphError>("SceneGraphError")
        ._element("ContextNotAvailable", D::ClassType::ContextNotAvailable)
    ;
    {
        GDefineMetaClass<QFlags<typename QQuickWindow::CreateTextureOption > > _t_d = GDefineMetaClass<QFlags<typename QQuickWindow::CreateTextureOption > >::lazyDeclare("CreateTextureOptions", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QQuickWindow::CreateTextureOption > >, typename QQuickWindow::CreateTextureOption >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

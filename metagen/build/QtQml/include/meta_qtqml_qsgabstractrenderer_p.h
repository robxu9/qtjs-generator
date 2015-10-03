// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGABSTRACTRENDERER_P_H
#define CPGF_META_QTQML_QSGABSTRACTRENDERER_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline uint bItFiEldWrapper_QSGAbstractRendererPrivate_m_mirrored_getter(QSGAbstractRendererPrivate * self) {
    return self->m_mirrored;
}

inline void bItFiEldWrapper_QSGAbstractRendererPrivate_m_mirrored_setter(QSGAbstractRendererPrivate * self, uint value) {
    self->m_mirrored = value;
}


template <typename D>
void buildMetaClass_QSGAbstractRendererPrivate(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("m_root_node", &D::ClassType::m_root_node, cpgf::MakePolicy<cpgf::GMetaRuleForbidWrite, cpgf::GMetaRuleForbidRead >());
    _d.CPGF_MD_TEMPLATE _field("m_clear_color", &D::ClassType::m_clear_color);
    _d.CPGF_MD_TEMPLATE _field("m_clear_mode", &D::ClassType::m_clear_mode);
    _d.CPGF_MD_TEMPLATE _field("m_device_rect", &D::ClassType::m_device_rect);
    _d.CPGF_MD_TEMPLATE _field("m_viewport_rect", &D::ClassType::m_viewport_rect);
    _d.CPGF_MD_TEMPLATE _field("m_projection_matrix", &D::ClassType::m_projection_matrix);
    _d.CPGF_MD_TEMPLATE _property("m_mirrored", &bItFiEldWrapper_QSGAbstractRendererPrivate_m_mirrored_getter, &bItFiEldWrapper_QSGAbstractRendererPrivate_m_mirrored_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _method("get", &D::ClassType::get);
    _d.CPGF_MD_TEMPLATE _method("updateProjectionMatrix", &D::ClassType::updateProjectionMatrix);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

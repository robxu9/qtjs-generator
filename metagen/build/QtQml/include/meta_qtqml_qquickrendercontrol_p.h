// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKRENDERCONTROL_P_H
#define CPGF_META_QTQML_QQUICKRENDERCONTROL_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQuickRenderControlPrivate(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("initialized", &D::ClassType::initialized);
    _d.CPGF_MD_TEMPLATE _field("window", &D::ClassType::window, cpgf::MakePolicy<cpgf::GMetaRuleForbidWrite, cpgf::GMetaRuleForbidRead >());
    _d.CPGF_MD_TEMPLATE _field("rc", &D::ClassType::rc, cpgf::MakePolicy<cpgf::GMetaRuleForbidWrite, cpgf::GMetaRuleForbidRead >());
    _d.CPGF_MD_TEMPLATE _field("sg", &D::ClassType::sg, cpgf::MakePolicy<cpgf::GMetaRuleForbidWrite, cpgf::GMetaRuleForbidRead >());
    _d.CPGF_MD_TEMPLATE _method("windowDestroyed", &D::ClassType::windowDestroyed);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("maybeUpdate", &D::ClassType::maybeUpdate);
    _d.CPGF_MD_TEMPLATE _method("get", &D::ClassType::get);
    _d.CPGF_MD_TEMPLATE _method("cleanup", &D::ClassType::cleanup);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

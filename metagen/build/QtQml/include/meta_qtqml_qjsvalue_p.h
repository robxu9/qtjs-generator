// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QJSVALUE_P_H
#define CPGF_META_QTQML_QJSVALUE_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QJSValuePrivate(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("getValue", &D::ClassType::getValue);
    _d.CPGF_MD_TEMPLATE _method("getVariant", &D::ClassType::getVariant);
    _d.CPGF_MD_TEMPLATE _method("setVariant", &D::ClassType::setVariant, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setValue", (void (*) (QJSValue *, QV4::ExecutionEngine *, const QV4::Value &))&D::ClassType::setValue);
    _d.CPGF_MD_TEMPLATE _method("setValue", (void (*) (QJSValue *, QV4::ExecutionEngine *, QV4::ReturnedValue))&D::ClassType::setValue);
    _d.CPGF_MD_TEMPLATE _method("convertedToValue", &D::ClassType::convertedToValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("valueForData", &D::ClassType::valueForData);
    _d.CPGF_MD_TEMPLATE _method("engine", &D::ClassType::engine);
    _d.CPGF_MD_TEMPLATE _method("checkEngine", &D::ClassType::checkEngine, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("free", &D::ClassType::free);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

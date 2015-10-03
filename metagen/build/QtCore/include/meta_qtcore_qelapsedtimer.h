// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QELAPSEDTIMER_H
#define CPGF_META_QTCORE_QELAPSEDTIMER_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline bool opErAToRWrapper_QElapsedTimer__opEqual(const QElapsedTimer * self, const QElapsedTimer & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QElapsedTimer__opNotEqual(const QElapsedTimer * self, const QElapsedTimer & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QElapsedTimer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("start", &D::ClassType::start);
    _d.CPGF_MD_TEMPLATE _method("restart", &D::ClassType::restart);
    _d.CPGF_MD_TEMPLATE _method("invalidate", &D::ClassType::invalidate);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("nsecsElapsed", &D::ClassType::nsecsElapsed);
    _d.CPGF_MD_TEMPLATE _method("elapsed", &D::ClassType::elapsed);
    _d.CPGF_MD_TEMPLATE _method("hasExpired", &D::ClassType::hasExpired);
    _d.CPGF_MD_TEMPLATE _method("msecsSinceReference", &D::ClassType::msecsSinceReference);
    _d.CPGF_MD_TEMPLATE _method("msecsTo", &D::ClassType::msecsTo);
    _d.CPGF_MD_TEMPLATE _method("secsTo", &D::ClassType::secsTo);
    _d.CPGF_MD_TEMPLATE _method("clockType", &D::ClassType::clockType);
    _d.CPGF_MD_TEMPLATE _method("isMonotonic", &D::ClassType::isMonotonic);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ClockType>("ClockType")
        ._element("SystemTime", D::ClassType::SystemTime)
        ._element("MonotonicClock", D::ClassType::MonotonicClock)
        ._element("TickCounter", D::ClassType::TickCounter)
        ._element("MachAbsoluteTime", D::ClassType::MachAbsoluteTime)
        ._element("PerformanceCounter", D::ClassType::PerformanceCounter)
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QElapsedTimer &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QElapsedTimer *, const QElapsedTimer &))&opErAToRWrapper_QElapsedTimer__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QElapsedTimer &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QElapsedTimer *, const QElapsedTimer &))&opErAToRWrapper_QElapsedTimer__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

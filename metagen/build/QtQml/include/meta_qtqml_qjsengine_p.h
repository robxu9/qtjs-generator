// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QJSENGINE_P_H
#define CPGF_META_QTQML_QJSENGINE_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QV4;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_QJSEnginePrivate(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("mutex", &D::ClassType::mutex, cpgf::MakePolicy<cpgf::GMetaRuleForbidWrite, cpgf::GMetaRuleForbidRead >());
    _d.CPGF_MD_TEMPLATE _method("get", (QJSEnginePrivate * (*) (QJSEngine *))&D::ClassType::get);
    _d.CPGF_MD_TEMPLATE _method("get", (const QJSEnginePrivate * (*) (const QJSEngine *))&D::ClassType::get);
    _d.CPGF_MD_TEMPLATE _method("get", (QJSEnginePrivate * (*) (QV4::ExecutionEngine *))&D::ClassType::get);
    _d.CPGF_MD_TEMPLATE _method("cache", (QQmlPropertyCache * (D::ClassType::*) (QObject *))&D::ClassType::cache);
    _d.CPGF_MD_TEMPLATE _method("cache", (QQmlPropertyCache * (D::ClassType::*) (const QMetaObject *))&D::ClassType::cache);
    {
        GDefineMetaClass<QJSEnginePrivate::Locker> _nd = GDefineMetaClass<QJSEnginePrivate::Locker>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("Locker");
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const QJSEngine *)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const QJSEnginePrivate *)>();
        _nd.CPGF_MD_TEMPLATE _method("unlock", &QJSEnginePrivate::Locker::unlock);
        _nd.CPGF_MD_TEMPLATE _method("relock", &QJSEnginePrivate::Locker::relock);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

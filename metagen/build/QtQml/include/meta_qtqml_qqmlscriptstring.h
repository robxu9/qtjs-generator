// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQMLSCRIPTSTRING_H
#define CPGF_META_QTQML_QQMLSCRIPTSTRING_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QV4;


namespace qt_metadata { 


inline QQmlScriptString & opErAToRWrapper_QQmlScriptString__opAssign(QQmlScriptString * self, const QQmlScriptString & __arg0) {
    return (*self) = __arg0;
}
inline bool opErAToRWrapper_QQmlScriptString__opEqual(const QQmlScriptString * self, const QQmlScriptString & __arg0) {
    return (*self) == __arg0;
}
inline bool opErAToRWrapper_QQmlScriptString__opNotEqual(const QQmlScriptString * self, const QQmlScriptString & __arg0) {
    return (*self) != __arg0;
}


template <typename D>
void buildMetaClass_QQmlScriptString(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QQmlScriptString &)>();
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isUndefinedLiteral", &D::ClassType::isUndefinedLiteral);
    _d.CPGF_MD_TEMPLATE _method("isNullLiteral", &D::ClassType::isNullLiteral);
    _d.CPGF_MD_TEMPLATE _method("stringLiteral", &D::ClassType::stringLiteral);
    _d.CPGF_MD_TEMPLATE _method("numberLiteral", &D::ClassType::numberLiteral);
    _d.CPGF_MD_TEMPLATE _method("booleanLiteral", &D::ClassType::booleanLiteral);
    _d.CPGF_MD_TEMPLATE _operator<QQmlScriptString & (*)(cpgf::GMetaSelf, const QQmlScriptString &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QQmlScriptString & (*) (QQmlScriptString *, const QQmlScriptString &))&opErAToRWrapper_QQmlScriptString__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QQmlScriptString &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QQmlScriptString *, const QQmlScriptString &))&opErAToRWrapper_QQmlScriptString__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QQmlScriptString &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QQmlScriptString *, const QQmlScriptString &))&opErAToRWrapper_QQmlScriptString__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

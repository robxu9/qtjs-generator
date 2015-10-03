// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QDEBUG_H
#define CPGF_META_QTCORE_QDEBUG_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qdebug(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qt_QMetaEnum_debugOperator", (QDebug (*) (QDebug &, int, const QMetaObject *, const char *))&qt_QMetaEnum_debugOperator);
    _d.CPGF_MD_TEMPLATE _method("qt_QMetaEnum_flagDebugOperator", (QDebug (*) (QDebug &, quint64, const QMetaObject *, const char *))&qt_QMetaEnum_flagDebugOperator);
}


inline QDebug & opErAToRWrapper_QDebug__opAssign(QDebug * self, const QDebug & other) {
    return (*self) = other;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, QChar t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, bool t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, char t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, signed short t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, unsigned short t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, signed int t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, unsigned int t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, signed long t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, unsigned long t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, qint64 t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, quint64 t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, float t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, double t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, const char * t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, const QString & t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, const QStringRef & t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, QLatin1String t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, const QByteArray & t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, const void * t) {
    return (*self) << t;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, QTextStreamFunction f) {
    return (*self) << f;
}
inline QDebug & opErAToRWrapper_QDebug__opLeftShift(QDebug * self, QTextStreamManipulator m) {
    return (*self) << m;
}


template <typename D>
void buildMetaClass_QDebug(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QIODevice *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QString *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QtMsgType)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QDebug &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("resetFormat", &D::ClassType::resetFormat);
    _d.CPGF_MD_TEMPLATE _method("space", &D::ClassType::space);
    _d.CPGF_MD_TEMPLATE _method("nospace", &D::ClassType::nospace);
    _d.CPGF_MD_TEMPLATE _method("maybeSpace", &D::ClassType::maybeSpace);
    _d.CPGF_MD_TEMPLATE _method("autoInsertSpaces", &D::ClassType::autoInsertSpaces);
    _d.CPGF_MD_TEMPLATE _method("setAutoInsertSpaces", &D::ClassType::setAutoInsertSpaces);
    _d.CPGF_MD_TEMPLATE _method("quote", &D::ClassType::quote);
    _d.CPGF_MD_TEMPLATE _method("noquote", &D::ClassType::noquote);
    _d.CPGF_MD_TEMPLATE _method("maybeQuote", &D::ClassType::maybeQuote)
        ._default(copyVariantFromCopyable('"'))
    ;
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, const QDebug &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QDebug & (*) (QDebug *, const QDebug &))&opErAToRWrapper_QDebug__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, QChar)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, QChar))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, bool)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, bool))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, char)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, char))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, signed short)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, signed short))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, unsigned short)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, unsigned short))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, signed int)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, signed int))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, unsigned int)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, unsigned int))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, signed long)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, signed long))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, unsigned long)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, unsigned long))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, qint64)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, qint64))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, quint64)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, quint64))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, float)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, float))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, double)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, double))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, const char *)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, const char *))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, const QString &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, const QString &))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, const QStringRef &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, const QStringRef &))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, QLatin1String)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, QLatin1String))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, const QByteArray &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, const QByteArray &))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, const void *)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, const void *))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, QTextStreamFunction)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, QTextStreamFunction))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug & (*)(cpgf::GMetaSelf, QTextStreamManipulator)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QDebug & (*) (QDebug *, QTextStreamManipulator))&opErAToRWrapper_QDebug__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QDebugStateSaver(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QDebug &)>();
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

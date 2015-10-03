// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QMARGINS_H
#define CPGF_META_QTCORE_QMARGINS_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qmargins(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QMargins &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QMargins &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QMargins &, const QMargins &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QMargins &, const QMargins &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, const QMargins &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, const QMargins &)>(mopHolder - mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, int)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(int, const QMargins &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, int)>(mopHolder - mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, int)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(int, const QMargins &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, qreal)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(qreal, const QMargins &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, int)>(mopHolder / mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, qreal)>(mopHolder / mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &)>(+mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &)>(-mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QMargins &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QMarginsF &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QMarginsF &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QMarginsF &, const QMarginsF &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QMarginsF &, const QMarginsF &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QMarginsF (*)(const QMarginsF &, const QMarginsF &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QMarginsF (*)(const QMarginsF &, const QMarginsF &)>(mopHolder - mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QMarginsF (*)(const QMarginsF &, qreal)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QMarginsF (*)(qreal, const QMarginsF &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QMarginsF (*)(const QMarginsF &, qreal)>(mopHolder - mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QMarginsF (*)(const QMarginsF &, qreal)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QMarginsF (*)(qreal, const QMarginsF &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QMarginsF (*)(const QMarginsF &, qreal)>(mopHolder / mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QMarginsF (*)(const QMarginsF &)>(+mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QMarginsF (*)(const QMarginsF &)>(-mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QMarginsF &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline Q_DECL_RELAXED_CONSTEXPR QMargins & opErAToRWrapper_QMargins__opAddAssign(QMargins * self, const QMargins & margins) {
    return (*self) += margins;
}
inline Q_DECL_RELAXED_CONSTEXPR QMargins & opErAToRWrapper_QMargins__opSubAssign(QMargins * self, const QMargins & margins) {
    return (*self) -= margins;
}
inline Q_DECL_RELAXED_CONSTEXPR QMargins & opErAToRWrapper_QMargins__opMulAssign(QMargins * self, int __arg0) {
    return (*self) *= __arg0;
}
inline Q_DECL_RELAXED_CONSTEXPR QMargins & opErAToRWrapper_QMargins__opDivAssign(QMargins * self, int __arg0) {
    return (*self) /= __arg0;
}
inline Q_DECL_RELAXED_CONSTEXPR QMargins & opErAToRWrapper_QMargins__opMulAssign(QMargins * self, qreal __arg0) {
    return (*self) *= __arg0;
}
inline Q_DECL_RELAXED_CONSTEXPR QMargins & opErAToRWrapper_QMargins__opDivAssign(QMargins * self, qreal __arg0) {
    return (*self) /= __arg0;
}


template <typename D>
void buildMetaClass_QMargins(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, int, int)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("left", &D::ClassType::left);
    _d.CPGF_MD_TEMPLATE _method("top", &D::ClassType::top);
    _d.CPGF_MD_TEMPLATE _method("right", &D::ClassType::right);
    _d.CPGF_MD_TEMPLATE _method("bottom", &D::ClassType::bottom);
    _d.CPGF_MD_TEMPLATE _method("setLeft", &D::ClassType::setLeft);
    _d.CPGF_MD_TEMPLATE _method("setTop", &D::ClassType::setTop);
    _d.CPGF_MD_TEMPLATE _method("setRight", &D::ClassType::setRight);
    _d.CPGF_MD_TEMPLATE _method("setBottom", &D::ClassType::setBottom);
    _d.CPGF_MD_TEMPLATE _operator<Q_DECL_RELAXED_CONSTEXPR QMargins & (*)(cpgf::GMetaSelf, const QMargins &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (Q_DECL_RELAXED_CONSTEXPR QMargins & (*) (QMargins *, const QMargins &))&opErAToRWrapper_QMargins__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<Q_DECL_RELAXED_CONSTEXPR QMargins & (*)(cpgf::GMetaSelf, const QMargins &)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (Q_DECL_RELAXED_CONSTEXPR QMargins & (*) (QMargins *, const QMargins &))&opErAToRWrapper_QMargins__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<Q_DECL_RELAXED_CONSTEXPR QMargins & (*)(cpgf::GMetaSelf, int)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (Q_DECL_RELAXED_CONSTEXPR QMargins & (*) (QMargins *, int))&opErAToRWrapper_QMargins__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<Q_DECL_RELAXED_CONSTEXPR QMargins & (*)(cpgf::GMetaSelf, int)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (Q_DECL_RELAXED_CONSTEXPR QMargins & (*) (QMargins *, int))&opErAToRWrapper_QMargins__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<Q_DECL_RELAXED_CONSTEXPR QMargins & (*)(cpgf::GMetaSelf, qreal)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (Q_DECL_RELAXED_CONSTEXPR QMargins & (*) (QMargins *, qreal))&opErAToRWrapper_QMargins__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<Q_DECL_RELAXED_CONSTEXPR QMargins & (*)(cpgf::GMetaSelf, qreal)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (Q_DECL_RELAXED_CONSTEXPR QMargins & (*) (QMargins *, qreal))&opErAToRWrapper_QMargins__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


inline Q_DECL_RELAXED_CONSTEXPR QMarginsF & opErAToRWrapper_QMarginsF__opAddAssign(QMarginsF * self, const QMarginsF & margins) {
    return (*self) += margins;
}
inline Q_DECL_RELAXED_CONSTEXPR QMarginsF & opErAToRWrapper_QMarginsF__opSubAssign(QMarginsF * self, const QMarginsF & margins) {
    return (*self) -= margins;
}
inline Q_DECL_RELAXED_CONSTEXPR QMarginsF & opErAToRWrapper_QMarginsF__opAddAssign(QMarginsF * self, qreal addend) {
    return (*self) += addend;
}
inline Q_DECL_RELAXED_CONSTEXPR QMarginsF & opErAToRWrapper_QMarginsF__opSubAssign(QMarginsF * self, qreal subtrahend) {
    return (*self) -= subtrahend;
}
inline Q_DECL_RELAXED_CONSTEXPR QMarginsF & opErAToRWrapper_QMarginsF__opMulAssign(QMarginsF * self, qreal factor) {
    return (*self) *= factor;
}
inline Q_DECL_RELAXED_CONSTEXPR QMarginsF & opErAToRWrapper_QMarginsF__opDivAssign(QMarginsF * self, qreal divisor) {
    return (*self) /= divisor;
}


template <typename D>
void buildMetaClass_QMarginsF(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QMargins &)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("left", &D::ClassType::left);
    _d.CPGF_MD_TEMPLATE _method("top", &D::ClassType::top);
    _d.CPGF_MD_TEMPLATE _method("right", &D::ClassType::right);
    _d.CPGF_MD_TEMPLATE _method("bottom", &D::ClassType::bottom);
    _d.CPGF_MD_TEMPLATE _method("setLeft", &D::ClassType::setLeft);
    _d.CPGF_MD_TEMPLATE _method("setTop", &D::ClassType::setTop);
    _d.CPGF_MD_TEMPLATE _method("setRight", &D::ClassType::setRight);
    _d.CPGF_MD_TEMPLATE _method("setBottom", &D::ClassType::setBottom);
    _d.CPGF_MD_TEMPLATE _method("toMargins", &D::ClassType::toMargins);
    _d.CPGF_MD_TEMPLATE _operator<Q_DECL_RELAXED_CONSTEXPR QMarginsF & (*)(cpgf::GMetaSelf, const QMarginsF &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (Q_DECL_RELAXED_CONSTEXPR QMarginsF & (*) (QMarginsF *, const QMarginsF &))&opErAToRWrapper_QMarginsF__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<Q_DECL_RELAXED_CONSTEXPR QMarginsF & (*)(cpgf::GMetaSelf, const QMarginsF &)>(mopHolder -= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (Q_DECL_RELAXED_CONSTEXPR QMarginsF & (*) (QMarginsF *, const QMarginsF &))&opErAToRWrapper_QMarginsF__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<Q_DECL_RELAXED_CONSTEXPR QMarginsF & (*)(cpgf::GMetaSelf, qreal)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (Q_DECL_RELAXED_CONSTEXPR QMarginsF & (*) (QMarginsF *, qreal))&opErAToRWrapper_QMarginsF__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<Q_DECL_RELAXED_CONSTEXPR QMarginsF & (*)(cpgf::GMetaSelf, qreal)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (Q_DECL_RELAXED_CONSTEXPR QMarginsF & (*) (QMarginsF *, qreal))&opErAToRWrapper_QMarginsF__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<Q_DECL_RELAXED_CONSTEXPR QMarginsF & (*)(cpgf::GMetaSelf, qreal)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (Q_DECL_RELAXED_CONSTEXPR QMarginsF & (*) (QMarginsF *, qreal))&opErAToRWrapper_QMarginsF__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<Q_DECL_RELAXED_CONSTEXPR QMarginsF & (*)(cpgf::GMetaSelf, qreal)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (Q_DECL_RELAXED_CONSTEXPR QMarginsF & (*) (QMarginsF *, qreal))&opErAToRWrapper_QMarginsF__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

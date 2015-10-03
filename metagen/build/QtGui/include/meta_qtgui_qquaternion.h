// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QQUATERNION_H
#define CPGF_META_QTGUI_QQUATERNION_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qquaternion(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qFuzzyCompare", (bool (*) (const QQuaternion &, const QQuaternion &))&qFuzzyCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QQuaternion (*)(const QQuaternion &, const QQuaternion &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QQuaternion &, const QQuaternion &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QQuaternion &, const QQuaternion &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QQuaternion (*)(const QQuaternion &, const QQuaternion &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QQuaternion (*)(const QQuaternion &, const QQuaternion &)>(mopHolder - mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QQuaternion (*)(float, const QQuaternion &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QQuaternion (*)(const QQuaternion &, float)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<const QQuaternion (*)(const QQuaternion &)>(-mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<const QQuaternion (*)(const QQuaternion &, float)>(mopHolder / mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QVector3D (*)(const QQuaternion &, const QVector3D &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QQuaternion &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QQuaternion &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QQuaternion &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
}


inline QQuaternion & opErAToRWrapper_QQuaternion__opAddAssign(QQuaternion * self, const QQuaternion & quaternion) {
    return (*self) += quaternion;
}
inline QQuaternion & opErAToRWrapper_QQuaternion__opSubAssign(QQuaternion * self, const QQuaternion & quaternion) {
    return (*self) -= quaternion;
}
inline QQuaternion & opErAToRWrapper_QQuaternion__opMulAssign(QQuaternion * self, float factor) {
    return (*self) *= factor;
}
inline QQuaternion & opErAToRWrapper_QQuaternion__opMulAssign(QQuaternion * self, const QQuaternion & quaternion) {
    return (*self) *= quaternion;
}
inline QQuaternion & opErAToRWrapper_QQuaternion__opDivAssign(QQuaternion * self, float divisor) {
    return (*self) /= divisor;
}


template <typename D>
void buildMetaClass_QQuaternion(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::Initialization)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (float, float, float, float)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (float, const QVector3D &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector4D &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isIdentity", &D::ClassType::isIdentity);
    _d.CPGF_MD_TEMPLATE _method("vector", &D::ClassType::vector);
    _d.CPGF_MD_TEMPLATE _method("setVector", (void (D::ClassType::*) (const QVector3D &))&D::ClassType::setVector, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setVector", (void (D::ClassType::*) (float, float, float))&D::ClassType::setVector);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("z", &D::ClassType::z);
    _d.CPGF_MD_TEMPLATE _method("scalar", &D::ClassType::scalar);
    _d.CPGF_MD_TEMPLATE _method("setX", &D::ClassType::setX);
    _d.CPGF_MD_TEMPLATE _method("setY", &D::ClassType::setY);
    _d.CPGF_MD_TEMPLATE _method("setZ", &D::ClassType::setZ);
    _d.CPGF_MD_TEMPLATE _method("setScalar", &D::ClassType::setScalar);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("lengthSquared", &D::ClassType::lengthSquared);
    _d.CPGF_MD_TEMPLATE _method("normalized", &D::ClassType::normalized);
    _d.CPGF_MD_TEMPLATE _method("normalize", &D::ClassType::normalize);
    _d.CPGF_MD_TEMPLATE _method("inverted", &D::ClassType::inverted);
    _d.CPGF_MD_TEMPLATE _method("conjugated", &D::ClassType::conjugated);
    _d.CPGF_MD_TEMPLATE _method("rotatedVector", &D::ClassType::rotatedVector, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toVector4D", &D::ClassType::toVector4D);
    _d.CPGF_MD_TEMPLATE _method("getAxisAndAngle", (void (D::ClassType::*) (QVector3D *, float *) const)&D::ClassType::getAxisAndAngle);
    _d.CPGF_MD_TEMPLATE _method("getAxisAndAngle", (void (D::ClassType::*) (float *, float *, float *, float *) const)&D::ClassType::getAxisAndAngle);
    _d.CPGF_MD_TEMPLATE _method("toEulerAngles", &D::ClassType::toEulerAngles);
    _d.CPGF_MD_TEMPLATE _method("getEulerAngles", &D::ClassType::getEulerAngles);
    _d.CPGF_MD_TEMPLATE _method("toRotationMatrix", &D::ClassType::toRotationMatrix);
    _d.CPGF_MD_TEMPLATE _method("getAxes", &D::ClassType::getAxes);
    _d.CPGF_MD_TEMPLATE _method("dotProduct", &D::ClassType::dotProduct, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("fromAxisAndAngle", (QQuaternion (*) (const QVector3D &, float))&D::ClassType::fromAxisAndAngle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromAxisAndAngle", (QQuaternion (*) (float, float, float, float))&D::ClassType::fromAxisAndAngle);
    _d.CPGF_MD_TEMPLATE _method("fromEulerAngles", (QQuaternion (*) (const QVector3D &))&D::ClassType::fromEulerAngles, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromEulerAngles", (QQuaternion (*) (float, float, float))&D::ClassType::fromEulerAngles);
    _d.CPGF_MD_TEMPLATE _method("fromRotationMatrix", &D::ClassType::fromRotationMatrix);
    _d.CPGF_MD_TEMPLATE _method("fromAxes", &D::ClassType::fromAxes, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("fromDirection", &D::ClassType::fromDirection, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("rotationTo", &D::ClassType::rotationTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("slerp", &D::ClassType::slerp, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("nlerp", &D::ClassType::nlerp, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QQuaternion & (*)(cpgf::GMetaSelf, const QQuaternion &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QQuaternion & (*) (QQuaternion *, const QQuaternion &))&opErAToRWrapper_QQuaternion__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQuaternion & (*)(cpgf::GMetaSelf, const QQuaternion &)>(mopHolder -= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QQuaternion & (*) (QQuaternion *, const QQuaternion &))&opErAToRWrapper_QQuaternion__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQuaternion & (*)(cpgf::GMetaSelf, float)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QQuaternion & (*) (QQuaternion *, float))&opErAToRWrapper_QQuaternion__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQuaternion & (*)(cpgf::GMetaSelf, const QQuaternion &)>(mopHolder *= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QQuaternion & (*) (QQuaternion *, const QQuaternion &))&opErAToRWrapper_QQuaternion__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQuaternion & (*)(cpgf::GMetaSelf, float)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QQuaternion & (*) (QQuaternion *, float))&opErAToRWrapper_QQuaternion__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

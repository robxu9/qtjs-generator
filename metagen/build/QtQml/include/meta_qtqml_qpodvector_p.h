// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QPODVECTOR_P_H
#define CPGF_META_QTQML_QPODVECTOR_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <class T, int Increment>
inline T & opErAToRWrapper_QPODVector__opArrayGet(QPODVector<T, Increment > * self, int idx) {
    return (*self)[idx];
}
template <class T, int Increment>
inline void opErAToRWrapper_QPODVector__opArraySet(QPODVector<T, Increment > * self, int idx, const typename cpgf::RemoveReference<T & >::Result & OpsEt_vALue) {
    (*self)[idx] = OpsEt_vALue;
}
template <class T, int Increment>
inline QPODVector< T, Increment > & opErAToRWrapper_QPODVector__opLeftShift(QPODVector<T, Increment > * self, const T & v) {
    return (*self) << v;
}


template <typename D, class T, int Increment>
void buildMetaClass_QPODVector(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("at", (const T & (D::ClassType::*) (int) const)&D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("clear", (void (D::ClassType::*) ())&D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("prepend", (void (D::ClassType::*) (const T &))&D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("append", (void (D::ClassType::*) (const T &))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("insert", (void (D::ClassType::*) (int, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("reserve", (void (D::ClassType::*) (int))&D::ClassType::reserve);
    _d.CPGF_MD_TEMPLATE _method("insertBlank", (void (D::ClassType::*) (int, int))&D::ClassType::insertBlank);
    _d.CPGF_MD_TEMPLATE _method("remove", (void (D::ClassType::*) (int, int))&D::ClassType::remove)
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("removeOne", (void (D::ClassType::*) (const T &))&D::ClassType::removeOne);
    _d.CPGF_MD_TEMPLATE _method("find", (int (D::ClassType::*) (const T &))&D::ClassType::find);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const T &))&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) () const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("copyAndClear", (void (D::ClassType::*) (QPODVector< T, Increment > &))&D::ClassType::copyAndClear, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<T & (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (T & (*) (QPODVector<T, Increment > *, int))&opErAToRWrapper_QPODVector__opArrayGet<T, Increment>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (QPODVector<T, Increment > *, int, const typename cpgf::RemoveReference<T & >::Result &))&opErAToRWrapper_QPODVector__opArraySet<T, Increment>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPODVector< T, Increment > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QPODVector< T, Increment > & (*) (QPODVector<T, Increment > *, const T &))&opErAToRWrapper_QPODVector__opLeftShift<T, Increment>, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

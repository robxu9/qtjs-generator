// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QFIELDLIST_P_H
#define CPGF_META_QTQML_QFIELDLIST_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D, class N, N *N::* nextMember>
void buildMetaClass_QFieldList(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("first", (N * (D::ClassType::*) () const)&D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("takeFirst", (N * (D::ClassType::*) ())&D::ClassType::takeFirst);
    _d.CPGF_MD_TEMPLATE _method("append", (void (D::ClassType::*) (N *))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("prepend", (void (D::ClassType::*) (N *))&D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", (bool (D::ClassType::*) () const)&D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isOne", (bool (D::ClassType::*) () const)&D::ClassType::isOne);
    _d.CPGF_MD_TEMPLATE _method("isMany", (bool (D::ClassType::*) () const)&D::ClassType::isMany);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) () const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("append", (void (D::ClassType::*) (QFieldList< N, nextMember > &))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("prepend", (void (D::ClassType::*) (QFieldList< N, nextMember > &))&D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("insertAfter", (void (D::ClassType::*) (N *, QFieldList< N, nextMember > &))&D::ClassType::insertAfter);
    _d.CPGF_MD_TEMPLATE _method("copyAndClear", (void (D::ClassType::*) (QFieldList< N, nextMember > &))&D::ClassType::copyAndClear);
    _d.CPGF_MD_TEMPLATE _method("copyAndClearAppend", (void (D::ClassType::*) (QForwardFieldList< N, nextMember > &))&D::ClassType::copyAndClearAppend);
    _d.CPGF_MD_TEMPLATE _method("copyAndClearPrepend", (void (D::ClassType::*) (QForwardFieldList< N, nextMember > &))&D::ClassType::copyAndClearPrepend);
    _d.CPGF_MD_TEMPLATE _method("flag", (bool (D::ClassType::*) () const)&D::ClassType::flag);
    _d.CPGF_MD_TEMPLATE _method("setFlag", (void (D::ClassType::*) ())&D::ClassType::setFlag);
    _d.CPGF_MD_TEMPLATE _method("clearFlag", (void (D::ClassType::*) ())&D::ClassType::clearFlag);
    _d.CPGF_MD_TEMPLATE _method("setFlagValue", (void (D::ClassType::*) (bool))&D::ClassType::setFlagValue);
    _d.CPGF_MD_TEMPLATE _method("next", (N * (*) (N *))&D::ClassType::next);
}


template <typename D, class N, N *N::* nextMember>
void buildMetaClass_QForwardFieldList(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("first", (N * (D::ClassType::*) () const)&D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("takeFirst", (N * (D::ClassType::*) ())&D::ClassType::takeFirst);
    _d.CPGF_MD_TEMPLATE _method("prepend", (void (D::ClassType::*) (N *))&D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", (bool (D::ClassType::*) () const)&D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isOne", (bool (D::ClassType::*) () const)&D::ClassType::isOne);
    _d.CPGF_MD_TEMPLATE _method("isMany", (bool (D::ClassType::*) () const)&D::ClassType::isMany);
    _d.CPGF_MD_TEMPLATE _method("flag", (bool (D::ClassType::*) () const)&D::ClassType::flag);
    _d.CPGF_MD_TEMPLATE _method("setFlag", (void (D::ClassType::*) ())&D::ClassType::setFlag);
    _d.CPGF_MD_TEMPLATE _method("clearFlag", (void (D::ClassType::*) ())&D::ClassType::clearFlag);
    _d.CPGF_MD_TEMPLATE _method("setFlagValue", (void (D::ClassType::*) (bool))&D::ClassType::setFlagValue);
    _d.CPGF_MD_TEMPLATE _method("flag2", (bool (D::ClassType::*) () const)&D::ClassType::flag2);
    _d.CPGF_MD_TEMPLATE _method("setFlag2", (void (D::ClassType::*) ())&D::ClassType::setFlag2);
    _d.CPGF_MD_TEMPLATE _method("clearFlag2", (void (D::ClassType::*) ())&D::ClassType::clearFlag2);
    _d.CPGF_MD_TEMPLATE _method("setFlag2Value", (void (D::ClassType::*) (bool))&D::ClassType::setFlag2Value);
    _d.CPGF_MD_TEMPLATE _method("next", (N * (*) (N *))&D::ClassType::next);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QHASH_H
#define CPGF_META_QTCORE_QHASH_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtPrivate;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qhash(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qHashBits", (Q_DECL_PURE_FUNCTION uint (*) (const void *, size_t, uint))&qHashBits)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (char, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (uchar, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (signed char, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (ushort, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (short, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (uint, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (int, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (ulong, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (long, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (quint64, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (qint64, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (float, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (double, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_CONST_FUNCTION uint (*) (const QChar, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_PURE_FUNCTION uint (*) (const QByteArray &, uint))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_PURE_FUNCTION uint (*) (const QString &, uint))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_PURE_FUNCTION uint (*) (const QStringRef &, uint))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_PURE_FUNCTION uint (*) (const QBitArray &, uint))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (Q_DECL_PURE_FUNCTION uint (*) (QLatin1String, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qt_hash", (Q_DECL_PURE_FUNCTION uint (*) (const QString &))&qt_hash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("qt_hash", (Q_DECL_PURE_FUNCTION uint (*) (const QStringRef &))&qt_hash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QHashDummyValue &, const QHashDummyValue &)>(mopHolder == mopHolder);
}


template <typename D>
void buildMetaClass_QHashCombine(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D>
void buildMetaClass_QHashCombineCommutative(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D>
void buildMetaClass_QHashDummyValue(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D, class Key>
void buildMetaClass_QHashNode< Key, QHashDummyValue >(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("next", &D::ClassType::next, cpgf::MakePolicy<cpgf::GMetaRuleForbidWrite, cpgf::GMetaRuleForbidRead >());
    _d.CPGF_MD_TEMPLATE _field("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _field("h", &D::ClassType::h);
    _d.CPGF_MD_TEMPLATE _field("key", &D::ClassType::key);
    _d.CPGF_MD_TEMPLATE _method("QHashNode", ( (D::ClassType::*) (const Key &, const QHashDummyValue &, uint, QHashNode *))&D::ClassType::QHashNode);
    _d.CPGF_MD_TEMPLATE _method("same_key", &D::ClassType::same_key);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

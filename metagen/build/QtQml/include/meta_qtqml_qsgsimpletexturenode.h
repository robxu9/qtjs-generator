// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGSIMPLETEXTURENODE_H
#define CPGF_META_QTQML_QSGSIMPLETEXTURENODE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QSGSimpleTextureNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setRect", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::setRect);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("setSourceRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::setSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setSourceRect", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::setSourceRect);
    _d.CPGF_MD_TEMPLATE _method("sourceRect", &D::ClassType::sourceRect);
    _d.CPGF_MD_TEMPLATE _method("setTexture", &D::ClassType::setTexture);
    _d.CPGF_MD_TEMPLATE _method("texture", &D::ClassType::texture);
    _d.CPGF_MD_TEMPLATE _method("setFiltering", &D::ClassType::setFiltering);
    _d.CPGF_MD_TEMPLATE _method("filtering", &D::ClassType::filtering);
    _d.CPGF_MD_TEMPLATE _method("setTextureCoordinatesTransform", &D::ClassType::setTextureCoordinatesTransform);
    _d.CPGF_MD_TEMPLATE _method("textureCoordinatesTransform", &D::ClassType::textureCoordinatesTransform);
    _d.CPGF_MD_TEMPLATE _method("setOwnsTexture", &D::ClassType::setOwnsTexture);
    _d.CPGF_MD_TEMPLATE _method("ownsTexture", &D::ClassType::ownsTexture);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TextureCoordinatesTransformFlag>("TextureCoordinatesTransformFlag")
        ._element("NoTransform", D::ClassType::NoTransform)
        ._element("MirrorHorizontally", D::ClassType::MirrorHorizontally)
        ._element("MirrorVertically", D::ClassType::MirrorVertically)
    ;
    {
        GDefineMetaClass<QFlags<typename QSGSimpleTextureNode::TextureCoordinatesTransformFlag > > _t_d = GDefineMetaClass<QFlags<typename QSGSimpleTextureNode::TextureCoordinatesTransformFlag > >::lazyDeclare("TextureCoordinatesTransformMode", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QSGSimpleTextureNode::TextureCoordinatesTransformFlag > >, typename QSGSimpleTextureNode::TextureCoordinatesTransformFlag >);
        _d._class(_t_d);
    }
}


class QSGSimpleTextureNodeWrapper : public QSGSimpleTextureNode, public cpgf::GScriptWrapper {
public:
    
    QSGSimpleTextureNodeWrapper()
        : QSGSimpleTextureNode() {}
    
    bool isSubtreeBlocked() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isSubtreeBlocked"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGNode::isSubtreeBlocked();
    }
    bool super_isSubtreeBlocked() const
    {
        return QSGNode::isSubtreeBlocked();
    }
    
    void preprocess()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("preprocess"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGNode::preprocess();
    }
    void super_preprocess()
    {
        QSGNode::preprocess();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
    }
};


template <typename D>
void buildMetaClass_QSGSimpleTextureNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGSimpleTextureNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGSimpleTextureNode<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlnetworkaccessmanagerfactory.h>

#include "meta_qtqml_qqmlnetworkaccessmanagerfactory.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlNetworkAccessManagerFactory()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlNetworkAccessManagerFactory> _nd = GDefineMetaClass<QQmlNetworkAccessManagerFactory>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlNetworkAccessManagerFactory");
        buildMetaClass_QQmlNetworkAccessManagerFactory(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlNetworkAccessManagerFactoryWrapper, QQmlNetworkAccessManagerFactory> _nd = GDefineMetaClass<QQmlNetworkAccessManagerFactoryWrapper, QQmlNetworkAccessManagerFactory>::declare("QQmlNetworkAccessManagerFactoryWrapper");
        buildMetaClass_QQmlNetworkAccessManagerFactoryWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


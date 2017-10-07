// Generated from /POI/java/org/apache/poi/util/XMLHelper.java
#include <org/apache/poi/util/XMLHelper.hpp>

#include <java/lang/AbstractMethodError.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/XMLConstants.hpp>
#include <javax/xml/parsers/DocumentBuilderFactory.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::util::XMLHelper::XMLHelper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::XMLHelper::XMLHelper()
    : XMLHelper(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::POILogger*& org::apache::poi::util::XMLHelper::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::util::XMLHelper::logger_;

javax::xml::parsers::DocumentBuilderFactory* org::apache::poi::util::XMLHelper::getDocumentBuilderFactory()
{
    clinit();
    auto factory = ::javax::xml::parsers::DocumentBuilderFactory::newInstance();
    npc(factory)->setExpandEntityReferences(false);
    trySetSAXFeature(factory, ::javax::xml::XMLConstants::FEATURE_SECURE_PROCESSING(), true);
    trySetSAXFeature(factory, u"http://xml.org/sax/features/external-general-entities"_j, false);
    trySetSAXFeature(factory, u"http://xml.org/sax/features/external-parameter-entities"_j, false);
    trySetSAXFeature(factory, u"http://apache.org/xml/features/nonvalidating/load-external-dtd"_j, false);
    trySetSAXFeature(factory, u"http://apache.org/xml/features/nonvalidating/load-dtd-grammar"_j, false);
    return factory;
}

void org::apache::poi::util::XMLHelper::trySetSAXFeature(::javax::xml::parsers::DocumentBuilderFactory* documentBuilderFactory, ::java::lang::String* feature, bool enabled)
{
    clinit();
    try {
        npc(documentBuilderFactory)->setFeature(feature, enabled);
    } catch (::java::lang::Exception* e) {
        npc(logger_)->log(POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"SAX Feature unsupported"_j), static_cast< ::java::lang::Object* >(feature), static_cast< ::java::lang::Object* >(e)}));
    } catch (::java::lang::AbstractMethodError* ame) {
        npc(logger_)->log(POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Cannot set SAX feature because outdated XML parser in classpath"_j), static_cast< ::java::lang::Object* >(feature), static_cast< ::java::lang::Object* >(ame)}));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::XMLHelper::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.XMLHelper", 29);
    return c;
}

void org::apache::poi::util::XMLHelper::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = POILogFactory::getLogger(static_cast< ::java::lang::Class* >(XMLHelper::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::util::XMLHelper::getClass0()
{
    return class_();
}


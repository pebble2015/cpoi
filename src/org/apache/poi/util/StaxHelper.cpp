// Generated from /POI/java/org/apache/poi/util/StaxHelper.java
#include <org/apache/poi/util/StaxHelper.hpp>

#include <java/lang/AbstractMethodError.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/stream/XMLEventFactory.hpp>
#include <javax/xml/stream/XMLInputFactory.hpp>
#include <javax/xml/stream/XMLOutputFactory.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::StaxHelper::StaxHelper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::StaxHelper::StaxHelper() 
    : StaxHelper(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::util::POILogger*& poi::util::StaxHelper::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::util::StaxHelper::logger_;

void poi::util::StaxHelper::ctor()
{
    super::ctor();
}

javax::xml::stream::XMLInputFactory* poi::util::StaxHelper::newXMLInputFactory()
{
    clinit();
    auto factory = ::javax::xml::stream::XMLInputFactory::newFactory();
    trySetProperty(factory, ::javax::xml::stream::XMLInputFactory::IS_NAMESPACE_AWARE(), true);
    trySetProperty(factory, ::javax::xml::stream::XMLInputFactory::IS_VALIDATING(), false);
    trySetProperty(factory, ::javax::xml::stream::XMLInputFactory::SUPPORT_DTD(), false);
    trySetProperty(factory, ::javax::xml::stream::XMLInputFactory::IS_SUPPORTING_EXTERNAL_ENTITIES(), false);
    return factory;
}

javax::xml::stream::XMLOutputFactory* poi::util::StaxHelper::newXMLOutputFactory()
{
    clinit();
    auto factory = ::javax::xml::stream::XMLOutputFactory::newFactory();
    trySetProperty(factory, ::javax::xml::stream::XMLOutputFactory::IS_REPAIRING_NAMESPACES(), true);
    return factory;
}

javax::xml::stream::XMLEventFactory* poi::util::StaxHelper::newXMLEventFactory()
{
    clinit();
    return ::javax::xml::stream::XMLEventFactory::newFactory();
}

void poi::util::StaxHelper::trySetProperty(::javax::xml::stream::XMLInputFactory* factory, ::java::lang::String* feature, bool flag)
{
    clinit();
    try {
        npc(factory)->setProperty(feature, ::java::lang::Boolean::valueOf(flag));
    } catch (::java::lang::Exception* e) {
        npc(logger_)->log(POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"StAX Property unsupported"_j), static_cast< ::java::lang::Object* >(feature), static_cast< ::java::lang::Object* >(e)}));
    } catch (::java::lang::AbstractMethodError* ame) {
        npc(logger_)->log(POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Cannot set StAX property because outdated StAX parser in classpath"_j), static_cast< ::java::lang::Object* >(feature), static_cast< ::java::lang::Object* >(ame)}));
    }
}

void poi::util::StaxHelper::trySetProperty(::javax::xml::stream::XMLOutputFactory* factory, ::java::lang::String* feature, bool flag)
{
    clinit();
    try {
        npc(factory)->setProperty(feature, ::java::lang::Boolean::valueOf(flag));
    } catch (::java::lang::Exception* e) {
        npc(logger_)->log(POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"StAX Property unsupported"_j), static_cast< ::java::lang::Object* >(feature), static_cast< ::java::lang::Object* >(e)}));
    } catch (::java::lang::AbstractMethodError* ame) {
        npc(logger_)->log(POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Cannot set StAX property because outdated StAX parser in classpath"_j), static_cast< ::java::lang::Object* >(feature), static_cast< ::java::lang::Object* >(ame)}));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::StaxHelper::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.StaxHelper", 30);
    return c;
}

void poi::util::StaxHelper::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = POILogFactory::getLogger(static_cast< ::java::lang::Class* >(StaxHelper::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::util::StaxHelper::getClass0()
{
    return class_();
}


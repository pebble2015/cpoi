// Generated from /POI/java/org/apache/poi/util/Configurator.java
#include <org/apache/poi/util/Configurator.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::util::Configurator::Configurator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::Configurator::Configurator()
    : Configurator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::POILogger*& org::apache::poi::util::Configurator::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::util::Configurator::logger_;

int32_t org::apache::poi::util::Configurator::getIntValue(::java::lang::String* systemProperty, int32_t defaultValue)
{
    clinit();
    auto result = defaultValue;
    auto property = ::java::lang::System::getProperty(systemProperty);
    try {
        result = ::java::lang::Integer::parseInt(property);
    } catch (::java::lang::Exception* e) {
        npc(logger_)->log(POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"System property -D"_j)->append(systemProperty)
            ->append(u" do not contains a valid integer "_j)
            ->append(property)->toString())}));
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::Configurator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.Configurator", 32);
    return c;
}

void org::apache::poi::util::Configurator::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = POILogFactory::getLogger(static_cast< ::java::lang::Class* >(Configurator::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::util::Configurator::getClass0()
{
    return class_();
}


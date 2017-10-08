// Generated from /POI/java/org/apache/poi/util/POILogFactory.java
#include <org/apache/poi/util/POILogFactory.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/util/NullLogger.hpp>
#include <org/apache/poi/util/POILogger.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::POILogFactory::POILogFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::POILogFactory::POILogFactory() 
    : POILogFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Map*& poi::util::POILogFactory::_loggers()
{
    clinit();
    return _loggers_;
}
java::util::Map* poi::util::POILogFactory::_loggers_;

poi::util::POILogger*& poi::util::POILogFactory::_nullLogger()
{
    clinit();
    return _nullLogger_;
}
poi::util::POILogger* poi::util::POILogFactory::_nullLogger_;

java::lang::String*& poi::util::POILogFactory::_loggerClassName()
{
    clinit();
    return _loggerClassName_;
}
java::lang::String* poi::util::POILogFactory::_loggerClassName_;

void poi::util::POILogFactory::ctor()
{
    super::ctor();
}

poi::util::POILogger* poi::util::POILogFactory::getLogger(::java::lang::Class* theclass)
{
    clinit();
    return getLogger(npc(theclass)->getName());
}

poi::util::POILogger* poi::util::POILogFactory::getLogger(::java::lang::String* cat)
{
    clinit();
    if(_loggerClassName_ == nullptr) {
        try {
            _loggerClassName_ = ::java::lang::System::getProperty(u"org.apache.poi.util.POILogger"_j);
        } catch (::java::lang::Exception* e) {
        }
        if(_loggerClassName_ == nullptr) {
            _loggerClassName_ = npc(npc(_nullLogger_)->getClass())->getName();
        }
    }
    if(npc(_loggerClassName_)->equals(static_cast< ::java::lang::Object* >(npc(npc(_nullLogger_)->getClass())->getName()))) {
        return _nullLogger_;
    }
    auto logger = java_cast< POILogger* >(npc(_loggers_)->get(cat));
    if(logger == nullptr) {
        try {
            auto loggerClass = java_cast< ::java::lang::Class* >(::java::lang::Class::forName(_loggerClassName_));
            logger = java_cast< POILogger* >(npc(loggerClass)->newInstance());
            npc(logger)->initialize(cat);
        } catch (::java::lang::Exception* e) {
            logger = _nullLogger_;
            _loggerClassName_ = npc(npc(_nullLogger_)->getClass())->getName();
        }
        npc(_loggers_)->put(cat, logger);
    }
    return logger;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::POILogFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.POILogFactory", 33);
    return c;
}

void poi::util::POILogFactory::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _loggers_ = new ::java::util::HashMap();
        _nullLogger_ = new NullLogger();
        _loggerClassName_ = nullptr;
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::util::POILogFactory::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/util/NullLogger.java
#include <org/apache/poi/util/NullLogger.hpp>

org::apache::poi::util::NullLogger::NullLogger(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::NullLogger::NullLogger()
    : NullLogger(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::util::NullLogger::initialize(::java::lang::String* cat)
{
}

void org::apache::poi::util::NullLogger::_log(int32_t level, ::java::lang::Object* obj1)
{
}

void org::apache::poi::util::NullLogger::_log(int32_t level, ::java::lang::Object* obj1, ::java::lang::Throwable* exception)
{
}

void org::apache::poi::util::NullLogger::log(int32_t level, ::java::lang::ObjectArray*/*...*/ objs)
{
}

bool org::apache::poi::util::NullLogger::check(int32_t level)
{
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::NullLogger::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.NullLogger", 30);
    return c;
}

java::lang::Class* org::apache::poi::util::NullLogger::getClass0()
{
    return class_();
}


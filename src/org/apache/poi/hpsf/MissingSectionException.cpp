// Generated from /POI/java/org/apache/poi/hpsf/MissingSectionException.java
#include <org/apache/poi/hpsf/MissingSectionException.hpp>

org::apache::poi::hpsf::MissingSectionException::MissingSectionException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::MissingSectionException::MissingSectionException() 
    : MissingSectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::MissingSectionException::MissingSectionException(::java::lang::String* msg) 
    : MissingSectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

org::apache::poi::hpsf::MissingSectionException::MissingSectionException(::java::lang::Throwable* reason) 
    : MissingSectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

org::apache::poi::hpsf::MissingSectionException::MissingSectionException(::java::lang::String* msg, ::java::lang::Throwable* reason) 
    : MissingSectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg,reason);
}

void org::apache::poi::hpsf::MissingSectionException::ctor()
{
    super::ctor();
}

void org::apache::poi::hpsf::MissingSectionException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

void org::apache::poi::hpsf::MissingSectionException::ctor(::java::lang::Throwable* reason)
{
    super::ctor(reason);
}

void org::apache::poi::hpsf::MissingSectionException::ctor(::java::lang::String* msg, ::java::lang::Throwable* reason)
{
    super::ctor(msg, reason);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::MissingSectionException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.MissingSectionException", 43);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::MissingSectionException::getClass0()
{
    return class_();
}


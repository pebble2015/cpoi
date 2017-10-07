// Generated from /POI/java/org/apache/poi/hpsf/NoPropertySetStreamException.java
#include <org/apache/poi/hpsf/NoPropertySetStreamException.hpp>

org::apache::poi::hpsf::NoPropertySetStreamException::NoPropertySetStreamException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::NoPropertySetStreamException::NoPropertySetStreamException() 
    : NoPropertySetStreamException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::NoPropertySetStreamException::NoPropertySetStreamException(::java::lang::String* msg) 
    : NoPropertySetStreamException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

org::apache::poi::hpsf::NoPropertySetStreamException::NoPropertySetStreamException(::java::lang::Throwable* reason) 
    : NoPropertySetStreamException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

org::apache::poi::hpsf::NoPropertySetStreamException::NoPropertySetStreamException(::java::lang::String* msg, ::java::lang::Throwable* reason) 
    : NoPropertySetStreamException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg,reason);
}

void org::apache::poi::hpsf::NoPropertySetStreamException::ctor()
{
    super::ctor();
}

void org::apache::poi::hpsf::NoPropertySetStreamException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

void org::apache::poi::hpsf::NoPropertySetStreamException::ctor(::java::lang::Throwable* reason)
{
    super::ctor(reason);
}

void org::apache::poi::hpsf::NoPropertySetStreamException::ctor(::java::lang::String* msg, ::java::lang::Throwable* reason)
{
    super::ctor(msg, reason);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::NoPropertySetStreamException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.NoPropertySetStreamException", 48);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::NoPropertySetStreamException::getClass0()
{
    return class_();
}


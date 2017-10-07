// Generated from /POI/java/org/apache/poi/hpsf/NoFormatIDException.java
#include <org/apache/poi/hpsf/NoFormatIDException.hpp>

org::apache::poi::hpsf::NoFormatIDException::NoFormatIDException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::NoFormatIDException::NoFormatIDException() 
    : NoFormatIDException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::NoFormatIDException::NoFormatIDException(::java::lang::String* msg) 
    : NoFormatIDException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

org::apache::poi::hpsf::NoFormatIDException::NoFormatIDException(::java::lang::Throwable* reason) 
    : NoFormatIDException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

org::apache::poi::hpsf::NoFormatIDException::NoFormatIDException(::java::lang::String* msg, ::java::lang::Throwable* reason) 
    : NoFormatIDException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg,reason);
}

void org::apache::poi::hpsf::NoFormatIDException::ctor()
{
    super::ctor();
}

void org::apache::poi::hpsf::NoFormatIDException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

void org::apache::poi::hpsf::NoFormatIDException::ctor(::java::lang::Throwable* reason)
{
    super::ctor(reason);
}

void org::apache::poi::hpsf::NoFormatIDException::ctor(::java::lang::String* msg, ::java::lang::Throwable* reason)
{
    super::ctor(msg, reason);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::NoFormatIDException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.NoFormatIDException", 39);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::NoFormatIDException::getClass0()
{
    return class_();
}


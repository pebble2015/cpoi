// Generated from /POI/java/org/apache/poi/hpsf/NoPropertySetStreamException.java
#include <org/apache/poi/hpsf/NoPropertySetStreamException.hpp>

poi::hpsf::NoPropertySetStreamException::NoPropertySetStreamException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::NoPropertySetStreamException::NoPropertySetStreamException() 
    : NoPropertySetStreamException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hpsf::NoPropertySetStreamException::NoPropertySetStreamException(::java::lang::String* msg) 
    : NoPropertySetStreamException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

poi::hpsf::NoPropertySetStreamException::NoPropertySetStreamException(::java::lang::Throwable* reason) 
    : NoPropertySetStreamException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

poi::hpsf::NoPropertySetStreamException::NoPropertySetStreamException(::java::lang::String* msg, ::java::lang::Throwable* reason) 
    : NoPropertySetStreamException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg,reason);
}

void poi::hpsf::NoPropertySetStreamException::ctor()
{
    super::ctor();
}

void poi::hpsf::NoPropertySetStreamException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

void poi::hpsf::NoPropertySetStreamException::ctor(::java::lang::Throwable* reason)
{
    super::ctor(reason);
}

void poi::hpsf::NoPropertySetStreamException::ctor(::java::lang::String* msg, ::java::lang::Throwable* reason)
{
    super::ctor(msg, reason);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::NoPropertySetStreamException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.NoPropertySetStreamException", 48);
    return c;
}

java::lang::Class* poi::hpsf::NoPropertySetStreamException::getClass0()
{
    return class_();
}


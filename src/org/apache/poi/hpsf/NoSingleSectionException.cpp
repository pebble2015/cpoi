// Generated from /POI/java/org/apache/poi/hpsf/NoSingleSectionException.java
#include <org/apache/poi/hpsf/NoSingleSectionException.hpp>

poi::hpsf::NoSingleSectionException::NoSingleSectionException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::NoSingleSectionException::NoSingleSectionException() 
    : NoSingleSectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hpsf::NoSingleSectionException::NoSingleSectionException(::java::lang::String* msg) 
    : NoSingleSectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

poi::hpsf::NoSingleSectionException::NoSingleSectionException(::java::lang::Throwable* reason) 
    : NoSingleSectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

poi::hpsf::NoSingleSectionException::NoSingleSectionException(::java::lang::String* msg, ::java::lang::Throwable* reason) 
    : NoSingleSectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg,reason);
}

void poi::hpsf::NoSingleSectionException::ctor()
{
    super::ctor();
}

void poi::hpsf::NoSingleSectionException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

void poi::hpsf::NoSingleSectionException::ctor(::java::lang::Throwable* reason)
{
    super::ctor(reason);
}

void poi::hpsf::NoSingleSectionException::ctor(::java::lang::String* msg, ::java::lang::Throwable* reason)
{
    super::ctor(msg, reason);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::NoSingleSectionException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.NoSingleSectionException", 44);
    return c;
}

java::lang::Class* poi::hpsf::NoSingleSectionException::getClass0()
{
    return class_();
}


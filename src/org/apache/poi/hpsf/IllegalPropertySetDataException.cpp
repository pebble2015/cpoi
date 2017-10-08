// Generated from /POI/java/org/apache/poi/hpsf/IllegalPropertySetDataException.java
#include <org/apache/poi/hpsf/IllegalPropertySetDataException.hpp>

poi::hpsf::IllegalPropertySetDataException::IllegalPropertySetDataException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::IllegalPropertySetDataException::IllegalPropertySetDataException() 
    : IllegalPropertySetDataException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hpsf::IllegalPropertySetDataException::IllegalPropertySetDataException(::java::lang::String* msg) 
    : IllegalPropertySetDataException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

poi::hpsf::IllegalPropertySetDataException::IllegalPropertySetDataException(::java::lang::Throwable* reason) 
    : IllegalPropertySetDataException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

poi::hpsf::IllegalPropertySetDataException::IllegalPropertySetDataException(::java::lang::String* msg, ::java::lang::Throwable* reason) 
    : IllegalPropertySetDataException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg,reason);
}

void poi::hpsf::IllegalPropertySetDataException::ctor()
{
    super::ctor();
}

void poi::hpsf::IllegalPropertySetDataException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

void poi::hpsf::IllegalPropertySetDataException::ctor(::java::lang::Throwable* reason)
{
    super::ctor(reason);
}

void poi::hpsf::IllegalPropertySetDataException::ctor(::java::lang::String* msg, ::java::lang::Throwable* reason)
{
    super::ctor(msg, reason);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::IllegalPropertySetDataException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.IllegalPropertySetDataException", 51);
    return c;
}

java::lang::Class* poi::hpsf::IllegalPropertySetDataException::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/hpsf/UnexpectedPropertySetTypeException.java
#include <org/apache/poi/hpsf/UnexpectedPropertySetTypeException.hpp>

org::apache::poi::hpsf::UnexpectedPropertySetTypeException::UnexpectedPropertySetTypeException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::UnexpectedPropertySetTypeException::UnexpectedPropertySetTypeException() 
    : UnexpectedPropertySetTypeException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::UnexpectedPropertySetTypeException::UnexpectedPropertySetTypeException(::java::lang::String* msg) 
    : UnexpectedPropertySetTypeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

org::apache::poi::hpsf::UnexpectedPropertySetTypeException::UnexpectedPropertySetTypeException(::java::lang::Throwable* reason) 
    : UnexpectedPropertySetTypeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

org::apache::poi::hpsf::UnexpectedPropertySetTypeException::UnexpectedPropertySetTypeException(::java::lang::String* msg, ::java::lang::Throwable* reason) 
    : UnexpectedPropertySetTypeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg,reason);
}

void org::apache::poi::hpsf::UnexpectedPropertySetTypeException::ctor()
{
    super::ctor();
}

void org::apache::poi::hpsf::UnexpectedPropertySetTypeException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

void org::apache::poi::hpsf::UnexpectedPropertySetTypeException::ctor(::java::lang::Throwable* reason)
{
    super::ctor(reason);
}

void org::apache::poi::hpsf::UnexpectedPropertySetTypeException::ctor(::java::lang::String* msg, ::java::lang::Throwable* reason)
{
    super::ctor(msg, reason);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::UnexpectedPropertySetTypeException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.UnexpectedPropertySetTypeException", 54);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::UnexpectedPropertySetTypeException::getClass0()
{
    return class_();
}


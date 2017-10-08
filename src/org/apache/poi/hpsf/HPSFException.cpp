// Generated from /POI/java/org/apache/poi/hpsf/HPSFException.java
#include <org/apache/poi/hpsf/HPSFException.hpp>

#include <java/lang/Throwable.hpp>

poi::hpsf::HPSFException::HPSFException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::HPSFException::HPSFException() 
    : HPSFException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hpsf::HPSFException::HPSFException(::java::lang::String* msg) 
    : HPSFException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

poi::hpsf::HPSFException::HPSFException(::java::lang::Throwable* reason) 
    : HPSFException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

poi::hpsf::HPSFException::HPSFException(::java::lang::String* msg, ::java::lang::Throwable* reason) 
    : HPSFException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg,reason);
}

void poi::hpsf::HPSFException::ctor()
{
    super::ctor();
}

void poi::hpsf::HPSFException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

void poi::hpsf::HPSFException::ctor(::java::lang::Throwable* reason)
{
    super::ctor();
    this->reason = reason;
}

void poi::hpsf::HPSFException::ctor(::java::lang::String* msg, ::java::lang::Throwable* reason)
{
    super::ctor(msg);
    this->reason = reason;
}

java::lang::Throwable* poi::hpsf::HPSFException::getReason()
{
    return reason;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::HPSFException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.HPSFException", 33);
    return c;
}

java::lang::Class* poi::hpsf::HPSFException::getClass0()
{
    return class_();
}


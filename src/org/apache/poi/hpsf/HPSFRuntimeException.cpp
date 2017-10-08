// Generated from /POI/java/org/apache/poi/hpsf/HPSFRuntimeException.java
#include <org/apache/poi/hpsf/HPSFRuntimeException.hpp>

#include <java/lang/Throwable.hpp>

poi::hpsf::HPSFRuntimeException::HPSFRuntimeException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::HPSFRuntimeException::HPSFRuntimeException() 
    : HPSFRuntimeException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hpsf::HPSFRuntimeException::HPSFRuntimeException(::java::lang::String* msg) 
    : HPSFRuntimeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

poi::hpsf::HPSFRuntimeException::HPSFRuntimeException(::java::lang::Throwable* reason) 
    : HPSFRuntimeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

poi::hpsf::HPSFRuntimeException::HPSFRuntimeException(::java::lang::String* msg, ::java::lang::Throwable* reason) 
    : HPSFRuntimeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg,reason);
}


void poi::hpsf::HPSFRuntimeException::ctor()
{
    super::ctor();
}

void poi::hpsf::HPSFRuntimeException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

void poi::hpsf::HPSFRuntimeException::ctor(::java::lang::Throwable* reason)
{
    super::ctor();
    this->reason = reason;
}

void poi::hpsf::HPSFRuntimeException::ctor(::java::lang::String* msg, ::java::lang::Throwable* reason)
{
    super::ctor(msg);
    this->reason = reason;
}

java::lang::Throwable* poi::hpsf::HPSFRuntimeException::getReason()
{
    return reason;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::HPSFRuntimeException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.HPSFRuntimeException", 40);
    return c;
}

java::lang::Class* poi::hpsf::HPSFRuntimeException::getClass0()
{
    return class_();
}


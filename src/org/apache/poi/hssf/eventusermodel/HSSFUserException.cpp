// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/HSSFUserException.java
#include <org/apache/poi/hssf/eventusermodel/HSSFUserException.hpp>

#include <java/lang/Throwable.hpp>

poi::hssf::eventusermodel::HSSFUserException::HSSFUserException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::eventusermodel::HSSFUserException::HSSFUserException() 
    : HSSFUserException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::eventusermodel::HSSFUserException::HSSFUserException(::java::lang::String* msg) 
    : HSSFUserException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

poi::hssf::eventusermodel::HSSFUserException::HSSFUserException(::java::lang::Throwable* reason) 
    : HSSFUserException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

poi::hssf::eventusermodel::HSSFUserException::HSSFUserException(::java::lang::String* msg, ::java::lang::Throwable* reason) 
    : HSSFUserException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg,reason);
}

void poi::hssf::eventusermodel::HSSFUserException::ctor()
{
    super::ctor();
}

void poi::hssf::eventusermodel::HSSFUserException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

void poi::hssf::eventusermodel::HSSFUserException::ctor(::java::lang::Throwable* reason)
{
    super::ctor();
    this->reason = reason;
}

void poi::hssf::eventusermodel::HSSFUserException::ctor(::java::lang::String* msg, ::java::lang::Throwable* reason)
{
    super::ctor(msg);
    this->reason = reason;
}

java::lang::Throwable* poi::hssf::eventusermodel::HSSFUserException::getReason()
{
    return reason;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::eventusermodel::HSSFUserException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.HSSFUserException", 52);
    return c;
}

java::lang::Class* poi::hssf::eventusermodel::HSSFUserException::getClass0()
{
    return class_();
}


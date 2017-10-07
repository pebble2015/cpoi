// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/HSSFUserException.java
#include <org/apache/poi/hssf/eventusermodel/HSSFUserException.hpp>

#include <java/lang/Throwable.hpp>

org::apache::poi::hssf::eventusermodel::HSSFUserException::HSSFUserException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::eventusermodel::HSSFUserException::HSSFUserException() 
    : HSSFUserException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::eventusermodel::HSSFUserException::HSSFUserException(::java::lang::String* msg) 
    : HSSFUserException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

org::apache::poi::hssf::eventusermodel::HSSFUserException::HSSFUserException(::java::lang::Throwable* reason) 
    : HSSFUserException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

org::apache::poi::hssf::eventusermodel::HSSFUserException::HSSFUserException(::java::lang::String* msg, ::java::lang::Throwable* reason) 
    : HSSFUserException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg,reason);
}

void org::apache::poi::hssf::eventusermodel::HSSFUserException::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::eventusermodel::HSSFUserException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

void org::apache::poi::hssf::eventusermodel::HSSFUserException::ctor(::java::lang::Throwable* reason)
{
    super::ctor();
    this->reason = reason;
}

void org::apache::poi::hssf::eventusermodel::HSSFUserException::ctor(::java::lang::String* msg, ::java::lang::Throwable* reason)
{
    super::ctor(msg);
    this->reason = reason;
}

java::lang::Throwable* org::apache::poi::hssf::eventusermodel::HSSFUserException::getReason()
{
    return reason;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::eventusermodel::HSSFUserException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.HSSFUserException", 52);
    return c;
}

java::lang::Class* org::apache::poi::hssf::eventusermodel::HSSFUserException::getClass0()
{
    return class_();
}


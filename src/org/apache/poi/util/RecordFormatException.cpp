// Generated from /POI/java/org/apache/poi/util/RecordFormatException.java
#include <org/apache/poi/util/RecordFormatException.hpp>

org::apache::poi::util::RecordFormatException::RecordFormatException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::RecordFormatException::RecordFormatException(::java::lang::String* exception) 
    : RecordFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(exception);
}

org::apache::poi::util::RecordFormatException::RecordFormatException(::java::lang::String* exception, ::java::lang::Throwable* thr) 
    : RecordFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(exception,thr);
}

org::apache::poi::util::RecordFormatException::RecordFormatException(::java::lang::Throwable* thr) 
    : RecordFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(thr);
}

void org::apache::poi::util::RecordFormatException::ctor(::java::lang::String* exception)
{
    super::ctor(exception);
}

void org::apache::poi::util::RecordFormatException::ctor(::java::lang::String* exception, ::java::lang::Throwable* thr)
{
    super::ctor(exception, thr);
}

void org::apache::poi::util::RecordFormatException::ctor(::java::lang::Throwable* thr)
{
    super::ctor(thr);
}

void org::apache::poi::util::RecordFormatException::check(bool assertTrue, ::java::lang::String* message)
{
    clinit();
    if(!assertTrue) {
        throw new RecordFormatException(message);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::RecordFormatException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.RecordFormatException", 41);
    return c;
}

java::lang::Class* org::apache::poi::util::RecordFormatException::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/util/DocumentFormatException.java
#include <org/apache/poi/util/DocumentFormatException.hpp>

poi::util::DocumentFormatException::DocumentFormatException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::DocumentFormatException::DocumentFormatException(::java::lang::String* exception) 
    : DocumentFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(exception);
}

poi::util::DocumentFormatException::DocumentFormatException(::java::lang::String* exception, ::java::lang::Throwable* thr) 
    : DocumentFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(exception,thr);
}

poi::util::DocumentFormatException::DocumentFormatException(::java::lang::Throwable* thr) 
    : DocumentFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(thr);
}

void poi::util::DocumentFormatException::ctor(::java::lang::String* exception)
{
    super::ctor(exception);
}

void poi::util::DocumentFormatException::ctor(::java::lang::String* exception, ::java::lang::Throwable* thr)
{
    super::ctor(exception, thr);
}

void poi::util::DocumentFormatException::ctor(::java::lang::Throwable* thr)
{
    super::ctor(thr);
}

void poi::util::DocumentFormatException::check(bool assertTrue, ::java::lang::String* message)
{
    clinit();
    if(!assertTrue) {
        throw new DocumentFormatException(message);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::DocumentFormatException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.DocumentFormatException", 43);
    return c;
}

java::lang::Class* poi::util::DocumentFormatException::getClass0()
{
    return class_();
}


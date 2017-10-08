// Generated from /POI/java/org/apache/poi/OldFileFormatException.java
#include <org/apache/poi/OldFileFormatException.hpp>

poi::OldFileFormatException::OldFileFormatException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::OldFileFormatException::OldFileFormatException(::java::lang::String* s) 
    : OldFileFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}


void poi::OldFileFormatException::ctor(::java::lang::String* s)
{
    super::ctor(s);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::OldFileFormatException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.OldFileFormatException", 37);
    return c;
}

java::lang::Class* poi::OldFileFormatException::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/OldFileFormatException.java
#include <org/apache/poi/OldFileFormatException.hpp>

org::apache::poi::OldFileFormatException::OldFileFormatException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::OldFileFormatException::OldFileFormatException(::java::lang::String* s) 
    : OldFileFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t org::apache::poi::OldFileFormatException::serialVersionUID;

void org::apache::poi::OldFileFormatException::ctor(::java::lang::String* s)
{
    super::ctor(s);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::OldFileFormatException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.OldFileFormatException", 37);
    return c;
}

java::lang::Class* org::apache::poi::OldFileFormatException::getClass0()
{
    return class_();
}


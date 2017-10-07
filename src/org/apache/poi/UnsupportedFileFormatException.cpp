// Generated from /POI/java/org/apache/poi/UnsupportedFileFormatException.java
#include <org/apache/poi/UnsupportedFileFormatException.hpp>

org::apache::poi::UnsupportedFileFormatException::UnsupportedFileFormatException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::UnsupportedFileFormatException::UnsupportedFileFormatException(::java::lang::String* s) 
    : UnsupportedFileFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t org::apache::poi::UnsupportedFileFormatException::serialVersionUID;

void org::apache::poi::UnsupportedFileFormatException::ctor(::java::lang::String* s)
{
    super::ctor(s);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::UnsupportedFileFormatException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.UnsupportedFileFormatException", 45);
    return c;
}

java::lang::Class* org::apache::poi::UnsupportedFileFormatException::getClass0()
{
    return class_();
}


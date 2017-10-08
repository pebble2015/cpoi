// Generated from /POI/java/org/apache/poi/EmptyFileException.java
#include <org/apache/poi/EmptyFileException.hpp>

#include <java/lang/String.hpp>

poi::EmptyFileException::EmptyFileException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::EmptyFileException::EmptyFileException() 
    : EmptyFileException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int64_t poi::EmptyFileException::serialVersionUID;

void poi::EmptyFileException::ctor()
{
    super::ctor(u"The supplied file was empty (zero bytes long)"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::EmptyFileException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.EmptyFileException", 33);
    return c;
}

java::lang::Class* poi::EmptyFileException::getClass0()
{
    return class_();
}


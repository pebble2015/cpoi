// Generated from /POI/java/org/apache/poi/poifs/filesystem/NotOLE2FileException.java
#include <org/apache/poi/poifs/filesystem/NotOLE2FileException.hpp>

org::apache::poi::poifs::filesystem::NotOLE2FileException::NotOLE2FileException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::NotOLE2FileException::NotOLE2FileException(::java::lang::String* s) 
    : NotOLE2FileException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

void org::apache::poi::poifs::filesystem::NotOLE2FileException::ctor(::java::lang::String* s)
{
    super::ctor(s);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::NotOLE2FileException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.NotOLE2FileException", 52);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::NotOLE2FileException::getClass0()
{
    return class_();
}


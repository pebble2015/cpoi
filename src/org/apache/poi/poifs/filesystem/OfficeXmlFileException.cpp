// Generated from /POI/java/org/apache/poi/poifs/filesystem/OfficeXmlFileException.java
#include <org/apache/poi/poifs/filesystem/OfficeXmlFileException.hpp>

org::apache::poi::poifs::filesystem::OfficeXmlFileException::OfficeXmlFileException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::OfficeXmlFileException::OfficeXmlFileException(::java::lang::String* s) 
    : OfficeXmlFileException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

void org::apache::poi::poifs::filesystem::OfficeXmlFileException::ctor(::java::lang::String* s)
{
    super::ctor(s);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::OfficeXmlFileException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.OfficeXmlFileException", 54);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::OfficeXmlFileException::getClass0()
{
    return class_();
}


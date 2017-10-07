// Generated from /POI/java/org/apache/poi/hpsf/ReadingNotSupportedException.java
#include <org/apache/poi/hpsf/ReadingNotSupportedException.hpp>

org::apache::poi::hpsf::ReadingNotSupportedException::ReadingNotSupportedException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::ReadingNotSupportedException::ReadingNotSupportedException(int64_t variantType, ::java::lang::Object* value) 
    : ReadingNotSupportedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(variantType,value);
}

void org::apache::poi::hpsf::ReadingNotSupportedException::ctor(int64_t variantType, ::java::lang::Object* value)
{
    super::ctor(variantType, value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::ReadingNotSupportedException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.ReadingNotSupportedException", 48);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::ReadingNotSupportedException::getClass0()
{
    return class_();
}


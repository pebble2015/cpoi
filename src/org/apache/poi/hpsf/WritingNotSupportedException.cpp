// Generated from /POI/java/org/apache/poi/hpsf/WritingNotSupportedException.java
#include <org/apache/poi/hpsf/WritingNotSupportedException.hpp>

org::apache::poi::hpsf::WritingNotSupportedException::WritingNotSupportedException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::WritingNotSupportedException::WritingNotSupportedException(int64_t variantType, ::java::lang::Object* value) 
    : WritingNotSupportedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(variantType,value);
}

void org::apache::poi::hpsf::WritingNotSupportedException::ctor(int64_t variantType, ::java::lang::Object* value)
{
    super::ctor(variantType, value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::WritingNotSupportedException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.WritingNotSupportedException", 48);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::WritingNotSupportedException::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/hpsf/MutableSection.java
#include <org/apache/poi/hpsf/MutableSection.hpp>

poi::hpsf::MutableSection::MutableSection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::MutableSection::MutableSection() 
    : MutableSection(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hpsf::MutableSection::MutableSection(Section* s) 
    : MutableSection(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

poi::hpsf::MutableSection::MutableSection(::int8_tArray* src, int32_t offset)  /* throws(UnsupportedEncodingException) */
    : MutableSection(*static_cast< ::default_init_tag* >(0))
{
    ctor(src,offset);
}

void poi::hpsf::MutableSection::ctor()
{
    super::ctor();
}

void poi::hpsf::MutableSection::ctor(Section* s)
{
    super::ctor(s);
}

void poi::hpsf::MutableSection::ctor(::int8_tArray* src, int32_t offset) /* throws(UnsupportedEncodingException) */
{
    super::ctor(src, offset);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::MutableSection::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.MutableSection", 34);
    return c;
}

java::lang::Class* poi::hpsf::MutableSection::getClass0()
{
    return class_();
}


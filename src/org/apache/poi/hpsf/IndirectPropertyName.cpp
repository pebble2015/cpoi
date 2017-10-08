// Generated from /POI/java/org/apache/poi/hpsf/IndirectPropertyName.java
#include <org/apache/poi/hpsf/IndirectPropertyName.hpp>

poi::hpsf::IndirectPropertyName::IndirectPropertyName(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::IndirectPropertyName::IndirectPropertyName() 
    : IndirectPropertyName(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hpsf::IndirectPropertyName::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::IndirectPropertyName::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.IndirectPropertyName", 40);
    return c;
}

java::lang::Class* poi::hpsf::IndirectPropertyName::getClass0()
{
    return class_();
}


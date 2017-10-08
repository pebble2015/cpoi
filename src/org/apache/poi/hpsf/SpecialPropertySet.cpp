// Generated from /POI/java/org/apache/poi/hpsf/SpecialPropertySet.java
#include <org/apache/poi/hpsf/SpecialPropertySet.hpp>

poi::hpsf::SpecialPropertySet::SpecialPropertySet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::SpecialPropertySet::SpecialPropertySet() 
    : SpecialPropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hpsf::SpecialPropertySet::SpecialPropertySet(PropertySet* ps)  /* throws(UnexpectedPropertySetTypeException) */
    : SpecialPropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor(ps);
}

poi::hpsf::SpecialPropertySet::SpecialPropertySet(::java::io::InputStream* stream)  /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */
    : SpecialPropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

void poi::hpsf::SpecialPropertySet::ctor()
{
    super::ctor();
}

void poi::hpsf::SpecialPropertySet::ctor(PropertySet* ps) /* throws(UnexpectedPropertySetTypeException) */
{
    super::ctor(ps);
}

void poi::hpsf::SpecialPropertySet::ctor(::java::io::InputStream* stream) /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */
{
    super::ctor(stream);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::SpecialPropertySet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.SpecialPropertySet", 38);
    return c;
}

java::lang::Class* poi::hpsf::SpecialPropertySet::getClass0()
{
    return class_();
}


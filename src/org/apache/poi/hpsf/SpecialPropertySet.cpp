// Generated from /POI/java/org/apache/poi/hpsf/SpecialPropertySet.java
#include <org/apache/poi/hpsf/SpecialPropertySet.hpp>

org::apache::poi::hpsf::SpecialPropertySet::SpecialPropertySet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::SpecialPropertySet::SpecialPropertySet() 
    : SpecialPropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::SpecialPropertySet::SpecialPropertySet(PropertySet* ps)  /* throws(UnexpectedPropertySetTypeException) */
    : SpecialPropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor(ps);
}

org::apache::poi::hpsf::SpecialPropertySet::SpecialPropertySet(::java::io::InputStream* stream)  /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */
    : SpecialPropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

void org::apache::poi::hpsf::SpecialPropertySet::ctor()
{
    super::ctor();
}

void org::apache::poi::hpsf::SpecialPropertySet::ctor(PropertySet* ps) /* throws(UnexpectedPropertySetTypeException) */
{
    super::ctor(ps);
}

void org::apache::poi::hpsf::SpecialPropertySet::ctor(::java::io::InputStream* stream) /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */
{
    super::ctor(stream);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::SpecialPropertySet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.SpecialPropertySet", 38);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::SpecialPropertySet::getClass0()
{
    return class_();
}


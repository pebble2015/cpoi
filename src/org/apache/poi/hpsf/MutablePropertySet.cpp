// Generated from /POI/java/org/apache/poi/hpsf/MutablePropertySet.java
#include <org/apache/poi/hpsf/MutablePropertySet.hpp>

org::apache::poi::hpsf::MutablePropertySet::MutablePropertySet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::MutablePropertySet::MutablePropertySet() 
    : MutablePropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::MutablePropertySet::MutablePropertySet(PropertySet* ps) 
    : MutablePropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor(ps);
}

org::apache::poi::hpsf::MutablePropertySet::MutablePropertySet(::java::io::InputStream* stream)  /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */
    : MutablePropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

void org::apache::poi::hpsf::MutablePropertySet::ctor()
{
    super::ctor();
}

void org::apache::poi::hpsf::MutablePropertySet::ctor(PropertySet* ps)
{
    super::ctor(ps);
}

void org::apache::poi::hpsf::MutablePropertySet::ctor(::java::io::InputStream* stream) /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */
{
    super::ctor(stream);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::MutablePropertySet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.MutablePropertySet", 38);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::MutablePropertySet::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/util/CloseIgnoringInputStream.java
#include <org/apache/poi/util/CloseIgnoringInputStream.hpp>

org::apache::poi::util::CloseIgnoringInputStream::CloseIgnoringInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::CloseIgnoringInputStream::CloseIgnoringInputStream(::java::io::InputStream* in) 
    : CloseIgnoringInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::util::CloseIgnoringInputStream::ctor(::java::io::InputStream* in)
{
    super::ctor(in);
}

void org::apache::poi::util::CloseIgnoringInputStream::close()
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::CloseIgnoringInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.CloseIgnoringInputStream", 44);
    return c;
}

java::lang::Class* org::apache::poi::util::CloseIgnoringInputStream::getClass0()
{
    return class_();
}


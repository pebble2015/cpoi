// Generated from /POI/commons-codec-1.10.jar
#include <org/apache/commons/codec/CharEncoding.hpp>

extern void unimplemented_(const char16_t* name);
org::apache::commons::codec::CharEncoding::CharEncoding(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::commons::codec::CharEncoding::CharEncoding()
    : CharEncoding(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String*& org::apache::commons::codec::CharEncoding::ISO_8859_1()
{
    clinit();
    return ISO_8859_1_;
}
java::lang::String* org::apache::commons::codec::CharEncoding::ISO_8859_1_;
java::lang::String*& org::apache::commons::codec::CharEncoding::US_ASCII()
{
    clinit();
    return US_ASCII_;
}
java::lang::String* org::apache::commons::codec::CharEncoding::US_ASCII_;
java::lang::String*& org::apache::commons::codec::CharEncoding::UTF_16()
{
    clinit();
    return UTF_16_;
}
java::lang::String* org::apache::commons::codec::CharEncoding::UTF_16_;
java::lang::String*& org::apache::commons::codec::CharEncoding::UTF_16BE()
{
    clinit();
    return UTF_16BE_;
}
java::lang::String* org::apache::commons::codec::CharEncoding::UTF_16BE_;
java::lang::String*& org::apache::commons::codec::CharEncoding::UTF_16LE()
{
    clinit();
    return UTF_16LE_;
}
java::lang::String* org::apache::commons::codec::CharEncoding::UTF_16LE_;
java::lang::String*& org::apache::commons::codec::CharEncoding::UTF_8()
{
    clinit();
    return UTF_8_;
}
java::lang::String* org::apache::commons::codec::CharEncoding::UTF_8_;

void ::org::apache::commons::codec::CharEncoding::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::org::apache::commons::codec::CharEncoding::ctor()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::commons::codec::CharEncoding::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.commons.codec.CharEncoding", 37);
    return c;
}

java::lang::Class* org::apache::commons::codec::CharEncoding::getClass0()
{
    return class_();
}


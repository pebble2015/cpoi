// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/security/MessageDigestSpi.hpp>

extern void unimplemented_(const char16_t* name);
java::security::MessageDigestSpi::MessageDigestSpi(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::MessageDigestSpi::MessageDigestSpi()
    : MessageDigestSpi(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::security::MessageDigestSpi::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::MessageDigestSpi::ctor()");
}

java::lang::Object* java::security::MessageDigestSpi::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::MessageDigestSpi::clone()");
    return 0;
}

int32_t java::security::MessageDigestSpi::engineDigest(::int8_tArray* buf, int32_t offset, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t java::security::MessageDigestSpi::engineDigest(::int8_tArray* buf, int32_t offset, int32_t len)");
    return 0;
}

int32_t java::security::MessageDigestSpi::engineGetDigestLength()
{ /* stub */
    unimplemented_(u"int32_t java::security::MessageDigestSpi::engineGetDigestLength()");
    return 0;
}

void java::security::MessageDigestSpi::engineUpdate(::java::nio::ByteBuffer* input)
{ /* stub */
    unimplemented_(u"void java::security::MessageDigestSpi::engineUpdate(::java::nio::ByteBuffer* input)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::MessageDigestSpi::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.MessageDigestSpi", 30);
    return c;
}

java::lang::Class* java::security::MessageDigestSpi::getClass0()
{
    return class_();
}


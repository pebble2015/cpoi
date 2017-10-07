// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/security/MessageDigest_Delegate.hpp>

extern void unimplemented_(const char16_t* name);
java::security::MessageDigest_Delegate::MessageDigest_Delegate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::MessageDigest_Delegate::MessageDigest_Delegate(MessageDigestSpi* digestSpi, ::java::lang::String* algorithm)
    : MessageDigest_Delegate(*static_cast< ::default_init_tag* >(0))
{
    ctor(digestSpi, algorithm);
}


void ::java::security::MessageDigest_Delegate::ctor(MessageDigestSpi* digestSpi, ::java::lang::String* algorithm)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::MessageDigest_Delegate::ctor(MessageDigestSpi* digestSpi, ::java::lang::String* algorithm)");
}

java::lang::Object* java::security::MessageDigest_Delegate::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::MessageDigest_Delegate::clone()");
    return 0;
}

int8_tArray* java::security::MessageDigest_Delegate::engineDigest()
{ /* stub */
    unimplemented_(u"int8_tArray* java::security::MessageDigest_Delegate::engineDigest()");
    return 0;
}

int32_t java::security::MessageDigest_Delegate::engineDigest(::int8_tArray* buf, int32_t offset, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t java::security::MessageDigest_Delegate::engineDigest(::int8_tArray* buf, int32_t offset, int32_t len)");
    return 0;
}

int32_t java::security::MessageDigest_Delegate::engineGetDigestLength()
{ /* stub */
    unimplemented_(u"int32_t java::security::MessageDigest_Delegate::engineGetDigestLength()");
    return 0;
}

void java::security::MessageDigest_Delegate::engineReset()
{ /* stub */
    unimplemented_(u"void java::security::MessageDigest_Delegate::engineReset()");
}

void java::security::MessageDigest_Delegate::engineUpdate(int8_t input)
{ /* stub */
    unimplemented_(u"void java::security::MessageDigest_Delegate::engineUpdate(int8_t input)");
}

void java::security::MessageDigest_Delegate::engineUpdate(::java::nio::ByteBuffer* input)
{ /* stub */
    unimplemented_(u"void java::security::MessageDigest_Delegate::engineUpdate(::java::nio::ByteBuffer* input)");
}

void java::security::MessageDigest_Delegate::engineUpdate(::int8_tArray* input, int32_t offset, int32_t len)
{ /* stub */
    unimplemented_(u"void java::security::MessageDigest_Delegate::engineUpdate(::int8_tArray* input, int32_t offset, int32_t len)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::MessageDigest_Delegate::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.MessageDigest.Delegate", 36);
    return c;
}

java::lang::Class* java::security::MessageDigest_Delegate::getClass0()
{
    return class_();
}


// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/jce.jar
#include <javax/crypto/CipherInputStream.hpp>

extern void unimplemented_(const char16_t* name);
javax::crypto::CipherInputStream::CipherInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::crypto::CipherInputStream::CipherInputStream(::java::io::InputStream* arg0)
    : CipherInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(arg0);
}

javax::crypto::CipherInputStream::CipherInputStream(::java::io::InputStream* arg0, Cipher* arg1)
    : CipherInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(arg0, arg1);
}


void ::javax::crypto::CipherInputStream::ctor(::java::io::InputStream* arg0)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::crypto::CipherInputStream::ctor(::java::io::InputStream* arg0)");
}

void ::javax::crypto::CipherInputStream::ctor(::java::io::InputStream* arg0, Cipher* arg1)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::crypto::CipherInputStream::ctor(::java::io::InputStream* arg0, Cipher* arg1)");
}

int32_t javax::crypto::CipherInputStream::available()
{ /* stub */
    unimplemented_(u"int32_t javax::crypto::CipherInputStream::available()");
    return 0;
}

void javax::crypto::CipherInputStream::close()
{ /* stub */
    unimplemented_(u"void javax::crypto::CipherInputStream::close()");
}

/* private: int32_t javax::crypto::CipherInputStream::getMoreData() */
bool javax::crypto::CipherInputStream::markSupported()
{ /* stub */
    unimplemented_(u"bool javax::crypto::CipherInputStream::markSupported()");
    return 0;
}

int32_t javax::crypto::CipherInputStream::read()
{ /* stub */
    unimplemented_(u"int32_t javax::crypto::CipherInputStream::read()");
    return 0;
}

int32_t javax::crypto::CipherInputStream::read(::int8_tArray* arg0)
{ /* stub */
    unimplemented_(u"int32_t javax::crypto::CipherInputStream::read(::int8_tArray* arg0)");
    return 0;
}

int32_t javax::crypto::CipherInputStream::read(::int8_tArray* arg0, int32_t arg1, int32_t arg2)
{ /* stub */
    unimplemented_(u"int32_t javax::crypto::CipherInputStream::read(::int8_tArray* arg0, int32_t arg1, int32_t arg2)");
    return 0;
}

int64_t javax::crypto::CipherInputStream::skip(int64_t arg0)
{ /* stub */
    unimplemented_(u"int64_t javax::crypto::CipherInputStream::skip(int64_t arg0)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::crypto::CipherInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.crypto.CipherInputStream", 30);
    return c;
}

java::lang::Class* javax::crypto::CipherInputStream::getClass0()
{
    return class_();
}


// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/jce.jar
#include <javax/crypto/CipherOutputStream.hpp>

extern void unimplemented_(const char16_t* name);
javax::crypto::CipherOutputStream::CipherOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::crypto::CipherOutputStream::CipherOutputStream(::java::io::OutputStream* arg0)
    : CipherOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(arg0);
}

javax::crypto::CipherOutputStream::CipherOutputStream(::java::io::OutputStream* arg0, Cipher* arg1)
    : CipherOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(arg0, arg1);
}


void ::javax::crypto::CipherOutputStream::ctor(::java::io::OutputStream* arg0)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::crypto::CipherOutputStream::ctor(::java::io::OutputStream* arg0)");
}

void ::javax::crypto::CipherOutputStream::ctor(::java::io::OutputStream* arg0, Cipher* arg1)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::crypto::CipherOutputStream::ctor(::java::io::OutputStream* arg0, Cipher* arg1)");
}

void javax::crypto::CipherOutputStream::close()
{ /* stub */
    unimplemented_(u"void javax::crypto::CipherOutputStream::close()");
}

void javax::crypto::CipherOutputStream::flush()
{ /* stub */
    unimplemented_(u"void javax::crypto::CipherOutputStream::flush()");
}

void javax::crypto::CipherOutputStream::write(int32_t arg0)
{ /* stub */
    unimplemented_(u"void javax::crypto::CipherOutputStream::write(int32_t arg0)");
}

void javax::crypto::CipherOutputStream::write(::int8_tArray* arg0)
{ /* stub */
    unimplemented_(u"void javax::crypto::CipherOutputStream::write(::int8_tArray* arg0)");
}

void javax::crypto::CipherOutputStream::write(::int8_tArray* arg0, int32_t arg1, int32_t arg2)
{ /* stub */
    unimplemented_(u"void javax::crypto::CipherOutputStream::write(::int8_tArray* arg0, int32_t arg1, int32_t arg2)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::crypto::CipherOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.crypto.CipherOutputStream", 31);
    return c;
}

java::lang::Class* javax::crypto::CipherOutputStream::getClass0()
{
    return class_();
}


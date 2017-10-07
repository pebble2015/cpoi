// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/security/DigestException.hpp>

extern void unimplemented_(const char16_t* name);
java::security::DigestException::DigestException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::DigestException::DigestException()
    : DigestException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::security::DigestException::DigestException(::java::lang::String* msg)
    : DigestException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

java::security::DigestException::DigestException(::java::lang::Throwable* cause)
    : DigestException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::security::DigestException::DigestException(::java::lang::String* message, ::java::lang::Throwable* cause)
    : DigestException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message, cause);
}

constexpr int64_t java::security::DigestException::serialVersionUID;

void ::java::security::DigestException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::DigestException::ctor()");
}

void ::java::security::DigestException::ctor(::java::lang::String* msg)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::DigestException::ctor(::java::lang::String* msg)");
}

void ::java::security::DigestException::ctor(::java::lang::Throwable* cause)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::DigestException::ctor(::java::lang::Throwable* cause)");
}

void ::java::security::DigestException::ctor(::java::lang::String* message, ::java::lang::Throwable* cause)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::DigestException::ctor(::java::lang::String* message, ::java::lang::Throwable* cause)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::DigestException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.DigestException", 29);
    return c;
}

java::lang::Class* java::security::DigestException::getClass0()
{
    return class_();
}


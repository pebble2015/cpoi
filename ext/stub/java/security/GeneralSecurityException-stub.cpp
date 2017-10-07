// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/security/GeneralSecurityException.hpp>

extern void unimplemented_(const char16_t* name);
java::security::GeneralSecurityException::GeneralSecurityException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::GeneralSecurityException::GeneralSecurityException()
    : GeneralSecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::security::GeneralSecurityException::GeneralSecurityException(::java::lang::String* msg)
    : GeneralSecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

java::security::GeneralSecurityException::GeneralSecurityException(::java::lang::Throwable* cause)
    : GeneralSecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::security::GeneralSecurityException::GeneralSecurityException(::java::lang::String* message, ::java::lang::Throwable* cause)
    : GeneralSecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message, cause);
}

constexpr int64_t java::security::GeneralSecurityException::serialVersionUID;

void ::java::security::GeneralSecurityException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::GeneralSecurityException::ctor()");
}

void ::java::security::GeneralSecurityException::ctor(::java::lang::String* msg)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::GeneralSecurityException::ctor(::java::lang::String* msg)");
}

void ::java::security::GeneralSecurityException::ctor(::java::lang::Throwable* cause)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::GeneralSecurityException::ctor(::java::lang::Throwable* cause)");
}

void ::java::security::GeneralSecurityException::ctor(::java::lang::String* message, ::java::lang::Throwable* cause)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::GeneralSecurityException::ctor(::java::lang::String* message, ::java::lang::Throwable* cause)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::GeneralSecurityException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.GeneralSecurityException", 38);
    return c;
}

java::lang::Class* java::security::GeneralSecurityException::getClass0()
{
    return class_();
}


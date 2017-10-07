// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/security/AccessControlException.hpp>

extern void unimplemented_(const char16_t* name);
java::security::AccessControlException::AccessControlException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::AccessControlException::AccessControlException(::java::lang::String* s)
    : AccessControlException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::security::AccessControlException::AccessControlException(::java::lang::String* s, Permission* p)
    : AccessControlException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s, p);
}

constexpr int64_t java::security::AccessControlException::serialVersionUID;

void ::java::security::AccessControlException::ctor(::java::lang::String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::AccessControlException::ctor(::java::lang::String* s)");
}

void ::java::security::AccessControlException::ctor(::java::lang::String* s, Permission* p)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::AccessControlException::ctor(::java::lang::String* s, Permission* p)");
}

java::security::Permission* java::security::AccessControlException::getPermission()
{ /* stub */
    unimplemented_(u"java::security::Permission* java::security::AccessControlException::getPermission()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::AccessControlException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.AccessControlException", 36);
    return c;
}

java::lang::Class* java::security::AccessControlException::getClass0()
{
    return class_();
}


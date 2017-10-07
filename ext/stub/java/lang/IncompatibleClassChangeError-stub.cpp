// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/lang/IncompatibleClassChangeError.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::IncompatibleClassChangeError::IncompatibleClassChangeError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::IncompatibleClassChangeError::IncompatibleClassChangeError()
    : IncompatibleClassChangeError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::IncompatibleClassChangeError::IncompatibleClassChangeError(String* s)
    : IncompatibleClassChangeError(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::lang::IncompatibleClassChangeError::serialVersionUID;

void ::java::lang::IncompatibleClassChangeError::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::IncompatibleClassChangeError::ctor()");
}

void ::java::lang::IncompatibleClassChangeError::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::IncompatibleClassChangeError::ctor(String* s)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::IncompatibleClassChangeError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.IncompatibleClassChangeError", 38);
    return c;
}

java::lang::Class* java::lang::IncompatibleClassChangeError::getClass0()
{
    return class_();
}


// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/lang/ClassNotFoundException.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::ClassNotFoundException::ClassNotFoundException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ClassNotFoundException::ClassNotFoundException()
    : ClassNotFoundException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::ClassNotFoundException::ClassNotFoundException(String* s)
    : ClassNotFoundException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::lang::ClassNotFoundException::ClassNotFoundException(String* s, Throwable* ex)
    : ClassNotFoundException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s, ex);
}

constexpr int64_t java::lang::ClassNotFoundException::serialVersionUID;

void ::java::lang::ClassNotFoundException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ClassNotFoundException::ctor()");
}

void ::java::lang::ClassNotFoundException::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ClassNotFoundException::ctor(String* s)");
}

void ::java::lang::ClassNotFoundException::ctor(String* s, Throwable* ex)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ClassNotFoundException::ctor(String* s, Throwable* ex)");
}

java::lang::Throwable* java::lang::ClassNotFoundException::getCause()
{ /* stub */
    unimplemented_(u"java::lang::Throwable* java::lang::ClassNotFoundException::getCause()");
    return 0;
}

java::lang::Throwable* java::lang::ClassNotFoundException::getException()
{ /* stub */
    unimplemented_(u"java::lang::Throwable* java::lang::ClassNotFoundException::getException()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ClassNotFoundException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ClassNotFoundException", 32);
    return c;
}

java::lang::Class* java::lang::ClassNotFoundException::getClass0()
{
    return class_();
}


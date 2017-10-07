// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/lang/IllegalAccessError.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::IllegalAccessError::IllegalAccessError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::IllegalAccessError::IllegalAccessError()
    : IllegalAccessError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::IllegalAccessError::IllegalAccessError(String* s)
    : IllegalAccessError(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::lang::IllegalAccessError::serialVersionUID;

void ::java::lang::IllegalAccessError::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::IllegalAccessError::ctor()");
}

void ::java::lang::IllegalAccessError::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::IllegalAccessError::ctor(String* s)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::IllegalAccessError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.IllegalAccessError", 28);
    return c;
}

java::lang::Class* java::lang::IllegalAccessError::getClass0()
{
    return class_();
}


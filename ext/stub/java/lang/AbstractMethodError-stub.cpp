// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/lang/AbstractMethodError.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::AbstractMethodError::AbstractMethodError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::AbstractMethodError::AbstractMethodError()
    : AbstractMethodError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::AbstractMethodError::AbstractMethodError(String* s)
    : AbstractMethodError(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::lang::AbstractMethodError::serialVersionUID;

void ::java::lang::AbstractMethodError::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::AbstractMethodError::ctor()");
}

void ::java::lang::AbstractMethodError::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::AbstractMethodError::ctor(String* s)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::AbstractMethodError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.AbstractMethodError", 29);
    return c;
}

java::lang::Class* java::lang::AbstractMethodError::getClass0()
{
    return class_();
}


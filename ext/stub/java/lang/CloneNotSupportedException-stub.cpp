// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/lang/CloneNotSupportedException.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::CloneNotSupportedException::CloneNotSupportedException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::CloneNotSupportedException::CloneNotSupportedException()
    : CloneNotSupportedException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::CloneNotSupportedException::CloneNotSupportedException(String* s)
    : CloneNotSupportedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::lang::CloneNotSupportedException::serialVersionUID;

void ::java::lang::CloneNotSupportedException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::CloneNotSupportedException::ctor()");
}

void ::java::lang::CloneNotSupportedException::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::CloneNotSupportedException::ctor(String* s)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::CloneNotSupportedException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.CloneNotSupportedException", 36);
    return c;
}

java::lang::Class* java::lang::CloneNotSupportedException::getClass0()
{
    return class_();
}


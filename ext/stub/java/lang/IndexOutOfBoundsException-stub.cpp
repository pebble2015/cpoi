// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/lang/IndexOutOfBoundsException.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::IndexOutOfBoundsException::IndexOutOfBoundsException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::IndexOutOfBoundsException::IndexOutOfBoundsException()
    : IndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::IndexOutOfBoundsException::IndexOutOfBoundsException(String* s)
    : IndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::lang::IndexOutOfBoundsException::serialVersionUID;

void ::java::lang::IndexOutOfBoundsException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::IndexOutOfBoundsException::ctor()");
}

void ::java::lang::IndexOutOfBoundsException::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::IndexOutOfBoundsException::ctor(String* s)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::IndexOutOfBoundsException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.IndexOutOfBoundsException", 35);
    return c;
}

java::lang::Class* java::lang::IndexOutOfBoundsException::getClass0()
{
    return class_();
}


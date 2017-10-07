// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/io/EOFException.hpp>

extern void unimplemented_(const char16_t* name);
java::io::EOFException::EOFException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::EOFException::EOFException()
    : EOFException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::io::EOFException::EOFException(::java::lang::String* s)
    : EOFException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::io::EOFException::serialVersionUID;

void ::java::io::EOFException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::EOFException::ctor()");
}

void ::java::io::EOFException::ctor(::java::lang::String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::EOFException::ctor(::java::lang::String* s)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::EOFException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.EOFException", 20);
    return c;
}

java::lang::Class* java::io::EOFException::getClass0()
{
    return class_();
}


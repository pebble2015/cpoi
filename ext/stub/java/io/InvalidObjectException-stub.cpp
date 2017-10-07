// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/io/InvalidObjectException.hpp>

extern void unimplemented_(const char16_t* name);
java::io::InvalidObjectException::InvalidObjectException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::InvalidObjectException::InvalidObjectException(::java::lang::String* reason)
    : InvalidObjectException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

constexpr int64_t java::io::InvalidObjectException::serialVersionUID;

void ::java::io::InvalidObjectException::ctor(::java::lang::String* reason)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::InvalidObjectException::ctor(::java::lang::String* reason)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::InvalidObjectException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.InvalidObjectException", 30);
    return c;
}

java::lang::Class* java::io::InvalidObjectException::getClass0()
{
    return class_();
}


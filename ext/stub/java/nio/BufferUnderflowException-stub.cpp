// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/BufferUnderflowException.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::BufferUnderflowException::BufferUnderflowException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::BufferUnderflowException::BufferUnderflowException()
    : BufferUnderflowException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int64_t java::nio::BufferUnderflowException::serialVersionUID;

void ::java::nio::BufferUnderflowException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::BufferUnderflowException::ctor()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::BufferUnderflowException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.BufferUnderflowException", 33);
    return c;
}

java::lang::Class* java::nio::BufferUnderflowException::getClass0()
{
    return class_();
}


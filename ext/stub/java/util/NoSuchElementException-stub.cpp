// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/NoSuchElementException.hpp>

extern void unimplemented_(const char16_t* name);
java::util::NoSuchElementException::NoSuchElementException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::NoSuchElementException::NoSuchElementException()
    : NoSuchElementException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::NoSuchElementException::NoSuchElementException(::java::lang::String* s)
    : NoSuchElementException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::util::NoSuchElementException::serialVersionUID;

void ::java::util::NoSuchElementException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::NoSuchElementException::ctor()");
}

void ::java::util::NoSuchElementException::ctor(::java::lang::String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::NoSuchElementException::ctor(::java::lang::String* s)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::NoSuchElementException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.NoSuchElementException", 32);
    return c;
}

java::lang::Class* java::util::NoSuchElementException::getClass0()
{
    return class_();
}


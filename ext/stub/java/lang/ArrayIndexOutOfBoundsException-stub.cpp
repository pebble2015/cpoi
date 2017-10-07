// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException()
    : ArrayIndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(int32_t index)
    : ArrayIndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor(index);
}

java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(String* s)
    : ArrayIndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::lang::ArrayIndexOutOfBoundsException::serialVersionUID;

void ::java::lang::ArrayIndexOutOfBoundsException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ArrayIndexOutOfBoundsException::ctor()");
}

void ::java::lang::ArrayIndexOutOfBoundsException::ctor(int32_t index)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ArrayIndexOutOfBoundsException::ctor(int32_t index)");
}

void ::java::lang::ArrayIndexOutOfBoundsException::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ArrayIndexOutOfBoundsException::ctor(String* s)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ArrayIndexOutOfBoundsException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ArrayIndexOutOfBoundsException", 40);
    return c;
}

java::lang::Class* java::lang::ArrayIndexOutOfBoundsException::getClass0()
{
    return class_();
}


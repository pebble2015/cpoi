// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/charset/UnsupportedCharsetException.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::charset::UnsupportedCharsetException::UnsupportedCharsetException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::charset::UnsupportedCharsetException::UnsupportedCharsetException(::java::lang::String* charsetName)
    : UnsupportedCharsetException(*static_cast< ::default_init_tag* >(0))
{
    ctor(charsetName);
}

constexpr int64_t java::nio::charset::UnsupportedCharsetException::serialVersionUID;

void ::java::nio::charset::UnsupportedCharsetException::ctor(::java::lang::String* charsetName)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::charset::UnsupportedCharsetException::ctor(::java::lang::String* charsetName)");
}

java::lang::String* java::nio::charset::UnsupportedCharsetException::getCharsetName()
{ /* stub */
return charsetName ; /* getter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::charset::UnsupportedCharsetException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.charset.UnsupportedCharsetException", 44);
    return c;
}

java::lang::Class* java::nio::charset::UnsupportedCharsetException::getClass0()
{
    return class_();
}


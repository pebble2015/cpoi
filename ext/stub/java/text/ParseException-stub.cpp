// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/ParseException.hpp>

extern void unimplemented_(const char16_t* name);
java::text::ParseException::ParseException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::ParseException::ParseException(::java::lang::String* s, int32_t errorOffset)
    : ParseException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s, errorOffset);
}

constexpr int64_t java::text::ParseException::serialVersionUID;

void ::java::text::ParseException::ctor(::java::lang::String* s, int32_t errorOffset)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::ParseException::ctor(::java::lang::String* s, int32_t errorOffset)");
}

int32_t java::text::ParseException::getErrorOffset()
{ /* stub */
return errorOffset ; /* getter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::ParseException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.ParseException", 24);
    return c;
}

java::lang::Class* java::text::ParseException::getClass0()
{
    return class_();
}


// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/Format_Field.hpp>

extern void unimplemented_(const char16_t* name);
java::text::Format_Field::Format_Field(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::Format_Field::Format_Field(::java::lang::String* name)
    : Format_Field(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

constexpr int64_t java::text::Format_Field::serialVersionUID;

void ::java::text::Format_Field::ctor(::java::lang::String* name)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::Format_Field::ctor(::java::lang::String* name)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::Format_Field::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.Format.Field", 22);
    return c;
}

java::lang::Class* java::text::Format_Field::getClass0()
{
    return class_();
}


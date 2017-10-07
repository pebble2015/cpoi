// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/NumberFormat_Field.hpp>

extern void unimplemented_(const char16_t* name);
java::text::NumberFormat_Field::NumberFormat_Field(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::NumberFormat_Field::NumberFormat_Field(::java::lang::String* name)
    : NumberFormat_Field(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

java::text::NumberFormat_Field*& java::text::NumberFormat_Field::CURRENCY()
{
    clinit();
    return CURRENCY_;
}
java::text::NumberFormat_Field* java::text::NumberFormat_Field::CURRENCY_;
java::text::NumberFormat_Field*& java::text::NumberFormat_Field::DECIMAL_SEPARATOR()
{
    clinit();
    return DECIMAL_SEPARATOR_;
}
java::text::NumberFormat_Field* java::text::NumberFormat_Field::DECIMAL_SEPARATOR_;
java::text::NumberFormat_Field*& java::text::NumberFormat_Field::EXPONENT()
{
    clinit();
    return EXPONENT_;
}
java::text::NumberFormat_Field* java::text::NumberFormat_Field::EXPONENT_;
java::text::NumberFormat_Field*& java::text::NumberFormat_Field::EXPONENT_SIGN()
{
    clinit();
    return EXPONENT_SIGN_;
}
java::text::NumberFormat_Field* java::text::NumberFormat_Field::EXPONENT_SIGN_;
java::text::NumberFormat_Field*& java::text::NumberFormat_Field::EXPONENT_SYMBOL()
{
    clinit();
    return EXPONENT_SYMBOL_;
}
java::text::NumberFormat_Field* java::text::NumberFormat_Field::EXPONENT_SYMBOL_;
java::text::NumberFormat_Field*& java::text::NumberFormat_Field::FRACTION()
{
    clinit();
    return FRACTION_;
}
java::text::NumberFormat_Field* java::text::NumberFormat_Field::FRACTION_;
java::text::NumberFormat_Field*& java::text::NumberFormat_Field::GROUPING_SEPARATOR()
{
    clinit();
    return GROUPING_SEPARATOR_;
}
java::text::NumberFormat_Field* java::text::NumberFormat_Field::GROUPING_SEPARATOR_;
java::text::NumberFormat_Field*& java::text::NumberFormat_Field::INTEGER()
{
    clinit();
    return INTEGER_;
}
java::text::NumberFormat_Field* java::text::NumberFormat_Field::INTEGER_;
java::text::NumberFormat_Field*& java::text::NumberFormat_Field::PERCENT()
{
    clinit();
    return PERCENT_;
}
java::text::NumberFormat_Field* java::text::NumberFormat_Field::PERCENT_;
java::text::NumberFormat_Field*& java::text::NumberFormat_Field::PERMILLE()
{
    clinit();
    return PERMILLE_;
}
java::text::NumberFormat_Field* java::text::NumberFormat_Field::PERMILLE_;
java::text::NumberFormat_Field*& java::text::NumberFormat_Field::SIGN()
{
    clinit();
    return SIGN_;
}
java::text::NumberFormat_Field* java::text::NumberFormat_Field::SIGN_;
java::util::Map*& java::text::NumberFormat_Field::instanceMap()
{
    clinit();
    return instanceMap_;
}
java::util::Map* java::text::NumberFormat_Field::instanceMap_;
constexpr int64_t java::text::NumberFormat_Field::serialVersionUID;

void ::java::text::NumberFormat_Field::ctor(::java::lang::String* name)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::NumberFormat_Field::ctor(::java::lang::String* name)");
}

java::lang::Object* java::text::NumberFormat_Field::readResolve()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::text::NumberFormat_Field::readResolve()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::NumberFormat_Field::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.NumberFormat.Field", 28);
    return c;
}

java::lang::Class* java::text::NumberFormat_Field::getClass0()
{
    return class_();
}


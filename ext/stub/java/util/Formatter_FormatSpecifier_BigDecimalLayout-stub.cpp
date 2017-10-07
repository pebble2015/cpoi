// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Formatter_FormatSpecifier_BigDecimalLayout.hpp>

#include <java/util/Formatter_FormatSpecifier.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Formatter_FormatSpecifier_BigDecimalLayout::Formatter_FormatSpecifier_BigDecimalLayout(Formatter_FormatSpecifier *Formatter_FormatSpecifier_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , Formatter_FormatSpecifier_this(Formatter_FormatSpecifier_this)
{
    clinit();
}

java::util::Formatter_FormatSpecifier_BigDecimalLayout::Formatter_FormatSpecifier_BigDecimalLayout(Formatter_FormatSpecifier *Formatter_FormatSpecifier_this, ::java::math::BigInteger* intVal, int32_t scale, Formatter_BigDecimalLayoutForm* form)
    : Formatter_FormatSpecifier_BigDecimalLayout(Formatter_FormatSpecifier_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(intVal, scale, form);
}


void ::java::util::Formatter_FormatSpecifier_BigDecimalLayout::ctor(::java::math::BigInteger* intVal, int32_t scale, Formatter_BigDecimalLayoutForm* form)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Formatter_FormatSpecifier_BigDecimalLayout::ctor(::java::math::BigInteger* intVal, int32_t scale, Formatter_BigDecimalLayoutForm* form)");
}

char16_tArray* java::util::Formatter_FormatSpecifier_BigDecimalLayout::exponent()
{ /* stub */
    unimplemented_(u"char16_tArray* java::util::Formatter_FormatSpecifier_BigDecimalLayout::exponent()");
    return 0;
}

bool java::util::Formatter_FormatSpecifier_BigDecimalLayout::hasDot()
{ /* stub */
    unimplemented_(u"bool java::util::Formatter_FormatSpecifier_BigDecimalLayout::hasDot()");
    return 0;
}

/* private: void java::util::Formatter_FormatSpecifier_BigDecimalLayout::layout(::java::math::BigInteger* intVal, int32_t scale, Formatter_BigDecimalLayoutForm* form) */
char16_tArray* java::util::Formatter_FormatSpecifier_BigDecimalLayout::layoutChars()
{ /* stub */
    unimplemented_(u"char16_tArray* java::util::Formatter_FormatSpecifier_BigDecimalLayout::layoutChars()");
    return 0;
}

char16_tArray* java::util::Formatter_FormatSpecifier_BigDecimalLayout::mantissa()
{ /* stub */
    unimplemented_(u"char16_tArray* java::util::Formatter_FormatSpecifier_BigDecimalLayout::mantissa()");
    return 0;
}

int32_t java::util::Formatter_FormatSpecifier_BigDecimalLayout::scale()
{ /* stub */
    unimplemented_(u"int32_t java::util::Formatter_FormatSpecifier_BigDecimalLayout::scale()");
    return 0;
}

/* private: char16_tArray* java::util::Formatter_FormatSpecifier_BigDecimalLayout::toCharArray_(::java::lang::StringBuilder* sb) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Formatter_FormatSpecifier_BigDecimalLayout::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Formatter.FormatSpecifier.BigDecimalLayout", 52);
    return c;
}

java::lang::Class* java::util::Formatter_FormatSpecifier_BigDecimalLayout::getClass0()
{
    return class_();
}


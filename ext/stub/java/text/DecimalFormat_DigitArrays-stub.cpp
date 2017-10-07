// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/DecimalFormat_DigitArrays.hpp>

extern void unimplemented_(const char16_t* name);
java::text::DecimalFormat_DigitArrays::DecimalFormat_DigitArrays(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

char16_tArray*& java::text::DecimalFormat_DigitArrays::DigitHundreds1000()
{
    clinit();
    return DigitHundreds1000_;
}
char16_tArray* java::text::DecimalFormat_DigitArrays::DigitHundreds1000_;
char16_tArray*& java::text::DecimalFormat_DigitArrays::DigitOnes1000()
{
    clinit();
    return DigitOnes1000_;
}
char16_tArray* java::text::DecimalFormat_DigitArrays::DigitOnes1000_;
char16_tArray*& java::text::DecimalFormat_DigitArrays::DigitTens1000()
{
    clinit();
    return DigitTens1000_;
}
char16_tArray* java::text::DecimalFormat_DigitArrays::DigitTens1000_;

/* private: void ::java::text::DecimalFormat_DigitArrays::ctor() */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::DecimalFormat_DigitArrays::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.DecimalFormat.DigitArrays", 35);
    return c;
}

java::lang::Class* java::text::DecimalFormat_DigitArrays::getClass0()
{
    return class_();
}


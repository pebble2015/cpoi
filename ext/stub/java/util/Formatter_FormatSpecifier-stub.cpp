// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Formatter_FormatSpecifier.hpp>

#include <java/util/Formatter.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
typedef ::SubArray< ::java::util::Formatter_Flags, ::java::lang::ObjectArray > Formatter_FlagsArray;
    } // util
} // java

extern void unimplemented_(const char16_t* name);
java::util::Formatter_FormatSpecifier::Formatter_FormatSpecifier(Formatter *Formatter_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , Formatter_this(Formatter_this)
{
    clinit();
}

java::util::Formatter_FormatSpecifier::Formatter_FormatSpecifier(Formatter *Formatter_this, ::java::util::regex::Matcher* m)
    : Formatter_FormatSpecifier(Formatter_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(m);
}

bool& java::util::Formatter_FormatSpecifier::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::util::Formatter_FormatSpecifier::$assertionsDisabled_;

void ::java::util::Formatter_FormatSpecifier::ctor(::java::util::regex::Matcher* m)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Formatter_FormatSpecifier::ctor(::java::util::regex::Matcher* m)");
}

/* private: char16_tArray* java::util::Formatter_FormatSpecifier::addDot(::char16_tArray* mant) */
/* private: char16_tArray* java::util::Formatter_FormatSpecifier::addZeros(::char16_tArray* v, int32_t prec) */
/* private: int32_t java::util::Formatter_FormatSpecifier::adjustWidth(int32_t width, Formatter_Flags* f, bool neg) */
/* private: void java::util::Formatter_FormatSpecifier::checkBadFlags(Formatter_FlagsArray* badFlags) */
/* private: void java::util::Formatter_FormatSpecifier::checkCharacter() */
/* private: void java::util::Formatter_FormatSpecifier::checkDateTime() */
/* private: void java::util::Formatter_FormatSpecifier::checkFloat() */
/* private: void java::util::Formatter_FormatSpecifier::checkGeneral() */
/* private: void java::util::Formatter_FormatSpecifier::checkInteger() */
/* private: void java::util::Formatter_FormatSpecifier::checkNumeric() */
/* private: void java::util::Formatter_FormatSpecifier::checkText() */
/* private: char16_t java::util::Formatter_FormatSpecifier::conversion() */
/* private: char16_t java::util::Formatter_FormatSpecifier::conversion(::java::lang::String* s) */
/* private: void java::util::Formatter_FormatSpecifier::failConversion(char16_t c, ::java::lang::Object* arg) */
/* private: void java::util::Formatter_FormatSpecifier::failMismatch(Formatter_Flags* f, char16_t c) */
java::util::Formatter_Flags* java::util::Formatter_FormatSpecifier::flags()
{ /* stub */
    unimplemented_(u"java::util::Formatter_Flags* java::util::Formatter_FormatSpecifier::flags()");
    return 0;
}

/* private: java::util::Formatter_Flags* java::util::Formatter_FormatSpecifier::flags(::java::lang::String* s) */
/* private: char16_t java::util::Formatter_FormatSpecifier::getZero(Locale* l) */
/* private: java::lang::String* java::util::Formatter_FormatSpecifier::hexDouble(double d, int32_t prec) */
int32_t java::util::Formatter_FormatSpecifier::index()
{ /* stub */
    unimplemented_(u"int32_t java::util::Formatter_FormatSpecifier::index()");
    return 0;
}

/* private: int32_t java::util::Formatter_FormatSpecifier::index(::java::lang::String* s) */
/* private: java::lang::String* java::util::Formatter_FormatSpecifier::justify(::java::lang::String* s) */
/* private: java::lang::StringBuilder* java::util::Formatter_FormatSpecifier::leadingSign(::java::lang::StringBuilder* sb, bool neg) */
/* private: java::lang::StringBuilder* java::util::Formatter_FormatSpecifier::localizedMagnitude(::java::lang::StringBuilder* sb, int64_t value, Formatter_Flags* f, int32_t width, Locale* l) */
/* private: java::lang::StringBuilder* java::util::Formatter_FormatSpecifier::localizedMagnitude(::java::lang::StringBuilder* sb, ::char16_tArray* value, Formatter_Flags* f, int32_t width, Locale* l) */
int32_t java::util::Formatter_FormatSpecifier::precision()
{ /* stub */
    unimplemented_(u"int32_t java::util::Formatter_FormatSpecifier::precision()");
    return 0;
}

/* private: int32_t java::util::Formatter_FormatSpecifier::precision(::java::lang::String* s) */
/* private: void java::util::Formatter_FormatSpecifier::print(::java::lang::String* s) */
void java::util::Formatter_FormatSpecifier::print(::java::lang::Object* arg, Locale* l)
{ /* stub */
    unimplemented_(u"void java::util::Formatter_FormatSpecifier::print(::java::lang::Object* arg, Locale* l)");
}

/* private: void java::util::Formatter_FormatSpecifier::print(int8_t value, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::print(int16_t value, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::print(int32_t value, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::print(int64_t value, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::print(::java::math::BigInteger* value, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::print(float value, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::print(double value, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::print(::java::math::BigDecimal* value, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::print(Calendar* t, char16_t c, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::print(::java::time::temporal::TemporalAccessor* t, char16_t c, Locale* l) */
/* private: java::lang::Appendable* java::util::Formatter_FormatSpecifier::print(::java::lang::StringBuilder* sb, Calendar* t, char16_t c, Locale* l) */
/* private: java::lang::Appendable* java::util::Formatter_FormatSpecifier::print(::java::lang::StringBuilder* sb, ::java::time::temporal::TemporalAccessor* t, char16_t c, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::print(::java::lang::StringBuilder* sb, double value, Locale* l, Formatter_Flags* f, char16_t c, int32_t precision, bool neg) */
/* private: void java::util::Formatter_FormatSpecifier::print(::java::lang::StringBuilder* sb, ::java::math::BigDecimal* value, Locale* l, Formatter_Flags* f, char16_t c, int32_t precision, bool neg) */
/* private: void java::util::Formatter_FormatSpecifier::printBoolean(::java::lang::Object* arg) */
/* private: void java::util::Formatter_FormatSpecifier::printCharacter(::java::lang::Object* arg) */
/* private: void java::util::Formatter_FormatSpecifier::printDateTime(::java::lang::Object* arg, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::printFloat(::java::lang::Object* arg, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::printHashCode(::java::lang::Object* arg) */
/* private: void java::util::Formatter_FormatSpecifier::printInteger(::java::lang::Object* arg, Locale* l) */
/* private: void java::util::Formatter_FormatSpecifier::printString(::java::lang::Object* arg, Locale* l) */
java::lang::String* java::util::Formatter_FormatSpecifier::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::Formatter_FormatSpecifier::toString()");
    return 0;
}

/* private: java::lang::StringBuilder* java::util::Formatter_FormatSpecifier::trailingSign(::java::lang::StringBuilder* sb, bool neg) */
/* private: char16_tArray* java::util::Formatter_FormatSpecifier::trailingZeros(::char16_tArray* mant, int32_t nzeros) */
int32_t java::util::Formatter_FormatSpecifier::width()
{ /* stub */
    unimplemented_(u"int32_t java::util::Formatter_FormatSpecifier::width()");
    return 0;
}

/* private: int32_t java::util::Formatter_FormatSpecifier::width(::java::lang::String* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Formatter_FormatSpecifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Formatter.FormatSpecifier", 35);
    return c;
}

java::lang::Class* java::util::Formatter_FormatSpecifier::getClass0()
{
    return class_();
}


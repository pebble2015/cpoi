// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/DecimalFormatSymbols.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang

    namespace util
    {
typedef ::SubArray< ::java::util::Locale, ::java::lang::ObjectArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > LocaleArray;
    } // util
} // java

extern void unimplemented_(const char16_t* name);
java::text::DecimalFormatSymbols::DecimalFormatSymbols(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::DecimalFormatSymbols::DecimalFormatSymbols()
    : DecimalFormatSymbols(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::text::DecimalFormatSymbols::DecimalFormatSymbols(::java::util::Locale* locale)
    : DecimalFormatSymbols(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale);
}

constexpr int32_t java::text::DecimalFormatSymbols::currentSerialVersion;
constexpr int64_t java::text::DecimalFormatSymbols::serialVersionUID;

void ::java::text::DecimalFormatSymbols::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::DecimalFormatSymbols::ctor()");
}

void ::java::text::DecimalFormatSymbols::ctor(::java::util::Locale* locale)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::DecimalFormatSymbols::ctor(::java::util::Locale* locale)");
}

java::lang::Object* java::text::DecimalFormatSymbols::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::text::DecimalFormatSymbols::clone()");
    return 0;
}

bool java::text::DecimalFormatSymbols::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::text::DecimalFormatSymbols::equals(::java::lang::Object* obj)");
    return 0;
}

java::util::LocaleArray* java::text::DecimalFormatSymbols::getAvailableLocales()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::LocaleArray* java::text::DecimalFormatSymbols::getAvailableLocales()");
    return 0;
}

java::util::Currency* java::text::DecimalFormatSymbols::getCurrency()
{ /* stub */
return currency ; /* getter */
}

java::lang::String* java::text::DecimalFormatSymbols::getCurrencySymbol()
{ /* stub */
return currencySymbol ; /* getter */
}

char16_t java::text::DecimalFormatSymbols::getDecimalSeparator()
{ /* stub */
return decimalSeparator ; /* getter */
}

char16_t java::text::DecimalFormatSymbols::getDigit()
{ /* stub */
return digit ; /* getter */
}

java::lang::String* java::text::DecimalFormatSymbols::getExponentSeparator()
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::DecimalFormatSymbols::getExponentSeparator()");
    return 0;
}

char16_t java::text::DecimalFormatSymbols::getExponentialSymbol()
{ /* stub */
    unimplemented_(u"char16_t java::text::DecimalFormatSymbols::getExponentialSymbol()");
    return 0;
}

char16_t java::text::DecimalFormatSymbols::getGroupingSeparator()
{ /* stub */
return groupingSeparator ; /* getter */
}

java::lang::String* java::text::DecimalFormatSymbols::getInfinity()
{ /* stub */
return infinity ; /* getter */
}

java::text::DecimalFormatSymbols* java::text::DecimalFormatSymbols::getInstance()
{ /* stub */
    clinit();
    unimplemented_(u"java::text::DecimalFormatSymbols* java::text::DecimalFormatSymbols::getInstance()");
    return 0;
}

java::text::DecimalFormatSymbols* java::text::DecimalFormatSymbols::getInstance(::java::util::Locale* locale)
{ /* stub */
    clinit();
    unimplemented_(u"java::text::DecimalFormatSymbols* java::text::DecimalFormatSymbols::getInstance(::java::util::Locale* locale)");
    return 0;
}

java::lang::String* java::text::DecimalFormatSymbols::getInternationalCurrencySymbol()
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::DecimalFormatSymbols::getInternationalCurrencySymbol()");
    return 0;
}

char16_t java::text::DecimalFormatSymbols::getMinusSign()
{ /* stub */
return minusSign ; /* getter */
}

char16_t java::text::DecimalFormatSymbols::getMonetaryDecimalSeparator()
{ /* stub */
    unimplemented_(u"char16_t java::text::DecimalFormatSymbols::getMonetaryDecimalSeparator()");
    return 0;
}

java::lang::String* java::text::DecimalFormatSymbols::getNaN()
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::DecimalFormatSymbols::getNaN()");
    return 0;
}

char16_t java::text::DecimalFormatSymbols::getPatternSeparator()
{ /* stub */
return patternSeparator ; /* getter */
}

char16_t java::text::DecimalFormatSymbols::getPerMill()
{ /* stub */
return perMill ; /* getter */
}

char16_t java::text::DecimalFormatSymbols::getPercent()
{ /* stub */
return percent ; /* getter */
}

char16_t java::text::DecimalFormatSymbols::getZeroDigit()
{ /* stub */
return zeroDigit ; /* getter */
}

int32_t java::text::DecimalFormatSymbols::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::text::DecimalFormatSymbols::hashCode()");
    return 0;
}

/* private: void java::text::DecimalFormatSymbols::initialize(::java::util::Locale* locale) */
/* private: void java::text::DecimalFormatSymbols::readObject(::java::io::ObjectInputStream* stream) */
void java::text::DecimalFormatSymbols::setCurrency(::java::util::Currency* currency)
{ /* stub */
    this->currency = currency; /* setter */
}

void java::text::DecimalFormatSymbols::setCurrencySymbol(::java::lang::String* currency)
{ /* stub */
    this->currencySymbol = currency; /* setter */
}

void java::text::DecimalFormatSymbols::setDecimalSeparator(char16_t decimalSeparator)
{ /* stub */
    this->decimalSeparator = decimalSeparator; /* setter */
}

void java::text::DecimalFormatSymbols::setDigit(char16_t digit)
{ /* stub */
    this->digit = digit; /* setter */
}

void java::text::DecimalFormatSymbols::setExponentSeparator(::java::lang::String* exp)
{ /* stub */
    unimplemented_(u"void java::text::DecimalFormatSymbols::setExponentSeparator(::java::lang::String* exp)");
}

void java::text::DecimalFormatSymbols::setExponentialSymbol(char16_t exp)
{ /* stub */
    unimplemented_(u"void java::text::DecimalFormatSymbols::setExponentialSymbol(char16_t exp)");
}

void java::text::DecimalFormatSymbols::setGroupingSeparator(char16_t groupingSeparator)
{ /* stub */
    this->groupingSeparator = groupingSeparator; /* setter */
}

void java::text::DecimalFormatSymbols::setInfinity(::java::lang::String* infinity)
{ /* stub */
    this->infinity = infinity; /* setter */
}

void java::text::DecimalFormatSymbols::setInternationalCurrencySymbol(::java::lang::String* currencyCode)
{ /* stub */
    unimplemented_(u"void java::text::DecimalFormatSymbols::setInternationalCurrencySymbol(::java::lang::String* currencyCode)");
}

void java::text::DecimalFormatSymbols::setMinusSign(char16_t minusSign)
{ /* stub */
    this->minusSign = minusSign; /* setter */
}

void java::text::DecimalFormatSymbols::setMonetaryDecimalSeparator(char16_t sep)
{ /* stub */
    unimplemented_(u"void java::text::DecimalFormatSymbols::setMonetaryDecimalSeparator(char16_t sep)");
}

void java::text::DecimalFormatSymbols::setNaN(::java::lang::String* NaN)
{ /* stub */
    unimplemented_(u"void java::text::DecimalFormatSymbols::setNaN(::java::lang::String* NaN)");
}

void java::text::DecimalFormatSymbols::setPatternSeparator(char16_t patternSeparator)
{ /* stub */
    this->patternSeparator = patternSeparator; /* setter */
}

void java::text::DecimalFormatSymbols::setPerMill(char16_t perMill)
{ /* stub */
    this->perMill = perMill; /* setter */
}

void java::text::DecimalFormatSymbols::setPercent(char16_t percent)
{ /* stub */
    this->percent = percent; /* setter */
}

void java::text::DecimalFormatSymbols::setZeroDigit(char16_t zeroDigit)
{ /* stub */
    this->zeroDigit = zeroDigit; /* setter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::DecimalFormatSymbols::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.DecimalFormatSymbols", 30);
    return c;
}

java::lang::Class* java::text::DecimalFormatSymbols::getClass0()
{
    return class_();
}


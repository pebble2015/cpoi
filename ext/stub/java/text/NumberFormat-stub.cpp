// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/NumberFormat.hpp>

#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>

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
java::text::NumberFormat::NumberFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::NumberFormat::NumberFormat()
    : NumberFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::text::NumberFormat::CURRENCYSTYLE;
constexpr int32_t java::text::NumberFormat::FRACTION_FIELD;
constexpr int32_t java::text::NumberFormat::INTEGERSTYLE;
constexpr int32_t java::text::NumberFormat::INTEGER_FIELD;
constexpr int32_t java::text::NumberFormat::NUMBERSTYLE;
constexpr int32_t java::text::NumberFormat::PERCENTSTYLE;
constexpr int32_t java::text::NumberFormat::SCIENTIFICSTYLE;
constexpr int32_t java::text::NumberFormat::currentSerialVersion;
constexpr int64_t java::text::NumberFormat::serialVersionUID;

void ::java::text::NumberFormat::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::NumberFormat::ctor()");
}

java::lang::Object* java::text::NumberFormat::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::text::NumberFormat::clone()");
    return 0;
}

bool java::text::NumberFormat::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::text::NumberFormat::equals(::java::lang::Object* obj)");
    return 0;
}

java::lang::String* java::text::NumberFormat::fastFormat(double number)
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::NumberFormat::fastFormat(double number)");
    return 0;
}

java::lang::String* java::text::NumberFormat::format(double number)
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::NumberFormat::format(double number)");
    return 0;
}

java::lang::String* java::text::NumberFormat::format(int64_t number)
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::NumberFormat::format(int64_t number)");
    return 0;
}

java::lang::StringBuffer* java::text::NumberFormat::format(::java::lang::Object* number, ::java::lang::StringBuffer* toAppendTo, FieldPosition* pos)
{ /* stub */
    unimplemented_(u"java::lang::StringBuffer* java::text::NumberFormat::format(::java::lang::Object* number, ::java::lang::StringBuffer* toAppendTo, FieldPosition* pos)");
    return 0;
}

java::util::LocaleArray* java::text::NumberFormat::getAvailableLocales()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::LocaleArray* java::text::NumberFormat::getAvailableLocales()");
    return 0;
}

java::util::Currency* java::text::NumberFormat::getCurrency()
{ /* stub */
    unimplemented_(u"java::util::Currency* java::text::NumberFormat::getCurrency()");
    return 0;
}

java::text::NumberFormat* java::text::NumberFormat::getCurrencyInstance()
{ /* stub */
    clinit();
    unimplemented_(u"java::text::NumberFormat* java::text::NumberFormat::getCurrencyInstance()");
    return 0;
}

java::text::NumberFormat* java::text::NumberFormat::getCurrencyInstance(::java::util::Locale* inLocale)
{ /* stub */
    clinit();
    unimplemented_(u"java::text::NumberFormat* java::text::NumberFormat::getCurrencyInstance(::java::util::Locale* inLocale)");
    return 0;
}

java::text::NumberFormat* java::text::NumberFormat::getInstance()
{ /* stub */
    clinit();
    unimplemented_(u"java::text::NumberFormat* java::text::NumberFormat::getInstance()");
    return 0;
}

java::text::NumberFormat* java::text::NumberFormat::getInstance(::java::util::Locale* inLocale)
{ /* stub */
    clinit();
    unimplemented_(u"java::text::NumberFormat* java::text::NumberFormat::getInstance(::java::util::Locale* inLocale)");
    return 0;
}

/* private: java::text::NumberFormat* java::text::NumberFormat::getInstance(::java::util::Locale* desiredLocale, int32_t choice) */
/* private: java::text::NumberFormat* java::text::NumberFormat::getInstance(::sun::util::locale::provider::LocaleProviderAdapter* adapter, ::java::util::Locale* locale, int32_t choice) */
java::text::NumberFormat* java::text::NumberFormat::getIntegerInstance()
{ /* stub */
    clinit();
    unimplemented_(u"java::text::NumberFormat* java::text::NumberFormat::getIntegerInstance()");
    return 0;
}

java::text::NumberFormat* java::text::NumberFormat::getIntegerInstance(::java::util::Locale* inLocale)
{ /* stub */
    clinit();
    unimplemented_(u"java::text::NumberFormat* java::text::NumberFormat::getIntegerInstance(::java::util::Locale* inLocale)");
    return 0;
}

int32_t java::text::NumberFormat::getMaximumFractionDigits()
{ /* stub */
return maximumFractionDigits ; /* getter */
}

int32_t java::text::NumberFormat::getMaximumIntegerDigits()
{ /* stub */
return maximumIntegerDigits ; /* getter */
}

int32_t java::text::NumberFormat::getMinimumFractionDigits()
{ /* stub */
return minimumFractionDigits ; /* getter */
}

int32_t java::text::NumberFormat::getMinimumIntegerDigits()
{ /* stub */
return minimumIntegerDigits ; /* getter */
}

java::text::NumberFormat* java::text::NumberFormat::getNumberInstance()
{ /* stub */
    clinit();
    unimplemented_(u"java::text::NumberFormat* java::text::NumberFormat::getNumberInstance()");
    return 0;
}

java::text::NumberFormat* java::text::NumberFormat::getNumberInstance(::java::util::Locale* inLocale)
{ /* stub */
    clinit();
    unimplemented_(u"java::text::NumberFormat* java::text::NumberFormat::getNumberInstance(::java::util::Locale* inLocale)");
    return 0;
}

java::text::NumberFormat* java::text::NumberFormat::getPercentInstance()
{ /* stub */
    clinit();
    unimplemented_(u"java::text::NumberFormat* java::text::NumberFormat::getPercentInstance()");
    return 0;
}

java::text::NumberFormat* java::text::NumberFormat::getPercentInstance(::java::util::Locale* inLocale)
{ /* stub */
    clinit();
    unimplemented_(u"java::text::NumberFormat* java::text::NumberFormat::getPercentInstance(::java::util::Locale* inLocale)");
    return 0;
}

java::math::RoundingMode* java::text::NumberFormat::getRoundingMode()
{ /* stub */
    unimplemented_(u"java::math::RoundingMode* java::text::NumberFormat::getRoundingMode()");
    return 0;
}

java::text::NumberFormat* java::text::NumberFormat::getScientificInstance()
{ /* stub */
    clinit();
    unimplemented_(u"java::text::NumberFormat* java::text::NumberFormat::getScientificInstance()");
    return 0;
}

java::text::NumberFormat* java::text::NumberFormat::getScientificInstance(::java::util::Locale* inLocale)
{ /* stub */
    clinit();
    unimplemented_(u"java::text::NumberFormat* java::text::NumberFormat::getScientificInstance(::java::util::Locale* inLocale)");
    return 0;
}

int32_t java::text::NumberFormat::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::text::NumberFormat::hashCode()");
    return 0;
}

bool java::text::NumberFormat::isGroupingUsed()
{ /* stub */
    unimplemented_(u"bool java::text::NumberFormat::isGroupingUsed()");
    return 0;
}

bool java::text::NumberFormat::isParseIntegerOnly()
{ /* stub */
    unimplemented_(u"bool java::text::NumberFormat::isParseIntegerOnly()");
    return 0;
}

java::lang::Number* java::text::NumberFormat::parse(::java::lang::String* source)
{ /* stub */
    unimplemented_(u"java::lang::Number* java::text::NumberFormat::parse(::java::lang::String* source)");
    return 0;
}

java::lang::Object* java::text::NumberFormat::parseObject(::java::lang::String* source, ParsePosition* pos)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::text::NumberFormat::parseObject(::java::lang::String* source, ParsePosition* pos)");
    return 0;
}

/* private: void java::text::NumberFormat::readObject(::java::io::ObjectInputStream* stream) */
void java::text::NumberFormat::setCurrency(::java::util::Currency* currency)
{ /* stub */
    unimplemented_(u"void java::text::NumberFormat::setCurrency(::java::util::Currency* currency)");
}

void java::text::NumberFormat::setGroupingUsed(bool newValue)
{ /* stub */
    this->groupingUsed = newValue; /* setter */
}

void java::text::NumberFormat::setMaximumFractionDigits(int32_t newValue)
{ /* stub */
    this->maximumFractionDigits = newValue; /* setter */
}

void java::text::NumberFormat::setMaximumIntegerDigits(int32_t newValue)
{ /* stub */
    this->maximumIntegerDigits = newValue; /* setter */
}

void java::text::NumberFormat::setMinimumFractionDigits(int32_t newValue)
{ /* stub */
    this->minimumFractionDigits = newValue; /* setter */
}

void java::text::NumberFormat::setMinimumIntegerDigits(int32_t newValue)
{ /* stub */
    this->minimumIntegerDigits = newValue; /* setter */
}

void java::text::NumberFormat::setParseIntegerOnly(bool value)
{ /* stub */
    this->parseIntegerOnly = value; /* setter */
}

void java::text::NumberFormat::setRoundingMode(::java::math::RoundingMode* roundingMode)
{ /* stub */
    unimplemented_(u"void java::text::NumberFormat::setRoundingMode(::java::math::RoundingMode* roundingMode)");
}

/* private: void java::text::NumberFormat::writeObject(::java::io::ObjectOutputStream* stream) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::NumberFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.NumberFormat", 22);
    return c;
}

java::lang::String* java::text::NumberFormat::format(::java::lang::Object* obj)
{
    return super::format(obj);
}

java::lang::Object* java::text::NumberFormat::parseObject(::java::lang::String* source)
{
    return super::parseObject(source);
}

java::lang::Class* java::text::NumberFormat::getClass0()
{
    return class_();
}


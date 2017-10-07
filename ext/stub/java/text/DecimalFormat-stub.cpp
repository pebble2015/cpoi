// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/DecimalFormat.hpp>

#include <java/lang/Number.hpp>
#include <java/lang/String.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace text
    {
typedef ::SubArray< ::java::text::FieldPosition, ::java::lang::ObjectArray > FieldPositionArray;
    } // text
} // java

extern void unimplemented_(const char16_t* name);
java::text::DecimalFormat::DecimalFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::DecimalFormat::DecimalFormat()
    : DecimalFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::text::DecimalFormat::DecimalFormat(::java::lang::String* pattern)
    : DecimalFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern);
}

java::text::DecimalFormat::DecimalFormat(::java::lang::String* pattern, DecimalFormatSymbols* symbols)
    : DecimalFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern, symbols);
}

bool& java::text::DecimalFormat::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::text::DecimalFormat::$assertionsDisabled_;
constexpr char16_t java::text::DecimalFormat::CURRENCY_SIGN;
constexpr int32_t java::text::DecimalFormat::DOUBLE_FRACTION_DIGITS;
constexpr int32_t java::text::DecimalFormat::DOUBLE_INTEGER_DIGITS;
java::text::FieldPositionArray*& java::text::DecimalFormat::EmptyFieldPositionArray_()
{
    clinit();
    return EmptyFieldPositionArray__;
}
java::text::FieldPositionArray* java::text::DecimalFormat::EmptyFieldPositionArray__;
constexpr int32_t java::text::DecimalFormat::MAXIMUM_FRACTION_DIGITS;
constexpr int32_t java::text::DecimalFormat::MAXIMUM_INTEGER_DIGITS;
constexpr double java::text::DecimalFormat::MAX_INT_AS_DOUBLE;
constexpr char16_t java::text::DecimalFormat::PATTERN_DECIMAL_SEPARATOR;
constexpr char16_t java::text::DecimalFormat::PATTERN_DIGIT;
java::lang::String*& java::text::DecimalFormat::PATTERN_EXPONENT()
{
    clinit();
    return PATTERN_EXPONENT_;
}
java::lang::String* java::text::DecimalFormat::PATTERN_EXPONENT_;
constexpr char16_t java::text::DecimalFormat::PATTERN_GROUPING_SEPARATOR;
constexpr char16_t java::text::DecimalFormat::PATTERN_MINUS;
constexpr char16_t java::text::DecimalFormat::PATTERN_PERCENT;
constexpr char16_t java::text::DecimalFormat::PATTERN_PER_MILLE;
constexpr char16_t java::text::DecimalFormat::PATTERN_SEPARATOR;
constexpr char16_t java::text::DecimalFormat::PATTERN_ZERO_DIGIT;
constexpr char16_t java::text::DecimalFormat::QUOTE;
constexpr int32_t java::text::DecimalFormat::STATUS_INFINITE;
constexpr int32_t java::text::DecimalFormat::STATUS_LENGTH;
constexpr int32_t java::text::DecimalFormat::STATUS_POSITIVE;
constexpr int32_t java::text::DecimalFormat::currentSerialVersion;
constexpr int64_t java::text::DecimalFormat::serialVersionUID;

void ::java::text::DecimalFormat::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::DecimalFormat::ctor()");
}

void ::java::text::DecimalFormat::ctor(::java::lang::String* pattern)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::DecimalFormat::ctor(::java::lang::String* pattern)");
}

void ::java::text::DecimalFormat::ctor(::java::lang::String* pattern, DecimalFormatSymbols* symbols)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::DecimalFormat::ctor(::java::lang::String* pattern, DecimalFormatSymbols* symbols)");
}

/* private: void java::text::DecimalFormat::addAffixes(::char16_tArray* container, ::char16_tArray* prefix, ::char16_tArray* suffix) */
/* private: void java::text::DecimalFormat::append(::java::lang::StringBuffer* result, ::java::lang::String* string, Format_FieldDelegate* delegate, FieldPositionArray* positions, Format_Field* signAttribute) */
/* private: void java::text::DecimalFormat::appendAffix(::java::lang::StringBuffer* buffer, ::java::lang::String* affix, bool localized) */
/* private: void java::text::DecimalFormat::appendAffix(::java::lang::StringBuffer* buffer, ::java::lang::String* affixPattern, ::java::lang::String* expAffix, bool localized) */
/* private: void java::text::DecimalFormat::appendSuffix(::char16_tArray* suffix, int32_t len, ::char16_tArray* container) */
void java::text::DecimalFormat::applyLocalizedPattern(::java::lang::String* pattern)
{ /* stub */
    unimplemented_(u"void java::text::DecimalFormat::applyLocalizedPattern(::java::lang::String* pattern)");
}

void java::text::DecimalFormat::applyPattern(::java::lang::String* pattern)
{ /* stub */
    unimplemented_(u"void java::text::DecimalFormat::applyPattern(::java::lang::String* pattern)");
}

/* private: void java::text::DecimalFormat::applyPattern(::java::lang::String* pattern, bool localized) */
/* private: void java::text::DecimalFormat::checkAndSetFastPathStatus() */
java::lang::Object* java::text::DecimalFormat::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::text::DecimalFormat::clone()");
    return 0;
}

/* private: void java::text::DecimalFormat::collectFractionalDigits(int32_t number, ::char16_tArray* digitsBuffer, int32_t startIndex) */
/* private: void java::text::DecimalFormat::collectIntegralDigits(int32_t number, ::char16_tArray* digitsBuffer, int32_t backwardIndex) */
bool java::text::DecimalFormat::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::text::DecimalFormat::equals(::java::lang::Object* obj)");
    return 0;
}

/* private: bool java::text::DecimalFormat::exactRoundUp(double fractionalPart, int32_t scaledFractionalPartAsInt) */
/* private: java::text::FieldPositionArray* java::text::DecimalFormat::expandAffix(::java::lang::String* pattern) */
/* private: java::lang::String* java::text::DecimalFormat::expandAffix(::java::lang::String* pattern, ::java::lang::StringBuffer* buffer) */
/* private: void java::text::DecimalFormat::expandAffixes() */
/* private: void java::text::DecimalFormat::fastDoubleFormat(double d, bool negative) */
java::lang::String* java::text::DecimalFormat::fastFormat(double d)
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::DecimalFormat::fastFormat(double d)");
    return 0;
}

java::lang::StringBuffer* java::text::DecimalFormat::format(::java::lang::Object* number, ::java::lang::StringBuffer* toAppendTo, FieldPosition* pos)
{ /* stub */
    unimplemented_(u"java::lang::StringBuffer* java::text::DecimalFormat::format(::java::lang::Object* number, ::java::lang::StringBuffer* toAppendTo, FieldPosition* pos)");
    return 0;
}

java::lang::StringBuffer* java::text::DecimalFormat::format(double number, ::java::lang::StringBuffer* result, FieldPosition* fieldPosition)
{ /* stub */
    unimplemented_(u"java::lang::StringBuffer* java::text::DecimalFormat::format(double number, ::java::lang::StringBuffer* result, FieldPosition* fieldPosition)");
    return 0;
}

/* private: java::lang::StringBuffer* java::text::DecimalFormat::format(double number, ::java::lang::StringBuffer* result, Format_FieldDelegate* delegate) */
java::lang::StringBuffer* java::text::DecimalFormat::format(int64_t number, ::java::lang::StringBuffer* result, FieldPosition* fieldPosition)
{ /* stub */
    unimplemented_(u"java::lang::StringBuffer* java::text::DecimalFormat::format(int64_t number, ::java::lang::StringBuffer* result, FieldPosition* fieldPosition)");
    return 0;
}

/* private: java::lang::StringBuffer* java::text::DecimalFormat::format(int64_t number, ::java::lang::StringBuffer* result, Format_FieldDelegate* delegate) */
/* private: java::lang::StringBuffer* java::text::DecimalFormat::format(::java::math::BigDecimal* number, ::java::lang::StringBuffer* result, FieldPosition* fieldPosition) */
/* private: java::lang::StringBuffer* java::text::DecimalFormat::format(::java::math::BigDecimal* number, ::java::lang::StringBuffer* result, Format_FieldDelegate* delegate) */
/* private: java::lang::StringBuffer* java::text::DecimalFormat::format(::java::math::BigInteger* number, ::java::lang::StringBuffer* result, FieldPosition* fieldPosition) */
/* private: java::lang::StringBuffer* java::text::DecimalFormat::format(::java::math::BigInteger* number, ::java::lang::StringBuffer* result, Format_FieldDelegate* delegate, bool formatLong) */
java::text::AttributedCharacterIterator* java::text::DecimalFormat::formatToCharacterIterator(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"java::text::AttributedCharacterIterator* java::text::DecimalFormat::formatToCharacterIterator(::java::lang::Object* obj)");
    return 0;
}

/* private: java::math::BigDecimal* java::text::DecimalFormat::getBigDecimalMultiplier() */
/* private: java::math::BigInteger* java::text::DecimalFormat::getBigIntegerMultiplier() */
java::util::Currency* java::text::DecimalFormat::getCurrency()
{ /* stub */
    unimplemented_(u"java::util::Currency* java::text::DecimalFormat::getCurrency()");
    return 0;
}

java::text::DecimalFormatSymbols* java::text::DecimalFormat::getDecimalFormatSymbols()
{ /* stub */
    unimplemented_(u"java::text::DecimalFormatSymbols* java::text::DecimalFormat::getDecimalFormatSymbols()");
    return 0;
}

int32_t java::text::DecimalFormat::getGroupingSize()
{ /* stub */
}

int32_t java::text::DecimalFormat::getMaximumFractionDigits()
{ /* stub */
return maximumFractionDigits ; /* getter */
}

int32_t java::text::DecimalFormat::getMaximumIntegerDigits()
{ /* stub */
return maximumIntegerDigits ; /* getter */
}

int32_t java::text::DecimalFormat::getMinimumFractionDigits()
{ /* stub */
return minimumFractionDigits ; /* getter */
}

int32_t java::text::DecimalFormat::getMinimumIntegerDigits()
{ /* stub */
return minimumIntegerDigits ; /* getter */
}

int32_t java::text::DecimalFormat::getMultiplier()
{ /* stub */
return multiplier ; /* getter */
}

java::lang::String* java::text::DecimalFormat::getNegativePrefix()
{ /* stub */
return negativePrefix ; /* getter */
}

/* private: java::text::FieldPositionArray* java::text::DecimalFormat::getNegativePrefixFieldPositions() */
java::lang::String* java::text::DecimalFormat::getNegativeSuffix()
{ /* stub */
return negativeSuffix ; /* getter */
}

/* private: java::text::FieldPositionArray* java::text::DecimalFormat::getNegativeSuffixFieldPositions() */
java::lang::String* java::text::DecimalFormat::getPositivePrefix()
{ /* stub */
return positivePrefix ; /* getter */
}

/* private: java::text::FieldPositionArray* java::text::DecimalFormat::getPositivePrefixFieldPositions() */
java::lang::String* java::text::DecimalFormat::getPositiveSuffix()
{ /* stub */
return positiveSuffix ; /* getter */
}

/* private: java::text::FieldPositionArray* java::text::DecimalFormat::getPositiveSuffixFieldPositions() */
java::math::RoundingMode* java::text::DecimalFormat::getRoundingMode()
{ /* stub */
return roundingMode ; /* getter */
}

int32_t java::text::DecimalFormat::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::text::DecimalFormat::hashCode()");
    return 0;
}

bool java::text::DecimalFormat::isDecimalSeparatorAlwaysShown()
{ /* stub */
    unimplemented_(u"bool java::text::DecimalFormat::isDecimalSeparatorAlwaysShown()");
    return 0;
}

bool java::text::DecimalFormat::isParseBigDecimal()
{ /* stub */
    unimplemented_(u"bool java::text::DecimalFormat::isParseBigDecimal()");
    return 0;
}

/* private: void java::text::DecimalFormat::localizeDigits(::char16_tArray* digitsBuffer) */
java::lang::Number* java::text::DecimalFormat::parse(::java::lang::String* text, ParsePosition* pos)
{ /* stub */
    unimplemented_(u"java::lang::Number* java::text::DecimalFormat::parse(::java::lang::String* text, ParsePosition* pos)");
    return 0;
}

/* private: void java::text::DecimalFormat::prependPrefix(::char16_tArray* prefix, int32_t len, ::char16_tArray* container) */
/* private: void java::text::DecimalFormat::readObject(::java::io::ObjectInputStream* stream) */
void java::text::DecimalFormat::setCurrency(::java::util::Currency* currency)
{ /* stub */
    unimplemented_(u"void java::text::DecimalFormat::setCurrency(::java::util::Currency* currency)");
}

void java::text::DecimalFormat::setDecimalFormatSymbols(DecimalFormatSymbols* newSymbols)
{ /* stub */
    unimplemented_(u"void java::text::DecimalFormat::setDecimalFormatSymbols(DecimalFormatSymbols* newSymbols)");
}

void java::text::DecimalFormat::setDecimalSeparatorAlwaysShown(bool newValue)
{ /* stub */
    this->decimalSeparatorAlwaysShown = newValue; /* setter */
}

void java::text::DecimalFormat::setGroupingSize(int32_t newValue)
{ /* stub */
    this->groupingSize = newValue; /* setter */
}

void java::text::DecimalFormat::setGroupingUsed(bool newValue)
{ /* stub */
    unimplemented_(u"void java::text::DecimalFormat::setGroupingUsed(bool newValue)");
}

void java::text::DecimalFormat::setMaximumFractionDigits(int32_t newValue)
{ /* stub */
    this->maximumFractionDigits = newValue; /* setter */
}

void java::text::DecimalFormat::setMaximumIntegerDigits(int32_t newValue)
{ /* stub */
    this->maximumIntegerDigits = newValue; /* setter */
}

void java::text::DecimalFormat::setMinimumFractionDigits(int32_t newValue)
{ /* stub */
    this->minimumFractionDigits = newValue; /* setter */
}

void java::text::DecimalFormat::setMinimumIntegerDigits(int32_t newValue)
{ /* stub */
    this->minimumIntegerDigits = newValue; /* setter */
}

void java::text::DecimalFormat::setMultiplier(int32_t newValue)
{ /* stub */
    this->multiplier = newValue; /* setter */
}

void java::text::DecimalFormat::setNegativePrefix(::java::lang::String* newValue)
{ /* stub */
    this->negativePrefix = newValue; /* setter */
}

void java::text::DecimalFormat::setNegativeSuffix(::java::lang::String* newValue)
{ /* stub */
    this->negativeSuffix = newValue; /* setter */
}

void java::text::DecimalFormat::setParseBigDecimal(bool newValue)
{ /* stub */
    this->parseBigDecimal = newValue; /* setter */
}

void java::text::DecimalFormat::setPositivePrefix(::java::lang::String* newValue)
{ /* stub */
    this->positivePrefix = newValue; /* setter */
}

void java::text::DecimalFormat::setPositiveSuffix(::java::lang::String* newValue)
{ /* stub */
    this->positiveSuffix = newValue; /* setter */
}

void java::text::DecimalFormat::setRoundingMode(::java::math::RoundingMode* roundingMode)
{ /* stub */
    this->roundingMode = roundingMode; /* setter */
}

/* private: java::lang::StringBuffer* java::text::DecimalFormat::subformat(::java::lang::StringBuffer* result, Format_FieldDelegate* delegate, bool isNegative, bool isInteger, int32_t maxIntDigits, int32_t minIntDigits, int32_t maxFraDigits, int32_t minFraDigits) */
/* private: bool java::text::DecimalFormat::subparse(::java::lang::String* text, ParsePosition* parsePosition, ::java::lang::String* positivePrefix, ::java::lang::String* negativePrefix, DigitList* digits, bool isExponent, ::boolArray* status) */
java::lang::String* java::text::DecimalFormat::toLocalizedPattern()
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::DecimalFormat::toLocalizedPattern()");
    return 0;
}

java::lang::String* java::text::DecimalFormat::toPattern()
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::DecimalFormat::toPattern()");
    return 0;
}

/* private: java::lang::String* java::text::DecimalFormat::toPattern(bool localized) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::DecimalFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.DecimalFormat", 23);
    return c;
}

java::lang::String* java::text::DecimalFormat::format(double number)
{
    return super::format(number);
}

java::lang::String* java::text::DecimalFormat::format(int64_t number)
{
    return super::format(number);
}

java::lang::Number* java::text::DecimalFormat::parse(::java::lang::String* source)
{
    return super::parse(source);
}

java::lang::String* java::text::DecimalFormat::format(::java::lang::Object* obj)
{
    return super::format(obj);
}

java::lang::Class* java::text::DecimalFormat::getClass0()
{
    return class_();
}


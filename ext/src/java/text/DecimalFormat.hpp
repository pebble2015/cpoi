// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/text/NumberFormat.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace text
    {
typedef ::SubArray< ::java::text::FieldPosition, ::java::lang::ObjectArray > FieldPositionArray;
    } // text
} // java

struct default_init_tag;

class java::text::DecimalFormat
    : public NumberFormat
{

public:
    typedef NumberFormat super;

private:
    static bool $assertionsDisabled_;
    static constexpr char16_t CURRENCY_SIGN { u'\u00a4' };

public: /* package */
    static constexpr int32_t DOUBLE_FRACTION_DIGITS { int32_t(340) };
    static constexpr int32_t DOUBLE_INTEGER_DIGITS { int32_t(309) };

private:
    static FieldPositionArray* EmptyFieldPositionArray__;

public: /* package */
    static constexpr int32_t MAXIMUM_FRACTION_DIGITS { int32_t(2147483647) };
    static constexpr int32_t MAXIMUM_INTEGER_DIGITS { int32_t(2147483647) };

private:
    static constexpr double MAX_INT_AS_DOUBLE { 2.147483647E9 };
    static constexpr char16_t PATTERN_DECIMAL_SEPARATOR { u'.' };
    static constexpr char16_t PATTERN_DIGIT { u'#' };
    static ::java::lang::String* PATTERN_EXPONENT_;
    static constexpr char16_t PATTERN_GROUPING_SEPARATOR { u',' };
    static constexpr char16_t PATTERN_MINUS { u'-' };
    static constexpr char16_t PATTERN_PERCENT { u'%' };
    static constexpr char16_t PATTERN_PER_MILLE { u'\u2030' };
    static constexpr char16_t PATTERN_SEPARATOR { u';' };
    static constexpr char16_t PATTERN_ZERO_DIGIT { u'0' };
    static constexpr char16_t QUOTE { u'\'' };
    static constexpr int32_t STATUS_INFINITE { int32_t(0) };
    static constexpr int32_t STATUS_LENGTH { int32_t(2) };
    static constexpr int32_t STATUS_POSITIVE { int32_t(1) };
    ::java::math::BigDecimal* bigDecimalMultiplier {  };
    ::java::math::BigInteger* bigIntegerMultiplier {  };

public: /* package */
    static constexpr int32_t currentSerialVersion { int32_t(4) };

private:
    bool decimalSeparatorAlwaysShown {  };
    DigitList* digitList {  };
    bool fastPathCheckNeeded {  };
    DecimalFormat_FastPathData* fastPathData {  };
    int8_t groupingSize {  };
    bool isCurrencyFormat {  };
    bool isFastPath {  };
    int32_t maximumFractionDigits {  };
    int32_t maximumIntegerDigits {  };
    int8_t minExponentDigits {  };
    int32_t minimumFractionDigits {  };
    int32_t minimumIntegerDigits {  };
    int32_t multiplier {  };
    ::java::lang::String* negPrefixPattern {  };
    ::java::lang::String* negSuffixPattern {  };
    ::java::lang::String* negativePrefix {  };
    FieldPositionArray* negativePrefixFieldPositions {  };
    ::java::lang::String* negativeSuffix {  };
    FieldPositionArray* negativeSuffixFieldPositions {  };
    bool parseBigDecimal {  };
    ::java::lang::String* posPrefixPattern {  };
    ::java::lang::String* posSuffixPattern {  };
    ::java::lang::String* positivePrefix {  };
    FieldPositionArray* positivePrefixFieldPositions {  };
    ::java::lang::String* positiveSuffix {  };
    FieldPositionArray* positiveSuffixFieldPositions {  };
    ::java::math::RoundingMode* roundingMode {  };
    int32_t serialVersionOnStream {  };

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(864413376551465018LL) };

private:
    DecimalFormatSymbols* symbols {  };
    bool useExponentialNotation {  };

protected:
    void ctor();
    void ctor(::java::lang::String* pattern);
    void ctor(::java::lang::String* pattern, DecimalFormatSymbols* symbols);
    /*void addAffixes(::char16_tArray* container, ::char16_tArray* prefix, ::char16_tArray* suffix); (private) */
    /*void append(::java::lang::StringBuffer* result, ::java::lang::String* string, Format_FieldDelegate* delegate, FieldPositionArray* positions, Format_Field* signAttribute); (private) */
    /*void appendAffix(::java::lang::StringBuffer* buffer, ::java::lang::String* affix, bool localized); (private) */
    /*void appendAffix(::java::lang::StringBuffer* buffer, ::java::lang::String* affixPattern, ::java::lang::String* expAffix, bool localized); (private) */
    /*void appendSuffix(::char16_tArray* suffix, int32_t len, ::char16_tArray* container); (private) */

public:
    virtual void applyLocalizedPattern(::java::lang::String* pattern);
    virtual void applyPattern(::java::lang::String* pattern);
    /*void applyPattern(::java::lang::String* pattern, bool localized); (private) */
    /*void checkAndSetFastPathStatus(); (private) */
    ::java::lang::Object* clone() override;
    /*void collectFractionalDigits(int32_t number, ::char16_tArray* digitsBuffer, int32_t startIndex); (private) */
    /*void collectIntegralDigits(int32_t number, ::char16_tArray* digitsBuffer, int32_t backwardIndex); (private) */
    bool equals(::java::lang::Object* obj) override;
    /*bool exactRoundUp(double fractionalPart, int32_t scaledFractionalPartAsInt); (private) */
    /*FieldPositionArray* expandAffix(::java::lang::String* pattern); (private) */
    /*::java::lang::String* expandAffix(::java::lang::String* pattern, ::java::lang::StringBuffer* buffer); (private) */
    /*void expandAffixes(); (private) */
    /*void fastDoubleFormat(double d, bool negative); (private) */

public: /* package */
    ::java::lang::String* fastFormat(double d) override;

public:
    ::java::lang::StringBuffer* format(::java::lang::Object* number, ::java::lang::StringBuffer* toAppendTo, FieldPosition* pos) override;
    ::java::lang::StringBuffer* format(double number, ::java::lang::StringBuffer* result, FieldPosition* fieldPosition) override;
    /*::java::lang::StringBuffer* format(double number, ::java::lang::StringBuffer* result, Format_FieldDelegate* delegate); (private) */
    ::java::lang::StringBuffer* format(int64_t number, ::java::lang::StringBuffer* result, FieldPosition* fieldPosition) override;
    /*::java::lang::StringBuffer* format(int64_t number, ::java::lang::StringBuffer* result, Format_FieldDelegate* delegate); (private) */
    /*::java::lang::StringBuffer* format(::java::math::BigDecimal* number, ::java::lang::StringBuffer* result, FieldPosition* fieldPosition); (private) */
    /*::java::lang::StringBuffer* format(::java::math::BigDecimal* number, ::java::lang::StringBuffer* result, Format_FieldDelegate* delegate); (private) */
    /*::java::lang::StringBuffer* format(::java::math::BigInteger* number, ::java::lang::StringBuffer* result, FieldPosition* fieldPosition); (private) */
    /*::java::lang::StringBuffer* format(::java::math::BigInteger* number, ::java::lang::StringBuffer* result, Format_FieldDelegate* delegate, bool formatLong); (private) */
    AttributedCharacterIterator* formatToCharacterIterator(::java::lang::Object* obj) override;
    /*::java::math::BigDecimal* getBigDecimalMultiplier(); (private) */
    /*::java::math::BigInteger* getBigIntegerMultiplier(); (private) */
    ::java::util::Currency* getCurrency() override;
    virtual DecimalFormatSymbols* getDecimalFormatSymbols();
    virtual int32_t getGroupingSize();
    int32_t getMaximumFractionDigits() override;
    int32_t getMaximumIntegerDigits() override;
    int32_t getMinimumFractionDigits() override;
    int32_t getMinimumIntegerDigits() override;
    virtual int32_t getMultiplier();
    virtual ::java::lang::String* getNegativePrefix();
    /*FieldPositionArray* getNegativePrefixFieldPositions(); (private) */
    virtual ::java::lang::String* getNegativeSuffix();
    /*FieldPositionArray* getNegativeSuffixFieldPositions(); (private) */
    virtual ::java::lang::String* getPositivePrefix();
    /*FieldPositionArray* getPositivePrefixFieldPositions(); (private) */
    virtual ::java::lang::String* getPositiveSuffix();
    /*FieldPositionArray* getPositiveSuffixFieldPositions(); (private) */
    ::java::math::RoundingMode* getRoundingMode() override;
    int32_t hashCode() override;
    virtual bool isDecimalSeparatorAlwaysShown();
    virtual bool isParseBigDecimal();
    /*void localizeDigits(::char16_tArray* digitsBuffer); (private) */
    ::java::lang::Number* parse(::java::lang::String* text, ParsePosition* pos) override;
    /*void prependPrefix(::char16_tArray* prefix, int32_t len, ::char16_tArray* container); (private) */
    /*void readObject(::java::io::ObjectInputStream* stream); (private) */
    void setCurrency(::java::util::Currency* currency) override;
    virtual void setDecimalFormatSymbols(DecimalFormatSymbols* newSymbols);
    virtual void setDecimalSeparatorAlwaysShown(bool newValue);
    virtual void setGroupingSize(int32_t newValue);
    void setGroupingUsed(bool newValue) override;
    void setMaximumFractionDigits(int32_t newValue) override;
    void setMaximumIntegerDigits(int32_t newValue) override;
    void setMinimumFractionDigits(int32_t newValue) override;
    void setMinimumIntegerDigits(int32_t newValue) override;
    virtual void setMultiplier(int32_t newValue);
    virtual void setNegativePrefix(::java::lang::String* newValue);
    virtual void setNegativeSuffix(::java::lang::String* newValue);
    virtual void setParseBigDecimal(bool newValue);
    virtual void setPositivePrefix(::java::lang::String* newValue);
    virtual void setPositiveSuffix(::java::lang::String* newValue);
    void setRoundingMode(::java::math::RoundingMode* roundingMode) override;
    /*::java::lang::StringBuffer* subformat(::java::lang::StringBuffer* result, Format_FieldDelegate* delegate, bool isNegative, bool isInteger, int32_t maxIntDigits, int32_t minIntDigits, int32_t maxFraDigits, int32_t minFraDigits); (private) */
    /*bool subparse(::java::lang::String* text, ParsePosition* parsePosition, ::java::lang::String* positivePrefix, ::java::lang::String* negativePrefix, DigitList* digits, bool isExponent, ::boolArray* status); (private) */
    virtual ::java::lang::String* toLocalizedPattern();
    virtual ::java::lang::String* toPattern();
    /*::java::lang::String* toPattern(bool localized); (private) */

    // Generated
    DecimalFormat();
    DecimalFormat(::java::lang::String* pattern);
    DecimalFormat(::java::lang::String* pattern, DecimalFormatSymbols* symbols);
protected:
    DecimalFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::java::lang::String* format(double number);
    ::java::lang::String* format(int64_t number);
    virtual ::java::lang::Number* parse(::java::lang::String* source);
    ::java::lang::String* format(::java::lang::Object* obj);

public: /* package */
    static bool& $assertionsDisabled();

private:
    static FieldPositionArray*& EmptyFieldPositionArray_();
    static ::java::lang::String*& PATTERN_EXPONENT();
    virtual ::java::lang::Class* getClass0();
};

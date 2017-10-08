// Generated from /POI/java/org/apache/poi/ss/util/NumberToTextConverter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::NumberToTextConverter final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int64_t EXCEL_NAN_BITS { int64_t(-276939487313920LL) };
    static constexpr int32_t MAX_TEXT_LEN { int32_t(20) };
protected:
    void ctor();

public:
    static ::java::lang::String* toText(double value);

public: /* package */
    static ::java::lang::String* rawDoubleBitsToText(int64_t pRawBits);

private:
    static void convertToText(::java::lang::StringBuilder* sb, NormalisedDecimal* pnd);
    static void formatLessThanOne(::java::lang::StringBuilder* sb, ::java::lang::String* decimalDigits, int32_t decExponent, int32_t countSigDigits);
    static void formatGreaterThanOne(::java::lang::StringBuilder* sb, ::java::lang::String* decimalDigits, int32_t decExponent, int32_t countSigDigits);
    static bool needsScientificNotation(int32_t nDigits);
    static int32_t countSignifantDigits(::java::lang::String* sb);
    static void appendExp(::java::lang::StringBuilder* sb, int32_t val);

    // Generated
    NumberToTextConverter();
protected:
    NumberToTextConverter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

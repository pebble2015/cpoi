// Generated from /POI/java/org/apache/poi/ss/util/NormalisedDecimal.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::NormalisedDecimal final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t EXPONENT_OFFSET { int32_t(14) };
    static ::java::math::BigDecimal* BD_2_POW_24_;
    static constexpr int32_t LOG_BASE_10_OF_2_TIMES_2_POW_20 { int32_t(315653) };
    static constexpr int32_t C_2_POW_19 { int32_t(524288) };
    static constexpr int32_t FRAC_HALF { int32_t(8388608) };
    static constexpr int64_t MAX_REP_WHOLE_PART { int64_t(1000000000000000LL) };

public:
    static NormalisedDecimal* create(::java::math::BigInteger* frac, int32_t binaryExponent);
    NormalisedDecimal* roundUnits();

private:
    int32_t _relativeDecimalExponent {  };
    int64_t _wholePart {  };
    int32_t _fractionalPart {  };
protected:
    void ctor(int64_t wholePart, int32_t fracPart, int32_t decimalExponent);

public:
    ExpandedDouble* normaliseBaseTwo();

public: /* package */
    ::java::math::BigInteger* composeFrac();

public:
    ::java::lang::String* getSignificantDecimalDigits();
    ::java::lang::String* getSignificantDecimalDigitsLastDigitRounded();
    int32_t getDecimalExponent();
    int32_t compareNormalised(NormalisedDecimal* other);
    ::java::math::BigDecimal* getFractionalPart();

private:
    ::java::lang::String* getFractionalDigits();

public:
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    NormalisedDecimal(int64_t wholePart, int32_t fracPart, int32_t decimalExponent);
protected:
    NormalisedDecimal(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::math::BigDecimal*& BD_2_POW_24();
    virtual ::java::lang::Class* getClass0();
};

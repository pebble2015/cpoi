// Generated from /POI/java/org/apache/poi/ss/util/MutableFPNumber.java

#pragma once

#include <fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::MutableFPNumber final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::math::BigInteger* BI_MIN_BASE_;
    static ::java::math::BigInteger* BI_MAX_BASE_;
    static constexpr int32_t C_64 { int32_t(64) };
    static constexpr int32_t MIN_PRECISION { int32_t(72) };
    ::java::math::BigInteger* _significand {  };
    int32_t _binaryExponent {  };
protected:
    void ctor(::java::math::BigInteger* frac, int32_t binaryExponent);

public:
    MutableFPNumber* copy();
    void normalise64bit();
    int32_t get64BitNormalisedExponent();
    bool isBelowMaxRep();
    bool isAboveMinRep();
    NormalisedDecimal* createNormalisedDecimal(int32_t pow10);
    void multiplyByPowerOfTen(int32_t pow10);

private:
    void mulShift(::java::math::BigInteger* multiplicand, int32_t multiplierShift);

public:
    ExpandedDouble* createExpandedDouble();

    // Generated
    MutableFPNumber(::java::math::BigInteger* frac, int32_t binaryExponent);
protected:
    MutableFPNumber(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::math::BigInteger*& BI_MIN_BASE();
    static ::java::math::BigInteger*& BI_MAX_BASE();
    virtual ::java::lang::Class* getClass0();
    friend class MutableFPNumber_Rounder;
    friend class MutableFPNumber_TenPower;
};

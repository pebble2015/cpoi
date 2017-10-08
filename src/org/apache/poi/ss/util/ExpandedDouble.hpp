// Generated from /POI/java/org/apache/poi/ss/util/ExpandedDouble.java

#pragma once

#include <fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::ExpandedDouble final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::math::BigInteger* BI_FRAC_MASK_;
    static ::java::math::BigInteger* BI_IMPLIED_FRAC_MSB_;
    static ::java::math::BigInteger* getFrac(int64_t rawBits);

public:
    static ExpandedDouble* fromRawBitsAndExponent(int64_t rawBits, int32_t exp);

private:
    ::java::math::BigInteger* _significand {  };
    int32_t _binaryExponent {  };
protected:
    void ctor(int64_t rawBits);
    void ctor(::java::math::BigInteger* frac, int32_t binaryExp);

public:
    NormalisedDecimal* normaliseBaseTen();
    int32_t getBinaryExponent();
    ::java::math::BigInteger* getSignificand();

    // Generated
    ExpandedDouble(int64_t rawBits);

public: /* package */
    ExpandedDouble(::java::math::BigInteger* frac, int32_t binaryExp);
protected:
    ExpandedDouble(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::math::BigInteger*& BI_FRAC_MASK();
    static ::java::math::BigInteger*& BI_IMPLIED_FRAC_MSB();
    virtual ::java::lang::Class* getClass0();
};

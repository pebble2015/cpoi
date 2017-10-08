// Generated from /POI/java/org/apache/poi/ss/util/IEEEDouble.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::IEEEDouble final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int64_t EXPONENT_MASK { int64_t(9218868437227405312LL) };
    static constexpr int32_t EXPONENT_SHIFT { int32_t(52) };

public:
    static constexpr int64_t FRAC_MASK { int64_t(4503599627370495LL) };
    static constexpr int32_t EXPONENT_BIAS { int32_t(1023) };
    static constexpr int64_t FRAC_ASSUMED_HIGH_BIT { int64_t(4503599627370496LL) };
    static constexpr int32_t BIASED_EXPONENT_SPECIAL_VALUE { int32_t(2047) };
    static int32_t getBiasedExponent(int64_t rawBits);

    // Generated
    IEEEDouble();
protected:
    IEEEDouble(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

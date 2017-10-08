// Generated from /POI/java/org/apache/poi/ss/util/MutableFPNumber.java
#include <org/apache/poi/ss/util/MutableFPNumber.hpp>

#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigInteger.hpp>
#include <org/apache/poi/ss/util/ExpandedDouble.hpp>
#include <org/apache/poi/ss/util/MutableFPNumber_Rounder.hpp>
#include <org/apache/poi/ss/util/MutableFPNumber_TenPower.hpp>
#include <org/apache/poi/ss/util/NormalisedDecimal.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::util::MutableFPNumber::MutableFPNumber(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::MutableFPNumber::MutableFPNumber(::java::math::BigInteger* frac, int32_t binaryExponent) 
    : MutableFPNumber(*static_cast< ::default_init_tag* >(0))
{
    ctor(frac,binaryExponent);
}

java::math::BigInteger*& poi::ss::util::MutableFPNumber::BI_MIN_BASE()
{
    clinit();
    return BI_MIN_BASE_;
}
java::math::BigInteger* poi::ss::util::MutableFPNumber::BI_MIN_BASE_;

java::math::BigInteger*& poi::ss::util::MutableFPNumber::BI_MAX_BASE()
{
    clinit();
    return BI_MAX_BASE_;
}
java::math::BigInteger* poi::ss::util::MutableFPNumber::BI_MAX_BASE_;

constexpr int32_t poi::ss::util::MutableFPNumber::C_64;

constexpr int32_t poi::ss::util::MutableFPNumber::MIN_PRECISION;

void poi::ss::util::MutableFPNumber::ctor(::java::math::BigInteger* frac, int32_t binaryExponent)
{
    super::ctor();
    _significand = frac;
    _binaryExponent = binaryExponent;
}

poi::ss::util::MutableFPNumber* poi::ss::util::MutableFPNumber::copy()
{
    return new MutableFPNumber(_significand, _binaryExponent);
}

void poi::ss::util::MutableFPNumber::normalise64bit()
{
    auto oldBitLen = npc(_significand)->bitLength();
    auto sc = oldBitLen - C_64;
    if(sc == 0) {
        return;
    }
    if(sc < 0) {
        throw new ::java::lang::IllegalStateException(u"Not enough precision"_j);
    }
    _binaryExponent += sc;
    if(sc > 32) {
        auto highShift = (sc - int32_t(1)) & int32_t(16777184);
        _significand = npc(_significand)->shiftRight(highShift);
        sc -= highShift;
        oldBitLen -= highShift;
    }
    if(sc < 1) {
        throw new ::java::lang::IllegalStateException();
    }
    _significand = MutableFPNumber_Rounder::round(_significand, sc);
    if(npc(_significand)->bitLength() > oldBitLen) {
        sc++;
        _binaryExponent++;
    }
    _significand = npc(_significand)->shiftRight(sc);
}

int32_t poi::ss::util::MutableFPNumber::get64BitNormalisedExponent()
{
    return _binaryExponent + npc(_significand)->bitLength() - C_64;
}

bool poi::ss::util::MutableFPNumber::isBelowMaxRep()
{
    auto sc = npc(_significand)->bitLength() - C_64;
    return npc(_significand)->compareTo(npc(BI_MAX_BASE_)->shiftLeft(sc)) < 0;
}

bool poi::ss::util::MutableFPNumber::isAboveMinRep()
{
    auto sc = npc(_significand)->bitLength() - C_64;
    return npc(_significand)->compareTo(npc(BI_MIN_BASE_)->shiftLeft(sc)) > 0;
}

poi::ss::util::NormalisedDecimal* poi::ss::util::MutableFPNumber::createNormalisedDecimal(int32_t pow10)
{
    auto missingUnderBits = _binaryExponent - int32_t(39);
    auto fracPart = (npc(_significand)->intValue() << missingUnderBits) & int32_t(16777088);
    auto wholePart = npc(npc(_significand)->shiftRight(C_64 - _binaryExponent - int32_t(1)))->longValue();
    return new NormalisedDecimal(wholePart, fracPart, pow10);
}

void poi::ss::util::MutableFPNumber::multiplyByPowerOfTen(int32_t pow10)
{
    auto tp = MutableFPNumber_TenPower::getInstance(::java::lang::Math::abs(pow10));
    if(pow10 < 0) {
        mulShift(npc(tp)->_divisor, npc(tp)->_divisorShift);
    } else {
        mulShift(npc(tp)->_multiplicand, npc(tp)->_multiplierShift);
    }
}

void poi::ss::util::MutableFPNumber::mulShift(::java::math::BigInteger* multiplicand, int32_t multiplierShift)
{
    _significand = npc(_significand)->multiply(multiplicand);
    _binaryExponent += multiplierShift;
    auto sc = (npc(_significand)->bitLength() - MIN_PRECISION) & int32_t(-32);
    if(sc > 0) {
        _significand = npc(_significand)->shiftRight(sc);
        _binaryExponent += sc;
    }
}

poi::ss::util::ExpandedDouble* poi::ss::util::MutableFPNumber::createExpandedDouble()
{
    return new ExpandedDouble(_significand, _binaryExponent);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::MutableFPNumber::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.MutableFPNumber", 38);
    return c;
}

void poi::ss::util::MutableFPNumber::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        BI_MIN_BASE_ = new ::java::math::BigInteger(u"0B5E620F47FFFE666"_j, int32_t(16));
        BI_MAX_BASE_ = new ::java::math::BigInteger(u"0E35FA9319FFFE000"_j, int32_t(16));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::util::MutableFPNumber::getClass0()
{
    return class_();
}


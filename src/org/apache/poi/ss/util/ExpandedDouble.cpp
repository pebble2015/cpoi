// Generated from /POI/java/org/apache/poi/ss/util/ExpandedDouble.java
#include <org/apache/poi/ss/util/ExpandedDouble.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigInteger.hpp>
#include <org/apache/poi/ss/util/IEEEDouble.hpp>
#include <org/apache/poi/ss/util/NormalisedDecimal.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::util::ExpandedDouble::ExpandedDouble(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::ExpandedDouble::ExpandedDouble(int64_t rawBits) 
    : ExpandedDouble(*static_cast< ::default_init_tag* >(0))
{
    ctor(rawBits);
}

org::apache::poi::ss::util::ExpandedDouble::ExpandedDouble(::java::math::BigInteger* frac, int32_t binaryExp) 
    : ExpandedDouble(*static_cast< ::default_init_tag* >(0))
{
    ctor(frac,binaryExp);
}

java::math::BigInteger*& org::apache::poi::ss::util::ExpandedDouble::BI_FRAC_MASK()
{
    clinit();
    return BI_FRAC_MASK_;
}
java::math::BigInteger* org::apache::poi::ss::util::ExpandedDouble::BI_FRAC_MASK_;

java::math::BigInteger*& org::apache::poi::ss::util::ExpandedDouble::BI_IMPLIED_FRAC_MSB()
{
    clinit();
    return BI_IMPLIED_FRAC_MSB_;
}
java::math::BigInteger* org::apache::poi::ss::util::ExpandedDouble::BI_IMPLIED_FRAC_MSB_;

java::math::BigInteger* org::apache::poi::ss::util::ExpandedDouble::getFrac(int64_t rawBits)
{
    clinit();
    return npc(npc(npc(::java::math::BigInteger::valueOf(rawBits))->and_(BI_FRAC_MASK_))->or_(BI_IMPLIED_FRAC_MSB_))->shiftLeft(11);
}

org::apache::poi::ss::util::ExpandedDouble* org::apache::poi::ss::util::ExpandedDouble::fromRawBitsAndExponent(int64_t rawBits, int32_t exp)
{
    clinit();
    return new ExpandedDouble(getFrac(rawBits), exp);
}

void org::apache::poi::ss::util::ExpandedDouble::ctor(int64_t rawBits)
{
    super::ctor();
    auto biasedExp = static_cast< int32_t >((rawBits >> int32_t(52)));
    if(biasedExp == 0) {
        auto frac = npc(::java::math::BigInteger::valueOf(rawBits))->and_(BI_FRAC_MASK_);
        auto expAdj = int32_t(64) - npc(frac)->bitLength();
        _significand = npc(frac)->shiftLeft(expAdj);
        _binaryExponent = (biasedExp & int32_t(2047)) - int32_t(1023) - expAdj;
    } else {
        auto frac = getFrac(rawBits);
        _significand = frac;
        _binaryExponent = (biasedExp & int32_t(2047)) - int32_t(1023);
    }
}

void org::apache::poi::ss::util::ExpandedDouble::ctor(::java::math::BigInteger* frac, int32_t binaryExp)
{
    super::ctor();
    if(npc(frac)->bitLength() != 64) {
        throw new ::java::lang::IllegalArgumentException(u"bad bit length"_j);
    }
    _significand = frac;
    _binaryExponent = binaryExp;
}

org::apache::poi::ss::util::NormalisedDecimal* org::apache::poi::ss::util::ExpandedDouble::normaliseBaseTen()
{
    return NormalisedDecimal::create(_significand, _binaryExponent);
}

int32_t org::apache::poi::ss::util::ExpandedDouble::getBinaryExponent()
{
    return _binaryExponent;
}

java::math::BigInteger* org::apache::poi::ss::util::ExpandedDouble::getSignificand()
{
    return _significand;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::ExpandedDouble::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.ExpandedDouble", 37);
    return c;
}

void org::apache::poi::ss::util::ExpandedDouble::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        BI_FRAC_MASK_ = ::java::math::BigInteger::valueOf(IEEEDouble::FRAC_MASK);
        BI_IMPLIED_FRAC_MSB_ = ::java::math::BigInteger::valueOf(IEEEDouble::FRAC_ASSUMED_HIGH_BIT);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::util::ExpandedDouble::getClass0()
{
    return class_();
}


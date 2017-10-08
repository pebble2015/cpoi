// Generated from /POI/java/org/apache/poi/ss/util/NumberComparer.java
#include <org/apache/poi/ss/util/NumberComparer.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/util/ExpandedDouble.hpp>
#include <org/apache/poi/ss/util/IEEEDouble.hpp>
#include <org/apache/poi/ss/util/NormalisedDecimal.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::util::NumberComparer::NumberComparer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::NumberComparer::NumberComparer()
    : NumberComparer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t poi::ss::util::NumberComparer::compare(double a, double b)
{
    clinit();
    auto rawBitsA = ::java::lang::Double::doubleToLongBits(a);
    auto rawBitsB = ::java::lang::Double::doubleToLongBits(b);
    auto biasedExponentA = IEEEDouble::getBiasedExponent(rawBitsA);
    auto biasedExponentB = IEEEDouble::getBiasedExponent(rawBitsB);
    if(biasedExponentA == IEEEDouble::BIASED_EXPONENT_SPECIAL_VALUE) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Special double values are not allowed: "_j)->append(toHex(a))->toString());
    }
    if(biasedExponentB == IEEEDouble::BIASED_EXPONENT_SPECIAL_VALUE) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Special double values are not allowed: "_j)->append(toHex(a))->toString());
    }
    int32_t cmp;
    auto aIsNegative = rawBitsA < 0;
    auto bIsNegative = rawBitsB < 0;
    if(aIsNegative != bIsNegative) {
        return aIsNegative ? -int32_t(1) : +int32_t(1);
    }
    cmp = biasedExponentA - biasedExponentB;
    auto absExpDiff = ::java::lang::Math::abs(cmp);
    if(absExpDiff > 1) {
        return aIsNegative ? -cmp : cmp;
    }
    if(absExpDiff == 1) {
    } else {
        if(rawBitsA == rawBitsB) {
            return 0;
        }
    }
    if(biasedExponentA == 0) {
        if(biasedExponentB == 0) {
            return compareSubnormalNumbers(rawBitsA & IEEEDouble::FRAC_MASK, rawBitsB & IEEEDouble::FRAC_MASK, aIsNegative);
        }
        return -compareAcrossSubnormalThreshold(rawBitsB, rawBitsA, aIsNegative);
    }
    if(biasedExponentB == 0) {
        return +compareAcrossSubnormalThreshold(rawBitsA, rawBitsB, aIsNegative);
    }
    auto edA = ExpandedDouble::fromRawBitsAndExponent(rawBitsA, biasedExponentA - IEEEDouble::EXPONENT_BIAS);
    auto edB = ExpandedDouble::fromRawBitsAndExponent(rawBitsB, biasedExponentB - IEEEDouble::EXPONENT_BIAS);
    auto ndA = npc(npc(edA)->normaliseBaseTen())->roundUnits();
    auto ndB = npc(npc(edB)->normaliseBaseTen())->roundUnits();
    cmp = npc(ndA)->compareNormalised(ndB);
    if(aIsNegative) {
        return -cmp;
    }
    return cmp;
}

int32_t poi::ss::util::NumberComparer::compareSubnormalNumbers(int64_t fracA, int64_t fracB, bool isNegative)
{
    clinit();
    auto cmp = fracA > fracB ? +int32_t(1) : fracA < fracB ? -int32_t(1) : int32_t(0);
    return isNegative ? -cmp : cmp;
}

int32_t poi::ss::util::NumberComparer::compareAcrossSubnormalThreshold(int64_t normalRawBitsA, int64_t subnormalRawBitsB, bool isNegative)
{
    clinit();
    auto fracB = subnormalRawBitsB & IEEEDouble::FRAC_MASK;
    if(fracB == 0) {
        return isNegative ? -int32_t(1) : +int32_t(1);
    }
    auto fracA = normalRawBitsA & IEEEDouble::FRAC_MASK;
    if(fracA <= 7LL && fracB >= 4503599627370490LL) {
        if(fracA == 7LL && fracB == 4503599627370490LL) {
            return 0;
        }
        return isNegative ? +int32_t(1) : -int32_t(1);
    }
    return isNegative ? -int32_t(1) : +int32_t(1);
}

java::lang::String* poi::ss::util::NumberComparer::toHex(double a)
{
    clinit();
    return ::java::lang::StringBuilder().append(u"0x"_j)->append(npc(::java::lang::Long::toHexString(::java::lang::Double::doubleToLongBits(a)))->toUpperCase(::java::util::Locale::ROOT()))->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::NumberComparer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.NumberComparer", 37);
    return c;
}

java::lang::Class* poi::ss::util::NumberComparer::getClass0()
{
    return class_();
}


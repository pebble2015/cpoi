// Generated from /POI/java/org/apache/poi/ss/util/IEEEDouble.java
#include <org/apache/poi/ss/util/IEEEDouble.hpp>

org::apache::poi::ss::util::IEEEDouble::IEEEDouble(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::IEEEDouble::IEEEDouble()
    : IEEEDouble(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int64_t org::apache::poi::ss::util::IEEEDouble::EXPONENT_MASK;

constexpr int32_t org::apache::poi::ss::util::IEEEDouble::EXPONENT_SHIFT;

constexpr int64_t org::apache::poi::ss::util::IEEEDouble::FRAC_MASK;

constexpr int32_t org::apache::poi::ss::util::IEEEDouble::EXPONENT_BIAS;

constexpr int64_t org::apache::poi::ss::util::IEEEDouble::FRAC_ASSUMED_HIGH_BIT;

constexpr int32_t org::apache::poi::ss::util::IEEEDouble::BIASED_EXPONENT_SPECIAL_VALUE;

int32_t org::apache::poi::ss::util::IEEEDouble::getBiasedExponent(int64_t rawBits)
{
    clinit();
    return static_cast< int32_t >(((rawBits & EXPONENT_MASK) >> EXPONENT_SHIFT));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::IEEEDouble::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.IEEEDouble", 33);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::IEEEDouble::getClass0()
{
    return class_();
}


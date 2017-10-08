// Generated from /POI/java/org/apache/poi/ss/format/SimpleFraction.java
#include <org/apache/poi/ss/format/SimpleFraction.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

poi::ss::format::SimpleFraction::SimpleFraction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::format::SimpleFraction::SimpleFraction(int32_t numerator, int32_t denominator) 
    : SimpleFraction(*static_cast< ::default_init_tag* >(0))
{
    ctor(numerator,denominator);
}

poi::ss::format::SimpleFraction* poi::ss::format::SimpleFraction::buildFractionExactDenominator(double val, int32_t exactDenom)
{
    clinit();
    auto num = static_cast< int32_t >(::java::lang::Math::round(val * exactDenom));
    return new SimpleFraction(num, exactDenom);
}

poi::ss::format::SimpleFraction* poi::ss::format::SimpleFraction::buildFractionMaxDenominator(double value, int32_t maxDenominator)
{
    clinit();
    return buildFractionMaxDenominator(value, 0, maxDenominator, 100);
}

poi::ss::format::SimpleFraction* poi::ss::format::SimpleFraction::buildFractionMaxDenominator(double value, double epsilon, int32_t maxDenominator, int32_t maxIterations)
{
    clinit();
    int64_t overflow = ::java::lang::Integer::MAX_VALUE;
    auto r0 = value;
    auto a0 = static_cast< int64_t >(::java::lang::Math::floor(r0));
    if(a0 > overflow) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Overflow trying to convert "_j)->append(value)
            ->append(u" to fraction ("_j)
            ->append(a0)
            ->append(u"/"_j)
            ->append(int64_t(1LL))
            ->append(u")"_j)->toString());
    }
    if(::java::lang::Math::abs(a0 - value) < epsilon) {
        return new SimpleFraction(static_cast< int32_t >(a0), int32_t(1));
    }
    int64_t p0 = int32_t(1);
    int64_t q0 = int32_t(0);
    auto p1 = a0;
    int64_t q1 = int32_t(1);
    int64_t p2;
    int64_t q2;
    auto n = int32_t(0);
    auto stop = false;
    do {
        ++n;
        auto r1 = 1.0 / (r0 - a0);
        auto a1 = static_cast< int64_t >(::java::lang::Math::floor(r1));
        p2 = (a1 * p1) + p0;
        q2 = (a1 * q1) + q0;
        if(epsilon == 0.0f && maxDenominator > 0 && ::java::lang::Math::abs(q2) > maxDenominator && ::java::lang::Math::abs(q1) < maxDenominator) {
            return new SimpleFraction(static_cast< int32_t >(p1), static_cast< int32_t >(q1));
        }
        if((p2 > overflow) || (q2 > overflow)) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Overflow trying to convert "_j)->append(value)
                ->append(u" to fraction ("_j)
                ->append(p2)
                ->append(u"/"_j)
                ->append(q2)
                ->append(u")"_j)->toString());
        }
        auto convergent = static_cast< double >(p2) / static_cast< double >(q2);
        if(n < maxIterations && ::java::lang::Math::abs(convergent - value) > epsilon && q2 < maxDenominator) {
            p0 = p1;
            p1 = p2;
            q0 = q1;
            q1 = q2;
            a0 = a1;
            r0 = r1;
        } else {
            stop = true;
        }
    } while (!stop);
    if(n >= maxIterations) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unable to convert "_j)->append(value)
            ->append(u" to fraction after "_j)
            ->append(maxIterations)
            ->append(u" iterations"_j)->toString());
    }
    if(q2 < maxDenominator) {
        return new SimpleFraction(static_cast< int32_t >(p2), static_cast< int32_t >(q2));
    } else {
        return new SimpleFraction(static_cast< int32_t >(p1), static_cast< int32_t >(q1));
    }
}

void poi::ss::format::SimpleFraction::ctor(int32_t numerator, int32_t denominator)
{
    super::ctor();
    this->numerator = numerator;
    this->denominator = denominator;
}

int32_t poi::ss::format::SimpleFraction::getDenominator()
{
    return denominator;
}

int32_t poi::ss::format::SimpleFraction::getNumerator()
{
    return numerator;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::SimpleFraction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.SimpleFraction", 39);
    return c;
}

java::lang::Class* poi::ss::format::SimpleFraction::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/ss/formula/functions/MathX.java
#include <org/apache/poi/ss/formula/functions/MathX.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/math/RoundingMode.hpp>
#include <org/apache/poi/ss/util/NumberToTextConverter.hpp>
#include <Array.hpp>
#include <cmath>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::MathX::MathX(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::MathX::MathX() 
    : MathX(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::formula::functions::MathX::ctor()
{
    super::ctor();
}

double poi::ss::formula::functions::MathX::round(double n, int32_t p)
{
    clinit();
    return round(n, p, ::java::math::RoundingMode::HALF_UP);
}

double poi::ss::formula::functions::MathX::roundUp(double n, int32_t p)
{
    clinit();
    return round(n, p, ::java::math::RoundingMode::UP);
}

double poi::ss::formula::functions::MathX::roundDown(double n, int32_t p)
{
    clinit();
    return round(n, p, ::java::math::RoundingMode::DOWN);
}

double poi::ss::formula::functions::MathX::round(double n, int32_t p, ::java::math::RoundingMode* rounding)
{
    clinit();
    if(::java::lang::Double::isNaN(n) || ::java::lang::Double::isInfinite(n)) {
        return ::java::lang::Double::NaN;
    } else {
        auto const excelNumber = ::poi::ss::util::NumberToTextConverter::toText(n);
        return npc((new ::java::math::BigDecimal(excelNumber))->setScale(p, rounding))->doubleValue();
    }
}

int16_t poi::ss::formula::functions::MathX::sign(double d)
{
    clinit();
    return static_cast< int16_t >(((d == 0) ? int32_t(0) : (d < 0) ? -int32_t(1) : int32_t(1)));
}

double poi::ss::formula::functions::MathX::average(::doubleArray* values)
{
    clinit();
    double ave = int32_t(0);
    double sum = int32_t(0);
    for (int32_t i = int32_t(0), iSize = npc(values)->length; i < iSize; i++) {
        sum += (*values)[i];
    }
    ave = sum / npc(values)->length;
    return ave;
}

double poi::ss::formula::functions::MathX::sum(::doubleArray* values)
{
    clinit();
    double sum = int32_t(0);
    for (int32_t i = int32_t(0), iSize = npc(values)->length; i < iSize; i++) {
        sum += (*values)[i];
    }
    return sum;
}

double poi::ss::formula::functions::MathX::sumsq(::doubleArray* values)
{
    clinit();
    double sumsq = int32_t(0);
    for (int32_t i = int32_t(0), iSize = npc(values)->length; i < iSize; i++) {
        sumsq += (*values)[i] * (*values)[i];
    }
    return sumsq;
}

double poi::ss::formula::functions::MathX::product(::doubleArray* values)
{
    clinit();
    double product = int32_t(0);
    if(values != nullptr && npc(values)->length > 0) {
        product = 1;
        for (int32_t i = int32_t(0), iSize = npc(values)->length; i < iSize; i++) {
            product *= (*values)[i];
        }
    }
    return product;
}

double poi::ss::formula::functions::MathX::min(::doubleArray* values)
{
    clinit();
    auto min = ::java::lang::Double::POSITIVE_INFINITY;
    for (int32_t i = int32_t(0), iSize = npc(values)->length; i < iSize; i++) {
        min = ::java::lang::Math::min(min, (*values)[i]);
    }
    return min;
}

double poi::ss::formula::functions::MathX::max(::doubleArray* values)
{
    clinit();
    auto max = ::java::lang::Double::NEGATIVE_INFINITY;
    for (int32_t i = int32_t(0), iSize = npc(values)->length; i < iSize; i++) {
        max = ::java::lang::Math::max(max, (*values)[i]);
    }
    return max;
}

double poi::ss::formula::functions::MathX::floor(double n, double s)
{
    clinit();
    double f;
    if((n < 0 && s > 0) || (n > 0 && s < 0) || (s == 0 && n != 0)) {
        f = ::java::lang::Double::NaN;
    } else {
        f = (n == 0 || s == 0) ? static_cast< double >(int32_t(0)) : ::java::lang::Math::floor(n / s) * s;
    }
    return f;
}

double poi::ss::formula::functions::MathX::ceiling(double n, double s)
{
    clinit();
    double c;
    if((n < 0 && s > 0) || (n > 0 && s < 0)) {
        c = ::java::lang::Double::NaN;
    } else {
        c = (n == 0 || s == 0) ? static_cast< double >(int32_t(0)) : ::java::lang::Math::ceil(n / s) * s;
    }
    return c;
}

double poi::ss::formula::functions::MathX::factorial(int32_t n)
{
    clinit();
    double d = int32_t(1);
    if(n >= 0) {
        if(n <= 170) {
            for (auto i = int32_t(1); i <= n; i++) {
                d *= i;
            }
        } else {
            d = ::java::lang::Double::POSITIVE_INFINITY;
        }
    } else {
        d = ::java::lang::Double::NaN;
    }
    return d;
}

double poi::ss::formula::functions::MathX::mod(double n, double d)
{
    clinit();
    double result = int32_t(0);
    if(d == 0) {
        result = ::java::lang::Double::NaN;
    } else if(sign(n) == sign(d)) {
        result = std::fmod(n, d);
    } else {
        result = std::fmod(((std::fmod(n, d)) + d), d);
    }
    return result;
}

double poi::ss::formula::functions::MathX::acosh(double d)
{
    clinit();
    return ::java::lang::Math::log(::java::lang::Math::sqrt(::java::lang::Math::pow(d, 2) - int32_t(1)) + d);
}

double poi::ss::formula::functions::MathX::asinh(double d)
{
    clinit();
    return ::java::lang::Math::log(::java::lang::Math::sqrt(d * d + int32_t(1)) + d);
}

double poi::ss::formula::functions::MathX::atanh(double d)
{
    clinit();
    return ::java::lang::Math::log((int32_t(1) + d) / (int32_t(1) - d)) / int32_t(2);
}

double poi::ss::formula::functions::MathX::cosh(double d)
{
    clinit();
    auto ePowX = ::java::lang::Math::pow(::java::lang::Math::E, d);
    auto ePowNegX = ::java::lang::Math::pow(::java::lang::Math::E, -d);
    return (ePowX + ePowNegX) / int32_t(2);
}

double poi::ss::formula::functions::MathX::sinh(double d)
{
    clinit();
    auto ePowX = ::java::lang::Math::pow(::java::lang::Math::E, d);
    auto ePowNegX = ::java::lang::Math::pow(::java::lang::Math::E, -d);
    return (ePowX - ePowNegX) / int32_t(2);
}

double poi::ss::formula::functions::MathX::tanh(double d)
{
    clinit();
    auto ePowX = ::java::lang::Math::pow(::java::lang::Math::E, d);
    auto ePowNegX = ::java::lang::Math::pow(::java::lang::Math::E, -d);
    return (ePowX - ePowNegX) / (ePowX + ePowNegX);
}

double poi::ss::formula::functions::MathX::nChooseK(int32_t n, int32_t k)
{
    clinit();
    double d = int32_t(1);
    if(n < 0 || k < 0 || n < k) {
        d = ::java::lang::Double::NaN;
    } else {
        auto minnk = ::java::lang::Math::min(n - k, k);
        auto maxnk = ::java::lang::Math::max(n - k, k);
        for (auto i = maxnk; i < n; i++) {
            d *= i + int32_t(1);
        }
        d /= factorial(minnk);
    }
    return d;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::MathX::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.MathX", 41);
    return c;
}

java::lang::Class* poi::ss::formula::functions::MathX::getClass0()
{
    return class_();
}


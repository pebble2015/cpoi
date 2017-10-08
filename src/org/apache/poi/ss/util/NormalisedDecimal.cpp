// Generated from /POI/java/org/apache/poi/ss/util/NormalisedDecimal.java
#include <org/apache/poi/ss/util/NormalisedDecimal.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/math/BigInteger.hpp>
#include <org/apache/poi/ss/util/ExpandedDouble.hpp>
#include <org/apache/poi/ss/util/MutableFPNumber.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::util::NormalisedDecimal::NormalisedDecimal(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::NormalisedDecimal::NormalisedDecimal(int64_t wholePart, int32_t fracPart, int32_t decimalExponent) 
    : NormalisedDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(wholePart,fracPart,decimalExponent);
}

constexpr int32_t poi::ss::util::NormalisedDecimal::EXPONENT_OFFSET;

java::math::BigDecimal*& poi::ss::util::NormalisedDecimal::BD_2_POW_24()
{
    clinit();
    return BD_2_POW_24_;
}
java::math::BigDecimal* poi::ss::util::NormalisedDecimal::BD_2_POW_24_;

constexpr int32_t poi::ss::util::NormalisedDecimal::LOG_BASE_10_OF_2_TIMES_2_POW_20;

constexpr int32_t poi::ss::util::NormalisedDecimal::C_2_POW_19;

constexpr int32_t poi::ss::util::NormalisedDecimal::FRAC_HALF;

constexpr int64_t poi::ss::util::NormalisedDecimal::MAX_REP_WHOLE_PART;

poi::ss::util::NormalisedDecimal* poi::ss::util::NormalisedDecimal::create(::java::math::BigInteger* frac, int32_t binaryExponent)
{
    clinit();
    int32_t pow10;
    if(binaryExponent > 49 || binaryExponent < 46) {
        auto x = (int32_t(29) << int32_t(19)) - binaryExponent * LOG_BASE_10_OF_2_TIMES_2_POW_20;
        x += C_2_POW_19;
        pow10 = -(x >> int32_t(20));
    } else {
        pow10 = 0;
    }
    auto cc = new MutableFPNumber(frac, binaryExponent);
    if(pow10 != 0) {
        npc(cc)->multiplyByPowerOfTen(-pow10);
    }
    switch (npc(cc)->get64BitNormalisedExponent()) {
    case int32_t(46):
        if(npc(cc)->isAboveMinRep()) {
            break;
        }
    case int32_t(44):
    case int32_t(45):
        npc(cc)->multiplyByPowerOfTen(1);
        pow10--;
        break;
    case int32_t(47):
    case int32_t(48):
        break;
    case int32_t(49):
        if(npc(cc)->isBelowMaxRep()) {
            break;
        }
    case int32_t(50):
        npc(cc)->multiplyByPowerOfTen(-int32_t(1));
        pow10++;
        break;
    default:
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Bad binary exp "_j)->append(npc(cc)->get64BitNormalisedExponent())
            ->append(u"."_j)->toString());
    }

    npc(cc)->normalise64bit();
    return npc(cc)->createNormalisedDecimal(pow10);
}

poi::ss::util::NormalisedDecimal* poi::ss::util::NormalisedDecimal::roundUnits()
{
    auto wholePart = _wholePart;
    if(_fractionalPart >= FRAC_HALF) {
        wholePart++;
    }
    auto de = _relativeDecimalExponent;
    if(wholePart < MAX_REP_WHOLE_PART) {
        return new NormalisedDecimal(wholePart, int32_t(0), de);
    }
    return new NormalisedDecimal(wholePart / int32_t(10), int32_t(0), de + int32_t(1));
}

void poi::ss::util::NormalisedDecimal::ctor(int64_t wholePart, int32_t fracPart, int32_t decimalExponent)
{
    super::ctor();
    _wholePart = wholePart;
    _fractionalPart = fracPart;
    _relativeDecimalExponent = decimalExponent;
}

poi::ss::util::ExpandedDouble* poi::ss::util::NormalisedDecimal::normaliseBaseTwo()
{
    auto cc = new MutableFPNumber(composeFrac(), int32_t(39));
    npc(cc)->multiplyByPowerOfTen(_relativeDecimalExponent);
    npc(cc)->normalise64bit();
    return npc(cc)->createExpandedDouble();
}

java::math::BigInteger* poi::ss::util::NormalisedDecimal::composeFrac()
{
    auto wp = _wholePart;
    auto fp = _fractionalPart;
    return new ::java::math::BigInteger(new ::int8_tArray({
        static_cast< int8_t >((wp >> int32_t(56)))
        , static_cast< int8_t >((wp >> int32_t(48)))
        , static_cast< int8_t >((wp >> int32_t(40)))
        , static_cast< int8_t >((wp >> int32_t(32)))
        , static_cast< int8_t >((wp >> int32_t(24)))
        , static_cast< int8_t >((wp >> int32_t(16)))
        , static_cast< int8_t >((wp >> int32_t(8)))
        , static_cast< int8_t >((wp >> int32_t(0)))
        , static_cast< int8_t >((fp >> int32_t(16)))
        , static_cast< int8_t >((fp >> int32_t(8)))
        , static_cast< int8_t >((fp >> int32_t(0)))
    }));
}

java::lang::String* poi::ss::util::NormalisedDecimal::getSignificantDecimalDigits()
{
    return ::java::lang::Long::toString(_wholePart);
}

java::lang::String* poi::ss::util::NormalisedDecimal::getSignificantDecimalDigitsLastDigitRounded()
{
    auto wp = _wholePart + int32_t(5);
    auto sb = new ::java::lang::StringBuilder(int32_t(24));
    npc(sb)->append(wp);
    npc(sb)->setCharAt(npc(sb)->length() - int32_t(1), u'0');
    return npc(sb)->toString();
}

int32_t poi::ss::util::NormalisedDecimal::getDecimalExponent()
{
    return _relativeDecimalExponent + EXPONENT_OFFSET;
}

int32_t poi::ss::util::NormalisedDecimal::compareNormalised(NormalisedDecimal* other)
{
    auto cmp = _relativeDecimalExponent - npc(other)->_relativeDecimalExponent;
    if(cmp != 0) {
        return cmp;
    }
    if(_wholePart > npc(other)->_wholePart) {
        return 1;
    }
    if(_wholePart < npc(other)->_wholePart) {
        return -int32_t(1);
    }
    return _fractionalPart - npc(other)->_fractionalPart;
}

java::math::BigDecimal* poi::ss::util::NormalisedDecimal::getFractionalPart()
{
    return (new ::java::math::BigDecimal(_fractionalPart))->divide(BD_2_POW_24_);
}

java::lang::String* poi::ss::util::NormalisedDecimal::getFractionalDigits()
{
    if(_fractionalPart == 0) {
        return u"0"_j;
    }
    return npc(npc(getFractionalPart())->toString())->substring(2);
}

java::lang::String* poi::ss::util::NormalisedDecimal::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(npc(getClass())->getName());
    npc(sb)->append(u" ["_j);
    auto ws = ::java::lang::String::valueOf(_wholePart);
    npc(sb)->append(npc(ws)->charAt(int32_t(0)));
    npc(sb)->append(u'.');
    npc(sb)->append(npc(ws)->substring(1));
    npc(sb)->append(u' ');
    npc(sb)->append(getFractionalDigits());
    npc(sb)->append(u"E"_j);
    npc(sb)->append(getDecimalExponent());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::NormalisedDecimal::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.NormalisedDecimal", 40);
    return c;
}

void poi::ss::util::NormalisedDecimal::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        BD_2_POW_24_ = new ::java::math::BigDecimal(npc(::java::math::BigInteger::ONE())->shiftLeft(24));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::util::NormalisedDecimal::getClass0()
{
    return class_();
}


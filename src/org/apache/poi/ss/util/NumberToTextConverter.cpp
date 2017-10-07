// Generated from /POI/java/org/apache/poi/ss/util/NumberToTextConverter.java
#include <org/apache/poi/ss/util/NumberToTextConverter.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/util/ExpandedDouble.hpp>
#include <org/apache/poi/ss/util/NormalisedDecimal.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::util::NumberToTextConverter::NumberToTextConverter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::NumberToTextConverter::NumberToTextConverter() 
    : NumberToTextConverter(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int64_t org::apache::poi::ss::util::NumberToTextConverter::EXCEL_NAN_BITS;

constexpr int32_t org::apache::poi::ss::util::NumberToTextConverter::MAX_TEXT_LEN;

void org::apache::poi::ss::util::NumberToTextConverter::ctor()
{
    super::ctor();
}

java::lang::String* org::apache::poi::ss::util::NumberToTextConverter::toText(double value)
{
    clinit();
    return rawDoubleBitsToText(::java::lang::Double::doubleToLongBits(value));
}

java::lang::String* org::apache::poi::ss::util::NumberToTextConverter::rawDoubleBitsToText(int64_t pRawBits)
{
    clinit();
    auto rawBits = pRawBits;
    auto isNegative = rawBits < 0;
    if(isNegative) {
        rawBits &= 9223372036854775807LL;
    }
    if(rawBits == 0) {
        return isNegative ? u"-0"_j : u"0"_j;
    }
    auto ed = new ExpandedDouble(rawBits);
    if(npc(ed)->getBinaryExponent() < -int32_t(1022)) {
        return isNegative ? u"-0"_j : u"0"_j;
    }
    if(npc(ed)->getBinaryExponent() == 1024) {
        if(rawBits == EXCEL_NAN_BITS) {
            return u"3.484840871308E+308"_j;
        }
        isNegative = false;
    }
    auto nd = npc(ed)->normaliseBaseTen();
    auto sb = new ::java::lang::StringBuilder(MAX_TEXT_LEN + int32_t(1));
    if(isNegative) {
        npc(sb)->append(u'-');
    }
    convertToText(sb, nd);
    return npc(sb)->toString();
}

void org::apache::poi::ss::util::NumberToTextConverter::convertToText(::java::lang::StringBuilder* sb, NormalisedDecimal* pnd)
{
    clinit();
    auto rnd = npc(pnd)->roundUnits();
    auto decExponent = npc(rnd)->getDecimalExponent();
    ::java::lang::String* decimalDigits;
    if(::java::lang::Math::abs(decExponent) > 98) {
        decimalDigits = npc(rnd)->getSignificantDecimalDigitsLastDigitRounded();
        if(npc(decimalDigits)->length() == 16) {
            decExponent++;
        }
    } else {
        decimalDigits = npc(rnd)->getSignificantDecimalDigits();
    }
    auto countSigDigits = countSignifantDigits(decimalDigits);
    if(decExponent < 0) {
        formatLessThanOne(sb, decimalDigits, decExponent, countSigDigits);
    } else {
        formatGreaterThanOne(sb, decimalDigits, decExponent, countSigDigits);
    }
}

void org::apache::poi::ss::util::NumberToTextConverter::formatLessThanOne(::java::lang::StringBuilder* sb, ::java::lang::String* decimalDigits, int32_t decExponent, int32_t countSigDigits)
{
    clinit();
    auto nLeadingZeros = -decExponent - int32_t(1);
    auto normalLength = int32_t(2) + nLeadingZeros + countSigDigits;
    if(needsScientificNotation(normalLength)) {
        npc(sb)->append(npc(decimalDigits)->charAt(int32_t(0)));
        if(countSigDigits > 1) {
            npc(sb)->append(u'.');
            npc(sb)->append(npc(decimalDigits)->subSequence(int32_t(1), countSigDigits));
        }
        npc(sb)->append(u"E-"_j);
        appendExp(sb, -decExponent);
        return;
    }
    npc(sb)->append(u"0."_j);
    for (auto i = nLeadingZeros; i > 0; i--) {
        npc(sb)->append(u'0');
    }
    npc(sb)->append(npc(decimalDigits)->subSequence(int32_t(0), countSigDigits));
}

void org::apache::poi::ss::util::NumberToTextConverter::formatGreaterThanOne(::java::lang::StringBuilder* sb, ::java::lang::String* decimalDigits, int32_t decExponent, int32_t countSigDigits)
{
    clinit();
    if(decExponent > 19) {
        npc(sb)->append(npc(decimalDigits)->charAt(int32_t(0)));
        if(countSigDigits > 1) {
            npc(sb)->append(u'.');
            npc(sb)->append(npc(decimalDigits)->subSequence(int32_t(1), countSigDigits));
        }
        npc(sb)->append(u"E+"_j);
        appendExp(sb, decExponent);
        return;
    }
    auto nFractionalDigits = countSigDigits - decExponent - int32_t(1);
    if(nFractionalDigits > 0) {
        npc(sb)->append(npc(decimalDigits)->subSequence(int32_t(0), decExponent + int32_t(1)));
        npc(sb)->append(u'.');
        npc(sb)->append(npc(decimalDigits)->subSequence(decExponent + int32_t(1), countSigDigits));
        return;
    }
    npc(sb)->append(npc(decimalDigits)->subSequence(int32_t(0), countSigDigits));
    for (auto i = -nFractionalDigits; i > 0; i--) {
        npc(sb)->append(u'0');
    }
}

bool org::apache::poi::ss::util::NumberToTextConverter::needsScientificNotation(int32_t nDigits)
{
    clinit();
    return nDigits > MAX_TEXT_LEN;
}

int32_t org::apache::poi::ss::util::NumberToTextConverter::countSignifantDigits(::java::lang::String* sb)
{
    clinit();
    auto result = npc(sb)->length() - int32_t(1);
    while (npc(sb)->charAt(result) == u'0') {
        result--;
        if(result < 0) {
            throw new ::java::lang::RuntimeException(u"No non-zero digits found"_j);
        }
    }
    return result + int32_t(1);
}

void org::apache::poi::ss::util::NumberToTextConverter::appendExp(::java::lang::StringBuilder* sb, int32_t val)
{
    clinit();
    if(val < 10) {
        npc(sb)->append(u'0');
        npc(sb)->append(static_cast< char16_t >((u'0' + val)));
        return;
    }
    npc(sb)->append(val);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::NumberToTextConverter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.NumberToTextConverter", 44);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::NumberToTextConverter::getClass0()
{
    return class_();
}


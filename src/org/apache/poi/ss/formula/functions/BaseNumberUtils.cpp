// Generated from /POI/java/org/apache/poi/ss/formula/functions/BaseNumberUtils.java
#include <org/apache/poi/ss/formula/functions/BaseNumberUtils.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::BaseNumberUtils::BaseNumberUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::BaseNumberUtils::BaseNumberUtils()
    : BaseNumberUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

double org::apache::poi::ss::formula::functions::BaseNumberUtils::convertToDecimal(::java::lang::String* value, int32_t base, int32_t maxNumberOfPlaces) /* throws(IllegalArgumentException) */
{
    clinit();
    if(value == nullptr || npc(value)->length() == 0) {
        return 0.0;
    }
    int64_t stringLength = npc(value)->length();
    if(stringLength > maxNumberOfPlaces) {
        throw new ::java::lang::IllegalArgumentException();
    }
    auto decimalValue = 0.0;
    int64_t signedDigit = int32_t(0);
    auto hasSignedDigit = true;
    auto characters = npc(value)->toCharArray_();
    for(auto character : *npc(characters)) {
        int64_t digit;
        if(u'0' <= character && character <= u'9') {
            digit = character - u'0';
        } else if(u'A' <= character && character <= u'Z') {
            digit = int32_t(10) + (character - u'A');
        } else if(u'a' <= character && character <= u'z') {
            digit = int32_t(10) + (character - u'a');
        } else {
            digit = base;
        }
        if(digit < base) {
            if(hasSignedDigit) {
                hasSignedDigit = false;
                signedDigit = digit;
            }
            decimalValue = decimalValue * base + digit;
        } else {
            throw new ::java::lang::IllegalArgumentException(u"character not allowed"_j);
        }
    }
    auto isNegative = (!hasSignedDigit && stringLength == maxNumberOfPlaces && (signedDigit >= base / int32_t(2)));
    if(isNegative) {
        decimalValue = getTwoComplement(base, maxNumberOfPlaces, decimalValue);
        decimalValue = decimalValue * -1.0;
    }
    return decimalValue;
}

double org::apache::poi::ss::formula::functions::BaseNumberUtils::getTwoComplement(double base, double maxNumberOfPlaces, double decimalValue)
{
    clinit();
    return (::java::lang::Math::pow(base, maxNumberOfPlaces) - decimalValue);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::BaseNumberUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.BaseNumberUtils", 51);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::BaseNumberUtils::getClass0()
{
    return class_();
}


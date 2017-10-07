// Generated from /POI/java/org/apache/poi/ss/usermodel/FractionFormat.java
#include <org/apache/poi/ss/usermodel/FractionFormat.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/format/SimpleFraction.hpp>
#include <org/apache/poi/ss/formula/eval/NotImplementedException.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::usermodel::FractionFormat::FractionFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::FractionFormat::FractionFormat(::java::lang::String* wholePartFormatString, ::java::lang::String* denomFormatString) 
    : FractionFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(wholePartFormatString,denomFormatString);
}

org::apache::poi::util::POILogger*& org::apache::poi::ss::usermodel::FractionFormat::LOGGER()
{
    clinit();
    return LOGGER_;
}
org::apache::poi::util::POILogger* org::apache::poi::ss::usermodel::FractionFormat::LOGGER_;

java::util::regex::Pattern*& org::apache::poi::ss::usermodel::FractionFormat::DENOM_FORMAT_PATTERN()
{
    clinit();
    return DENOM_FORMAT_PATTERN_;
}
java::util::regex::Pattern* org::apache::poi::ss::usermodel::FractionFormat::DENOM_FORMAT_PATTERN_;

constexpr int32_t org::apache::poi::ss::usermodel::FractionFormat::MAX_DENOM_POW;

void org::apache::poi::ss::usermodel::FractionFormat::ctor(::java::lang::String* wholePartFormatString, ::java::lang::String* denomFormatString)
{
    super::ctor();
    this->wholePartFormatString = wholePartFormatString;
    auto m = npc(DENOM_FORMAT_PATTERN_)->matcher(denomFormatString);
    auto tmpExact = -int32_t(1);
    auto tmpMax = -int32_t(1);
    if(npc(m)->find()) {
        if(npc(m)->group(int32_t(2)) != nullptr) {
            try {
                tmpExact = ::java::lang::Integer::parseInt(npc(m)->group(int32_t(2)));
                if(tmpExact == 0) {
                    tmpExact = -int32_t(1);
                }
            } catch (::java::lang::NumberFormatException* e) {
            }
        } else if(npc(m)->group(int32_t(1)) != nullptr) {
            auto len = npc(npc(m)->group(int32_t(1)))->length();
            len = len > MAX_DENOM_POW ? MAX_DENOM_POW : len;
            tmpMax = static_cast< int32_t >(::java::lang::Math::pow(10, len));
        } else {
            tmpExact = 100;
        }
    }
    if(tmpExact <= 0 && tmpMax <= 0) {
        tmpExact = 100;
    }
    exactDenom = tmpExact;
    maxDenom = tmpMax;
}

java::lang::String* org::apache::poi::ss::usermodel::FractionFormat::format(::java::lang::Number* num)
{
    auto const doubleValue = npc(num)->doubleValue();
    auto const isNeg = (doubleValue < 0.0f) ? true : false;
    auto const absDoubleValue = ::java::lang::Math::abs(doubleValue);
    auto const wholePart = ::java::lang::Math::floor(absDoubleValue);
    auto const decPart = absDoubleValue - wholePart;
    if(wholePart + decPart == 0) {
        return u"0"_j;
    }
    if(::java::lang::Double::compare(decPart, 0) == 0) {
        auto sb = new ::java::lang::StringBuilder();
        if(isNeg) {
            npc(sb)->append(u"-"_j);
        }
        npc(sb)->append(static_cast< int32_t >(wholePart));
        return npc(sb)->toString();
    }
    ::org::apache::poi::ss::format::SimpleFraction* fract = nullptr;
    try {
        if(exactDenom > 0) {
            fract = ::org::apache::poi::ss::format::SimpleFraction::buildFractionExactDenominator(decPart, exactDenom);
        } else {
            fract = ::org::apache::poi::ss::format::SimpleFraction::buildFractionMaxDenominator(decPart, maxDenom);
        }
    } catch (::java::lang::RuntimeException* e) {
        npc(LOGGER_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Can't format fraction"_j), static_cast< ::java::lang::Object* >(e)}));
        return ::java::lang::Double::toString(doubleValue);
    }
    auto sb = new ::java::lang::StringBuilder();
    if(isNeg) {
        npc(sb)->append(u"-"_j);
    }
    if(npc(u""_j)->equals(static_cast< ::java::lang::Object* >(wholePartFormatString))) {
        auto trueNum = (npc(fract)->getDenominator() * static_cast< int32_t >(wholePart)) + npc(fract)->getNumerator();
        npc(npc(npc(sb)->append(trueNum))->append(u"/"_j))->append(npc(fract)->getDenominator());
        return npc(sb)->toString();
    }
    if(npc(fract)->getNumerator() == 0) {
        npc(sb)->append(::java::lang::Integer::toString(static_cast< int32_t >(wholePart)));
        return npc(sb)->toString();
    } else if(npc(fract)->getNumerator() == npc(fract)->getDenominator()) {
        npc(sb)->append(::java::lang::Integer::toString(static_cast< int32_t >(wholePart) + int32_t(1)));
        return npc(sb)->toString();
    }
    if(wholePart > 0) {
        npc(npc(sb)->append(::java::lang::Integer::toString(static_cast< int32_t >(wholePart))))->append(u" "_j);
    }
    npc(npc(npc(sb)->append(npc(fract)->getNumerator()))->append(u"/"_j))->append(npc(fract)->getDenominator());
    return npc(sb)->toString();
}

java::lang::StringBuffer* org::apache::poi::ss::usermodel::FractionFormat::format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos)
{
    return npc(toAppendTo)->append(format(java_cast< ::java::lang::Number* >(obj)));
}

java::lang::Object* org::apache::poi::ss::usermodel::FractionFormat::parseObject(::java::lang::String* source, ::java::text::ParsePosition* pos)
{
    throw new ::org::apache::poi::ss::formula::eval::NotImplementedException(u"Reverse parsing not supported"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::FractionFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.FractionFormat", 42);
    return c;
}

void org::apache::poi::ss::usermodel::FractionFormat::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOGGER_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(FractionFormat::class_()));
        DENOM_FORMAT_PATTERN_ = ::java::util::regex::Pattern::compile(u"(?:(#+)|(\\d+))"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::String* org::apache::poi::ss::usermodel::FractionFormat::format(::java::lang::Object* obj)
{
    return super::format(obj);
}

java::lang::Object* org::apache::poi::ss::usermodel::FractionFormat::parseObject(::java::lang::String* source)
{
    return super::parseObject(source);
}

java::lang::Class* org::apache::poi::ss::usermodel::FractionFormat::getClass0()
{
    return class_();
}


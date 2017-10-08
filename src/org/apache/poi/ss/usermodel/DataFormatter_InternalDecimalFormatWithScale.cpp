// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormatter.java
#include <org/apache/poi/ss/usermodel/DataFormatter_InternalDecimalFormatWithScale.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/math/RoundingMode.hpp>
#include <java/text/DecimalFormat.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter.hpp>

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

poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::DataFormatter_InternalDecimalFormatWithScale(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::DataFormatter_InternalDecimalFormatWithScale(::java::lang::String* pattern, ::java::text::DecimalFormatSymbols* symbols) 
    : DataFormatter_InternalDecimalFormatWithScale(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern,symbols);
}

java::util::regex::Pattern*& poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::endsWithCommas()
{
    clinit();
    return endsWithCommas_;
}
java::util::regex::Pattern* poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::endsWithCommas_;

java::math::BigDecimal*& poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::ONE_THOUSAND()
{
    clinit();
    return ONE_THOUSAND_;
}
java::math::BigDecimal* poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::ONE_THOUSAND_;

java::lang::String* poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::trimTrailingCommas(::java::lang::String* s)
{
    clinit();
    return npc(s)->replaceAll(u",+$"_j, u""_j);
}

void poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::ctor(::java::lang::String* pattern, ::java::text::DecimalFormatSymbols* symbols)
{
    super::ctor();
    df = new ::java::text::DecimalFormat(trimTrailingCommas(pattern), symbols);
    DataFormatter::setExcelStyleRoundingMode(df);
    auto endsWithCommasMatcher = npc(endsWithCommas_)->matcher(pattern);
    if(npc(endsWithCommasMatcher)->find()) {
        auto commas = (npc(endsWithCommasMatcher)->group(int32_t(1)));
        auto temp = ::java::math::BigDecimal::ONE();
        for (auto i = int32_t(0); i < npc(commas)->length(); ++i) {
            temp = npc(temp)->multiply(ONE_THOUSAND_);
        }
        divider = temp;
    } else {
        divider = nullptr;
    }
}

java::lang::Object* poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::scaleInput(::java::lang::Object* obj)
{
    if(divider != nullptr) {
        if(dynamic_cast< ::java::math::BigDecimal* >(obj) != nullptr) {
            obj = npc((java_cast< ::java::math::BigDecimal* >(obj)))->divide(divider, ::java::math::RoundingMode::HALF_UP);
        } else if(dynamic_cast< ::java::lang::Double* >(obj) != nullptr) {
            obj = ::java::lang::Double::valueOf((npc(java_cast< ::java::lang::Double* >(obj)))->doubleValue() / npc(divider)->doubleValue());
        } else {
            throw new ::java::lang::UnsupportedOperationException();
        }
    }
    return obj;
}

java::lang::StringBuffer* poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos)
{
    obj = scaleInput(obj);
    return npc(df)->format(obj, toAppendTo, pos);
}

java::lang::Object* poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::parseObject(::java::lang::String* source, ::java::text::ParsePosition* pos)
{
    throw new ::java::lang::UnsupportedOperationException();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DataFormatter.InternalDecimalFormatWithScale", 72);
    return c;
}

void poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        endsWithCommas_ = ::java::util::regex::Pattern::compile(u"(,+)$"_j);
        ONE_THOUSAND_ = new ::java::math::BigDecimal(int32_t(1000));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::String* poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::format(::java::lang::Object* obj)
{
    return super::format(obj);
}

java::lang::Object* poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::parseObject(::java::lang::String* source)
{
    return super::parseObject(source);
}

java::lang::Class* poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale::getClass0()
{
    return class_();
}


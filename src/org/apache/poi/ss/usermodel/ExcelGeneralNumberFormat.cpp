// Generated from /POI/java/org/apache/poi/ss/usermodel/ExcelGeneralNumberFormat.java
#include <org/apache/poi/ss/usermodel/ExcelGeneralNumberFormat.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/math/MathContext.hpp>
#include <java/math/RoundingMode.hpp>
#include <java/text/DecimalFormat.hpp>
#include <java/text/DecimalFormatSymbols.hpp>
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

org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::ExcelGeneralNumberFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::ExcelGeneralNumberFormat(::java::util::Locale* locale) 
    : ExcelGeneralNumberFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale);
}

constexpr int64_t org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::serialVersionUID;

java::math::MathContext*& org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::TO_10_SF()
{
    clinit();
    return TO_10_SF_;
}
java::math::MathContext* org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::TO_10_SF_;

void org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::ctor(::java::util::Locale* locale)
{
    super::ctor();
    decimalSymbols = ::java::text::DecimalFormatSymbols::getInstance(locale);
    scientificFormat = new ::java::text::DecimalFormat(u"0.#####E0"_j, decimalSymbols);
    DataFormatter::setExcelStyleRoundingMode(scientificFormat);
    integerFormat = new ::java::text::DecimalFormat(u"#"_j, decimalSymbols);
    DataFormatter::setExcelStyleRoundingMode(integerFormat);
    decimalFormat = new ::java::text::DecimalFormat(u"#.##########"_j, decimalSymbols);
    DataFormatter::setExcelStyleRoundingMode(decimalFormat);
}

java::lang::StringBuffer* org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::format(::java::lang::Object* number, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos)
{
    double value;
    if(dynamic_cast< ::java::lang::Number* >(number) != nullptr) {
        value = npc((java_cast< ::java::lang::Number* >(number)))->doubleValue();
        if(::java::lang::Double::isInfinite(value) || ::java::lang::Double::isNaN(value)) {
            return npc(integerFormat)->format(number, toAppendTo, pos);
        }
    } else {
        return npc(integerFormat)->format(number, toAppendTo, pos);
    }
    auto const abs = ::java::lang::Math::abs(value);
    if(abs >= 1.0E11 || (abs <= 1.0E-10 && abs > 0)) {
        return npc(scientificFormat)->format(number, toAppendTo, pos);
    } else if(::java::lang::Math::floor(value) == value || abs >= 1.0E10) {
        return npc(integerFormat)->format(number, toAppendTo, pos);
    }
    auto const rounded = npc((new ::java::math::BigDecimal(value))->round(TO_10_SF_))->doubleValue();
    return npc(decimalFormat)->format(rounded, toAppendTo, pos);
}

java::lang::Object* org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::parseObject(::java::lang::String* source, ::java::text::ParsePosition* pos)
{
    throw new ::java::lang::UnsupportedOperationException();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.ExcelGeneralNumberFormat", 52);
    return c;
}

void org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TO_10_SF_ = new ::java::math::MathContext(int32_t(10), ::java::math::RoundingMode::HALF_UP);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::String* org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::format(::java::lang::Object* obj)
{
    return super::format(obj);
}

java::lang::Object* org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::parseObject(::java::lang::String* source)
{
    return super::parseObject(source);
}

java::lang::Class* org::apache::poi::ss::usermodel::ExcelGeneralNumberFormat::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/ss/usermodel/ExcelStyleDateFormatter.java
#include <org/apache/poi/ss/usermodel/ExcelStyleDateFormatter.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/math/RoundingMode.hpp>
#include <java/text/DecimalFormat.hpp>
#include <java/text/DecimalFormatSymbols.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>

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

poi::ss::usermodel::ExcelStyleDateFormatter::ExcelStyleDateFormatter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::ExcelStyleDateFormatter::ExcelStyleDateFormatter(::java::lang::String* pattern) 
    : ExcelStyleDateFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern);
}

poi::ss::usermodel::ExcelStyleDateFormatter::ExcelStyleDateFormatter(::java::lang::String* pattern, ::java::text::DateFormatSymbols* formatSymbols) 
    : ExcelStyleDateFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern,formatSymbols);
}

poi::ss::usermodel::ExcelStyleDateFormatter::ExcelStyleDateFormatter(::java::lang::String* pattern, ::java::util::Locale* locale) 
    : ExcelStyleDateFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern,locale);
}

void poi::ss::usermodel::ExcelStyleDateFormatter::init()
{
    {
        setTimeZone(::poi::util::LocaleUtil::getUserTimeZone());
    }
}

constexpr char16_t poi::ss::usermodel::ExcelStyleDateFormatter::MMMMM_START_SYMBOL;

constexpr char16_t poi::ss::usermodel::ExcelStyleDateFormatter::MMMMM_TRUNCATE_SYMBOL;

constexpr char16_t poi::ss::usermodel::ExcelStyleDateFormatter::H_BRACKET_SYMBOL;

constexpr char16_t poi::ss::usermodel::ExcelStyleDateFormatter::HH_BRACKET_SYMBOL;

constexpr char16_t poi::ss::usermodel::ExcelStyleDateFormatter::M_BRACKET_SYMBOL;

constexpr char16_t poi::ss::usermodel::ExcelStyleDateFormatter::MM_BRACKET_SYMBOL;

constexpr char16_t poi::ss::usermodel::ExcelStyleDateFormatter::S_BRACKET_SYMBOL;

constexpr char16_t poi::ss::usermodel::ExcelStyleDateFormatter::SS_BRACKET_SYMBOL;

constexpr char16_t poi::ss::usermodel::ExcelStyleDateFormatter::L_BRACKET_SYMBOL;

constexpr char16_t poi::ss::usermodel::ExcelStyleDateFormatter::LL_BRACKET_SYMBOL;

java::text::DecimalFormat*& poi::ss::usermodel::ExcelStyleDateFormatter::format1digit()
{
    clinit();
    return format1digit_;
}
java::text::DecimalFormat* poi::ss::usermodel::ExcelStyleDateFormatter::format1digit_;

java::text::DecimalFormat*& poi::ss::usermodel::ExcelStyleDateFormatter::format2digits()
{
    clinit();
    return format2digits_;
}
java::text::DecimalFormat* poi::ss::usermodel::ExcelStyleDateFormatter::format2digits_;

java::text::DecimalFormat*& poi::ss::usermodel::ExcelStyleDateFormatter::format3digit()
{
    clinit();
    return format3digit_;
}
java::text::DecimalFormat* poi::ss::usermodel::ExcelStyleDateFormatter::format3digit_;

java::text::DecimalFormat*& poi::ss::usermodel::ExcelStyleDateFormatter::format4digits()
{
    clinit();
    return format4digits_;
}
java::text::DecimalFormat* poi::ss::usermodel::ExcelStyleDateFormatter::format4digits_;

void poi::ss::usermodel::ExcelStyleDateFormatter::ctor(::java::lang::String* pattern)
{
    super::ctor(processFormatPattern(pattern), ::poi::util::LocaleUtil::getUserLocale());
    init();
}

void poi::ss::usermodel::ExcelStyleDateFormatter::ctor(::java::lang::String* pattern, ::java::text::DateFormatSymbols* formatSymbols)
{
    super::ctor(processFormatPattern(pattern), formatSymbols);
    init();
}

void poi::ss::usermodel::ExcelStyleDateFormatter::ctor(::java::lang::String* pattern, ::java::util::Locale* locale)
{
    super::ctor(processFormatPattern(pattern), locale);
    init();
}

java::lang::String* poi::ss::usermodel::ExcelStyleDateFormatter::processFormatPattern(::java::lang::String* f)
{
    clinit();
    auto t = npc(f)->replaceAll(u"MMMMM"_j, ::java::lang::StringBuilder().append(MMMMM_START_SYMBOL)->append(u"MMM"_j)
        ->append(MMMMM_TRUNCATE_SYMBOL)->toString());
    t = npc(t)->replaceAll(u"\\[H]"_j, ::java::lang::String::valueOf(H_BRACKET_SYMBOL));
    t = npc(t)->replaceAll(u"\\[HH]"_j, ::java::lang::String::valueOf(HH_BRACKET_SYMBOL));
    t = npc(t)->replaceAll(u"\\[m]"_j, ::java::lang::String::valueOf(M_BRACKET_SYMBOL));
    t = npc(t)->replaceAll(u"\\[mm]"_j, ::java::lang::String::valueOf(MM_BRACKET_SYMBOL));
    t = npc(t)->replaceAll(u"\\[s]"_j, ::java::lang::String::valueOf(S_BRACKET_SYMBOL));
    t = npc(t)->replaceAll(u"\\[ss]"_j, ::java::lang::String::valueOf(SS_BRACKET_SYMBOL));
    t = npc(t)->replaceAll(u"s.000"_j, u"s.SSS"_j);
    t = npc(t)->replaceAll(u"s.00"_j, ::java::lang::StringBuilder().append(u"s."_j)->append(LL_BRACKET_SYMBOL)->toString());
    t = npc(t)->replaceAll(u"s.0"_j, ::java::lang::StringBuilder().append(u"s."_j)->append(L_BRACKET_SYMBOL)->toString());
    return t;
}

void poi::ss::usermodel::ExcelStyleDateFormatter::setDateToBeFormatted(double date)
{
    this->dateToBeFormatted = date;
}

java::lang::StringBuffer* poi::ss::usermodel::ExcelStyleDateFormatter::format(::java::util::Date* date, ::java::lang::StringBuffer* paramStringBuffer, ::java::text::FieldPosition* paramFieldPosition)
{
    auto s = npc(super::format(date, paramStringBuffer, paramFieldPosition))->toString();
    if(npc(s)->indexOf(static_cast< int32_t >(MMMMM_START_SYMBOL)) != -int32_t(1)) {
        s = npc(s)->replaceAll(::java::lang::StringBuilder().append(MMMMM_START_SYMBOL)->append(u"(\\p{L}|\\p{P})[\\p{L}\\p{P}]+"_j)
            ->append(MMMMM_TRUNCATE_SYMBOL)->toString(), u"$1"_j);
    }
    if(npc(s)->indexOf(static_cast< int32_t >(H_BRACKET_SYMBOL)) != -int32_t(1) || npc(s)->indexOf(static_cast< int32_t >(HH_BRACKET_SYMBOL)) != -int32_t(1)) {
        auto hours = static_cast< float >(dateToBeFormatted) * int32_t(24);
        s = npc(s)->replaceAll(::java::lang::String::valueOf(H_BRACKET_SYMBOL), npc(format1digit_)->format(static_cast< double >(hours)));
        s = npc(s)->replaceAll(::java::lang::String::valueOf(HH_BRACKET_SYMBOL), npc(format2digits_)->format(static_cast< double >(hours)));
    }
    if(npc(s)->indexOf(static_cast< int32_t >(M_BRACKET_SYMBOL)) != -int32_t(1) || npc(s)->indexOf(static_cast< int32_t >(MM_BRACKET_SYMBOL)) != -int32_t(1)) {
        auto minutes = static_cast< float >(dateToBeFormatted) * int32_t(24) * int32_t(60);
        s = npc(s)->replaceAll(::java::lang::String::valueOf(M_BRACKET_SYMBOL), npc(format1digit_)->format(static_cast< double >(minutes)));
        s = npc(s)->replaceAll(::java::lang::String::valueOf(MM_BRACKET_SYMBOL), npc(format2digits_)->format(static_cast< double >(minutes)));
    }
    if(npc(s)->indexOf(static_cast< int32_t >(S_BRACKET_SYMBOL)) != -int32_t(1) || npc(s)->indexOf(static_cast< int32_t >(SS_BRACKET_SYMBOL)) != -int32_t(1)) {
        auto seconds = static_cast< float >((dateToBeFormatted * 24.0 * 60.0* 60.0));
        s = npc(s)->replaceAll(::java::lang::String::valueOf(S_BRACKET_SYMBOL), npc(format1digit_)->format(static_cast< double >(seconds)));
        s = npc(s)->replaceAll(::java::lang::String::valueOf(SS_BRACKET_SYMBOL), npc(format2digits_)->format(static_cast< double >(seconds)));
    }
    if(npc(s)->indexOf(static_cast< int32_t >(L_BRACKET_SYMBOL)) != -int32_t(1) || npc(s)->indexOf(static_cast< int32_t >(LL_BRACKET_SYMBOL)) != -int32_t(1)) {
        auto millisTemp = static_cast< float >(((dateToBeFormatted - ::java::lang::Math::floor(dateToBeFormatted)) * 24.0 * 60.0* 60.0));
        auto millis = (millisTemp - static_cast< int32_t >(millisTemp));
        s = npc(s)->replaceAll(::java::lang::String::valueOf(L_BRACKET_SYMBOL), npc(format3digit_)->format(static_cast< double >(millis * int32_t(10))));
        s = npc(s)->replaceAll(::java::lang::String::valueOf(LL_BRACKET_SYMBOL), npc(format4digits_)->format(static_cast< double >(millis * int32_t(100))));
    }
    return new ::java::lang::StringBuffer(s);
}

bool poi::ss::usermodel::ExcelStyleDateFormatter::equals(::java::lang::Object* o)
{
    if(!(dynamic_cast< ExcelStyleDateFormatter* >(o) != nullptr)) {
        return false;
    }
    auto other = java_cast< ExcelStyleDateFormatter* >(o);
    return dateToBeFormatted == npc(other)->dateToBeFormatted;
}

int32_t poi::ss::usermodel::ExcelStyleDateFormatter::hashCode()
{
    return (new ::java::lang::Double(dateToBeFormatted))->hashCode();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::ExcelStyleDateFormatter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.ExcelStyleDateFormatter", 51);
    return c;
}

void poi::ss::usermodel::ExcelStyleDateFormatter::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            auto dfs = ::java::text::DecimalFormatSymbols::getInstance(::java::util::Locale::ROOT());
            format1digit_ = new ::java::text::DecimalFormat(u"0"_j, dfs);
            format2digits_ = new ::java::text::DecimalFormat(u"00"_j, dfs);
            format3digit_ = new ::java::text::DecimalFormat(u"0"_j, dfs);
            format4digits_ = new ::java::text::DecimalFormat(u"00"_j, dfs);
            DataFormatter::setExcelStyleRoundingMode(format1digit_, ::java::math::RoundingMode::DOWN);
            DataFormatter::setExcelStyleRoundingMode(format2digits_, ::java::math::RoundingMode::DOWN);
            DataFormatter::setExcelStyleRoundingMode(format3digit_);
            DataFormatter::setExcelStyleRoundingMode(format4digits_);
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::String* poi::ss::usermodel::ExcelStyleDateFormatter::format(::java::util::Date* date)
{
    return super::format(date);
}

java::lang::StringBuffer* poi::ss::usermodel::ExcelStyleDateFormatter::format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* fieldPosition)
{
    return super::format(obj, toAppendTo, fieldPosition);
}

java::lang::String* poi::ss::usermodel::ExcelStyleDateFormatter::format(::java::lang::Object* obj)
{
    return super::format(obj);
}

java::lang::Class* poi::ss::usermodel::ExcelStyleDateFormatter::getClass0()
{
    return class_();
}


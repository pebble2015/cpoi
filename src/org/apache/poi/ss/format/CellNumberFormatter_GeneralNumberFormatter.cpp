// Generated from /POI/java/org/apache/poi/ss/format/CellNumberFormatter.java
#include <org/apache/poi/ss/format/CellNumberFormatter_GeneralNumberFormatter.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/format/CellFormatter.hpp>
#include <org/apache/poi/ss/format/CellNumberFormatter.hpp>
#include <org/apache/poi/ss/format/CellTextFormatter.hpp>
#include <cmath>

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

poi::ss::format::CellNumberFormatter_GeneralNumberFormatter::CellNumberFormatter_GeneralNumberFormatter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::format::CellNumberFormatter_GeneralNumberFormatter::CellNumberFormatter_GeneralNumberFormatter(::java::util::Locale* locale) 
    : CellNumberFormatter_GeneralNumberFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale);
}

void poi::ss::format::CellNumberFormatter_GeneralNumberFormatter::ctor(::java::util::Locale* locale)
{
    super::ctor(locale, u"General"_j);
}

void poi::ss::format::CellNumberFormatter_GeneralNumberFormatter::formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value)
{
    if(value == nullptr) {
        return;
    }
    CellFormatter* cf;
    if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
        auto num = java_cast< ::java::lang::Number* >(value);
        cf = (std::fmod(npc(num)->doubleValue(), 1.0) == 0) ? static_cast< CellFormatter* >(new CellNumberFormatter(locale, u"#"_j)) : static_cast< CellFormatter* >(new CellNumberFormatter(locale, u"#.#"_j));
    } else {
        cf = CellTextFormatter::SIMPLE_TEXT();
    }
    npc(cf)->formatValue(toAppendTo, value);
}

void poi::ss::format::CellNumberFormatter_GeneralNumberFormatter::simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value)
{
    formatValue(toAppendTo, value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellNumberFormatter_GeneralNumberFormatter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellNumberFormatter.GeneralNumberFormatter", 67);
    return c;
}

java::lang::Class* poi::ss::format::CellNumberFormatter_GeneralNumberFormatter::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/ss/format/CellTextFormatter.java
#include <org/apache/poi/ss/format/CellTextFormatter.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/format/CellFormatPart.hpp>
#include <org/apache/poi/ss/format/CellFormatType.hpp>
#include <org/apache/poi/ss/format/CellFormatter.hpp>
#include <org/apache/poi/ss/format/CellTextFormatter_CellTextFormatter_1.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::format::CellTextFormatter::CellTextFormatter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::format::CellTextFormatter::CellTextFormatter(::java::lang::String* format) 
    : CellTextFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(format);
}

poi::ss::format::CellFormatter*& poi::ss::format::CellTextFormatter::SIMPLE_TEXT()
{
    clinit();
    return SIMPLE_TEXT_;
}
poi::ss::format::CellFormatter* poi::ss::format::CellTextFormatter::SIMPLE_TEXT_;

void poi::ss::format::CellTextFormatter::ctor(::java::lang::String* format)
{
    super::ctor(format);
    auto const numPlaces = new ::int32_tArray(int32_t(1));
    desc = npc(CellFormatPart::parseFormat(format, CellFormatType::TEXT, new CellTextFormatter_CellTextFormatter_1(this, numPlaces)))->toString();
    textPos = new ::int32_tArray((*numPlaces)[int32_t(0)]);
    auto pos = npc(desc)->length() - int32_t(1);
    for (auto i = int32_t(0); i < npc(textPos)->length; i++) {
        (*textPos)[i] = npc(desc)->lastIndexOf(u"\u0000"_j, pos);
        pos = (*textPos)[i] - int32_t(1);
    }
}

void poi::ss::format::CellTextFormatter::formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* obj)
{
    auto start = npc(toAppendTo)->length();
    auto text = npc(obj)->toString();
    if(dynamic_cast< ::java::lang::Boolean* >(obj) != nullptr) {
        text = npc(text)->toUpperCase(::java::util::Locale::ROOT());
    }
    npc(toAppendTo)->append(desc);
    for (auto i = int32_t(0); i < npc(textPos)->length; i++) {
        auto pos = start + (*textPos)[i];
        npc(toAppendTo)->replace(pos, pos + int32_t(1), text);
    }
}

void poi::ss::format::CellTextFormatter::simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value)
{
    npc(SIMPLE_TEXT_)->formatValue(toAppendTo, value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellTextFormatter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellTextFormatter", 42);
    return c;
}

void poi::ss::format::CellTextFormatter::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        SIMPLE_TEXT_ = new CellTextFormatter(u"@"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::format::CellTextFormatter::getClass0()
{
    return class_();
}


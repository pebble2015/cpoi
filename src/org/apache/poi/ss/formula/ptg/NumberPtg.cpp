// Generated from /POI/java/org/apache/poi/ss/formula/ptg/NumberPtg.java
#include <org/apache/poi/ss/formula/ptg/NumberPtg.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/util/NumberToTextConverter.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::ptg::NumberPtg::NumberPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::NumberPtg::NumberPtg(::poi::util::LittleEndianInput* in) 
    : NumberPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::ss::formula::ptg::NumberPtg::NumberPtg(::java::lang::String* value) 
    : NumberPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

poi::ss::formula::ptg::NumberPtg::NumberPtg(double value) 
    : NumberPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

constexpr int32_t poi::ss::formula::ptg::NumberPtg::SIZE;

constexpr int8_t poi::ss::formula::ptg::NumberPtg::sid;

void poi::ss::formula::ptg::NumberPtg::ctor(::poi::util::LittleEndianInput* in)
{
    ctor(npc(in)->readDouble());
}

void poi::ss::formula::ptg::NumberPtg::ctor(::java::lang::String* value)
{
    ctor(::java::lang::Double::parseDouble(value));
}

void poi::ss::formula::ptg::NumberPtg::ctor(double value)
{
    super::ctor();
    field_1_value = value;
}

double poi::ss::formula::ptg::NumberPtg::getValue()
{
    return field_1_value;
}

void poi::ss::formula::ptg::NumberPtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeDouble(getValue());
}

int32_t poi::ss::formula::ptg::NumberPtg::getSize()
{
    return SIZE;
}

java::lang::String* poi::ss::formula::ptg::NumberPtg::toFormulaString()
{
    return ::poi::ss::util::NumberToTextConverter::toText(field_1_value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::NumberPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.NumberPtg", 39);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::NumberPtg::getClass0()
{
    return class_();
}


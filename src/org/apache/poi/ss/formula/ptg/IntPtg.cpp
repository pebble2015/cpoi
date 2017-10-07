// Generated from /POI/java/org/apache/poi/ss/formula/ptg/IntPtg.java
#include <org/apache/poi/ss/formula/ptg/IntPtg.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::IntPtg::IntPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::IntPtg::IntPtg(::org::apache::poi::util::LittleEndianInput* in) 
    : IntPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::ss::formula::ptg::IntPtg::IntPtg(int32_t value) 
    : IntPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

constexpr int32_t org::apache::poi::ss::formula::ptg::IntPtg::MIN_VALUE;

constexpr int32_t org::apache::poi::ss::formula::ptg::IntPtg::MAX_VALUE;

bool org::apache::poi::ss::formula::ptg::IntPtg::isInRange(int32_t i)
{
    clinit();
    return i >= MIN_VALUE && i <= MAX_VALUE;
}

constexpr int32_t org::apache::poi::ss::formula::ptg::IntPtg::SIZE;

constexpr int8_t org::apache::poi::ss::formula::ptg::IntPtg::sid;

void org::apache::poi::ss::formula::ptg::IntPtg::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    ctor(npc(in)->readUShort());
}

void org::apache::poi::ss::formula::ptg::IntPtg::ctor(int32_t value)
{
    super::ctor();
    if(!isInRange(value)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"value is out of range: "_j)->append(value)->toString());
    }
    field_1_value = value;
}

int32_t org::apache::poi::ss::formula::ptg::IntPtg::getValue()
{
    return field_1_value;
}

void org::apache::poi::ss::formula::ptg::IntPtg::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeShort(getValue());
}

int32_t org::apache::poi::ss::formula::ptg::IntPtg::getSize()
{
    return SIZE;
}

java::lang::String* org::apache::poi::ss::formula::ptg::IntPtg::toFormulaString()
{
    return ::java::lang::String::valueOf(getValue());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::IntPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.IntPtg", 36);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::IntPtg::getClass0()
{
    return class_();
}


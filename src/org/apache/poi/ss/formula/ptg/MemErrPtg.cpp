// Generated from /POI/java/org/apache/poi/ss/formula/ptg/MemErrPtg.java
#include <org/apache/poi/ss/formula/ptg/MemErrPtg.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::MemErrPtg::MemErrPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::MemErrPtg::MemErrPtg(::org::apache::poi::util::LittleEndianInput* in) 
    : MemErrPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::ss::formula::ptg::MemErrPtg::sid;

constexpr int32_t org::apache::poi::ss::formula::ptg::MemErrPtg::SIZE;

void org::apache::poi::ss::formula::ptg::MemErrPtg::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    field_1_reserved = npc(in)->readInt();
    field_2_subex_len = npc(in)->readShort();
}

void org::apache::poi::ss::formula::ptg::MemErrPtg::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeInt(field_1_reserved);
    npc(out)->writeShort(field_2_subex_len);
}

int32_t org::apache::poi::ss::formula::ptg::MemErrPtg::getSize()
{
    return SIZE;
}

java::lang::String* org::apache::poi::ss::formula::ptg::MemErrPtg::toFormulaString()
{
    return u"ERR#"_j;
}

int8_t org::apache::poi::ss::formula::ptg::MemErrPtg::getDefaultOperandClass()
{
    return Ptg::CLASS_VALUE;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::MemErrPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.MemErrPtg", 39);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::MemErrPtg::getClass0()
{
    return class_();
}


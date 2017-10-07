// Generated from /POI/java/org/apache/poi/ss/formula/ptg/MemAreaPtg.java
#include <org/apache/poi/ss/formula/ptg/MemAreaPtg.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::MemAreaPtg::MemAreaPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::MemAreaPtg::MemAreaPtg(int32_t subexLen) 
    : MemAreaPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(subexLen);
}

org::apache::poi::ss::formula::ptg::MemAreaPtg::MemAreaPtg(::org::apache::poi::util::LittleEndianInput* in) 
    : MemAreaPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::ss::formula::ptg::MemAreaPtg::sid;

constexpr int32_t org::apache::poi::ss::formula::ptg::MemAreaPtg::SIZE;

void org::apache::poi::ss::formula::ptg::MemAreaPtg::ctor(int32_t subexLen)
{
    super::ctor();
    field_1_reserved = 0;
    field_2_subex_len = subexLen;
}

void org::apache::poi::ss::formula::ptg::MemAreaPtg::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    field_1_reserved = npc(in)->readInt();
    field_2_subex_len = npc(in)->readShort();
}

int32_t org::apache::poi::ss::formula::ptg::MemAreaPtg::getLenRefSubexpression()
{
    return field_2_subex_len;
}

void org::apache::poi::ss::formula::ptg::MemAreaPtg::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeInt(field_1_reserved);
    npc(out)->writeShort(field_2_subex_len);
}

int32_t org::apache::poi::ss::formula::ptg::MemAreaPtg::getSize()
{
    return SIZE;
}

java::lang::String* org::apache::poi::ss::formula::ptg::MemAreaPtg::toFormulaString()
{
    return u""_j;
}

int8_t org::apache::poi::ss::formula::ptg::MemAreaPtg::getDefaultOperandClass()
{
    return Ptg::CLASS_VALUE;
}

java::lang::String* org::apache::poi::ss::formula::ptg::MemAreaPtg::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" [len="_j);
    npc(sb)->append(field_2_subex_len);
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::MemAreaPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.MemAreaPtg", 40);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::MemAreaPtg::getClass0()
{
    return class_();
}


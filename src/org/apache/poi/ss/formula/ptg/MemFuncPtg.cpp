// Generated from /POI/java/org/apache/poi/ss/formula/ptg/MemFuncPtg.java
#include <org/apache/poi/ss/formula/ptg/MemFuncPtg.hpp>

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

org::apache::poi::ss::formula::ptg::MemFuncPtg::MemFuncPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::MemFuncPtg::MemFuncPtg(::org::apache::poi::util::LittleEndianInput* in) 
    : MemFuncPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::ss::formula::ptg::MemFuncPtg::MemFuncPtg(int32_t subExprLen) 
    : MemFuncPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(subExprLen);
}

constexpr int8_t org::apache::poi::ss::formula::ptg::MemFuncPtg::sid;

void org::apache::poi::ss::formula::ptg::MemFuncPtg::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    ctor(npc(in)->readUShort());
}

void org::apache::poi::ss::formula::ptg::MemFuncPtg::ctor(int32_t subExprLen)
{
    super::ctor();
    field_1_len_ref_subexpression = subExprLen;
}

int32_t org::apache::poi::ss::formula::ptg::MemFuncPtg::getSize()
{
    return 3;
}

void org::apache::poi::ss::formula::ptg::MemFuncPtg::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeShort(field_1_len_ref_subexpression);
}

java::lang::String* org::apache::poi::ss::formula::ptg::MemFuncPtg::toFormulaString()
{
    return u""_j;
}

int8_t org::apache::poi::ss::formula::ptg::MemFuncPtg::getDefaultOperandClass()
{
    return Ptg::CLASS_REF;
}

int32_t org::apache::poi::ss::formula::ptg::MemFuncPtg::getNumberOfOperands()
{
    return field_1_len_ref_subexpression;
}

int32_t org::apache::poi::ss::formula::ptg::MemFuncPtg::getLenRefSubexpression()
{
    return field_1_len_ref_subexpression;
}

java::lang::String* org::apache::poi::ss::formula::ptg::MemFuncPtg::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" [len="_j);
    npc(sb)->append(field_1_len_ref_subexpression);
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::MemFuncPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.MemFuncPtg", 40);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::MemFuncPtg::getClass0()
{
    return class_();
}


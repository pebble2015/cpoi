// Generated from /POI/java/org/apache/poi/ss/formula/ptg/NamePtg.java
#include <org/apache/poi/ss/formula/ptg/NamePtg.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/FormulaRenderingWorkbook.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::NamePtg::NamePtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::NamePtg::NamePtg(int32_t nameIndex) 
    : NamePtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(nameIndex);
}

org::apache::poi::ss::formula::ptg::NamePtg::NamePtg(::org::apache::poi::util::LittleEndianInput* in) 
    : NamePtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::ss::formula::ptg::NamePtg::sid;

constexpr int32_t org::apache::poi::ss::formula::ptg::NamePtg::SIZE;

void org::apache::poi::ss::formula::ptg::NamePtg::ctor(int32_t nameIndex)
{
    super::ctor();
    field_1_label_index = int32_t(1) + nameIndex;
}

void org::apache::poi::ss::formula::ptg::NamePtg::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    field_1_label_index = npc(in)->readUShort();
    field_2_zero = npc(in)->readShort();
}

int32_t org::apache::poi::ss::formula::ptg::NamePtg::getIndex()
{
    return field_1_label_index - int32_t(1);
}

void org::apache::poi::ss::formula::ptg::NamePtg::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeShort(field_1_label_index);
    npc(out)->writeShort(field_2_zero);
}

int32_t org::apache::poi::ss::formula::ptg::NamePtg::getSize()
{
    return SIZE;
}

java::lang::String* org::apache::poi::ss::formula::ptg::NamePtg::toFormulaString(::org::apache::poi::ss::formula::FormulaRenderingWorkbook* book)
{
    return npc(book)->getNameText(this);
}

java::lang::String* org::apache::poi::ss::formula::ptg::NamePtg::toFormulaString()
{
    throw new ::java::lang::RuntimeException(u"3D references need a workbook to determine formula text"_j);
}

int8_t org::apache::poi::ss::formula::ptg::NamePtg::getDefaultOperandClass()
{
    return Ptg::CLASS_REF;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::NamePtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.NamePtg", 37);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::NamePtg::getClass0()
{
    return class_();
}


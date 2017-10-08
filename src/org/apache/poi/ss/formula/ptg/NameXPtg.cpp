// Generated from /POI/java/org/apache/poi/ss/formula/ptg/NameXPtg.java
#include <org/apache/poi/ss/formula/ptg/NameXPtg.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
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

poi::ss::formula::ptg::NameXPtg::NameXPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::NameXPtg::NameXPtg(int32_t sheetRefIndex, int32_t nameNumber, int32_t reserved) 
    : NameXPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheetRefIndex,nameNumber,reserved);
}

poi::ss::formula::ptg::NameXPtg::NameXPtg(int32_t sheetRefIndex, int32_t nameIndex) 
    : NameXPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheetRefIndex,nameIndex);
}

poi::ss::formula::ptg::NameXPtg::NameXPtg(::poi::util::LittleEndianInput* in) 
    : NameXPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::ss::formula::ptg::NameXPtg::sid;

constexpr int32_t poi::ss::formula::ptg::NameXPtg::SIZE;

void poi::ss::formula::ptg::NameXPtg::ctor(int32_t sheetRefIndex, int32_t nameNumber, int32_t reserved)
{
    super::ctor();
    _sheetRefIndex = sheetRefIndex;
    _nameNumber = nameNumber;
    _reserved = reserved;
}

void poi::ss::formula::ptg::NameXPtg::ctor(int32_t sheetRefIndex, int32_t nameIndex)
{
    ctor(sheetRefIndex, nameIndex + int32_t(1), int32_t(0));
}

void poi::ss::formula::ptg::NameXPtg::ctor(::poi::util::LittleEndianInput* in)
{
    ctor(npc(in)->readUShort(), npc(in)->readUShort(), npc(in)->readUShort());
}

void poi::ss::formula::ptg::NameXPtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeShort(_sheetRefIndex);
    npc(out)->writeShort(_nameNumber);
    npc(out)->writeShort(_reserved);
}

int32_t poi::ss::formula::ptg::NameXPtg::getSize()
{
    return SIZE;
}

java::lang::String* poi::ss::formula::ptg::NameXPtg::toFormulaString(::poi::ss::formula::FormulaRenderingWorkbook* book)
{
    return npc(book)->resolveNameXText(this);
}

java::lang::String* poi::ss::formula::ptg::NameXPtg::toFormulaString()
{
    throw new ::java::lang::RuntimeException(u"3D references need a workbook to determine formula text"_j);
}

java::lang::String* poi::ss::formula::ptg::NameXPtg::toString()
{
    auto retValue = ::java::lang::StringBuilder().append(u"NameXPtg:[sheetRefIndex:"_j)->append(_sheetRefIndex)
        ->append(u" , nameNumber:"_j)
        ->append(_nameNumber)
        ->append(u"]"_j)->toString();
    return retValue;
}

int8_t poi::ss::formula::ptg::NameXPtg::getDefaultOperandClass()
{
    return Ptg::CLASS_VALUE;
}

int32_t poi::ss::formula::ptg::NameXPtg::getSheetRefIndex()
{
    return _sheetRefIndex;
}

int32_t poi::ss::formula::ptg::NameXPtg::getNameIndex()
{
    return _nameNumber - int32_t(1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::NameXPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.NameXPtg", 38);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::NameXPtg::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Ref2DPtgBase.java
#include <org/apache/poi/ss/formula/ptg/Ref2DPtgBase.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::ptg::Ref2DPtgBase::Ref2DPtgBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::Ref2DPtgBase::Ref2DPtgBase(int32_t row, int32_t column, bool isRowRelative, bool isColumnRelative) 
    : Ref2DPtgBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(row,column,isRowRelative,isColumnRelative);
}

poi::ss::formula::ptg::Ref2DPtgBase::Ref2DPtgBase(::poi::util::LittleEndianInput* in) 
    : Ref2DPtgBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::ss::formula::ptg::Ref2DPtgBase::Ref2DPtgBase(::poi::ss::util::CellReference* cr) 
    : Ref2DPtgBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(cr);
}

constexpr int32_t poi::ss::formula::ptg::Ref2DPtgBase::SIZE;

void poi::ss::formula::ptg::Ref2DPtgBase::ctor(int32_t row, int32_t column, bool isRowRelative, bool isColumnRelative)
{
    super::ctor();
    setRow(row);
    setColumn(column);
    setRowRelative(isRowRelative);
    setColRelative(isColumnRelative);
}

void poi::ss::formula::ptg::Ref2DPtgBase::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    readCoordinates(in);
}

void poi::ss::formula::ptg::Ref2DPtgBase::ctor(::poi::ss::util::CellReference* cr)
{
    super::ctor(cr);
}

void poi::ss::formula::ptg::Ref2DPtgBase::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(getSid() + getPtgClass());
    writeCoordinates(out);
}

java::lang::String* poi::ss::formula::ptg::Ref2DPtgBase::toFormulaString()
{
    return formatReferenceAsString();
}

int32_t poi::ss::formula::ptg::Ref2DPtgBase::getSize()
{
    return SIZE;
}

java::lang::String* poi::ss::formula::ptg::Ref2DPtgBase::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(npc(getClass())->getName());
    npc(sb)->append(u" ["_j);
    npc(sb)->append(formatReferenceAsString());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::Ref2DPtgBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.Ref2DPtgBase", 42);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::Ref2DPtgBase::getClass0()
{
    return class_();
}


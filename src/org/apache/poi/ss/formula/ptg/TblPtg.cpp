// Generated from /POI/java/org/apache/poi/ss/formula/ptg/TblPtg.java
#include <org/apache/poi/ss/formula/ptg/TblPtg.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::ptg::TblPtg::TblPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::TblPtg::TblPtg(::poi::util::LittleEndianInput* in) 
    : TblPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t poi::ss::formula::ptg::TblPtg::SIZE;

constexpr int16_t poi::ss::formula::ptg::TblPtg::sid;

void poi::ss::formula::ptg::TblPtg::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    field_1_first_row = npc(in)->readUShort();
    field_2_first_col = npc(in)->readUShort();
}

void poi::ss::formula::ptg::TblPtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeShort(field_1_first_row);
    npc(out)->writeShort(field_2_first_col);
}

int32_t poi::ss::formula::ptg::TblPtg::getSize()
{
    return SIZE;
}

int32_t poi::ss::formula::ptg::TblPtg::getRow()
{
    return field_1_first_row;
}

int32_t poi::ss::formula::ptg::TblPtg::getColumn()
{
    return field_2_first_col;
}

java::lang::String* poi::ss::formula::ptg::TblPtg::toFormulaString()
{
    throw new ::java::lang::RuntimeException(u"Table and Arrays are not yet supported"_j);
}

java::lang::String* poi::ss::formula::ptg::TblPtg::toString()
{
    auto buffer = new ::java::lang::StringBuffer(u"[Data Table - Parent cell is an interior cell in a data table]\n"_j);
    npc(npc(npc(buffer)->append(u"top left row = "_j))->append(getRow()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"top left col = "_j))->append(getColumn()))->append(u"\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::TblPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.TblPtg", 36);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::TblPtg::getClass0()
{
    return class_();
}


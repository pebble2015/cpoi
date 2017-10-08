// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ExpPtg.java
#include <org/apache/poi/ss/formula/ptg/ExpPtg.hpp>

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

poi::ss::formula::ptg::ExpPtg::ExpPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::ExpPtg::ExpPtg(::poi::util::LittleEndianInput* in) 
    : ExpPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::ss::formula::ptg::ExpPtg::ExpPtg(int32_t firstRow, int32_t firstCol) 
    : ExpPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstRow,firstCol);
}

constexpr int32_t poi::ss::formula::ptg::ExpPtg::SIZE;

constexpr int16_t poi::ss::formula::ptg::ExpPtg::sid;

void poi::ss::formula::ptg::ExpPtg::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    field_1_first_row = npc(in)->readShort();
    field_2_first_col = npc(in)->readShort();
}

void poi::ss::formula::ptg::ExpPtg::ctor(int32_t firstRow, int32_t firstCol)
{
    super::ctor();
    this->field_1_first_row = firstRow;
    this->field_2_first_col = firstCol;
}

void poi::ss::formula::ptg::ExpPtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeShort(field_1_first_row);
    npc(out)->writeShort(field_2_first_col);
}

int32_t poi::ss::formula::ptg::ExpPtg::getSize()
{
    return SIZE;
}

int32_t poi::ss::formula::ptg::ExpPtg::getRow()
{
    return field_1_first_row;
}

int32_t poi::ss::formula::ptg::ExpPtg::getColumn()
{
    return field_2_first_col;
}

java::lang::String* poi::ss::formula::ptg::ExpPtg::toFormulaString()
{
    throw new ::java::lang::RuntimeException(u"Coding Error: Expected ExpPtg to be converted from Shared to Non-Shared Formula by ValueRecordsAggregate, but it wasn't"_j);
}

java::lang::String* poi::ss::formula::ptg::ExpPtg::toString()
{
    auto buffer = new ::java::lang::StringBuffer(u"[Array Formula or Shared Formula]\n"_j);
    npc(npc(npc(buffer)->append(u"row = "_j))->append(getRow()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"col = "_j))->append(getColumn()))->append(u"\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::ExpPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.ExpPtg", 36);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::ExpPtg::getClass0()
{
    return class_();
}


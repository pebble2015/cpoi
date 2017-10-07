// Generated from /POI/java/org/apache/poi/ss/formula/ptg/RefPtgBase.java
#include <org/apache/poi/ss/formula/ptg/RefPtgBase.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::RefPtgBase::RefPtgBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::RefPtgBase::RefPtgBase() 
    : RefPtgBase(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::ptg::RefPtgBase::RefPtgBase(::org::apache::poi::ss::util::CellReference* c) 
    : RefPtgBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(c);
}

org::apache::poi::util::BitField*& org::apache::poi::ss::formula::ptg::RefPtgBase::rowRelative()
{
    clinit();
    return rowRelative_;
}
org::apache::poi::util::BitField* org::apache::poi::ss::formula::ptg::RefPtgBase::rowRelative_;

org::apache::poi::util::BitField*& org::apache::poi::ss::formula::ptg::RefPtgBase::colRelative()
{
    clinit();
    return colRelative_;
}
org::apache::poi::util::BitField* org::apache::poi::ss::formula::ptg::RefPtgBase::colRelative_;

org::apache::poi::util::BitField*& org::apache::poi::ss::formula::ptg::RefPtgBase::column()
{
    clinit();
    return column_;
}
org::apache::poi::util::BitField* org::apache::poi::ss::formula::ptg::RefPtgBase::column_;

void org::apache::poi::ss::formula::ptg::RefPtgBase::ctor()
{
    super::ctor();
}

void org::apache::poi::ss::formula::ptg::RefPtgBase::ctor(::org::apache::poi::ss::util::CellReference* c)
{
    super::ctor();
    setRow(npc(c)->getRow());
    setColumn(npc(c)->getCol());
    setColRelative(!npc(c)->isColAbsolute());
    setRowRelative(!npc(c)->isRowAbsolute());
}

void org::apache::poi::ss::formula::ptg::RefPtgBase::readCoordinates(::org::apache::poi::util::LittleEndianInput* in)
{
    field_1_row = npc(in)->readUShort();
    field_2_col = npc(in)->readUShort();
}

void org::apache::poi::ss::formula::ptg::RefPtgBase::writeCoordinates(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_row);
    npc(out)->writeShort(field_2_col);
}

void org::apache::poi::ss::formula::ptg::RefPtgBase::setRow(int32_t rowIndex)
{
    field_1_row = rowIndex;
}

int32_t org::apache::poi::ss::formula::ptg::RefPtgBase::getRow()
{
    return field_1_row;
}

bool org::apache::poi::ss::formula::ptg::RefPtgBase::isRowRelative()
{
    return npc(rowRelative_)->isSet(field_2_col);
}

void org::apache::poi::ss::formula::ptg::RefPtgBase::setRowRelative(bool rel)
{
    field_2_col = npc(rowRelative_)->setBoolean(field_2_col, rel);
}

bool org::apache::poi::ss::formula::ptg::RefPtgBase::isColRelative()
{
    return npc(colRelative_)->isSet(field_2_col);
}

void org::apache::poi::ss::formula::ptg::RefPtgBase::setColRelative(bool rel)
{
    field_2_col = npc(colRelative_)->setBoolean(field_2_col, rel);
}

void org::apache::poi::ss::formula::ptg::RefPtgBase::setColumn(int32_t col)
{
    field_2_col = npc(column_)->setValue(field_2_col, col);
}

int32_t org::apache::poi::ss::formula::ptg::RefPtgBase::getColumn()
{
    return npc(column_)->getValue(field_2_col);
}

java::lang::String* org::apache::poi::ss::formula::ptg::RefPtgBase::formatReferenceAsString()
{
    auto cr = new ::org::apache::poi::ss::util::CellReference(getRow(), getColumn(), !isRowRelative(), !isColRelative());
    return npc(cr)->formatAsString();
}

int8_t org::apache::poi::ss::formula::ptg::RefPtgBase::getDefaultOperandClass()
{
    return Ptg::CLASS_REF;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::RefPtgBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.RefPtgBase", 40);
    return c;
}

void org::apache::poi::ss::formula::ptg::RefPtgBase::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        rowRelative_ = ::org::apache::poi::util::BitFieldFactory::getInstance(32768);
        colRelative_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16384);
        column_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16383);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::ptg::RefPtgBase::getClass0()
{
    return class_();
}


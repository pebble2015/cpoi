// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AreaPtgBase.java
#include <org/apache/poi/ss/formula/ptg/AreaPtgBase.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/util/AreaReference.hpp>
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

org::apache::poi::ss::formula::ptg::AreaPtgBase::AreaPtgBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::AreaPtgBase::AreaPtgBase() 
    : AreaPtgBase(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::ptg::AreaPtgBase::AreaPtgBase(::org::apache::poi::ss::util::AreaReference* ar) 
    : AreaPtgBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(ar);
}

org::apache::poi::ss::formula::ptg::AreaPtgBase::AreaPtgBase(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative) 
    : AreaPtgBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstRow,lastRow,firstColumn,lastColumn,firstRowRelative,lastRowRelative,firstColRelative,lastColRelative);
}

java::lang::RuntimeException* org::apache::poi::ss::formula::ptg::AreaPtgBase::notImplemented()
{
    return new ::java::lang::RuntimeException(u"Coding Error: This method should never be called. This ptg should be converted"_j);
}

org::apache::poi::util::BitField*& org::apache::poi::ss::formula::ptg::AreaPtgBase::rowRelative()
{
    clinit();
    return rowRelative_;
}
org::apache::poi::util::BitField* org::apache::poi::ss::formula::ptg::AreaPtgBase::rowRelative_;

org::apache::poi::util::BitField*& org::apache::poi::ss::formula::ptg::AreaPtgBase::colRelative()
{
    clinit();
    return colRelative_;
}
org::apache::poi::util::BitField* org::apache::poi::ss::formula::ptg::AreaPtgBase::colRelative_;

org::apache::poi::util::BitField*& org::apache::poi::ss::formula::ptg::AreaPtgBase::columnMask()
{
    clinit();
    return columnMask_;
}
org::apache::poi::util::BitField* org::apache::poi::ss::formula::ptg::AreaPtgBase::columnMask_;

void org::apache::poi::ss::formula::ptg::AreaPtgBase::ctor()
{
    super::ctor();
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::ctor(::org::apache::poi::ss::util::AreaReference* ar)
{
    super::ctor();
    auto firstCell = npc(ar)->getFirstCell();
    auto lastCell = npc(ar)->getLastCell();
    setFirstRow(npc(firstCell)->getRow());
    setFirstColumn(npc(firstCell)->getCol() == -int32_t(1) ? static_cast< int16_t >(int32_t(0)) : npc(firstCell)->getCol());
    setLastRow(npc(lastCell)->getRow());
    setLastColumn(npc(lastCell)->getCol() == -int32_t(1) ? static_cast< int16_t >(int32_t(255)) : npc(lastCell)->getCol());
    setFirstColRelative(!npc(firstCell)->isColAbsolute());
    setLastColRelative(!npc(lastCell)->isColAbsolute());
    setFirstRowRelative(!npc(firstCell)->isRowAbsolute());
    setLastRowRelative(!npc(lastCell)->isRowAbsolute());
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::ctor(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative)
{
    super::ctor();
    if(lastRow >= firstRow) {
        setFirstRow(firstRow);
        setLastRow(lastRow);
        setFirstRowRelative(firstRowRelative);
        setLastRowRelative(lastRowRelative);
    } else {
        setFirstRow(lastRow);
        setLastRow(firstRow);
        setFirstRowRelative(lastRowRelative);
        setLastRowRelative(firstRowRelative);
    }
    if(lastColumn >= firstColumn) {
        setFirstColumn(firstColumn);
        setLastColumn(lastColumn);
        setFirstColRelative(firstColRelative);
        setLastColRelative(lastColRelative);
    } else {
        setFirstColumn(lastColumn);
        setLastColumn(firstColumn);
        setFirstColRelative(lastColRelative);
        setLastColRelative(firstColRelative);
    }
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::sortTopLeftToBottomRight()
{
    if(getFirstRow() > getLastRow()) {
        auto const firstRow = getFirstRow();
        auto const firstRowRel = isFirstRowRelative();
        setFirstRow(getLastRow());
        setFirstRowRelative(isLastRowRelative());
        setLastRow(firstRow);
        setLastRowRelative(firstRowRel);
    }
    if(getFirstColumn() > getLastColumn()) {
        auto const firstCol = getFirstColumn();
        auto const firstColRel = isFirstColRelative();
        setFirstColumn(getLastColumn());
        setFirstColRelative(isLastColRelative());
        setLastColumn(firstCol);
        setLastColRelative(firstColRel);
    }
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::readCoordinates(::org::apache::poi::util::LittleEndianInput* in)
{
    field_1_first_row = npc(in)->readUShort();
    field_2_last_row = npc(in)->readUShort();
    field_3_first_column = npc(in)->readUShort();
    field_4_last_column = npc(in)->readUShort();
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::writeCoordinates(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_first_row);
    npc(out)->writeShort(field_2_last_row);
    npc(out)->writeShort(field_3_first_column);
    npc(out)->writeShort(field_4_last_column);
}

int32_t org::apache::poi::ss::formula::ptg::AreaPtgBase::getFirstRow()
{
    return field_1_first_row;
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::setFirstRow(int32_t rowIx)
{
    field_1_first_row = rowIx;
}

int32_t org::apache::poi::ss::formula::ptg::AreaPtgBase::getLastRow()
{
    return field_2_last_row;
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::setLastRow(int32_t rowIx)
{
    field_2_last_row = rowIx;
}

int32_t org::apache::poi::ss::formula::ptg::AreaPtgBase::getFirstColumn()
{
    return npc(columnMask_)->getValue(field_3_first_column);
}

int16_t org::apache::poi::ss::formula::ptg::AreaPtgBase::getFirstColumnRaw()
{
    return static_cast< int16_t >(field_3_first_column);
}

bool org::apache::poi::ss::formula::ptg::AreaPtgBase::isFirstRowRelative()
{
    return npc(rowRelative_)->isSet(field_3_first_column);
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::setFirstRowRelative(bool rel)
{
    field_3_first_column = npc(rowRelative_)->setBoolean(field_3_first_column, rel);
}

bool org::apache::poi::ss::formula::ptg::AreaPtgBase::isFirstColRelative()
{
    return npc(colRelative_)->isSet(field_3_first_column);
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::setFirstColRelative(bool rel)
{
    field_3_first_column = npc(colRelative_)->setBoolean(field_3_first_column, rel);
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::setFirstColumn(int32_t colIx)
{
    field_3_first_column = npc(columnMask_)->setValue(field_3_first_column, colIx);
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::setFirstColumnRaw(int32_t column)
{
    field_3_first_column = column;
}

int32_t org::apache::poi::ss::formula::ptg::AreaPtgBase::getLastColumn()
{
    return npc(columnMask_)->getValue(field_4_last_column);
}

int16_t org::apache::poi::ss::formula::ptg::AreaPtgBase::getLastColumnRaw()
{
    return static_cast< int16_t >(field_4_last_column);
}

bool org::apache::poi::ss::formula::ptg::AreaPtgBase::isLastRowRelative()
{
    return npc(rowRelative_)->isSet(field_4_last_column);
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::setLastRowRelative(bool rel)
{
    field_4_last_column = npc(rowRelative_)->setBoolean(field_4_last_column, rel);
}

bool org::apache::poi::ss::formula::ptg::AreaPtgBase::isLastColRelative()
{
    return npc(colRelative_)->isSet(field_4_last_column);
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::setLastColRelative(bool rel)
{
    field_4_last_column = npc(colRelative_)->setBoolean(field_4_last_column, rel);
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::setLastColumn(int32_t colIx)
{
    field_4_last_column = npc(columnMask_)->setValue(field_4_last_column, colIx);
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::setLastColumnRaw(int16_t column)
{
    field_4_last_column = column;
}

java::lang::String* org::apache::poi::ss::formula::ptg::AreaPtgBase::formatReferenceAsString()
{
    auto topLeft = new ::org::apache::poi::ss::util::CellReference(getFirstRow(), getFirstColumn(), !isFirstRowRelative(), !isFirstColRelative());
    auto botRight = new ::org::apache::poi::ss::util::CellReference(getLastRow(), getLastColumn(), !isLastRowRelative(), !isLastColRelative());
    if(::org::apache::poi::ss::util::AreaReference::isWholeColumnReference(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97, topLeft, botRight)) {
        return (new ::org::apache::poi::ss::util::AreaReference(topLeft, botRight, ::org::apache::poi::ss::SpreadsheetVersion::EXCEL97))->formatAsString();
    }
    return ::java::lang::StringBuilder().append(npc(topLeft)->formatAsString())->append(u":"_j)
        ->append(npc(botRight)->formatAsString())->toString();
}

java::lang::String* org::apache::poi::ss::formula::ptg::AreaPtgBase::toFormulaString()
{
    return formatReferenceAsString();
}

int8_t org::apache::poi::ss::formula::ptg::AreaPtgBase::getDefaultOperandClass()
{
    return Ptg::CLASS_REF;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::AreaPtgBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.AreaPtgBase", 41);
    return c;
}

void org::apache::poi::ss::formula::ptg::AreaPtgBase::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        rowRelative_ = ::org::apache::poi::util::BitFieldFactory::getInstance(32768);
        colRelative_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16384);
        columnMask_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16383);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::ptg::AreaPtgBase::getClass0()
{
    return class_();
}


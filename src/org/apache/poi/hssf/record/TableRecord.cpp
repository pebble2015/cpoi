// Generated from /POI/java/org/apache/poi/hssf/record/TableRecord.java
#include <org/apache/poi/hssf/record/TableRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/util/CellRangeAddress8Bit.hpp>
#include <org/apache/poi/hssf/util/CellReference.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::TableRecord::TableRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::TableRecord::TableRecord(RecordInputStream* in) 
    : TableRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::hssf::record::TableRecord::TableRecord(::poi::hssf::util::CellRangeAddress8Bit* range) 
    : TableRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(range);
}

constexpr int16_t poi::hssf::record::TableRecord::sid;

poi::util::BitField*& poi::hssf::record::TableRecord::alwaysCalc()
{
    clinit();
    return alwaysCalc_;
}
poi::util::BitField* poi::hssf::record::TableRecord::alwaysCalc_;

poi::util::BitField*& poi::hssf::record::TableRecord::calcOnOpen()
{
    clinit();
    return calcOnOpen_;
}
poi::util::BitField* poi::hssf::record::TableRecord::calcOnOpen_;

poi::util::BitField*& poi::hssf::record::TableRecord::rowOrColInpCell()
{
    clinit();
    return rowOrColInpCell_;
}
poi::util::BitField* poi::hssf::record::TableRecord::rowOrColInpCell_;

poi::util::BitField*& poi::hssf::record::TableRecord::oneOrTwoVar()
{
    clinit();
    return oneOrTwoVar_;
}
poi::util::BitField* poi::hssf::record::TableRecord::oneOrTwoVar_;

poi::util::BitField*& poi::hssf::record::TableRecord::rowDeleted()
{
    clinit();
    return rowDeleted_;
}
poi::util::BitField* poi::hssf::record::TableRecord::rowDeleted_;

poi::util::BitField*& poi::hssf::record::TableRecord::colDeleted()
{
    clinit();
    return colDeleted_;
}
poi::util::BitField* poi::hssf::record::TableRecord::colDeleted_;

void poi::hssf::record::TableRecord::ctor(RecordInputStream* in)
{
    super::ctor(static_cast< ::poi::util::LittleEndianInput* >(in));
    field_5_flags = npc(in)->readByte();
    field_6_res = npc(in)->readByte();
    field_7_rowInputRow = npc(in)->readShort();
    field_8_colInputRow = npc(in)->readShort();
    field_9_rowInputCol = npc(in)->readShort();
    field_10_colInputCol = npc(in)->readShort();
}

void poi::hssf::record::TableRecord::ctor(::poi::hssf::util::CellRangeAddress8Bit* range)
{
    super::ctor(range);
    field_6_res = 0;
}

int32_t poi::hssf::record::TableRecord::getFlags()
{
    return field_5_flags;
}

void poi::hssf::record::TableRecord::setFlags(int32_t flags)
{
    field_5_flags = flags;
}

int32_t poi::hssf::record::TableRecord::getRowInputRow()
{
    return field_7_rowInputRow;
}

void poi::hssf::record::TableRecord::setRowInputRow(int32_t rowInputRow)
{
    field_7_rowInputRow = rowInputRow;
}

int32_t poi::hssf::record::TableRecord::getColInputRow()
{
    return field_8_colInputRow;
}

void poi::hssf::record::TableRecord::setColInputRow(int32_t colInputRow)
{
    field_8_colInputRow = colInputRow;
}

int32_t poi::hssf::record::TableRecord::getRowInputCol()
{
    return field_9_rowInputCol;
}

void poi::hssf::record::TableRecord::setRowInputCol(int32_t rowInputCol)
{
    field_9_rowInputCol = rowInputCol;
}

int32_t poi::hssf::record::TableRecord::getColInputCol()
{
    return field_10_colInputCol;
}

void poi::hssf::record::TableRecord::setColInputCol(int32_t colInputCol)
{
    field_10_colInputCol = colInputCol;
}

bool poi::hssf::record::TableRecord::isAlwaysCalc()
{
    return npc(alwaysCalc_)->isSet(field_5_flags);
}

void poi::hssf::record::TableRecord::setAlwaysCalc(bool flag)
{
    field_5_flags = npc(alwaysCalc_)->setBoolean(field_5_flags, flag);
}

bool poi::hssf::record::TableRecord::isRowOrColInpCell()
{
    return npc(rowOrColInpCell_)->isSet(field_5_flags);
}

void poi::hssf::record::TableRecord::setRowOrColInpCell(bool flag)
{
    field_5_flags = npc(rowOrColInpCell_)->setBoolean(field_5_flags, flag);
}

bool poi::hssf::record::TableRecord::isOneNotTwoVar()
{
    return npc(oneOrTwoVar_)->isSet(field_5_flags);
}

void poi::hssf::record::TableRecord::setOneNotTwoVar(bool flag)
{
    field_5_flags = npc(oneOrTwoVar_)->setBoolean(field_5_flags, flag);
}

bool poi::hssf::record::TableRecord::isColDeleted()
{
    return npc(colDeleted_)->isSet(field_5_flags);
}

void poi::hssf::record::TableRecord::setColDeleted(bool flag)
{
    field_5_flags = npc(colDeleted_)->setBoolean(field_5_flags, flag);
}

bool poi::hssf::record::TableRecord::isRowDeleted()
{
    return npc(rowDeleted_)->isSet(field_5_flags);
}

void poi::hssf::record::TableRecord::setRowDeleted(bool flag)
{
    field_5_flags = npc(rowDeleted_)->setBoolean(field_5_flags, flag);
}

int16_t poi::hssf::record::TableRecord::getSid()
{
    return sid;
}

int32_t poi::hssf::record::TableRecord::getExtraDataSize()
{
    return int32_t(2) + int32_t(8);
}

void poi::hssf::record::TableRecord::serializeExtraData(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(field_5_flags);
    npc(out)->writeByte(field_6_res);
    npc(out)->writeShort(field_7_rowInputRow);
    npc(out)->writeShort(field_8_colInputRow);
    npc(out)->writeShort(field_9_rowInputCol);
    npc(out)->writeShort(field_10_colInputCol);
}

java::lang::String* poi::hssf::record::TableRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[TABLE]\n"_j);
    npc(npc(npc(buffer)->append(u"    .range    = "_j))->append(static_cast< ::java::lang::Object* >(getRange())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .flags    = "_j))->append(::poi::util::HexDump::byteToHex(field_5_flags)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .alwaysClc= "_j))->append(isAlwaysCalc()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .reserved = "_j))->append(::poi::util::HexDump::intToHex(field_6_res)))->append(u"\n"_j);
    auto crRowInput = cr(field_7_rowInputRow, field_8_colInputRow);
    auto crColInput = cr(field_9_rowInputCol, field_10_colInputCol);
    npc(npc(npc(buffer)->append(u"    .rowInput = "_j))->append(npc(crRowInput)->formatAsString()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .colInput = "_j))->append(npc(crColInput)->formatAsString()))->append(u"\n"_j);
    npc(buffer)->append(u"[/TABLE]\n"_j);
    return npc(buffer)->toString();
}

poi::hssf::util::CellReference* poi::hssf::record::TableRecord::cr(int32_t rowIx, int32_t colIxAndFlags)
{
    clinit();
    auto colIx = colIxAndFlags & int32_t(255);
    auto isRowAbs = (colIxAndFlags & int32_t(32768)) == 0;
    auto isColAbs = (colIxAndFlags & int32_t(16384)) == 0;
    return new ::poi::hssf::util::CellReference(rowIx, colIx, isRowAbs, isColAbs);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::TableRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.TableRecord", 38);
    return c;
}

void poi::hssf::record::TableRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        alwaysCalc_ = ::poi::util::BitFieldFactory::getInstance(1);
        calcOnOpen_ = ::poi::util::BitFieldFactory::getInstance(2);
        rowOrColInpCell_ = ::poi::util::BitFieldFactory::getInstance(4);
        oneOrTwoVar_ = ::poi::util::BitFieldFactory::getInstance(8);
        rowDeleted_ = ::poi::util::BitFieldFactory::getInstance(16);
        colDeleted_ = ::poi::util::BitFieldFactory::getInstance(32);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::record::TableRecord::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/hssf/record/CellRecord.java
#include <org/apache/poi/hssf/record/CellRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::CellRecord::CellRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::CellRecord::CellRecord() 
    : CellRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::CellRecord::CellRecord(RecordInputStream* in) 
    : CellRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void poi::hssf::record::CellRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::CellRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _rowIndex = npc(in)->readUShort();
    _columnIndex = npc(in)->readUShort();
    _formatIndex = npc(in)->readUShort();
}

void poi::hssf::record::CellRecord::setRow(int32_t row)
{
    _rowIndex = row;
}

void poi::hssf::record::CellRecord::setColumn(int16_t col)
{
    _columnIndex = col;
}

void poi::hssf::record::CellRecord::setXFIndex(int16_t xf)
{
    _formatIndex = xf;
}

int32_t poi::hssf::record::CellRecord::getRow()
{
    return _rowIndex;
}

int16_t poi::hssf::record::CellRecord::getColumn()
{
    return static_cast< int16_t >(_columnIndex);
}

int16_t poi::hssf::record::CellRecord::getXFIndex()
{
    return static_cast< int16_t >(_formatIndex);
}

java::lang::String* poi::hssf::record::CellRecord::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    auto recordName = getRecordName();
    npc(npc(npc(sb)->append(u"["_j))->append(recordName))->append(u"]\n"_j);
    npc(npc(npc(sb)->append(u"    .row    = "_j))->append(::poi::util::HexDump::shortToHex(getRow())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .col    = "_j))->append(::poi::util::HexDump::shortToHex(getColumn())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .xfindex= "_j))->append(::poi::util::HexDump::shortToHex(getXFIndex())))->append(u"\n"_j);
    appendValueText(sb);
    npc(sb)->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"[/"_j))->append(recordName))->append(u"]\n"_j);
    return npc(sb)->toString();
}

void poi::hssf::record::CellRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getRow());
    npc(out)->writeShort(getColumn());
    npc(out)->writeShort(getXFIndex());
    serializeValue(out);
}

int32_t poi::hssf::record::CellRecord::getDataSize()
{
    return int32_t(6) + getValueDataSize();
}

void poi::hssf::record::CellRecord::copyBaseFields(CellRecord* rec)
{
    npc(rec)->_rowIndex = _rowIndex;
    npc(rec)->_columnIndex = _columnIndex;
    npc(rec)->_formatIndex = _formatIndex;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::CellRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CellRecord", 37);
    return c;
}

int32_t poi::hssf::record::CellRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::CellRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::CellRecord::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/hssf/record/BlankRecord.java
#include <org/apache/poi/hssf/record/BlankRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
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

poi::hssf::record::BlankRecord::BlankRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::BlankRecord::BlankRecord() 
    : BlankRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::BlankRecord::BlankRecord(RecordInputStream* in) 
    : BlankRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::BlankRecord::sid;

void poi::hssf::record::BlankRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::BlankRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_row = npc(in)->readUShort();
    field_2_col = npc(in)->readShort();
    field_3_xf = npc(in)->readShort();
}

void poi::hssf::record::BlankRecord::setRow(int32_t row)
{
    field_1_row = row;
}

int32_t poi::hssf::record::BlankRecord::getRow()
{
    return field_1_row;
}

int16_t poi::hssf::record::BlankRecord::getColumn()
{
    return field_2_col;
}

void poi::hssf::record::BlankRecord::setXFIndex(int16_t xf)
{
    field_3_xf = xf;
}

int16_t poi::hssf::record::BlankRecord::getXFIndex()
{
    return field_3_xf;
}

void poi::hssf::record::BlankRecord::setColumn(int16_t col)
{
    field_2_col = col;
}

int16_t poi::hssf::record::BlankRecord::getSid()
{
    return sid;
}

java::lang::String* poi::hssf::record::BlankRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[BLANK]\n"_j);
    npc(npc(npc(sb)->append(u"    row= "_j))->append(::poi::util::HexDump::shortToHex(getRow())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    col= "_j))->append(::poi::util::HexDump::shortToHex(getColumn())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    xf = "_j))->append(::poi::util::HexDump::shortToHex(getXFIndex())))->append(u"\n"_j);
    npc(sb)->append(u"[/BLANK]\n"_j);
    return npc(sb)->toString();
}

void poi::hssf::record::BlankRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getRow());
    npc(out)->writeShort(getColumn());
    npc(out)->writeShort(getXFIndex());
}

int32_t poi::hssf::record::BlankRecord::getDataSize()
{
    return 6;
}

poi::hssf::record::BlankRecord* poi::hssf::record::BlankRecord::clone()
{
    auto rec = new BlankRecord();
    npc(rec)->field_1_row = field_1_row;
    npc(rec)->field_2_col = field_2_col;
    npc(rec)->field_3_xf = field_3_xf;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::BlankRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.BlankRecord", 38);
    return c;
}

int32_t poi::hssf::record::BlankRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::BlankRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::BlankRecord::getClass0()
{
    return class_();
}


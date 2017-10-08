// Generated from /POI/java/org/apache/poi/hssf/record/GutsRecord.java
#include <org/apache/poi/hssf/record/GutsRecord.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::GutsRecord::GutsRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::GutsRecord::GutsRecord() 
    : GutsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::GutsRecord::GutsRecord(RecordInputStream* in) 
    : GutsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::GutsRecord::sid;

void poi::hssf::record::GutsRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::GutsRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_left_row_gutter = npc(in)->readShort();
    field_2_top_col_gutter = npc(in)->readShort();
    field_3_row_level_max = npc(in)->readShort();
    field_4_col_level_max = npc(in)->readShort();
}

void poi::hssf::record::GutsRecord::setLeftRowGutter(int16_t gut)
{
    field_1_left_row_gutter = gut;
}

void poi::hssf::record::GutsRecord::setTopColGutter(int16_t gut)
{
    field_2_top_col_gutter = gut;
}

void poi::hssf::record::GutsRecord::setRowLevelMax(int16_t max)
{
    field_3_row_level_max = max;
}

void poi::hssf::record::GutsRecord::setColLevelMax(int16_t max)
{
    field_4_col_level_max = max;
}

int16_t poi::hssf::record::GutsRecord::getLeftRowGutter()
{
    return field_1_left_row_gutter;
}

int16_t poi::hssf::record::GutsRecord::getTopColGutter()
{
    return field_2_top_col_gutter;
}

int16_t poi::hssf::record::GutsRecord::getRowLevelMax()
{
    return field_3_row_level_max;
}

int16_t poi::hssf::record::GutsRecord::getColLevelMax()
{
    return field_4_col_level_max;
}

java::lang::String* poi::hssf::record::GutsRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[GUTS]\n"_j);
    npc(npc(npc(buffer)->append(u"    .leftgutter     = "_j))->append(::java::lang::Integer::toHexString(getLeftRowGutter())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .topgutter      = "_j))->append(::java::lang::Integer::toHexString(getTopColGutter())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .rowlevelmax    = "_j))->append(::java::lang::Integer::toHexString(getRowLevelMax())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .collevelmax    = "_j))->append(::java::lang::Integer::toHexString(getColLevelMax())))->append(u"\n"_j);
    npc(buffer)->append(u"[/GUTS]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::GutsRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getLeftRowGutter());
    npc(out)->writeShort(getTopColGutter());
    npc(out)->writeShort(getRowLevelMax());
    npc(out)->writeShort(getColLevelMax());
}

int32_t poi::hssf::record::GutsRecord::getDataSize()
{
    return 8;
}

int16_t poi::hssf::record::GutsRecord::getSid()
{
    return sid;
}

poi::hssf::record::GutsRecord* poi::hssf::record::GutsRecord::clone()
{
    auto rec = new GutsRecord();
    npc(rec)->field_1_left_row_gutter = field_1_left_row_gutter;
    npc(rec)->field_2_top_col_gutter = field_2_top_col_gutter;
    npc(rec)->field_3_row_level_max = field_3_row_level_max;
    npc(rec)->field_4_col_level_max = field_4_col_level_max;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::GutsRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.GutsRecord", 37);
    return c;
}

int32_t poi::hssf::record::GutsRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::GutsRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::GutsRecord::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/hssf/record/DBCellRecord.java
#include <org/apache/poi/hssf/record/DBCellRecord.hpp>

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

poi::hssf::record::DBCellRecord::DBCellRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::DBCellRecord::DBCellRecord(int32_t rowOffset, ::int16_tArray* cellOffsets) 
    : DBCellRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(rowOffset,cellOffsets);
}

poi::hssf::record::DBCellRecord::DBCellRecord(RecordInputStream* in) 
    : DBCellRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::DBCellRecord::sid;

constexpr int32_t poi::hssf::record::DBCellRecord::BLOCK_SIZE;

void poi::hssf::record::DBCellRecord::ctor(int32_t rowOffset, ::int16_tArray* cellOffsets)
{
    super::ctor();
    field_1_row_offset = rowOffset;
    field_2_cell_offsets = cellOffsets;
}

void poi::hssf::record::DBCellRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_row_offset = npc(in)->readUShort();
    auto size = npc(in)->remaining();
    field_2_cell_offsets = new ::int16_tArray(size / int32_t(2));
    for (auto i = int32_t(0); i < npc(field_2_cell_offsets)->length; i++) {
        (*field_2_cell_offsets)[i] = npc(in)->readShort();
    }
}

java::lang::String* poi::hssf::record::DBCellRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[DBCELL]\n"_j);
    npc(npc(npc(buffer)->append(u"    .rowoffset = "_j))->append(::poi::util::HexDump::intToHex(field_1_row_offset)))->append(u"\n"_j);
    for (auto k = int32_t(0); k < npc(field_2_cell_offsets)->length; k++) {
        npc(npc(npc(npc(npc(buffer)->append(u"    .cell_"_j))->append(k))->append(u" = "_j))->append(::poi::util::HexDump::shortToHex((*field_2_cell_offsets)[k])))->append(u"\n"_j);
    }
    npc(buffer)->append(u"[/DBCELL]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::DBCellRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(field_1_row_offset);
    for (auto k = int32_t(0); k < npc(field_2_cell_offsets)->length; k++) {
        npc(out)->writeShort((*field_2_cell_offsets)[k]);
    }
}

int32_t poi::hssf::record::DBCellRecord::getDataSize()
{
    return int32_t(4) + npc(field_2_cell_offsets)->length * int32_t(2);
}

int16_t poi::hssf::record::DBCellRecord::getSid()
{
    return sid;
}

poi::hssf::record::DBCellRecord* poi::hssf::record::DBCellRecord::clone()
{
    return this;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::DBCellRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DBCellRecord", 39);
    return c;
}

int32_t poi::hssf::record::DBCellRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::DBCellRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::DBCellRecord::getClass0()
{
    return class_();
}


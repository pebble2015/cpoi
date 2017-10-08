// Generated from /POI/java/org/apache/poi/hssf/record/SelectionRecord.java
#include <org/apache/poi/hssf/record/SelectionRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/util/CellRangeAddress8Bit.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
        } // util
    } // ss

    namespace hssf
    {
        namespace util
        {
typedef ::SubArray< ::poi::hssf::util::CellRangeAddress8Bit, ::poi::ss::util::CellRangeAddressBaseArray > CellRangeAddress8BitArray;
        } // util
    } // hssf
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::SelectionRecord::SelectionRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::SelectionRecord::SelectionRecord(int32_t activeCellRow, int32_t activeCellCol) 
    : SelectionRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(activeCellRow,activeCellCol);
}

poi::hssf::record::SelectionRecord::SelectionRecord(RecordInputStream* in) 
    : SelectionRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::SelectionRecord::sid;

void poi::hssf::record::SelectionRecord::ctor(int32_t activeCellRow, int32_t activeCellCol)
{
    super::ctor();
    field_1_pane = 3;
    field_2_row_active_cell = activeCellRow;
    field_3_col_active_cell = activeCellCol;
    field_4_active_cell_ref_index = 0;
    field_6_refs = new ::poi::hssf::util::CellRangeAddress8BitArray({new ::poi::hssf::util::CellRangeAddress8Bit(activeCellRow, activeCellRow, activeCellCol, activeCellCol)});
}

void poi::hssf::record::SelectionRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_pane = npc(in)->readByte();
    field_2_row_active_cell = npc(in)->readUShort();
    field_3_col_active_cell = npc(in)->readShort();
    field_4_active_cell_ref_index = npc(in)->readShort();
    auto field_5_num_refs = npc(in)->readUShort();
    field_6_refs = new ::poi::hssf::util::CellRangeAddress8BitArray(field_5_num_refs);
    for (auto i = int32_t(0); i < npc(field_6_refs)->length; i++) {
        field_6_refs->set(i, new ::poi::hssf::util::CellRangeAddress8Bit(in));
    }
}

void poi::hssf::record::SelectionRecord::setPane(int8_t pane)
{
    field_1_pane = pane;
}

void poi::hssf::record::SelectionRecord::setActiveCellRow(int32_t row)
{
    field_2_row_active_cell = row;
}

void poi::hssf::record::SelectionRecord::setActiveCellCol(int16_t col)
{
    field_3_col_active_cell = col;
}

void poi::hssf::record::SelectionRecord::setActiveCellRef(int16_t ref)
{
    field_4_active_cell_ref_index = ref;
}

int8_t poi::hssf::record::SelectionRecord::getPane()
{
    return field_1_pane;
}

int32_t poi::hssf::record::SelectionRecord::getActiveCellRow()
{
    return field_2_row_active_cell;
}

int32_t poi::hssf::record::SelectionRecord::getActiveCellCol()
{
    return field_3_col_active_cell;
}

int32_t poi::hssf::record::SelectionRecord::getActiveCellRef()
{
    return field_4_active_cell_ref_index;
}

java::lang::String* poi::hssf::record::SelectionRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[SELECTION]\n"_j);
    npc(npc(npc(sb)->append(u"    .pane            = "_j))->append(::poi::util::HexDump::byteToHex(getPane())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .activecellrow   = "_j))->append(::poi::util::HexDump::shortToHex(getActiveCellRow())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .activecellcol   = "_j))->append(::poi::util::HexDump::shortToHex(getActiveCellCol())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .activecellref   = "_j))->append(::poi::util::HexDump::shortToHex(getActiveCellRef())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .numrefs         = "_j))->append(::poi::util::HexDump::shortToHex(npc(field_6_refs)->length)))->append(u"\n"_j);
    npc(sb)->append(u"[/SELECTION]\n"_j);
    return npc(sb)->toString();
}

int32_t poi::hssf::record::SelectionRecord::getDataSize()
{
    return int32_t(9) + ::poi::hssf::util::CellRangeAddress8Bit::getEncodedSize(npc(field_6_refs)->length);
}

void poi::hssf::record::SelectionRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(getPane());
    npc(out)->writeShort(getActiveCellRow());
    npc(out)->writeShort(getActiveCellCol());
    npc(out)->writeShort(getActiveCellRef());
    auto nRefs = npc(field_6_refs)->length;
    npc(out)->writeShort(nRefs);
    for(auto field_6_ref : *npc(field_6_refs)) {
        npc(field_6_ref)->serialize(out);
    }
}

int16_t poi::hssf::record::SelectionRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::SelectionRecord::clone()
{
    auto rec = new SelectionRecord(field_2_row_active_cell, field_3_col_active_cell);
    npc(rec)->field_1_pane = field_1_pane;
    npc(rec)->field_4_active_cell_ref_index = field_4_active_cell_ref_index;
    npc(rec)->field_6_refs = field_6_refs;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::SelectionRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.SelectionRecord", 42);
    return c;
}

int32_t poi::hssf::record::SelectionRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::SelectionRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::SelectionRecord::getClass0()
{
    return class_();
}


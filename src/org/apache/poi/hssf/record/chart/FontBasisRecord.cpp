// Generated from /POI/java/org/apache/poi/hssf/record/chart/FontBasisRecord.java
#include <org/apache/poi/hssf/record/chart/FontBasisRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/System.hpp>
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

org::apache::poi::hssf::record::chart::FontBasisRecord::FontBasisRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::FontBasisRecord::FontBasisRecord() 
    : FontBasisRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::FontBasisRecord::FontBasisRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : FontBasisRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::FontBasisRecord::sid;

void org::apache::poi::hssf::record::chart::FontBasisRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::FontBasisRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_xBasis = npc(in)->readShort();
    field_2_yBasis = npc(in)->readShort();
    field_3_heightBasis = npc(in)->readShort();
    field_4_scale = npc(in)->readShort();
    field_5_indexToFontTable = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::FontBasisRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[FBI]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .xBasis               = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getXBasis())))->append(u" ("_j))->append(static_cast< int32_t >(getXBasis())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .yBasis               = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getYBasis())))->append(u" ("_j))->append(static_cast< int32_t >(getYBasis())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .heightBasis          = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getHeightBasis())))->append(u" ("_j))->append(static_cast< int32_t >(getHeightBasis())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .scale                = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getScale())))->append(u" ("_j))->append(static_cast< int32_t >(getScale())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .indexToFontTable     = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getIndexToFontTable())))->append(u" ("_j))->append(static_cast< int32_t >(getIndexToFontTable())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/FBI]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::FontBasisRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_xBasis);
    npc(out)->writeShort(field_2_yBasis);
    npc(out)->writeShort(field_3_heightBasis);
    npc(out)->writeShort(field_4_scale);
    npc(out)->writeShort(field_5_indexToFontTable);
}

int32_t org::apache::poi::hssf::record::chart::FontBasisRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(2)+ int32_t(2);
}

int16_t org::apache::poi::hssf::record::chart::FontBasisRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::FontBasisRecord* org::apache::poi::hssf::record::chart::FontBasisRecord::clone()
{
    auto rec = new FontBasisRecord();
    npc(rec)->field_1_xBasis = field_1_xBasis;
    npc(rec)->field_2_yBasis = field_2_yBasis;
    npc(rec)->field_3_heightBasis = field_3_heightBasis;
    npc(rec)->field_4_scale = field_4_scale;
    npc(rec)->field_5_indexToFontTable = field_5_indexToFontTable;
    return rec;
}

int16_t org::apache::poi::hssf::record::chart::FontBasisRecord::getXBasis()
{
    return field_1_xBasis;
}

void org::apache::poi::hssf::record::chart::FontBasisRecord::setXBasis(int16_t field_1_xBasis)
{
    this->field_1_xBasis = field_1_xBasis;
}

int16_t org::apache::poi::hssf::record::chart::FontBasisRecord::getYBasis()
{
    return field_2_yBasis;
}

void org::apache::poi::hssf::record::chart::FontBasisRecord::setYBasis(int16_t field_2_yBasis)
{
    this->field_2_yBasis = field_2_yBasis;
}

int16_t org::apache::poi::hssf::record::chart::FontBasisRecord::getHeightBasis()
{
    return field_3_heightBasis;
}

void org::apache::poi::hssf::record::chart::FontBasisRecord::setHeightBasis(int16_t field_3_heightBasis)
{
    this->field_3_heightBasis = field_3_heightBasis;
}

int16_t org::apache::poi::hssf::record::chart::FontBasisRecord::getScale()
{
    return field_4_scale;
}

void org::apache::poi::hssf::record::chart::FontBasisRecord::setScale(int16_t field_4_scale)
{
    this->field_4_scale = field_4_scale;
}

int16_t org::apache::poi::hssf::record::chart::FontBasisRecord::getIndexToFontTable()
{
    return field_5_indexToFontTable;
}

void org::apache::poi::hssf::record::chart::FontBasisRecord::setIndexToFontTable(int16_t field_5_indexToFontTable)
{
    this->field_5_indexToFontTable = field_5_indexToFontTable;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::FontBasisRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.FontBasisRecord", 48);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::FontBasisRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::FontBasisRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::FontBasisRecord::getClass0()
{
    return class_();
}


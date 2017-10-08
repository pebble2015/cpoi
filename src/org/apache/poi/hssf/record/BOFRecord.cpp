// Generated from /POI/java/org/apache/poi/hssf/record/BOFRecord.java
#include <org/apache/poi/hssf/record/BOFRecord.hpp>

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

poi::hssf::record::BOFRecord::BOFRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::BOFRecord::BOFRecord() 
    : BOFRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::BOFRecord::BOFRecord(int32_t type) 
    : BOFRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(type);
}

poi::hssf::record::BOFRecord::BOFRecord(RecordInputStream* in) 
    : BOFRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::BOFRecord::sid;

constexpr int16_t poi::hssf::record::BOFRecord::biff2_sid;

constexpr int16_t poi::hssf::record::BOFRecord::biff3_sid;

constexpr int16_t poi::hssf::record::BOFRecord::biff4_sid;

constexpr int16_t poi::hssf::record::BOFRecord::biff5_sid;

constexpr int32_t poi::hssf::record::BOFRecord::VERSION;

constexpr int32_t poi::hssf::record::BOFRecord::BUILD;

constexpr int32_t poi::hssf::record::BOFRecord::BUILD_YEAR;

constexpr int32_t poi::hssf::record::BOFRecord::HISTORY_MASK;

constexpr int32_t poi::hssf::record::BOFRecord::TYPE_WORKBOOK;

constexpr int32_t poi::hssf::record::BOFRecord::TYPE_VB_MODULE;

constexpr int32_t poi::hssf::record::BOFRecord::TYPE_WORKSHEET;

constexpr int32_t poi::hssf::record::BOFRecord::TYPE_CHART;

constexpr int32_t poi::hssf::record::BOFRecord::TYPE_EXCEL_4_MACRO;

constexpr int32_t poi::hssf::record::BOFRecord::TYPE_WORKSPACE_FILE;

void poi::hssf::record::BOFRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::BOFRecord::ctor(int32_t type)
{
    super::ctor();
    field_1_version = VERSION;
    field_2_type = type;
    field_3_build = BUILD;
    field_4_year = BUILD_YEAR;
    field_5_history = 1;
    field_6_rversion = VERSION;
}

poi::hssf::record::BOFRecord* poi::hssf::record::BOFRecord::createSheetBOF()
{
    clinit();
    return new BOFRecord(TYPE_WORKSHEET);
}

void poi::hssf::record::BOFRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_version = npc(in)->readShort();
    field_2_type = npc(in)->readShort();
    if(npc(in)->remaining() >= 2) {
        field_3_build = npc(in)->readShort();
    }
    if(npc(in)->remaining() >= 2) {
        field_4_year = npc(in)->readShort();
    }
    if(npc(in)->remaining() >= 4) {
        field_5_history = npc(in)->readInt();
    }
    if(npc(in)->remaining() >= 4) {
        field_6_rversion = npc(in)->readInt();
    }
}

void poi::hssf::record::BOFRecord::setVersion(int32_t version)
{
    field_1_version = version;
}

void poi::hssf::record::BOFRecord::setType(int32_t type)
{
    field_2_type = type;
}

void poi::hssf::record::BOFRecord::setBuild(int32_t build)
{
    field_3_build = build;
}

void poi::hssf::record::BOFRecord::setBuildYear(int32_t year)
{
    field_4_year = year;
}

void poi::hssf::record::BOFRecord::setHistoryBitMask(int32_t bitmask)
{
    field_5_history = bitmask;
}

void poi::hssf::record::BOFRecord::setRequiredVersion(int32_t version)
{
    field_6_rversion = version;
}

int32_t poi::hssf::record::BOFRecord::getVersion()
{
    return field_1_version;
}

int32_t poi::hssf::record::BOFRecord::getType()
{
    return field_2_type;
}

int32_t poi::hssf::record::BOFRecord::getBuild()
{
    return field_3_build;
}

int32_t poi::hssf::record::BOFRecord::getBuildYear()
{
    return field_4_year;
}

int32_t poi::hssf::record::BOFRecord::getHistoryBitMask()
{
    return field_5_history;
}

int32_t poi::hssf::record::BOFRecord::getRequiredVersion()
{
    return field_6_rversion;
}

java::lang::String* poi::hssf::record::BOFRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[BOF RECORD]\n"_j);
    npc(npc(npc(buffer)->append(u"    .version  = "_j))->append(::poi::util::HexDump::shortToHex(getVersion())))->append(u"\n"_j);
    npc(npc(buffer)->append(u"    .type     = "_j))->append(::poi::util::HexDump::shortToHex(getType()));
    npc(npc(npc(npc(buffer)->append(u" ("_j))->append(getTypeName()))->append(u")"_j))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .build    = "_j))->append(::poi::util::HexDump::shortToHex(getBuild())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .buildyear= "_j))->append(getBuildYear()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .history  = "_j))->append(::poi::util::HexDump::intToHex(getHistoryBitMask())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .reqver   = "_j))->append(::poi::util::HexDump::intToHex(getRequiredVersion())))->append(u"\n"_j);
    npc(buffer)->append(u"[/BOF RECORD]\n"_j);
    return npc(buffer)->toString();
}

java::lang::String* poi::hssf::record::BOFRecord::getTypeName()
{
    switch (field_2_type) {
    case TYPE_CHART:
        return u"chart"_j;
    case TYPE_EXCEL_4_MACRO:
        return u"excel 4 macro"_j;
    case TYPE_VB_MODULE:
        return u"vb module"_j;
    case TYPE_WORKBOOK:
        return u"workbook"_j;
    case TYPE_WORKSHEET:
        return u"worksheet"_j;
    case TYPE_WORKSPACE_FILE:
        return u"workspace file"_j;
    }

    return u"#error unknown type#"_j;
}

void poi::hssf::record::BOFRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getVersion());
    npc(out)->writeShort(getType());
    npc(out)->writeShort(getBuild());
    npc(out)->writeShort(getBuildYear());
    npc(out)->writeInt(getHistoryBitMask());
    npc(out)->writeInt(getRequiredVersion());
}

int32_t poi::hssf::record::BOFRecord::getDataSize()
{
    return 16;
}

int16_t poi::hssf::record::BOFRecord::getSid()
{
    return sid;
}

poi::hssf::record::BOFRecord* poi::hssf::record::BOFRecord::clone()
{
    auto rec = new BOFRecord();
    npc(rec)->field_1_version = field_1_version;
    npc(rec)->field_2_type = field_2_type;
    npc(rec)->field_3_build = field_3_build;
    npc(rec)->field_4_year = field_4_year;
    npc(rec)->field_5_history = field_5_history;
    npc(rec)->field_6_rversion = field_6_rversion;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::BOFRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.BOFRecord", 36);
    return c;
}

int32_t poi::hssf::record::BOFRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::BOFRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::BOFRecord::getClass0()
{
    return class_();
}


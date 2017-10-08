// Generated from /POI/java/org/apache/poi/hssf/record/chart/DataLabelExtensionRecord.java
#include <org/apache/poi/hssf/record/chart/DataLabelExtensionRecord.hpp>

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

poi::hssf::record::chart::DataLabelExtensionRecord::DataLabelExtensionRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::DataLabelExtensionRecord::DataLabelExtensionRecord(::poi::hssf::record::RecordInputStream* in) 
    : DataLabelExtensionRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void poi::hssf::record::chart::DataLabelExtensionRecord::init()
{
    unused = new ::int8_tArray(int32_t(8));
}

constexpr int16_t poi::hssf::record::chart::DataLabelExtensionRecord::sid;

void poi::hssf::record::chart::DataLabelExtensionRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    init();
    rt = npc(in)->readShort();
    grbitFrt = npc(in)->readShort();
    npc(in)->readFully(unused);
}

int32_t poi::hssf::record::chart::DataLabelExtensionRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(8);
}

int16_t poi::hssf::record::chart::DataLabelExtensionRecord::getSid()
{
    return sid;
}

void poi::hssf::record::chart::DataLabelExtensionRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(rt);
    npc(out)->writeShort(grbitFrt);
    npc(out)->write(unused);
}

java::lang::String* poi::hssf::record::chart::DataLabelExtensionRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[DATALABEXT]\n"_j);
    npc(npc(npc(buffer)->append(u"    .rt      ="_j))->append(::poi::util::HexDump::shortToHex(rt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .grbitFrt="_j))->append(::poi::util::HexDump::shortToHex(grbitFrt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .unused  ="_j))->append(::poi::util::HexDump::toHex(unused)))->append(u'\u000a');
    npc(buffer)->append(u"[/DATALABEXT]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::DataLabelExtensionRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.DataLabelExtensionRecord", 57);
    return c;
}

int32_t poi::hssf::record::chart::DataLabelExtensionRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::DataLabelExtensionRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::DataLabelExtensionRecord::getClass0()
{
    return class_();
}


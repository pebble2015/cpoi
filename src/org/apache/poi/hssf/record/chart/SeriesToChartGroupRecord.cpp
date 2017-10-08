// Generated from /POI/java/org/apache/poi/hssf/record/chart/SeriesToChartGroupRecord.java
#include <org/apache/poi/hssf/record/chart/SeriesToChartGroupRecord.hpp>

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

poi::hssf::record::chart::SeriesToChartGroupRecord::SeriesToChartGroupRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::SeriesToChartGroupRecord::SeriesToChartGroupRecord() 
    : SeriesToChartGroupRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::SeriesToChartGroupRecord::SeriesToChartGroupRecord(::poi::hssf::record::RecordInputStream* in) 
    : SeriesToChartGroupRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::SeriesToChartGroupRecord::sid;

void poi::hssf::record::chart::SeriesToChartGroupRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::SeriesToChartGroupRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_chartGroupIndex = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::chart::SeriesToChartGroupRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SeriesToChartGroup]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .chartGroupIndex      = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getChartGroupIndex())))->append(u" ("_j))->append(static_cast< int32_t >(getChartGroupIndex())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/SeriesToChartGroup]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::SeriesToChartGroupRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_chartGroupIndex);
}

int32_t poi::hssf::record::chart::SeriesToChartGroupRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::chart::SeriesToChartGroupRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::chart::SeriesToChartGroupRecord::clone()
{
    auto rec = new SeriesToChartGroupRecord();
    npc(rec)->field_1_chartGroupIndex = field_1_chartGroupIndex;
    return rec;
}

int16_t poi::hssf::record::chart::SeriesToChartGroupRecord::getChartGroupIndex()
{
    return field_1_chartGroupIndex;
}

void poi::hssf::record::chart::SeriesToChartGroupRecord::setChartGroupIndex(int16_t field_1_chartGroupIndex)
{
    this->field_1_chartGroupIndex = field_1_chartGroupIndex;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::SeriesToChartGroupRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.SeriesToChartGroupRecord", 57);
    return c;
}

int32_t poi::hssf::record::chart::SeriesToChartGroupRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::SeriesToChartGroupRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::SeriesToChartGroupRecord::getClass0()
{
    return class_();
}


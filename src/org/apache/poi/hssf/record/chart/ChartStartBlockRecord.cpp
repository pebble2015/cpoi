// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartStartBlockRecord.java
#include <org/apache/poi/hssf/record/chart/ChartStartBlockRecord.hpp>

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

poi::hssf::record::chart::ChartStartBlockRecord::ChartStartBlockRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::ChartStartBlockRecord::ChartStartBlockRecord() 
    : ChartStartBlockRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::ChartStartBlockRecord::ChartStartBlockRecord(::poi::hssf::record::RecordInputStream* in) 
    : ChartStartBlockRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::ChartStartBlockRecord::sid;

void poi::hssf::record::chart::ChartStartBlockRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::ChartStartBlockRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    rt = npc(in)->readShort();
    grbitFrt = npc(in)->readShort();
    iObjectKind = npc(in)->readShort();
    iObjectContext = npc(in)->readShort();
    iObjectInstance1 = npc(in)->readShort();
    iObjectInstance2 = npc(in)->readShort();
}

int32_t poi::hssf::record::chart::ChartStartBlockRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(2)+ int32_t(2)+ int32_t(2);
}

int16_t poi::hssf::record::chart::ChartStartBlockRecord::getSid()
{
    return sid;
}

void poi::hssf::record::chart::ChartStartBlockRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(rt);
    npc(out)->writeShort(grbitFrt);
    npc(out)->writeShort(iObjectKind);
    npc(out)->writeShort(iObjectContext);
    npc(out)->writeShort(iObjectInstance1);
    npc(out)->writeShort(iObjectInstance2);
}

java::lang::String* poi::hssf::record::chart::ChartStartBlockRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[STARTBLOCK]\n"_j);
    npc(npc(npc(buffer)->append(u"    .rt              ="_j))->append(::poi::util::HexDump::shortToHex(rt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .grbitFrt        ="_j))->append(::poi::util::HexDump::shortToHex(grbitFrt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .iObjectKind     ="_j))->append(::poi::util::HexDump::shortToHex(iObjectKind)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .iObjectContext  ="_j))->append(::poi::util::HexDump::shortToHex(iObjectContext)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .iObjectInstance1="_j))->append(::poi::util::HexDump::shortToHex(iObjectInstance1)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .iObjectInstance2="_j))->append(::poi::util::HexDump::shortToHex(iObjectInstance2)))->append(u'\u000a');
    npc(buffer)->append(u"[/STARTBLOCK]\n"_j);
    return npc(buffer)->toString();
}

poi::hssf::record::chart::ChartStartBlockRecord* poi::hssf::record::chart::ChartStartBlockRecord::clone()
{
    auto record = new ChartStartBlockRecord();
    npc(record)->rt = rt;
    npc(record)->grbitFrt = grbitFrt;
    npc(record)->iObjectKind = iObjectKind;
    npc(record)->iObjectContext = iObjectContext;
    npc(record)->iObjectInstance1 = iObjectInstance1;
    npc(record)->iObjectInstance2 = iObjectInstance2;
    return record;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::ChartStartBlockRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.ChartStartBlockRecord", 54);
    return c;
}

int32_t poi::hssf::record::chart::ChartStartBlockRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::ChartStartBlockRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::ChartStartBlockRecord::getClass0()
{
    return class_();
}


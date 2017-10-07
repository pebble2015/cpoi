// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartStartObjectRecord.java
#include <org/apache/poi/hssf/record/chart/ChartStartObjectRecord.hpp>

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

org::apache::poi::hssf::record::chart::ChartStartObjectRecord::ChartStartObjectRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::ChartStartObjectRecord::ChartStartObjectRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : ChartStartObjectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::ChartStartObjectRecord::sid;

void org::apache::poi::hssf::record::chart::ChartStartObjectRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    rt = npc(in)->readShort();
    grbitFrt = npc(in)->readShort();
    iObjectKind = npc(in)->readShort();
    iObjectContext = npc(in)->readShort();
    iObjectInstance1 = npc(in)->readShort();
    iObjectInstance2 = npc(in)->readShort();
}

int32_t org::apache::poi::hssf::record::chart::ChartStartObjectRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(2)+ int32_t(2)+ int32_t(2);
}

int16_t org::apache::poi::hssf::record::chart::ChartStartObjectRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::chart::ChartStartObjectRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(rt);
    npc(out)->writeShort(grbitFrt);
    npc(out)->writeShort(iObjectKind);
    npc(out)->writeShort(iObjectContext);
    npc(out)->writeShort(iObjectInstance1);
    npc(out)->writeShort(iObjectInstance2);
}

java::lang::String* org::apache::poi::hssf::record::chart::ChartStartObjectRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[STARTOBJECT]\n"_j);
    npc(npc(npc(buffer)->append(u"    .rt              ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(rt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .grbitFrt        ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(grbitFrt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .iObjectKind     ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(iObjectKind)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .iObjectContext  ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(iObjectContext)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .iObjectInstance1="_j))->append(::org::apache::poi::util::HexDump::shortToHex(iObjectInstance1)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .iObjectInstance2="_j))->append(::org::apache::poi::util::HexDump::shortToHex(iObjectInstance2)))->append(u'\u000a');
    npc(buffer)->append(u"[/STARTOBJECT]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::ChartStartObjectRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.ChartStartObjectRecord", 55);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::ChartStartObjectRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::ChartStartObjectRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::ChartStartObjectRecord::getClass0()
{
    return class_();
}


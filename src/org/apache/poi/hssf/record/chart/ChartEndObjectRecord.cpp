// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartEndObjectRecord.java
#include <org/apache/poi/hssf/record/chart/ChartEndObjectRecord.hpp>

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

org::apache::poi::hssf::record::chart::ChartEndObjectRecord::ChartEndObjectRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::ChartEndObjectRecord::ChartEndObjectRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : ChartEndObjectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::ChartEndObjectRecord::sid;

void org::apache::poi::hssf::record::chart::ChartEndObjectRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    rt = npc(in)->readShort();
    grbitFrt = npc(in)->readShort();
    iObjectKind = npc(in)->readShort();
    reserved = new ::int8_tArray(int32_t(6));
    if(npc(in)->available() == 0) {
    } else {
        npc(in)->readFully(reserved);
    }
}

int32_t org::apache::poi::hssf::record::chart::ChartEndObjectRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(6);
}

int16_t org::apache::poi::hssf::record::chart::ChartEndObjectRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::chart::ChartEndObjectRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(rt);
    npc(out)->writeShort(grbitFrt);
    npc(out)->writeShort(iObjectKind);
    npc(out)->write(reserved);
}

java::lang::String* org::apache::poi::hssf::record::chart::ChartEndObjectRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[ENDOBJECT]\n"_j);
    npc(npc(npc(buffer)->append(u"    .rt         ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(rt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .grbitFrt   ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(grbitFrt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .iObjectKind="_j))->append(::org::apache::poi::util::HexDump::shortToHex(iObjectKind)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .reserved   ="_j))->append(::org::apache::poi::util::HexDump::toHex(reserved)))->append(u'\u000a');
    npc(buffer)->append(u"[/ENDOBJECT]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::ChartEndObjectRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.ChartEndObjectRecord", 53);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::ChartEndObjectRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::ChartEndObjectRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::ChartEndObjectRecord::getClass0()
{
    return class_();
}


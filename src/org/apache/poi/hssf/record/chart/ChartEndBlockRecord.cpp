// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartEndBlockRecord.java
#include <org/apache/poi/hssf/record/chart/ChartEndBlockRecord.hpp>

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

poi::hssf::record::chart::ChartEndBlockRecord::ChartEndBlockRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::ChartEndBlockRecord::ChartEndBlockRecord() 
    : ChartEndBlockRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::ChartEndBlockRecord::ChartEndBlockRecord(::poi::hssf::record::RecordInputStream* in) 
    : ChartEndBlockRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::ChartEndBlockRecord::sid;

void poi::hssf::record::chart::ChartEndBlockRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::ChartEndBlockRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    rt = npc(in)->readShort();
    grbitFrt = npc(in)->readShort();
    iObjectKind = npc(in)->readShort();
    if(npc(in)->available() == 0) {
        unused = new ::int8_tArray(int32_t(0));
    } else {
        unused = new ::int8_tArray(int32_t(6));
        npc(in)->readFully(unused);
    }
}

int32_t poi::hssf::record::chart::ChartEndBlockRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ npc(unused)->length;
}

int16_t poi::hssf::record::chart::ChartEndBlockRecord::getSid()
{
    return sid;
}

void poi::hssf::record::chart::ChartEndBlockRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(rt);
    npc(out)->writeShort(grbitFrt);
    npc(out)->writeShort(iObjectKind);
    npc(out)->write(unused);
}

java::lang::String* poi::hssf::record::chart::ChartEndBlockRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[ENDBLOCK]\n"_j);
    npc(npc(npc(buffer)->append(u"    .rt         ="_j))->append(::poi::util::HexDump::shortToHex(rt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .grbitFrt   ="_j))->append(::poi::util::HexDump::shortToHex(grbitFrt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .iObjectKind="_j))->append(::poi::util::HexDump::shortToHex(iObjectKind)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .unused     ="_j))->append(::poi::util::HexDump::toHex(unused)))->append(u'\u000a');
    npc(buffer)->append(u"[/ENDBLOCK]\n"_j);
    return npc(buffer)->toString();
}

poi::hssf::record::chart::ChartEndBlockRecord* poi::hssf::record::chart::ChartEndBlockRecord::clone()
{
    auto record = new ChartEndBlockRecord();
    npc(record)->rt = rt;
    npc(record)->grbitFrt = grbitFrt;
    npc(record)->iObjectKind = iObjectKind;
    npc(record)->unused = npc(unused)->clone();
    return record;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::ChartEndBlockRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.ChartEndBlockRecord", 52);
    return c;
}

int32_t poi::hssf::record::chart::ChartEndBlockRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::ChartEndBlockRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::ChartEndBlockRecord::getClass0()
{
    return class_();
}


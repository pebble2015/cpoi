// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartRecord.java
#include <org/apache/poi/hssf/record/chart/ChartRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::chart::ChartRecord::ChartRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::ChartRecord::ChartRecord() 
    : ChartRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::ChartRecord::ChartRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : ChartRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::ChartRecord::sid;

void org::apache::poi::hssf::record::chart::ChartRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::ChartRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_x = npc(in)->readInt();
    field_2_y = npc(in)->readInt();
    field_3_width = npc(in)->readInt();
    field_4_height = npc(in)->readInt();
}

java::lang::String* org::apache::poi::hssf::record::chart::ChartRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[CHART]\n"_j);
    npc(npc(npc(sb)->append(u"    .x     = "_j))->append(getX()))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"    .y     = "_j))->append(getY()))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"    .width = "_j))->append(getWidth()))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"    .height= "_j))->append(getHeight()))->append(u'\u000a');
    npc(sb)->append(u"[/CHART]\n"_j);
    return npc(sb)->toString();
}

void org::apache::poi::hssf::record::chart::ChartRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(field_1_x);
    npc(out)->writeInt(field_2_y);
    npc(out)->writeInt(field_3_width);
    npc(out)->writeInt(field_4_height);
}

int32_t org::apache::poi::hssf::record::chart::ChartRecord::getDataSize()
{
    return int32_t(4) + int32_t(4) + int32_t(4)+ int32_t(4);
}

int16_t org::apache::poi::hssf::record::chart::ChartRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::ChartRecord* org::apache::poi::hssf::record::chart::ChartRecord::clone()
{
    auto rec = new ChartRecord();
    npc(rec)->field_1_x = field_1_x;
    npc(rec)->field_2_y = field_2_y;
    npc(rec)->field_3_width = field_3_width;
    npc(rec)->field_4_height = field_4_height;
    return rec;
}

int32_t org::apache::poi::hssf::record::chart::ChartRecord::getX()
{
    return field_1_x;
}

void org::apache::poi::hssf::record::chart::ChartRecord::setX(int32_t x)
{
    field_1_x = x;
}

int32_t org::apache::poi::hssf::record::chart::ChartRecord::getY()
{
    return field_2_y;
}

void org::apache::poi::hssf::record::chart::ChartRecord::setY(int32_t y)
{
    field_2_y = y;
}

int32_t org::apache::poi::hssf::record::chart::ChartRecord::getWidth()
{
    return field_3_width;
}

void org::apache::poi::hssf::record::chart::ChartRecord::setWidth(int32_t width)
{
    field_3_width = width;
}

int32_t org::apache::poi::hssf::record::chart::ChartRecord::getHeight()
{
    return field_4_height;
}

void org::apache::poi::hssf::record::chart::ChartRecord::setHeight(int32_t height)
{
    field_4_height = height;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::ChartRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.ChartRecord", 44);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::ChartRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::ChartRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::ChartRecord::getClass0()
{
    return class_();
}


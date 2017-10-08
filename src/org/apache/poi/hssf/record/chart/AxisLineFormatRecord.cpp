// Generated from /POI/java/org/apache/poi/hssf/record/chart/AxisLineFormatRecord.java
#include <org/apache/poi/hssf/record/chart/AxisLineFormatRecord.hpp>

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

poi::hssf::record::chart::AxisLineFormatRecord::AxisLineFormatRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::AxisLineFormatRecord::AxisLineFormatRecord() 
    : AxisLineFormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::AxisLineFormatRecord::AxisLineFormatRecord(::poi::hssf::record::RecordInputStream* in) 
    : AxisLineFormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::AxisLineFormatRecord::sid;

constexpr int16_t poi::hssf::record::chart::AxisLineFormatRecord::AXIS_TYPE_AXIS_LINE;

constexpr int16_t poi::hssf::record::chart::AxisLineFormatRecord::AXIS_TYPE_MAJOR_GRID_LINE;

constexpr int16_t poi::hssf::record::chart::AxisLineFormatRecord::AXIS_TYPE_MINOR_GRID_LINE;

constexpr int16_t poi::hssf::record::chart::AxisLineFormatRecord::AXIS_TYPE_WALLS_OR_FLOOR;

void poi::hssf::record::chart::AxisLineFormatRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::AxisLineFormatRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_axisType = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::chart::AxisLineFormatRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[AXISLINEFORMAT]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .axisType             = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getAxisType())))->append(u" ("_j))->append(static_cast< int32_t >(getAxisType())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/AXISLINEFORMAT]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::AxisLineFormatRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_axisType);
}

int32_t poi::hssf::record::chart::AxisLineFormatRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::chart::AxisLineFormatRecord::getSid()
{
    return sid;
}

poi::hssf::record::chart::AxisLineFormatRecord* poi::hssf::record::chart::AxisLineFormatRecord::clone()
{
    auto rec = new AxisLineFormatRecord();
    npc(rec)->field_1_axisType = field_1_axisType;
    return rec;
}

int16_t poi::hssf::record::chart::AxisLineFormatRecord::getAxisType()
{
    return field_1_axisType;
}

void poi::hssf::record::chart::AxisLineFormatRecord::setAxisType(int16_t field_1_axisType)
{
    this->field_1_axisType = field_1_axisType;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::AxisLineFormatRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.AxisLineFormatRecord", 53);
    return c;
}

int32_t poi::hssf::record::chart::AxisLineFormatRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::AxisLineFormatRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::AxisLineFormatRecord::getClass0()
{
    return class_();
}


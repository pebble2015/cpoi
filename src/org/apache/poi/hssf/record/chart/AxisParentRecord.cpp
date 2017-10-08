// Generated from /POI/java/org/apache/poi/hssf/record/chart/AxisParentRecord.java
#include <org/apache/poi/hssf/record/chart/AxisParentRecord.hpp>

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

poi::hssf::record::chart::AxisParentRecord::AxisParentRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::AxisParentRecord::AxisParentRecord() 
    : AxisParentRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::AxisParentRecord::AxisParentRecord(::poi::hssf::record::RecordInputStream* in) 
    : AxisParentRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::AxisParentRecord::sid;

constexpr int16_t poi::hssf::record::chart::AxisParentRecord::AXIS_TYPE_MAIN;

constexpr int16_t poi::hssf::record::chart::AxisParentRecord::AXIS_TYPE_SECONDARY;

void poi::hssf::record::chart::AxisParentRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::AxisParentRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_axisType = npc(in)->readShort();
    field_2_x = npc(in)->readInt();
    field_3_y = npc(in)->readInt();
    field_4_width = npc(in)->readInt();
    field_5_height = npc(in)->readInt();
}

java::lang::String* poi::hssf::record::chart::AxisParentRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[AXISPARENT]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .axisType             = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getAxisType())))->append(u" ("_j))->append(static_cast< int32_t >(getAxisType())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .x                    = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getX())))->append(u" ("_j))->append(getX()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .y                    = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getY())))->append(u" ("_j))->append(getY()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .width                = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getWidth())))->append(u" ("_j))->append(getWidth()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .height               = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getHeight())))->append(u" ("_j))->append(getHeight()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/AXISPARENT]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::AxisParentRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_axisType);
    npc(out)->writeInt(field_2_x);
    npc(out)->writeInt(field_3_y);
    npc(out)->writeInt(field_4_width);
    npc(out)->writeInt(field_5_height);
}

int32_t poi::hssf::record::chart::AxisParentRecord::getDataSize()
{
    return int32_t(2) + int32_t(4) + int32_t(4)+ int32_t(4)+ int32_t(4);
}

int16_t poi::hssf::record::chart::AxisParentRecord::getSid()
{
    return sid;
}

poi::hssf::record::chart::AxisParentRecord* poi::hssf::record::chart::AxisParentRecord::clone()
{
    auto rec = new AxisParentRecord();
    npc(rec)->field_1_axisType = field_1_axisType;
    npc(rec)->field_2_x = field_2_x;
    npc(rec)->field_3_y = field_3_y;
    npc(rec)->field_4_width = field_4_width;
    npc(rec)->field_5_height = field_5_height;
    return rec;
}

int16_t poi::hssf::record::chart::AxisParentRecord::getAxisType()
{
    return field_1_axisType;
}

void poi::hssf::record::chart::AxisParentRecord::setAxisType(int16_t field_1_axisType)
{
    this->field_1_axisType = field_1_axisType;
}

int32_t poi::hssf::record::chart::AxisParentRecord::getX()
{
    return field_2_x;
}

void poi::hssf::record::chart::AxisParentRecord::setX(int32_t field_2_x)
{
    this->field_2_x = field_2_x;
}

int32_t poi::hssf::record::chart::AxisParentRecord::getY()
{
    return field_3_y;
}

void poi::hssf::record::chart::AxisParentRecord::setY(int32_t field_3_y)
{
    this->field_3_y = field_3_y;
}

int32_t poi::hssf::record::chart::AxisParentRecord::getWidth()
{
    return field_4_width;
}

void poi::hssf::record::chart::AxisParentRecord::setWidth(int32_t field_4_width)
{
    this->field_4_width = field_4_width;
}

int32_t poi::hssf::record::chart::AxisParentRecord::getHeight()
{
    return field_5_height;
}

void poi::hssf::record::chart::AxisParentRecord::setHeight(int32_t field_5_height)
{
    this->field_5_height = field_5_height;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::AxisParentRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.AxisParentRecord", 49);
    return c;
}

int32_t poi::hssf::record::chart::AxisParentRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::AxisParentRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::AxisParentRecord::getClass0()
{
    return class_();
}


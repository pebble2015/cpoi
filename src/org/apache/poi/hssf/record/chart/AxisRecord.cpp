// Generated from /POI/java/org/apache/poi/hssf/record/chart/AxisRecord.java
#include <org/apache/poi/hssf/record/chart/AxisRecord.hpp>

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

org::apache::poi::hssf::record::chart::AxisRecord::AxisRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::AxisRecord::AxisRecord() 
    : AxisRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::AxisRecord::AxisRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : AxisRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::AxisRecord::sid;

constexpr int16_t org::apache::poi::hssf::record::chart::AxisRecord::AXIS_TYPE_CATEGORY_OR_X_AXIS;

constexpr int16_t org::apache::poi::hssf::record::chart::AxisRecord::AXIS_TYPE_VALUE_AXIS;

constexpr int16_t org::apache::poi::hssf::record::chart::AxisRecord::AXIS_TYPE_SERIES_AXIS;

void org::apache::poi::hssf::record::chart::AxisRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::AxisRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_axisType = npc(in)->readShort();
    field_2_reserved1 = npc(in)->readInt();
    field_3_reserved2 = npc(in)->readInt();
    field_4_reserved3 = npc(in)->readInt();
    field_5_reserved4 = npc(in)->readInt();
}

java::lang::String* org::apache::poi::hssf::record::chart::AxisRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[AXIS]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .axisType             = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getAxisType())))->append(u" ("_j))->append(static_cast< int32_t >(getAxisType())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .reserved1            = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getReserved1())))->append(u" ("_j))->append(getReserved1()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .reserved2            = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getReserved2())))->append(u" ("_j))->append(getReserved2()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .reserved3            = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getReserved3())))->append(u" ("_j))->append(getReserved3()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .reserved4            = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getReserved4())))->append(u" ("_j))->append(getReserved4()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/AXIS]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::AxisRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_axisType);
    npc(out)->writeInt(field_2_reserved1);
    npc(out)->writeInt(field_3_reserved2);
    npc(out)->writeInt(field_4_reserved3);
    npc(out)->writeInt(field_5_reserved4);
}

int32_t org::apache::poi::hssf::record::chart::AxisRecord::getDataSize()
{
    return int32_t(2) + int32_t(4) + int32_t(4)+ int32_t(4)+ int32_t(4);
}

int16_t org::apache::poi::hssf::record::chart::AxisRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::AxisRecord* org::apache::poi::hssf::record::chart::AxisRecord::clone()
{
    auto rec = new AxisRecord();
    npc(rec)->field_1_axisType = field_1_axisType;
    npc(rec)->field_2_reserved1 = field_2_reserved1;
    npc(rec)->field_3_reserved2 = field_3_reserved2;
    npc(rec)->field_4_reserved3 = field_4_reserved3;
    npc(rec)->field_5_reserved4 = field_5_reserved4;
    return rec;
}

int16_t org::apache::poi::hssf::record::chart::AxisRecord::getAxisType()
{
    return field_1_axisType;
}

void org::apache::poi::hssf::record::chart::AxisRecord::setAxisType(int16_t field_1_axisType)
{
    this->field_1_axisType = field_1_axisType;
}

int32_t org::apache::poi::hssf::record::chart::AxisRecord::getReserved1()
{
    return field_2_reserved1;
}

void org::apache::poi::hssf::record::chart::AxisRecord::setReserved1(int32_t field_2_reserved1)
{
    this->field_2_reserved1 = field_2_reserved1;
}

int32_t org::apache::poi::hssf::record::chart::AxisRecord::getReserved2()
{
    return field_3_reserved2;
}

void org::apache::poi::hssf::record::chart::AxisRecord::setReserved2(int32_t field_3_reserved2)
{
    this->field_3_reserved2 = field_3_reserved2;
}

int32_t org::apache::poi::hssf::record::chart::AxisRecord::getReserved3()
{
    return field_4_reserved3;
}

void org::apache::poi::hssf::record::chart::AxisRecord::setReserved3(int32_t field_4_reserved3)
{
    this->field_4_reserved3 = field_4_reserved3;
}

int32_t org::apache::poi::hssf::record::chart::AxisRecord::getReserved4()
{
    return field_5_reserved4;
}

void org::apache::poi::hssf::record::chart::AxisRecord::setReserved4(int32_t field_5_reserved4)
{
    this->field_5_reserved4 = field_5_reserved4;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::AxisRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.AxisRecord", 43);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::AxisRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::AxisRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::AxisRecord::getClass0()
{
    return class_();
}


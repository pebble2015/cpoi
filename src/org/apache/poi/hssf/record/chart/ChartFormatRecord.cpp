// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartFormatRecord.java
#include <org/apache/poi/hssf/record/chart/ChartFormatRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::chart::ChartFormatRecord::ChartFormatRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::ChartFormatRecord::ChartFormatRecord() 
    : ChartFormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::ChartFormatRecord::ChartFormatRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : ChartFormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::ChartFormatRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::ChartFormatRecord::varyDisplayPattern()
{
    clinit();
    return varyDisplayPattern_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::ChartFormatRecord::varyDisplayPattern_;

void org::apache::poi::hssf::record::chart::ChartFormatRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::ChartFormatRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field1_x_position = npc(in)->readInt();
    field2_y_position = npc(in)->readInt();
    field3_width = npc(in)->readInt();
    field4_height = npc(in)->readInt();
    field5_grbit = npc(in)->readUShort();
    field6_unknown = npc(in)->readUShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::ChartFormatRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[CHARTFORMAT]\n"_j);
    npc(npc(npc(buffer)->append(u"    .xPosition       = "_j))->append(getXPosition()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .yPosition       = "_j))->append(getYPosition()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .width           = "_j))->append(getWidth()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .height          = "_j))->append(getHeight()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .grBit           = "_j))->append(::org::apache::poi::util::HexDump::intToHex(field5_grbit)))->append(u"\n"_j);
    npc(buffer)->append(u"[/CHARTFORMAT]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::ChartFormatRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(getXPosition());
    npc(out)->writeInt(getYPosition());
    npc(out)->writeInt(getWidth());
    npc(out)->writeInt(getHeight());
    npc(out)->writeShort(field5_grbit);
    npc(out)->writeShort(field6_unknown);
}

int32_t org::apache::poi::hssf::record::chart::ChartFormatRecord::getDataSize()
{
    return 20;
}

int16_t org::apache::poi::hssf::record::chart::ChartFormatRecord::getSid()
{
    return sid;
}

int32_t org::apache::poi::hssf::record::chart::ChartFormatRecord::getXPosition()
{
    return field1_x_position;
}

void org::apache::poi::hssf::record::chart::ChartFormatRecord::setXPosition(int32_t xPosition)
{
    field1_x_position = xPosition;
}

int32_t org::apache::poi::hssf::record::chart::ChartFormatRecord::getYPosition()
{
    return field2_y_position;
}

void org::apache::poi::hssf::record::chart::ChartFormatRecord::setYPosition(int32_t yPosition)
{
    field2_y_position = yPosition;
}

int32_t org::apache::poi::hssf::record::chart::ChartFormatRecord::getWidth()
{
    return field3_width;
}

void org::apache::poi::hssf::record::chart::ChartFormatRecord::setWidth(int32_t width)
{
    field3_width = width;
}

int32_t org::apache::poi::hssf::record::chart::ChartFormatRecord::getHeight()
{
    return field4_height;
}

void org::apache::poi::hssf::record::chart::ChartFormatRecord::setHeight(int32_t height)
{
    field4_height = height;
}

bool org::apache::poi::hssf::record::chart::ChartFormatRecord::getVaryDisplayPattern()
{
    return npc(varyDisplayPattern_)->isSet(field5_grbit);
}

void org::apache::poi::hssf::record::chart::ChartFormatRecord::setVaryDisplayPattern(bool value)
{
    field5_grbit = npc(varyDisplayPattern_)->setBoolean(field5_grbit, value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::ChartFormatRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.ChartFormatRecord", 50);
    return c;
}

void org::apache::poi::hssf::record::chart::ChartFormatRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        varyDisplayPattern_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::chart::ChartFormatRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::ChartFormatRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::ChartFormatRecord::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/hssf/record/chart/AxisUsedRecord.java
#include <org/apache/poi/hssf/record/chart/AxisUsedRecord.hpp>

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

org::apache::poi::hssf::record::chart::AxisUsedRecord::AxisUsedRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::AxisUsedRecord::AxisUsedRecord() 
    : AxisUsedRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::AxisUsedRecord::AxisUsedRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : AxisUsedRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::AxisUsedRecord::sid;

void org::apache::poi::hssf::record::chart::AxisUsedRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::AxisUsedRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_numAxis = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::AxisUsedRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[AXISUSED]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .numAxis              = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getNumAxis())))->append(u" ("_j))->append(static_cast< int32_t >(getNumAxis())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/AXISUSED]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::AxisUsedRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_numAxis);
}

int32_t org::apache::poi::hssf::record::chart::AxisUsedRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::chart::AxisUsedRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::AxisUsedRecord* org::apache::poi::hssf::record::chart::AxisUsedRecord::clone()
{
    auto rec = new AxisUsedRecord();
    npc(rec)->field_1_numAxis = field_1_numAxis;
    return rec;
}

int16_t org::apache::poi::hssf::record::chart::AxisUsedRecord::getNumAxis()
{
    return field_1_numAxis;
}

void org::apache::poi::hssf::record::chart::AxisUsedRecord::setNumAxis(int16_t field_1_numAxis)
{
    this->field_1_numAxis = field_1_numAxis;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::AxisUsedRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.AxisUsedRecord", 47);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::AxisUsedRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::AxisUsedRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::AxisUsedRecord::getClass0()
{
    return class_();
}


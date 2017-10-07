// Generated from /POI/java/org/apache/poi/hssf/record/chart/SeriesIndexRecord.java
#include <org/apache/poi/hssf/record/chart/SeriesIndexRecord.hpp>

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

org::apache::poi::hssf::record::chart::SeriesIndexRecord::SeriesIndexRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::SeriesIndexRecord::SeriesIndexRecord() 
    : SeriesIndexRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::SeriesIndexRecord::SeriesIndexRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : SeriesIndexRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesIndexRecord::sid;

void org::apache::poi::hssf::record::chart::SeriesIndexRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::SeriesIndexRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_index = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::SeriesIndexRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SINDEX]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .index                = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getIndex())))->append(u" ("_j))->append(static_cast< int32_t >(getIndex())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/SINDEX]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::SeriesIndexRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_index);
}

int32_t org::apache::poi::hssf::record::chart::SeriesIndexRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::chart::SeriesIndexRecord::getSid()
{
    return sid;
}

java::lang::Object* org::apache::poi::hssf::record::chart::SeriesIndexRecord::clone()
{
    auto rec = new SeriesIndexRecord();
    npc(rec)->field_1_index = field_1_index;
    return rec;
}

int16_t org::apache::poi::hssf::record::chart::SeriesIndexRecord::getIndex()
{
    return field_1_index;
}

void org::apache::poi::hssf::record::chart::SeriesIndexRecord::setIndex(int16_t field_1_index)
{
    this->field_1_index = field_1_index;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::SeriesIndexRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.SeriesIndexRecord", 50);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::SeriesIndexRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::SeriesIndexRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::SeriesIndexRecord::getClass0()
{
    return class_();
}


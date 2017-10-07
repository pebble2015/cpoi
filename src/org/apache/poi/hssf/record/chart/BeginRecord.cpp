// Generated from /POI/java/org/apache/poi/hssf/record/chart/BeginRecord.java
#include <org/apache/poi/hssf/record/chart/BeginRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::chart::BeginRecord::BeginRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::BeginRecord::BeginRecord() 
    : BeginRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::BeginRecord::BeginRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : BeginRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::BeginRecord::sid;

void org::apache::poi::hssf::record::chart::BeginRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::BeginRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
}

java::lang::String* org::apache::poi::hssf::record::chart::BeginRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[BEGIN]\n"_j);
    npc(buffer)->append(u"[/BEGIN]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::BeginRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
}

int32_t org::apache::poi::hssf::record::chart::BeginRecord::getDataSize()
{
    return 0;
}

int16_t org::apache::poi::hssf::record::chart::BeginRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::BeginRecord* org::apache::poi::hssf::record::chart::BeginRecord::clone()
{
    auto br = new BeginRecord();
    return br;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::BeginRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.BeginRecord", 44);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::BeginRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::BeginRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::BeginRecord::getClass0()
{
    return class_();
}


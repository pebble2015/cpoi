// Generated from /POI/java/org/apache/poi/hssf/record/chart/PlotAreaRecord.java
#include <org/apache/poi/hssf/record/chart/PlotAreaRecord.hpp>

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

org::apache::poi::hssf::record::chart::PlotAreaRecord::PlotAreaRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::PlotAreaRecord::PlotAreaRecord() 
    : PlotAreaRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::PlotAreaRecord::PlotAreaRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : PlotAreaRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::PlotAreaRecord::sid;

void org::apache::poi::hssf::record::chart::PlotAreaRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::PlotAreaRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
}

java::lang::String* org::apache::poi::hssf::record::chart::PlotAreaRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[PLOTAREA]\n"_j);
    npc(buffer)->append(u"[/PLOTAREA]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::PlotAreaRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
}

int32_t org::apache::poi::hssf::record::chart::PlotAreaRecord::getDataSize()
{
    return 0;
}

int16_t org::apache::poi::hssf::record::chart::PlotAreaRecord::getSid()
{
    return sid;
}

java::lang::Object* org::apache::poi::hssf::record::chart::PlotAreaRecord::clone()
{
    auto rec = new PlotAreaRecord();
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::PlotAreaRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.PlotAreaRecord", 47);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::PlotAreaRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::PlotAreaRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::PlotAreaRecord::getClass0()
{
    return class_();
}


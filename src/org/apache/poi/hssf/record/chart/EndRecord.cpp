// Generated from /POI/java/org/apache/poi/hssf/record/chart/EndRecord.java
#include <org/apache/poi/hssf/record/chart/EndRecord.hpp>

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

poi::hssf::record::chart::EndRecord::EndRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::EndRecord::EndRecord() 
    : EndRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::EndRecord::EndRecord(::poi::hssf::record::RecordInputStream* in) 
    : EndRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::EndRecord::sid;

void poi::hssf::record::chart::EndRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::EndRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
}

java::lang::String* poi::hssf::record::chart::EndRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[END]\n"_j);
    npc(buffer)->append(u"[/END]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::EndRecord::serialize(::poi::util::LittleEndianOutput* out)
{
}

int32_t poi::hssf::record::chart::EndRecord::getDataSize()
{
    return 0;
}

int16_t poi::hssf::record::chart::EndRecord::getSid()
{
    return sid;
}

poi::hssf::record::chart::EndRecord* poi::hssf::record::chart::EndRecord::clone()
{
    auto er = new EndRecord();
    return er;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::EndRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.EndRecord", 42);
    return c;
}

int32_t poi::hssf::record::chart::EndRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::EndRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::EndRecord::getClass0()
{
    return class_();
}


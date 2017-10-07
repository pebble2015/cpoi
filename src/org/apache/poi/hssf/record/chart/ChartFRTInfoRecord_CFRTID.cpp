// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartFRTInfoRecord.java
#include <org/apache/poi/hssf/record/chart/ChartFRTInfoRecord_CFRTID.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::chart::ChartFRTInfoRecord_CFRTID::ChartFRTInfoRecord_CFRTID(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::ChartFRTInfoRecord_CFRTID::ChartFRTInfoRecord_CFRTID(::org::apache::poi::util::LittleEndianInput* in) 
    : ChartFRTInfoRecord_CFRTID(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t org::apache::poi::hssf::record::chart::ChartFRTInfoRecord_CFRTID::ENCODED_SIZE;

void org::apache::poi::hssf::record::chart::ChartFRTInfoRecord_CFRTID::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    rtFirst = npc(in)->readShort();
    rtLast = npc(in)->readShort();
}

void org::apache::poi::hssf::record::chart::ChartFRTInfoRecord_CFRTID::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(rtFirst);
    npc(out)->writeShort(rtLast);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::ChartFRTInfoRecord_CFRTID::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.ChartFRTInfoRecord.CFRTID", 58);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::chart::ChartFRTInfoRecord_CFRTID::getClass0()
{
    return class_();
}


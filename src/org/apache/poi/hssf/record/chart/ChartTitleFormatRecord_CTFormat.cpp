// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartTitleFormatRecord.java
#include <org/apache/poi/hssf/record/chart/ChartTitleFormatRecord_CTFormat.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::chart::ChartTitleFormatRecord_CTFormat::ChartTitleFormatRecord_CTFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::ChartTitleFormatRecord_CTFormat::ChartTitleFormatRecord_CTFormat(::poi::hssf::record::RecordInputStream* in) 
    : ChartTitleFormatRecord_CTFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t poi::hssf::record::chart::ChartTitleFormatRecord_CTFormat::ENCODED_SIZE;

void poi::hssf::record::chart::ChartTitleFormatRecord_CTFormat::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    _offset = npc(in)->readShort();
    _fontIndex = npc(in)->readShort();
}

int32_t poi::hssf::record::chart::ChartTitleFormatRecord_CTFormat::getOffset()
{
    return _offset;
}

void poi::hssf::record::chart::ChartTitleFormatRecord_CTFormat::setOffset(int32_t newOff)
{
    _offset = newOff;
}

int32_t poi::hssf::record::chart::ChartTitleFormatRecord_CTFormat::getFontIndex()
{
    return _fontIndex;
}

void poi::hssf::record::chart::ChartTitleFormatRecord_CTFormat::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_offset);
    npc(out)->writeShort(_fontIndex);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::ChartTitleFormatRecord_CTFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.ChartTitleFormatRecord.CTFormat", 64);
    return c;
}

java::lang::Class* poi::hssf::record::chart::ChartTitleFormatRecord_CTFormat::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/hssf/record/chart/PlotGrowthRecord.java
#include <org/apache/poi/hssf/record/chart/PlotGrowthRecord.hpp>

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

poi::hssf::record::chart::PlotGrowthRecord::PlotGrowthRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::PlotGrowthRecord::PlotGrowthRecord() 
    : PlotGrowthRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::PlotGrowthRecord::PlotGrowthRecord(::poi::hssf::record::RecordInputStream* in) 
    : PlotGrowthRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::PlotGrowthRecord::sid;

void poi::hssf::record::chart::PlotGrowthRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::PlotGrowthRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_horizontalScale = npc(in)->readInt();
    field_2_verticalScale = npc(in)->readInt();
}

java::lang::String* poi::hssf::record::chart::PlotGrowthRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[PLOTGROWTH]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .horizontalScale      = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getHorizontalScale())))->append(u" ("_j))->append(getHorizontalScale()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .verticalScale        = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getVerticalScale())))->append(u" ("_j))->append(getVerticalScale()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/PLOTGROWTH]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::PlotGrowthRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(field_1_horizontalScale);
    npc(out)->writeInt(field_2_verticalScale);
}

int32_t poi::hssf::record::chart::PlotGrowthRecord::getDataSize()
{
    return int32_t(4) + int32_t(4);
}

int16_t poi::hssf::record::chart::PlotGrowthRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::chart::PlotGrowthRecord::clone()
{
    auto rec = new PlotGrowthRecord();
    npc(rec)->field_1_horizontalScale = field_1_horizontalScale;
    npc(rec)->field_2_verticalScale = field_2_verticalScale;
    return rec;
}

int32_t poi::hssf::record::chart::PlotGrowthRecord::getHorizontalScale()
{
    return field_1_horizontalScale;
}

void poi::hssf::record::chart::PlotGrowthRecord::setHorizontalScale(int32_t field_1_horizontalScale)
{
    this->field_1_horizontalScale = field_1_horizontalScale;
}

int32_t poi::hssf::record::chart::PlotGrowthRecord::getVerticalScale()
{
    return field_2_verticalScale;
}

void poi::hssf::record::chart::PlotGrowthRecord::setVerticalScale(int32_t field_2_verticalScale)
{
    this->field_2_verticalScale = field_2_verticalScale;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::PlotGrowthRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.PlotGrowthRecord", 49);
    return c;
}

int32_t poi::hssf::record::chart::PlotGrowthRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::PlotGrowthRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::PlotGrowthRecord::getClass0()
{
    return class_();
}


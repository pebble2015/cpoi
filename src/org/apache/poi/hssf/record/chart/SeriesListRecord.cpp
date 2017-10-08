// Generated from /POI/java/org/apache/poi/hssf/record/chart/SeriesListRecord.java
#include <org/apache/poi/hssf/record/chart/SeriesListRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::chart::SeriesListRecord::SeriesListRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::SeriesListRecord::SeriesListRecord(::int16_tArray* seriesNumbers) 
    : SeriesListRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(seriesNumbers);
}

poi::hssf::record::chart::SeriesListRecord::SeriesListRecord(::poi::hssf::record::RecordInputStream* in) 
    : SeriesListRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::SeriesListRecord::sid;

void poi::hssf::record::chart::SeriesListRecord::ctor(::int16_tArray* seriesNumbers)
{
    super::ctor();
    field_1_seriesNumbers = (seriesNumbers == nullptr) ? static_cast< ::int16_tArray* >(nullptr) : npc(seriesNumbers)->clone();
}

void poi::hssf::record::chart::SeriesListRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    auto nItems = npc(in)->readUShort();
    auto ss = new ::int16_tArray(nItems);
    for (auto i = int32_t(0); i < nItems; i++) {
        (*ss)[i] = npc(in)->readShort();
    }
    field_1_seriesNumbers = ss;
}

java::lang::String* poi::hssf::record::chart::SeriesListRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SERIESLIST]\n"_j);
    npc(npc(npc(npc(buffer)->append(u"    .seriesNumbers= "_j))->append(u" ("_j))->append(::java::util::Arrays::toString(getSeriesNumbers())))->append(u" )"_j);
    npc(buffer)->append(u"\n"_j);
    npc(buffer)->append(u"[/SERIESLIST]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::SeriesListRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    auto nItems = npc(field_1_seriesNumbers)->length;
    npc(out)->writeShort(nItems);
    for (auto i = int32_t(0); i < nItems; i++) {
        npc(out)->writeShort((*field_1_seriesNumbers)[i]);
    }
}

int32_t poi::hssf::record::chart::SeriesListRecord::getDataSize()
{
    return npc(field_1_seriesNumbers)->length * int32_t(2) + int32_t(2);
}

int16_t poi::hssf::record::chart::SeriesListRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::chart::SeriesListRecord::clone()
{
    return new SeriesListRecord(field_1_seriesNumbers);
}

int16_tArray* poi::hssf::record::chart::SeriesListRecord::getSeriesNumbers()
{
    return field_1_seriesNumbers;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::SeriesListRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.SeriesListRecord", 49);
    return c;
}

int32_t poi::hssf::record::chart::SeriesListRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::SeriesListRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::SeriesListRecord::getClass0()
{
    return class_();
}


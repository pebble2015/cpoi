// Generated from /POI/java/org/apache/poi/hssf/record/chart/SeriesRecord.java
#include <org/apache/poi/hssf/record/chart/SeriesRecord.hpp>

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

org::apache::poi::hssf::record::chart::SeriesRecord::SeriesRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::SeriesRecord::SeriesRecord() 
    : SeriesRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::SeriesRecord::SeriesRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : SeriesRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::sid;

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::CATEGORY_DATA_TYPE_DATES;

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::CATEGORY_DATA_TYPE_NUMERIC;

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::CATEGORY_DATA_TYPE_SEQUENCE;

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::CATEGORY_DATA_TYPE_TEXT;

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::VALUES_DATA_TYPE_DATES;

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::VALUES_DATA_TYPE_NUMERIC;

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::VALUES_DATA_TYPE_SEQUENCE;

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::VALUES_DATA_TYPE_TEXT;

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::BUBBLE_SERIES_TYPE_DATES;

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::BUBBLE_SERIES_TYPE_NUMERIC;

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::BUBBLE_SERIES_TYPE_SEQUENCE;

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesRecord::BUBBLE_SERIES_TYPE_TEXT;

void org::apache::poi::hssf::record::chart::SeriesRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::SeriesRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_categoryDataType = npc(in)->readShort();
    field_2_valuesDataType = npc(in)->readShort();
    field_3_numCategories = npc(in)->readShort();
    field_4_numValues = npc(in)->readShort();
    field_5_bubbleSeriesType = npc(in)->readShort();
    field_6_numBubbleValues = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::SeriesRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SERIES]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .categoryDataType     = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getCategoryDataType())))->append(u" ("_j))->append(static_cast< int32_t >(getCategoryDataType())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .valuesDataType       = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getValuesDataType())))->append(u" ("_j))->append(static_cast< int32_t >(getValuesDataType())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .numCategories        = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getNumCategories())))->append(u" ("_j))->append(static_cast< int32_t >(getNumCategories())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .numValues            = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getNumValues())))->append(u" ("_j))->append(static_cast< int32_t >(getNumValues())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .bubbleSeriesType     = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getBubbleSeriesType())))->append(u" ("_j))->append(static_cast< int32_t >(getBubbleSeriesType())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .numBubbleValues      = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getNumBubbleValues())))->append(u" ("_j))->append(static_cast< int32_t >(getNumBubbleValues())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/SERIES]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::SeriesRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_categoryDataType);
    npc(out)->writeShort(field_2_valuesDataType);
    npc(out)->writeShort(field_3_numCategories);
    npc(out)->writeShort(field_4_numValues);
    npc(out)->writeShort(field_5_bubbleSeriesType);
    npc(out)->writeShort(field_6_numBubbleValues);
}

int32_t org::apache::poi::hssf::record::chart::SeriesRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(2)+ int32_t(2)+ int32_t(2);
}

int16_t org::apache::poi::hssf::record::chart::SeriesRecord::getSid()
{
    return sid;
}

java::lang::Object* org::apache::poi::hssf::record::chart::SeriesRecord::clone()
{
    auto rec = new SeriesRecord();
    npc(rec)->field_1_categoryDataType = field_1_categoryDataType;
    npc(rec)->field_2_valuesDataType = field_2_valuesDataType;
    npc(rec)->field_3_numCategories = field_3_numCategories;
    npc(rec)->field_4_numValues = field_4_numValues;
    npc(rec)->field_5_bubbleSeriesType = field_5_bubbleSeriesType;
    npc(rec)->field_6_numBubbleValues = field_6_numBubbleValues;
    return rec;
}

int16_t org::apache::poi::hssf::record::chart::SeriesRecord::getCategoryDataType()
{
    return field_1_categoryDataType;
}

void org::apache::poi::hssf::record::chart::SeriesRecord::setCategoryDataType(int16_t field_1_categoryDataType)
{
    this->field_1_categoryDataType = field_1_categoryDataType;
}

int16_t org::apache::poi::hssf::record::chart::SeriesRecord::getValuesDataType()
{
    return field_2_valuesDataType;
}

void org::apache::poi::hssf::record::chart::SeriesRecord::setValuesDataType(int16_t field_2_valuesDataType)
{
    this->field_2_valuesDataType = field_2_valuesDataType;
}

int16_t org::apache::poi::hssf::record::chart::SeriesRecord::getNumCategories()
{
    return field_3_numCategories;
}

void org::apache::poi::hssf::record::chart::SeriesRecord::setNumCategories(int16_t field_3_numCategories)
{
    this->field_3_numCategories = field_3_numCategories;
}

int16_t org::apache::poi::hssf::record::chart::SeriesRecord::getNumValues()
{
    return field_4_numValues;
}

void org::apache::poi::hssf::record::chart::SeriesRecord::setNumValues(int16_t field_4_numValues)
{
    this->field_4_numValues = field_4_numValues;
}

int16_t org::apache::poi::hssf::record::chart::SeriesRecord::getBubbleSeriesType()
{
    return field_5_bubbleSeriesType;
}

void org::apache::poi::hssf::record::chart::SeriesRecord::setBubbleSeriesType(int16_t field_5_bubbleSeriesType)
{
    this->field_5_bubbleSeriesType = field_5_bubbleSeriesType;
}

int16_t org::apache::poi::hssf::record::chart::SeriesRecord::getNumBubbleValues()
{
    return field_6_numBubbleValues;
}

void org::apache::poi::hssf::record::chart::SeriesRecord::setNumBubbleValues(int16_t field_6_numBubbleValues)
{
    this->field_6_numBubbleValues = field_6_numBubbleValues;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::SeriesRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.SeriesRecord", 45);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::SeriesRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::SeriesRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::SeriesRecord::getClass0()
{
    return class_();
}


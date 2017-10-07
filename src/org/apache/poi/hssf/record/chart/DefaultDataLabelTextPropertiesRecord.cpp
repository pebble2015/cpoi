// Generated from /POI/java/org/apache/poi/hssf/record/chart/DefaultDataLabelTextPropertiesRecord.java
#include <org/apache/poi/hssf/record/chart/DefaultDataLabelTextPropertiesRecord.hpp>

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

org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::DefaultDataLabelTextPropertiesRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::DefaultDataLabelTextPropertiesRecord() 
    : DefaultDataLabelTextPropertiesRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::DefaultDataLabelTextPropertiesRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : DefaultDataLabelTextPropertiesRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::sid;

constexpr int16_t org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::CATEGORY_DATA_TYPE_SHOW_LABELS_CHARACTERISTIC;

constexpr int16_t org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::CATEGORY_DATA_TYPE_VALUE_AND_PERCENTAGE_CHARACTERISTIC;

constexpr int16_t org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::CATEGORY_DATA_TYPE_ALL_TEXT_CHARACTERISTIC;

void org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_categoryDataType = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[DEFAULTTEXT]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .categoryDataType     = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getCategoryDataType())))->append(u" ("_j))->append(static_cast< int32_t >(getCategoryDataType())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/DEFAULTTEXT]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_categoryDataType);
}

int32_t org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord* org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::clone()
{
    auto rec = new DefaultDataLabelTextPropertiesRecord();
    npc(rec)->field_1_categoryDataType = field_1_categoryDataType;
    return rec;
}

int16_t org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::getCategoryDataType()
{
    return field_1_categoryDataType;
}

void org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::setCategoryDataType(int16_t field_1_categoryDataType)
{
    this->field_1_categoryDataType = field_1_categoryDataType;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.DefaultDataLabelTextPropertiesRecord", 69);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::getClass0()
{
    return class_();
}

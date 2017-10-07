// Generated from /POI/java/org/apache/poi/hssf/record/chart/LegendRecord.java
#include <org/apache/poi/hssf/record/chart/LegendRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::chart::LegendRecord::LegendRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::LegendRecord::LegendRecord() 
    : LegendRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::LegendRecord::LegendRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : LegendRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::LegendRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::LegendRecord::autoPosition()
{
    clinit();
    return autoPosition_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::LegendRecord::autoPosition_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::LegendRecord::autoSeries()
{
    clinit();
    return autoSeries_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::LegendRecord::autoSeries_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::LegendRecord::autoXPositioning()
{
    clinit();
    return autoXPositioning_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::LegendRecord::autoXPositioning_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::LegendRecord::autoYPositioning()
{
    clinit();
    return autoYPositioning_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::LegendRecord::autoYPositioning_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::LegendRecord::vertical()
{
    clinit();
    return vertical_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::LegendRecord::vertical_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::LegendRecord::dataTable()
{
    clinit();
    return dataTable_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::LegendRecord::dataTable_;

constexpr int8_t org::apache::poi::hssf::record::chart::LegendRecord::TYPE_BOTTOM;

constexpr int8_t org::apache::poi::hssf::record::chart::LegendRecord::TYPE_CORNER;

constexpr int8_t org::apache::poi::hssf::record::chart::LegendRecord::TYPE_TOP;

constexpr int8_t org::apache::poi::hssf::record::chart::LegendRecord::TYPE_RIGHT;

constexpr int8_t org::apache::poi::hssf::record::chart::LegendRecord::TYPE_LEFT;

constexpr int8_t org::apache::poi::hssf::record::chart::LegendRecord::TYPE_UNDOCKED;

constexpr int8_t org::apache::poi::hssf::record::chart::LegendRecord::SPACING_CLOSE;

constexpr int8_t org::apache::poi::hssf::record::chart::LegendRecord::SPACING_MEDIUM;

constexpr int8_t org::apache::poi::hssf::record::chart::LegendRecord::SPACING_OPEN;

void org::apache::poi::hssf::record::chart::LegendRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::LegendRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_xAxisUpperLeft = npc(in)->readInt();
    field_2_yAxisUpperLeft = npc(in)->readInt();
    field_3_xSize = npc(in)->readInt();
    field_4_ySize = npc(in)->readInt();
    field_5_type = npc(in)->readByte();
    field_6_spacing = npc(in)->readByte();
    field_7_options = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::LegendRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[LEGEND]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .xAxisUpperLeft       = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getXAxisUpperLeft())))->append(u" ("_j))->append(getXAxisUpperLeft()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .yAxisUpperLeft       = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getYAxisUpperLeft())))->append(u" ("_j))->append(getYAxisUpperLeft()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .xSize                = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getXSize())))->append(u" ("_j))->append(getXSize()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .ySize                = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getYSize())))->append(u" ("_j))->append(getYSize()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .type                 = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getType())))->append(u" ("_j))->append(static_cast< int32_t >(getType())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .spacing              = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getSpacing())))->append(u" ("_j))->append(static_cast< int32_t >(getSpacing())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .options              = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getOptions())))->append(u" ("_j))->append(static_cast< int32_t >(getOptions())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .autoPosition             = "_j))->append(isAutoPosition()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .autoSeries               = "_j))->append(isAutoSeries()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .autoXPositioning         = "_j))->append(isAutoXPositioning()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .autoYPositioning         = "_j))->append(isAutoYPositioning()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .vertical                 = "_j))->append(isVertical()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .dataTable                = "_j))->append(isDataTable()))->append(u'\u000a');
    npc(buffer)->append(u"[/LEGEND]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::LegendRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(field_1_xAxisUpperLeft);
    npc(out)->writeInt(field_2_yAxisUpperLeft);
    npc(out)->writeInt(field_3_xSize);
    npc(out)->writeInt(field_4_ySize);
    npc(out)->writeByte(field_5_type);
    npc(out)->writeByte(field_6_spacing);
    npc(out)->writeShort(field_7_options);
}

int32_t org::apache::poi::hssf::record::chart::LegendRecord::getDataSize()
{
    return int32_t(4) + int32_t(4) + int32_t(4)+ int32_t(4)+ int32_t(1)+ int32_t(1)+ int32_t(2);
}

int16_t org::apache::poi::hssf::record::chart::LegendRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::LegendRecord* org::apache::poi::hssf::record::chart::LegendRecord::clone()
{
    auto rec = new LegendRecord();
    npc(rec)->field_1_xAxisUpperLeft = field_1_xAxisUpperLeft;
    npc(rec)->field_2_yAxisUpperLeft = field_2_yAxisUpperLeft;
    npc(rec)->field_3_xSize = field_3_xSize;
    npc(rec)->field_4_ySize = field_4_ySize;
    npc(rec)->field_5_type = field_5_type;
    npc(rec)->field_6_spacing = field_6_spacing;
    npc(rec)->field_7_options = field_7_options;
    return rec;
}

int32_t org::apache::poi::hssf::record::chart::LegendRecord::getXAxisUpperLeft()
{
    return field_1_xAxisUpperLeft;
}

void org::apache::poi::hssf::record::chart::LegendRecord::setXAxisUpperLeft(int32_t field_1_xAxisUpperLeft)
{
    this->field_1_xAxisUpperLeft = field_1_xAxisUpperLeft;
}

int32_t org::apache::poi::hssf::record::chart::LegendRecord::getYAxisUpperLeft()
{
    return field_2_yAxisUpperLeft;
}

void org::apache::poi::hssf::record::chart::LegendRecord::setYAxisUpperLeft(int32_t field_2_yAxisUpperLeft)
{
    this->field_2_yAxisUpperLeft = field_2_yAxisUpperLeft;
}

int32_t org::apache::poi::hssf::record::chart::LegendRecord::getXSize()
{
    return field_3_xSize;
}

void org::apache::poi::hssf::record::chart::LegendRecord::setXSize(int32_t field_3_xSize)
{
    this->field_3_xSize = field_3_xSize;
}

int32_t org::apache::poi::hssf::record::chart::LegendRecord::getYSize()
{
    return field_4_ySize;
}

void org::apache::poi::hssf::record::chart::LegendRecord::setYSize(int32_t field_4_ySize)
{
    this->field_4_ySize = field_4_ySize;
}

int8_t org::apache::poi::hssf::record::chart::LegendRecord::getType()
{
    return field_5_type;
}

void org::apache::poi::hssf::record::chart::LegendRecord::setType(int8_t field_5_type)
{
    this->field_5_type = field_5_type;
}

int8_t org::apache::poi::hssf::record::chart::LegendRecord::getSpacing()
{
    return field_6_spacing;
}

void org::apache::poi::hssf::record::chart::LegendRecord::setSpacing(int8_t field_6_spacing)
{
    this->field_6_spacing = field_6_spacing;
}

int16_t org::apache::poi::hssf::record::chart::LegendRecord::getOptions()
{
    return field_7_options;
}

void org::apache::poi::hssf::record::chart::LegendRecord::setOptions(int16_t field_7_options)
{
    this->field_7_options = field_7_options;
}

void org::apache::poi::hssf::record::chart::LegendRecord::setAutoPosition(bool value)
{
    field_7_options = npc(autoPosition_)->setShortBoolean(field_7_options, value);
}

bool org::apache::poi::hssf::record::chart::LegendRecord::isAutoPosition()
{
    return npc(autoPosition_)->isSet(field_7_options);
}

void org::apache::poi::hssf::record::chart::LegendRecord::setAutoSeries(bool value)
{
    field_7_options = npc(autoSeries_)->setShortBoolean(field_7_options, value);
}

bool org::apache::poi::hssf::record::chart::LegendRecord::isAutoSeries()
{
    return npc(autoSeries_)->isSet(field_7_options);
}

void org::apache::poi::hssf::record::chart::LegendRecord::setAutoXPositioning(bool value)
{
    field_7_options = npc(autoXPositioning_)->setShortBoolean(field_7_options, value);
}

bool org::apache::poi::hssf::record::chart::LegendRecord::isAutoXPositioning()
{
    return npc(autoXPositioning_)->isSet(field_7_options);
}

void org::apache::poi::hssf::record::chart::LegendRecord::setAutoYPositioning(bool value)
{
    field_7_options = npc(autoYPositioning_)->setShortBoolean(field_7_options, value);
}

bool org::apache::poi::hssf::record::chart::LegendRecord::isAutoYPositioning()
{
    return npc(autoYPositioning_)->isSet(field_7_options);
}

void org::apache::poi::hssf::record::chart::LegendRecord::setVertical(bool value)
{
    field_7_options = npc(vertical_)->setShortBoolean(field_7_options, value);
}

bool org::apache::poi::hssf::record::chart::LegendRecord::isVertical()
{
    return npc(vertical_)->isSet(field_7_options);
}

void org::apache::poi::hssf::record::chart::LegendRecord::setDataTable(bool value)
{
    field_7_options = npc(dataTable_)->setShortBoolean(field_7_options, value);
}

bool org::apache::poi::hssf::record::chart::LegendRecord::isDataTable()
{
    return npc(dataTable_)->isSet(field_7_options);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::LegendRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.LegendRecord", 45);
    return c;
}

void org::apache::poi::hssf::record::chart::LegendRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        autoPosition_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        autoSeries_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        autoXPositioning_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4);
        autoYPositioning_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
        vertical_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16);
        dataTable_ = ::org::apache::poi::util::BitFieldFactory::getInstance(32);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::chart::LegendRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::LegendRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::LegendRecord::getClass0()
{
    return class_();
}


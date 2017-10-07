// Generated from /POI/java/org/apache/poi/hssf/record/chart/TickRecord.java
#include <org/apache/poi/hssf/record/chart/TickRecord.hpp>

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

org::apache::poi::hssf::record::chart::TickRecord::TickRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::TickRecord::TickRecord() 
    : TickRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::TickRecord::TickRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : TickRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::TickRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::TickRecord::autoTextColor()
{
    clinit();
    return autoTextColor_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::TickRecord::autoTextColor_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::TickRecord::autoTextBackground()
{
    clinit();
    return autoTextBackground_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::TickRecord::autoTextBackground_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::TickRecord::rotation()
{
    clinit();
    return rotation_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::TickRecord::rotation_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::TickRecord::autorotate()
{
    clinit();
    return autorotate_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::TickRecord::autorotate_;

void org::apache::poi::hssf::record::chart::TickRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::TickRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_majorTickType = npc(in)->readByte();
    field_2_minorTickType = npc(in)->readByte();
    field_3_labelPosition = npc(in)->readByte();
    field_4_background = npc(in)->readByte();
    field_5_labelColorRgb = npc(in)->readInt();
    field_6_zero1 = npc(in)->readInt();
    field_7_zero2 = npc(in)->readInt();
    field_8_zero3 = npc(in)->readInt();
    field_9_zero4 = npc(in)->readInt();
    field_10_options = npc(in)->readShort();
    field_11_tickColor = npc(in)->readShort();
    field_12_zero5 = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::TickRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[TICK]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .majorTickType        = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getMajorTickType())))->append(u" ("_j))->append(static_cast< int32_t >(getMajorTickType())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .minorTickType        = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getMinorTickType())))->append(u" ("_j))->append(static_cast< int32_t >(getMinorTickType())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .labelPosition        = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getLabelPosition())))->append(u" ("_j))->append(static_cast< int32_t >(getLabelPosition())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .background           = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getBackground())))->append(u" ("_j))->append(static_cast< int32_t >(getBackground())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .labelColorRgb        = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getLabelColorRgb())))->append(u" ("_j))->append(getLabelColorRgb()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .zero1                = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getZero1())))->append(u" ("_j))->append(getZero1()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .zero2                = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getZero2())))->append(u" ("_j))->append(getZero2()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .options              = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getOptions())))->append(u" ("_j))->append(static_cast< int32_t >(getOptions())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .autoTextColor            = "_j))->append(isAutoTextColor()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .autoTextBackground       = "_j))->append(isAutoTextBackground()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .rotation                 = "_j))->append(static_cast< int32_t >(getRotation())))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .autorotate               = "_j))->append(isAutorotate()))->append(u'\u000a');
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .tickColor            = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getTickColor())))->append(u" ("_j))->append(static_cast< int32_t >(getTickColor())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .zero3                = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getZero3())))->append(u" ("_j))->append(static_cast< int32_t >(getZero3())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/TICK]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::TickRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(field_1_majorTickType);
    npc(out)->writeByte(field_2_minorTickType);
    npc(out)->writeByte(field_3_labelPosition);
    npc(out)->writeByte(field_4_background);
    npc(out)->writeInt(field_5_labelColorRgb);
    npc(out)->writeInt(field_6_zero1);
    npc(out)->writeInt(field_7_zero2);
    npc(out)->writeInt(field_8_zero3);
    npc(out)->writeInt(field_9_zero4);
    npc(out)->writeShort(field_10_options);
    npc(out)->writeShort(field_11_tickColor);
    npc(out)->writeShort(field_12_zero5);
}

int32_t org::apache::poi::hssf::record::chart::TickRecord::getDataSize()
{
    return int32_t(1) + int32_t(1) + int32_t(1)+ int32_t(1)+ int32_t(4)+ int32_t(8)+ int32_t(8)+ int32_t(2)+ int32_t(2)+ int32_t(2);
}

int16_t org::apache::poi::hssf::record::chart::TickRecord::getSid()
{
    return sid;
}

java::lang::Object* org::apache::poi::hssf::record::chart::TickRecord::clone()
{
    auto rec = new TickRecord();
    npc(rec)->field_1_majorTickType = field_1_majorTickType;
    npc(rec)->field_2_minorTickType = field_2_minorTickType;
    npc(rec)->field_3_labelPosition = field_3_labelPosition;
    npc(rec)->field_4_background = field_4_background;
    npc(rec)->field_5_labelColorRgb = field_5_labelColorRgb;
    npc(rec)->field_6_zero1 = field_6_zero1;
    npc(rec)->field_7_zero2 = field_7_zero2;
    npc(rec)->field_8_zero3 = field_8_zero3;
    npc(rec)->field_9_zero4 = field_9_zero4;
    npc(rec)->field_10_options = field_10_options;
    npc(rec)->field_11_tickColor = field_11_tickColor;
    npc(rec)->field_12_zero5 = field_12_zero5;
    return rec;
}

int8_t org::apache::poi::hssf::record::chart::TickRecord::getMajorTickType()
{
    return field_1_majorTickType;
}

void org::apache::poi::hssf::record::chart::TickRecord::setMajorTickType(int8_t field_1_majorTickType)
{
    this->field_1_majorTickType = field_1_majorTickType;
}

int8_t org::apache::poi::hssf::record::chart::TickRecord::getMinorTickType()
{
    return field_2_minorTickType;
}

void org::apache::poi::hssf::record::chart::TickRecord::setMinorTickType(int8_t field_2_minorTickType)
{
    this->field_2_minorTickType = field_2_minorTickType;
}

int8_t org::apache::poi::hssf::record::chart::TickRecord::getLabelPosition()
{
    return field_3_labelPosition;
}

void org::apache::poi::hssf::record::chart::TickRecord::setLabelPosition(int8_t field_3_labelPosition)
{
    this->field_3_labelPosition = field_3_labelPosition;
}

int8_t org::apache::poi::hssf::record::chart::TickRecord::getBackground()
{
    return field_4_background;
}

void org::apache::poi::hssf::record::chart::TickRecord::setBackground(int8_t field_4_background)
{
    this->field_4_background = field_4_background;
}

int32_t org::apache::poi::hssf::record::chart::TickRecord::getLabelColorRgb()
{
    return field_5_labelColorRgb;
}

void org::apache::poi::hssf::record::chart::TickRecord::setLabelColorRgb(int32_t field_5_labelColorRgb)
{
    this->field_5_labelColorRgb = field_5_labelColorRgb;
}

int32_t org::apache::poi::hssf::record::chart::TickRecord::getZero1()
{
    return field_6_zero1;
}

void org::apache::poi::hssf::record::chart::TickRecord::setZero1(int32_t field_6_zero1)
{
    this->field_6_zero1 = field_6_zero1;
}

int32_t org::apache::poi::hssf::record::chart::TickRecord::getZero2()
{
    return field_7_zero2;
}

void org::apache::poi::hssf::record::chart::TickRecord::setZero2(int32_t field_7_zero2)
{
    this->field_7_zero2 = field_7_zero2;
}

int16_t org::apache::poi::hssf::record::chart::TickRecord::getOptions()
{
    return field_10_options;
}

void org::apache::poi::hssf::record::chart::TickRecord::setOptions(int16_t field_10_options)
{
    this->field_10_options = field_10_options;
}

int16_t org::apache::poi::hssf::record::chart::TickRecord::getTickColor()
{
    return field_11_tickColor;
}

void org::apache::poi::hssf::record::chart::TickRecord::setTickColor(int16_t field_11_tickColor)
{
    this->field_11_tickColor = field_11_tickColor;
}

int16_t org::apache::poi::hssf::record::chart::TickRecord::getZero3()
{
    return field_12_zero5;
}

void org::apache::poi::hssf::record::chart::TickRecord::setZero3(int16_t field_12_zero3)
{
    this->field_12_zero5 = field_12_zero3;
}

void org::apache::poi::hssf::record::chart::TickRecord::setAutoTextColor(bool value)
{
    field_10_options = npc(autoTextColor_)->setShortBoolean(field_10_options, value);
}

bool org::apache::poi::hssf::record::chart::TickRecord::isAutoTextColor()
{
    return npc(autoTextColor_)->isSet(field_10_options);
}

void org::apache::poi::hssf::record::chart::TickRecord::setAutoTextBackground(bool value)
{
    field_10_options = npc(autoTextBackground_)->setShortBoolean(field_10_options, value);
}

bool org::apache::poi::hssf::record::chart::TickRecord::isAutoTextBackground()
{
    return npc(autoTextBackground_)->isSet(field_10_options);
}

void org::apache::poi::hssf::record::chart::TickRecord::setRotation(int16_t value)
{
    field_10_options = npc(rotation_)->setShortValue(field_10_options, value);
}

int16_t org::apache::poi::hssf::record::chart::TickRecord::getRotation()
{
    return npc(rotation_)->getShortValue(field_10_options);
}

void org::apache::poi::hssf::record::chart::TickRecord::setAutorotate(bool value)
{
    field_10_options = npc(autorotate_)->setShortBoolean(field_10_options, value);
}

bool org::apache::poi::hssf::record::chart::TickRecord::isAutorotate()
{
    return npc(autorotate_)->isSet(field_10_options);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::TickRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.TickRecord", 43);
    return c;
}

void org::apache::poi::hssf::record::chart::TickRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        autoTextColor_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        autoTextBackground_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        rotation_ = ::org::apache::poi::util::BitFieldFactory::getInstance(28);
        autorotate_ = ::org::apache::poi::util::BitFieldFactory::getInstance(32);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::chart::TickRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::TickRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::TickRecord::getClass0()
{
    return class_();
}


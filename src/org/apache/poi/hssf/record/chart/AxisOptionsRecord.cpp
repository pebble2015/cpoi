// Generated from /POI/java/org/apache/poi/hssf/record/chart/AxisOptionsRecord.java
#include <org/apache/poi/hssf/record/chart/AxisOptionsRecord.hpp>

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

org::apache::poi::hssf::record::chart::AxisOptionsRecord::AxisOptionsRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::AxisOptionsRecord::AxisOptionsRecord() 
    : AxisOptionsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::AxisOptionsRecord::AxisOptionsRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : AxisOptionsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultMinimum()
{
    clinit();
    return defaultMinimum_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultMinimum_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultMaximum()
{
    clinit();
    return defaultMaximum_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultMaximum_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultMajor()
{
    clinit();
    return defaultMajor_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultMajor_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultMinorUnit()
{
    clinit();
    return defaultMinorUnit_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultMinorUnit_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::AxisOptionsRecord::isDate()
{
    clinit();
    return isDate_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::AxisOptionsRecord::isDate_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultBase()
{
    clinit();
    return defaultBase_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultBase_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultCross()
{
    clinit();
    return defaultCross_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultCross_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultDateSettings()
{
    clinit();
    return defaultDateSettings_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::AxisOptionsRecord::defaultDateSettings_;

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_minimumCategory = npc(in)->readShort();
    field_2_maximumCategory = npc(in)->readShort();
    field_3_majorUnitValue = npc(in)->readShort();
    field_4_majorUnit = npc(in)->readShort();
    field_5_minorUnitValue = npc(in)->readShort();
    field_6_minorUnit = npc(in)->readShort();
    field_7_baseUnit = npc(in)->readShort();
    field_8_crossingPoint = npc(in)->readShort();
    field_9_options = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::AxisOptionsRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[AXCEXT]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .minimumCategory      = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getMinimumCategory())))->append(u" ("_j))->append(static_cast< int32_t >(getMinimumCategory())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .maximumCategory      = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getMaximumCategory())))->append(u" ("_j))->append(static_cast< int32_t >(getMaximumCategory())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .majorUnitValue       = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getMajorUnitValue())))->append(u" ("_j))->append(static_cast< int32_t >(getMajorUnitValue())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .majorUnit            = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getMajorUnit())))->append(u" ("_j))->append(static_cast< int32_t >(getMajorUnit())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .minorUnitValue       = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getMinorUnitValue())))->append(u" ("_j))->append(static_cast< int32_t >(getMinorUnitValue())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .minorUnit            = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getMinorUnit())))->append(u" ("_j))->append(static_cast< int32_t >(getMinorUnit())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .baseUnit             = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getBaseUnit())))->append(u" ("_j))->append(static_cast< int32_t >(getBaseUnit())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .crossingPoint        = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getCrossingPoint())))->append(u" ("_j))->append(static_cast< int32_t >(getCrossingPoint())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .options              = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getOptions())))->append(u" ("_j))->append(static_cast< int32_t >(getOptions())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .defaultMinimum           = "_j))->append(isDefaultMinimum()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .defaultMaximum           = "_j))->append(isDefaultMaximum()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .defaultMajor             = "_j))->append(isDefaultMajor()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .defaultMinorUnit         = "_j))->append(isDefaultMinorUnit()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .isDate                   = "_j))->append(isIsDate()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .defaultBase              = "_j))->append(isDefaultBase()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .defaultCross             = "_j))->append(isDefaultCross()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .defaultDateSettings      = "_j))->append(isDefaultDateSettings()))->append(u'\u000a');
    npc(buffer)->append(u"[/AXCEXT]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_minimumCategory);
    npc(out)->writeShort(field_2_maximumCategory);
    npc(out)->writeShort(field_3_majorUnitValue);
    npc(out)->writeShort(field_4_majorUnit);
    npc(out)->writeShort(field_5_minorUnitValue);
    npc(out)->writeShort(field_6_minorUnit);
    npc(out)->writeShort(field_7_baseUnit);
    npc(out)->writeShort(field_8_crossingPoint);
    npc(out)->writeShort(field_9_options);
}

int32_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(2)+ int32_t(2)+ int32_t(2)+ int32_t(2)+ int32_t(2)+ int32_t(2);
}

int16_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::AxisOptionsRecord* org::apache::poi::hssf::record::chart::AxisOptionsRecord::clone()
{
    auto rec = new AxisOptionsRecord();
    npc(rec)->field_1_minimumCategory = field_1_minimumCategory;
    npc(rec)->field_2_maximumCategory = field_2_maximumCategory;
    npc(rec)->field_3_majorUnitValue = field_3_majorUnitValue;
    npc(rec)->field_4_majorUnit = field_4_majorUnit;
    npc(rec)->field_5_minorUnitValue = field_5_minorUnitValue;
    npc(rec)->field_6_minorUnit = field_6_minorUnit;
    npc(rec)->field_7_baseUnit = field_7_baseUnit;
    npc(rec)->field_8_crossingPoint = field_8_crossingPoint;
    npc(rec)->field_9_options = field_9_options;
    return rec;
}

int16_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::getMinimumCategory()
{
    return field_1_minimumCategory;
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setMinimumCategory(int16_t field_1_minimumCategory)
{
    this->field_1_minimumCategory = field_1_minimumCategory;
}

int16_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::getMaximumCategory()
{
    return field_2_maximumCategory;
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setMaximumCategory(int16_t field_2_maximumCategory)
{
    this->field_2_maximumCategory = field_2_maximumCategory;
}

int16_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::getMajorUnitValue()
{
    return field_3_majorUnitValue;
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setMajorUnitValue(int16_t field_3_majorUnitValue)
{
    this->field_3_majorUnitValue = field_3_majorUnitValue;
}

int16_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::getMajorUnit()
{
    return field_4_majorUnit;
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setMajorUnit(int16_t field_4_majorUnit)
{
    this->field_4_majorUnit = field_4_majorUnit;
}

int16_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::getMinorUnitValue()
{
    return field_5_minorUnitValue;
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setMinorUnitValue(int16_t field_5_minorUnitValue)
{
    this->field_5_minorUnitValue = field_5_minorUnitValue;
}

int16_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::getMinorUnit()
{
    return field_6_minorUnit;
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setMinorUnit(int16_t field_6_minorUnit)
{
    this->field_6_minorUnit = field_6_minorUnit;
}

int16_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::getBaseUnit()
{
    return field_7_baseUnit;
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setBaseUnit(int16_t field_7_baseUnit)
{
    this->field_7_baseUnit = field_7_baseUnit;
}

int16_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::getCrossingPoint()
{
    return field_8_crossingPoint;
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setCrossingPoint(int16_t field_8_crossingPoint)
{
    this->field_8_crossingPoint = field_8_crossingPoint;
}

int16_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::getOptions()
{
    return field_9_options;
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setOptions(int16_t field_9_options)
{
    this->field_9_options = field_9_options;
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setDefaultMinimum(bool value)
{
    field_9_options = npc(defaultMinimum_)->setShortBoolean(field_9_options, value);
}

bool org::apache::poi::hssf::record::chart::AxisOptionsRecord::isDefaultMinimum()
{
    return npc(defaultMinimum_)->isSet(field_9_options);
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setDefaultMaximum(bool value)
{
    field_9_options = npc(defaultMaximum_)->setShortBoolean(field_9_options, value);
}

bool org::apache::poi::hssf::record::chart::AxisOptionsRecord::isDefaultMaximum()
{
    return npc(defaultMaximum_)->isSet(field_9_options);
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setDefaultMajor(bool value)
{
    field_9_options = npc(defaultMajor_)->setShortBoolean(field_9_options, value);
}

bool org::apache::poi::hssf::record::chart::AxisOptionsRecord::isDefaultMajor()
{
    return npc(defaultMajor_)->isSet(field_9_options);
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setDefaultMinorUnit(bool value)
{
    field_9_options = npc(defaultMinorUnit_)->setShortBoolean(field_9_options, value);
}

bool org::apache::poi::hssf::record::chart::AxisOptionsRecord::isDefaultMinorUnit()
{
    return npc(defaultMinorUnit_)->isSet(field_9_options);
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setIsDate(bool value)
{
    field_9_options = npc(isDate_)->setShortBoolean(field_9_options, value);
}

bool org::apache::poi::hssf::record::chart::AxisOptionsRecord::isIsDate()
{
    return npc(isDate_)->isSet(field_9_options);
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setDefaultBase(bool value)
{
    field_9_options = npc(defaultBase_)->setShortBoolean(field_9_options, value);
}

bool org::apache::poi::hssf::record::chart::AxisOptionsRecord::isDefaultBase()
{
    return npc(defaultBase_)->isSet(field_9_options);
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setDefaultCross(bool value)
{
    field_9_options = npc(defaultCross_)->setShortBoolean(field_9_options, value);
}

bool org::apache::poi::hssf::record::chart::AxisOptionsRecord::isDefaultCross()
{
    return npc(defaultCross_)->isSet(field_9_options);
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::setDefaultDateSettings(bool value)
{
    field_9_options = npc(defaultDateSettings_)->setShortBoolean(field_9_options, value);
}

bool org::apache::poi::hssf::record::chart::AxisOptionsRecord::isDefaultDateSettings()
{
    return npc(defaultDateSettings_)->isSet(field_9_options);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::AxisOptionsRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.AxisOptionsRecord", 50);
    return c;
}

void org::apache::poi::hssf::record::chart::AxisOptionsRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        defaultMinimum_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        defaultMaximum_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        defaultMajor_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4);
        defaultMinorUnit_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
        isDate_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16);
        defaultBase_ = ::org::apache::poi::util::BitFieldFactory::getInstance(32);
        defaultCross_ = ::org::apache::poi::util::BitFieldFactory::getInstance(64);
        defaultDateSettings_ = ::org::apache::poi::util::BitFieldFactory::getInstance(128);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::chart::AxisOptionsRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::AxisOptionsRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::AxisOptionsRecord::getClass0()
{
    return class_();
}


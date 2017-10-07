// Generated from /POI/java/org/apache/poi/hssf/record/chart/ValueRangeRecord.java
#include <org/apache/poi/hssf/record/chart/ValueRangeRecord.hpp>

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

org::apache::poi::hssf::record::chart::ValueRangeRecord::ValueRangeRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::ValueRangeRecord::ValueRangeRecord() 
    : ValueRangeRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::ValueRangeRecord::ValueRangeRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : ValueRangeRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::ValueRangeRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::ValueRangeRecord::automaticMinimum()
{
    clinit();
    return automaticMinimum_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::ValueRangeRecord::automaticMinimum_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::ValueRangeRecord::automaticMaximum()
{
    clinit();
    return automaticMaximum_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::ValueRangeRecord::automaticMaximum_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::ValueRangeRecord::automaticMajor()
{
    clinit();
    return automaticMajor_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::ValueRangeRecord::automaticMajor_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::ValueRangeRecord::automaticMinor()
{
    clinit();
    return automaticMinor_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::ValueRangeRecord::automaticMinor_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::ValueRangeRecord::automaticCategoryCrossing()
{
    clinit();
    return automaticCategoryCrossing_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::ValueRangeRecord::automaticCategoryCrossing_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::ValueRangeRecord::logarithmicScale()
{
    clinit();
    return logarithmicScale_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::ValueRangeRecord::logarithmicScale_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::ValueRangeRecord::valuesInReverse()
{
    clinit();
    return valuesInReverse_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::ValueRangeRecord::valuesInReverse_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::ValueRangeRecord::crossCategoryAxisAtMaximum()
{
    clinit();
    return crossCategoryAxisAtMaximum_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::ValueRangeRecord::crossCategoryAxisAtMaximum_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::ValueRangeRecord::reserved()
{
    clinit();
    return reserved_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::ValueRangeRecord::reserved_;

void org::apache::poi::hssf::record::chart::ValueRangeRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_minimumAxisValue = npc(in)->readDouble();
    field_2_maximumAxisValue = npc(in)->readDouble();
    field_3_majorIncrement = npc(in)->readDouble();
    field_4_minorIncrement = npc(in)->readDouble();
    field_5_categoryAxisCross = npc(in)->readDouble();
    field_6_options = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::ValueRangeRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[VALUERANGE]\n"_j);
    npc(npc(npc(npc(buffer)->append(u"    .minimumAxisValue     = "_j))->append(u" ("_j))->append(getMinimumAxisValue()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(buffer)->append(u"    .maximumAxisValue     = "_j))->append(u" ("_j))->append(getMaximumAxisValue()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(buffer)->append(u"    .majorIncrement       = "_j))->append(u" ("_j))->append(getMajorIncrement()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(buffer)->append(u"    .minorIncrement       = "_j))->append(u" ("_j))->append(getMinorIncrement()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(buffer)->append(u"    .categoryAxisCross    = "_j))->append(u" ("_j))->append(getCategoryAxisCross()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .options              = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getOptions())))->append(u" ("_j))->append(static_cast< int32_t >(getOptions())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .automaticMinimum         = "_j))->append(isAutomaticMinimum()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .automaticMaximum         = "_j))->append(isAutomaticMaximum()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .automaticMajor           = "_j))->append(isAutomaticMajor()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .automaticMinor           = "_j))->append(isAutomaticMinor()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .automaticCategoryCrossing     = "_j))->append(isAutomaticCategoryCrossing()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .logarithmicScale         = "_j))->append(isLogarithmicScale()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .valuesInReverse          = "_j))->append(isValuesInReverse()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .crossCategoryAxisAtMaximum     = "_j))->append(isCrossCategoryAxisAtMaximum()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .reserved                 = "_j))->append(isReserved()))->append(u'\u000a');
    npc(buffer)->append(u"[/VALUERANGE]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeDouble(field_1_minimumAxisValue);
    npc(out)->writeDouble(field_2_maximumAxisValue);
    npc(out)->writeDouble(field_3_majorIncrement);
    npc(out)->writeDouble(field_4_minorIncrement);
    npc(out)->writeDouble(field_5_categoryAxisCross);
    npc(out)->writeShort(field_6_options);
}

int32_t org::apache::poi::hssf::record::chart::ValueRangeRecord::getDataSize()
{
    return int32_t(8) + int32_t(8) + int32_t(8)+ int32_t(8)+ int32_t(8)+ int32_t(2);
}

int16_t org::apache::poi::hssf::record::chart::ValueRangeRecord::getSid()
{
    return sid;
}

java::lang::Object* org::apache::poi::hssf::record::chart::ValueRangeRecord::clone()
{
    auto rec = new ValueRangeRecord();
    npc(rec)->field_1_minimumAxisValue = field_1_minimumAxisValue;
    npc(rec)->field_2_maximumAxisValue = field_2_maximumAxisValue;
    npc(rec)->field_3_majorIncrement = field_3_majorIncrement;
    npc(rec)->field_4_minorIncrement = field_4_minorIncrement;
    npc(rec)->field_5_categoryAxisCross = field_5_categoryAxisCross;
    npc(rec)->field_6_options = field_6_options;
    return rec;
}

double org::apache::poi::hssf::record::chart::ValueRangeRecord::getMinimumAxisValue()
{
    return field_1_minimumAxisValue;
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setMinimumAxisValue(double field_1_minimumAxisValue)
{
    this->field_1_minimumAxisValue = field_1_minimumAxisValue;
}

double org::apache::poi::hssf::record::chart::ValueRangeRecord::getMaximumAxisValue()
{
    return field_2_maximumAxisValue;
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setMaximumAxisValue(double field_2_maximumAxisValue)
{
    this->field_2_maximumAxisValue = field_2_maximumAxisValue;
}

double org::apache::poi::hssf::record::chart::ValueRangeRecord::getMajorIncrement()
{
    return field_3_majorIncrement;
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setMajorIncrement(double field_3_majorIncrement)
{
    this->field_3_majorIncrement = field_3_majorIncrement;
}

double org::apache::poi::hssf::record::chart::ValueRangeRecord::getMinorIncrement()
{
    return field_4_minorIncrement;
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setMinorIncrement(double field_4_minorIncrement)
{
    this->field_4_minorIncrement = field_4_minorIncrement;
}

double org::apache::poi::hssf::record::chart::ValueRangeRecord::getCategoryAxisCross()
{
    return field_5_categoryAxisCross;
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setCategoryAxisCross(double field_5_categoryAxisCross)
{
    this->field_5_categoryAxisCross = field_5_categoryAxisCross;
}

int16_t org::apache::poi::hssf::record::chart::ValueRangeRecord::getOptions()
{
    return field_6_options;
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setOptions(int16_t field_6_options)
{
    this->field_6_options = field_6_options;
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setAutomaticMinimum(bool value)
{
    field_6_options = npc(automaticMinimum_)->setShortBoolean(field_6_options, value);
}

bool org::apache::poi::hssf::record::chart::ValueRangeRecord::isAutomaticMinimum()
{
    return npc(automaticMinimum_)->isSet(field_6_options);
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setAutomaticMaximum(bool value)
{
    field_6_options = npc(automaticMaximum_)->setShortBoolean(field_6_options, value);
}

bool org::apache::poi::hssf::record::chart::ValueRangeRecord::isAutomaticMaximum()
{
    return npc(automaticMaximum_)->isSet(field_6_options);
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setAutomaticMajor(bool value)
{
    field_6_options = npc(automaticMajor_)->setShortBoolean(field_6_options, value);
}

bool org::apache::poi::hssf::record::chart::ValueRangeRecord::isAutomaticMajor()
{
    return npc(automaticMajor_)->isSet(field_6_options);
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setAutomaticMinor(bool value)
{
    field_6_options = npc(automaticMinor_)->setShortBoolean(field_6_options, value);
}

bool org::apache::poi::hssf::record::chart::ValueRangeRecord::isAutomaticMinor()
{
    return npc(automaticMinor_)->isSet(field_6_options);
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setAutomaticCategoryCrossing(bool value)
{
    field_6_options = npc(automaticCategoryCrossing_)->setShortBoolean(field_6_options, value);
}

bool org::apache::poi::hssf::record::chart::ValueRangeRecord::isAutomaticCategoryCrossing()
{
    return npc(automaticCategoryCrossing_)->isSet(field_6_options);
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setLogarithmicScale(bool value)
{
    field_6_options = npc(logarithmicScale_)->setShortBoolean(field_6_options, value);
}

bool org::apache::poi::hssf::record::chart::ValueRangeRecord::isLogarithmicScale()
{
    return npc(logarithmicScale_)->isSet(field_6_options);
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setValuesInReverse(bool value)
{
    field_6_options = npc(valuesInReverse_)->setShortBoolean(field_6_options, value);
}

bool org::apache::poi::hssf::record::chart::ValueRangeRecord::isValuesInReverse()
{
    return npc(valuesInReverse_)->isSet(field_6_options);
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setCrossCategoryAxisAtMaximum(bool value)
{
    field_6_options = npc(crossCategoryAxisAtMaximum_)->setShortBoolean(field_6_options, value);
}

bool org::apache::poi::hssf::record::chart::ValueRangeRecord::isCrossCategoryAxisAtMaximum()
{
    return npc(crossCategoryAxisAtMaximum_)->isSet(field_6_options);
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::setReserved(bool value)
{
    field_6_options = npc(reserved_)->setShortBoolean(field_6_options, value);
}

bool org::apache::poi::hssf::record::chart::ValueRangeRecord::isReserved()
{
    return npc(reserved_)->isSet(field_6_options);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::ValueRangeRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.ValueRangeRecord", 49);
    return c;
}

void org::apache::poi::hssf::record::chart::ValueRangeRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        automaticMinimum_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        automaticMaximum_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        automaticMajor_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4);
        automaticMinor_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
        automaticCategoryCrossing_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16);
        logarithmicScale_ = ::org::apache::poi::util::BitFieldFactory::getInstance(32);
        valuesInReverse_ = ::org::apache::poi::util::BitFieldFactory::getInstance(64);
        crossCategoryAxisAtMaximum_ = ::org::apache::poi::util::BitFieldFactory::getInstance(128);
        reserved_ = ::org::apache::poi::util::BitFieldFactory::getInstance(256);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::chart::ValueRangeRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::ValueRangeRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::ValueRangeRecord::getClass0()
{
    return class_();
}


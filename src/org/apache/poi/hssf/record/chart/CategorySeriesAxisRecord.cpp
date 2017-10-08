// Generated from /POI/java/org/apache/poi/hssf/record/chart/CategorySeriesAxisRecord.java
#include <org/apache/poi/hssf/record/chart/CategorySeriesAxisRecord.hpp>

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

poi::hssf::record::chart::CategorySeriesAxisRecord::CategorySeriesAxisRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::CategorySeriesAxisRecord::CategorySeriesAxisRecord() 
    : CategorySeriesAxisRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::CategorySeriesAxisRecord::CategorySeriesAxisRecord(::poi::hssf::record::RecordInputStream* in) 
    : CategorySeriesAxisRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::CategorySeriesAxisRecord::sid;

poi::util::BitField*& poi::hssf::record::chart::CategorySeriesAxisRecord::valueAxisCrossing()
{
    clinit();
    return valueAxisCrossing_;
}
poi::util::BitField* poi::hssf::record::chart::CategorySeriesAxisRecord::valueAxisCrossing_;

poi::util::BitField*& poi::hssf::record::chart::CategorySeriesAxisRecord::crossesFarRight()
{
    clinit();
    return crossesFarRight_;
}
poi::util::BitField* poi::hssf::record::chart::CategorySeriesAxisRecord::crossesFarRight_;

poi::util::BitField*& poi::hssf::record::chart::CategorySeriesAxisRecord::reversed()
{
    clinit();
    return reversed_;
}
poi::util::BitField* poi::hssf::record::chart::CategorySeriesAxisRecord::reversed_;

void poi::hssf::record::chart::CategorySeriesAxisRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::CategorySeriesAxisRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_crossingPoint = npc(in)->readShort();
    field_2_labelFrequency = npc(in)->readShort();
    field_3_tickMarkFrequency = npc(in)->readShort();
    field_4_options = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::chart::CategorySeriesAxisRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[CATSERRANGE]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .crossingPoint        = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getCrossingPoint())))->append(u" ("_j))->append(static_cast< int32_t >(getCrossingPoint())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .labelFrequency       = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getLabelFrequency())))->append(u" ("_j))->append(static_cast< int32_t >(getLabelFrequency())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .tickMarkFrequency    = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getTickMarkFrequency())))->append(u" ("_j))->append(static_cast< int32_t >(getTickMarkFrequency())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .options              = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getOptions())))->append(u" ("_j))->append(static_cast< int32_t >(getOptions())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .valueAxisCrossing        = "_j))->append(isValueAxisCrossing()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .crossesFarRight          = "_j))->append(isCrossesFarRight()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .reversed                 = "_j))->append(isReversed()))->append(u'\u000a');
    npc(buffer)->append(u"[/CATSERRANGE]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::CategorySeriesAxisRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_crossingPoint);
    npc(out)->writeShort(field_2_labelFrequency);
    npc(out)->writeShort(field_3_tickMarkFrequency);
    npc(out)->writeShort(field_4_options);
}

int32_t poi::hssf::record::chart::CategorySeriesAxisRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(2);
}

int16_t poi::hssf::record::chart::CategorySeriesAxisRecord::getSid()
{
    return sid;
}

poi::hssf::record::chart::CategorySeriesAxisRecord* poi::hssf::record::chart::CategorySeriesAxisRecord::clone()
{
    auto rec = new CategorySeriesAxisRecord();
    npc(rec)->field_1_crossingPoint = field_1_crossingPoint;
    npc(rec)->field_2_labelFrequency = field_2_labelFrequency;
    npc(rec)->field_3_tickMarkFrequency = field_3_tickMarkFrequency;
    npc(rec)->field_4_options = field_4_options;
    return rec;
}

int16_t poi::hssf::record::chart::CategorySeriesAxisRecord::getCrossingPoint()
{
    return field_1_crossingPoint;
}

void poi::hssf::record::chart::CategorySeriesAxisRecord::setCrossingPoint(int16_t field_1_crossingPoint)
{
    this->field_1_crossingPoint = field_1_crossingPoint;
}

int16_t poi::hssf::record::chart::CategorySeriesAxisRecord::getLabelFrequency()
{
    return field_2_labelFrequency;
}

void poi::hssf::record::chart::CategorySeriesAxisRecord::setLabelFrequency(int16_t field_2_labelFrequency)
{
    this->field_2_labelFrequency = field_2_labelFrequency;
}

int16_t poi::hssf::record::chart::CategorySeriesAxisRecord::getTickMarkFrequency()
{
    return field_3_tickMarkFrequency;
}

void poi::hssf::record::chart::CategorySeriesAxisRecord::setTickMarkFrequency(int16_t field_3_tickMarkFrequency)
{
    this->field_3_tickMarkFrequency = field_3_tickMarkFrequency;
}

int16_t poi::hssf::record::chart::CategorySeriesAxisRecord::getOptions()
{
    return field_4_options;
}

void poi::hssf::record::chart::CategorySeriesAxisRecord::setOptions(int16_t field_4_options)
{
    this->field_4_options = field_4_options;
}

void poi::hssf::record::chart::CategorySeriesAxisRecord::setValueAxisCrossing(bool value)
{
    field_4_options = npc(valueAxisCrossing_)->setShortBoolean(field_4_options, value);
}

bool poi::hssf::record::chart::CategorySeriesAxisRecord::isValueAxisCrossing()
{
    return npc(valueAxisCrossing_)->isSet(field_4_options);
}

void poi::hssf::record::chart::CategorySeriesAxisRecord::setCrossesFarRight(bool value)
{
    field_4_options = npc(crossesFarRight_)->setShortBoolean(field_4_options, value);
}

bool poi::hssf::record::chart::CategorySeriesAxisRecord::isCrossesFarRight()
{
    return npc(crossesFarRight_)->isSet(field_4_options);
}

void poi::hssf::record::chart::CategorySeriesAxisRecord::setReversed(bool value)
{
    field_4_options = npc(reversed_)->setShortBoolean(field_4_options, value);
}

bool poi::hssf::record::chart::CategorySeriesAxisRecord::isReversed()
{
    return npc(reversed_)->isSet(field_4_options);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::CategorySeriesAxisRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.CategorySeriesAxisRecord", 57);
    return c;
}

void poi::hssf::record::chart::CategorySeriesAxisRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        valueAxisCrossing_ = ::poi::util::BitFieldFactory::getInstance(1);
        crossesFarRight_ = ::poi::util::BitFieldFactory::getInstance(2);
        reversed_ = ::poi::util::BitFieldFactory::getInstance(4);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::chart::CategorySeriesAxisRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::CategorySeriesAxisRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::CategorySeriesAxisRecord::getClass0()
{
    return class_();
}


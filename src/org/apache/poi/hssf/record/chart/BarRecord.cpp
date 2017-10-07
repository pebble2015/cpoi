// Generated from /POI/java/org/apache/poi/hssf/record/chart/BarRecord.java
#include <org/apache/poi/hssf/record/chart/BarRecord.hpp>

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

org::apache::poi::hssf::record::chart::BarRecord::BarRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::BarRecord::BarRecord() 
    : BarRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::BarRecord::BarRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : BarRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::BarRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::BarRecord::horizontal()
{
    clinit();
    return horizontal_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::BarRecord::horizontal_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::BarRecord::stacked()
{
    clinit();
    return stacked_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::BarRecord::stacked_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::BarRecord::displayAsPercentage()
{
    clinit();
    return displayAsPercentage_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::BarRecord::displayAsPercentage_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::BarRecord::shadow()
{
    clinit();
    return shadow_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::BarRecord::shadow_;

void org::apache::poi::hssf::record::chart::BarRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::BarRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_barSpace = npc(in)->readShort();
    field_2_categorySpace = npc(in)->readShort();
    field_3_formatFlags = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::BarRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[BAR]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .barSpace             = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getBarSpace())))->append(u" ("_j))->append(static_cast< int32_t >(getBarSpace())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .categorySpace        = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getCategorySpace())))->append(u" ("_j))->append(static_cast< int32_t >(getCategorySpace())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .formatFlags          = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getFormatFlags())))->append(u" ("_j))->append(static_cast< int32_t >(getFormatFlags())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .horizontal               = "_j))->append(isHorizontal()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .stacked                  = "_j))->append(isStacked()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .displayAsPercentage      = "_j))->append(isDisplayAsPercentage()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .shadow                   = "_j))->append(isShadow()))->append(u'\u000a');
    npc(buffer)->append(u"[/BAR]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::BarRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_barSpace);
    npc(out)->writeShort(field_2_categorySpace);
    npc(out)->writeShort(field_3_formatFlags);
}

int32_t org::apache::poi::hssf::record::chart::BarRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2);
}

int16_t org::apache::poi::hssf::record::chart::BarRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::BarRecord* org::apache::poi::hssf::record::chart::BarRecord::clone()
{
    auto rec = new BarRecord();
    npc(rec)->field_1_barSpace = field_1_barSpace;
    npc(rec)->field_2_categorySpace = field_2_categorySpace;
    npc(rec)->field_3_formatFlags = field_3_formatFlags;
    return rec;
}

int16_t org::apache::poi::hssf::record::chart::BarRecord::getBarSpace()
{
    return field_1_barSpace;
}

void org::apache::poi::hssf::record::chart::BarRecord::setBarSpace(int16_t field_1_barSpace)
{
    this->field_1_barSpace = field_1_barSpace;
}

int16_t org::apache::poi::hssf::record::chart::BarRecord::getCategorySpace()
{
    return field_2_categorySpace;
}

void org::apache::poi::hssf::record::chart::BarRecord::setCategorySpace(int16_t field_2_categorySpace)
{
    this->field_2_categorySpace = field_2_categorySpace;
}

int16_t org::apache::poi::hssf::record::chart::BarRecord::getFormatFlags()
{
    return field_3_formatFlags;
}

void org::apache::poi::hssf::record::chart::BarRecord::setFormatFlags(int16_t field_3_formatFlags)
{
    this->field_3_formatFlags = field_3_formatFlags;
}

void org::apache::poi::hssf::record::chart::BarRecord::setHorizontal(bool value)
{
    field_3_formatFlags = npc(horizontal_)->setShortBoolean(field_3_formatFlags, value);
}

bool org::apache::poi::hssf::record::chart::BarRecord::isHorizontal()
{
    return npc(horizontal_)->isSet(field_3_formatFlags);
}

void org::apache::poi::hssf::record::chart::BarRecord::setStacked(bool value)
{
    field_3_formatFlags = npc(stacked_)->setShortBoolean(field_3_formatFlags, value);
}

bool org::apache::poi::hssf::record::chart::BarRecord::isStacked()
{
    return npc(stacked_)->isSet(field_3_formatFlags);
}

void org::apache::poi::hssf::record::chart::BarRecord::setDisplayAsPercentage(bool value)
{
    field_3_formatFlags = npc(displayAsPercentage_)->setShortBoolean(field_3_formatFlags, value);
}

bool org::apache::poi::hssf::record::chart::BarRecord::isDisplayAsPercentage()
{
    return npc(displayAsPercentage_)->isSet(field_3_formatFlags);
}

void org::apache::poi::hssf::record::chart::BarRecord::setShadow(bool value)
{
    field_3_formatFlags = npc(shadow_)->setShortBoolean(field_3_formatFlags, value);
}

bool org::apache::poi::hssf::record::chart::BarRecord::isShadow()
{
    return npc(shadow_)->isSet(field_3_formatFlags);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::BarRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.BarRecord", 42);
    return c;
}

void org::apache::poi::hssf::record::chart::BarRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        horizontal_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        stacked_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        displayAsPercentage_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4);
        shadow_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::chart::BarRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::BarRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::BarRecord::getClass0()
{
    return class_();
}


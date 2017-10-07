// Generated from /POI/java/org/apache/poi/hssf/record/chart/AreaRecord.java
#include <org/apache/poi/hssf/record/chart/AreaRecord.hpp>

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

org::apache::poi::hssf::record::chart::AreaRecord::AreaRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::AreaRecord::AreaRecord() 
    : AreaRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::AreaRecord::AreaRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : AreaRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::AreaRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::AreaRecord::stacked()
{
    clinit();
    return stacked_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::AreaRecord::stacked_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::AreaRecord::displayAsPercentage()
{
    clinit();
    return displayAsPercentage_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::AreaRecord::displayAsPercentage_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::AreaRecord::shadow()
{
    clinit();
    return shadow_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::AreaRecord::shadow_;

void org::apache::poi::hssf::record::chart::AreaRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::AreaRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_formatFlags = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::AreaRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[AREA]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .formatFlags          = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getFormatFlags())))->append(u" ("_j))->append(static_cast< int32_t >(getFormatFlags())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .stacked                  = "_j))->append(isStacked()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .displayAsPercentage      = "_j))->append(isDisplayAsPercentage()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .shadow                   = "_j))->append(isShadow()))->append(u'\u000a');
    npc(buffer)->append(u"[/AREA]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::AreaRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_formatFlags);
}

int32_t org::apache::poi::hssf::record::chart::AreaRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::chart::AreaRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::AreaRecord* org::apache::poi::hssf::record::chart::AreaRecord::clone()
{
    auto rec = new AreaRecord();
    npc(rec)->field_1_formatFlags = field_1_formatFlags;
    return rec;
}

int16_t org::apache::poi::hssf::record::chart::AreaRecord::getFormatFlags()
{
    return field_1_formatFlags;
}

void org::apache::poi::hssf::record::chart::AreaRecord::setFormatFlags(int16_t field_1_formatFlags)
{
    this->field_1_formatFlags = field_1_formatFlags;
}

void org::apache::poi::hssf::record::chart::AreaRecord::setStacked(bool value)
{
    field_1_formatFlags = npc(stacked_)->setShortBoolean(field_1_formatFlags, value);
}

bool org::apache::poi::hssf::record::chart::AreaRecord::isStacked()
{
    return npc(stacked_)->isSet(field_1_formatFlags);
}

void org::apache::poi::hssf::record::chart::AreaRecord::setDisplayAsPercentage(bool value)
{
    field_1_formatFlags = npc(displayAsPercentage_)->setShortBoolean(field_1_formatFlags, value);
}

bool org::apache::poi::hssf::record::chart::AreaRecord::isDisplayAsPercentage()
{
    return npc(displayAsPercentage_)->isSet(field_1_formatFlags);
}

void org::apache::poi::hssf::record::chart::AreaRecord::setShadow(bool value)
{
    field_1_formatFlags = npc(shadow_)->setShortBoolean(field_1_formatFlags, value);
}

bool org::apache::poi::hssf::record::chart::AreaRecord::isShadow()
{
    return npc(shadow_)->isSet(field_1_formatFlags);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::AreaRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.AreaRecord", 43);
    return c;
}

void org::apache::poi::hssf::record::chart::AreaRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        stacked_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        displayAsPercentage_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        shadow_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::chart::AreaRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::AreaRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::AreaRecord::getClass0()
{
    return class_();
}


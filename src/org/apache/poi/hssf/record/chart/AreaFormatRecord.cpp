// Generated from /POI/java/org/apache/poi/hssf/record/chart/AreaFormatRecord.java
#include <org/apache/poi/hssf/record/chart/AreaFormatRecord.hpp>

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

poi::hssf::record::chart::AreaFormatRecord::AreaFormatRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::AreaFormatRecord::AreaFormatRecord() 
    : AreaFormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::AreaFormatRecord::AreaFormatRecord(::poi::hssf::record::RecordInputStream* in) 
    : AreaFormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::AreaFormatRecord::sid;

poi::util::BitField*& poi::hssf::record::chart::AreaFormatRecord::automatic()
{
    clinit();
    return automatic_;
}
poi::util::BitField* poi::hssf::record::chart::AreaFormatRecord::automatic_;

poi::util::BitField*& poi::hssf::record::chart::AreaFormatRecord::invert()
{
    clinit();
    return invert_;
}
poi::util::BitField* poi::hssf::record::chart::AreaFormatRecord::invert_;

void poi::hssf::record::chart::AreaFormatRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::AreaFormatRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_foregroundColor = npc(in)->readInt();
    field_2_backgroundColor = npc(in)->readInt();
    field_3_pattern = npc(in)->readShort();
    field_4_formatFlags = npc(in)->readShort();
    field_5_forecolorIndex = npc(in)->readShort();
    field_6_backcolorIndex = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::chart::AreaFormatRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[AREAFORMAT]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .foregroundColor      = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getForegroundColor())))->append(u" ("_j))->append(getForegroundColor()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .backgroundColor      = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getBackgroundColor())))->append(u" ("_j))->append(getBackgroundColor()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .pattern              = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getPattern())))->append(u" ("_j))->append(static_cast< int32_t >(getPattern())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .formatFlags          = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getFormatFlags())))->append(u" ("_j))->append(static_cast< int32_t >(getFormatFlags())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .automatic                = "_j))->append(isAutomatic()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .invert                   = "_j))->append(isInvert()))->append(u'\u000a');
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .forecolorIndex       = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getForecolorIndex())))->append(u" ("_j))->append(static_cast< int32_t >(getForecolorIndex())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .backcolorIndex       = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getBackcolorIndex())))->append(u" ("_j))->append(static_cast< int32_t >(getBackcolorIndex())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/AREAFORMAT]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::AreaFormatRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(field_1_foregroundColor);
    npc(out)->writeInt(field_2_backgroundColor);
    npc(out)->writeShort(field_3_pattern);
    npc(out)->writeShort(field_4_formatFlags);
    npc(out)->writeShort(field_5_forecolorIndex);
    npc(out)->writeShort(field_6_backcolorIndex);
}

int32_t poi::hssf::record::chart::AreaFormatRecord::getDataSize()
{
    return int32_t(4) + int32_t(4) + int32_t(2)+ int32_t(2)+ int32_t(2)+ int32_t(2);
}

int16_t poi::hssf::record::chart::AreaFormatRecord::getSid()
{
    return sid;
}

poi::hssf::record::chart::AreaFormatRecord* poi::hssf::record::chart::AreaFormatRecord::clone()
{
    auto rec = new AreaFormatRecord();
    npc(rec)->field_1_foregroundColor = field_1_foregroundColor;
    npc(rec)->field_2_backgroundColor = field_2_backgroundColor;
    npc(rec)->field_3_pattern = field_3_pattern;
    npc(rec)->field_4_formatFlags = field_4_formatFlags;
    npc(rec)->field_5_forecolorIndex = field_5_forecolorIndex;
    npc(rec)->field_6_backcolorIndex = field_6_backcolorIndex;
    return rec;
}

int32_t poi::hssf::record::chart::AreaFormatRecord::getForegroundColor()
{
    return field_1_foregroundColor;
}

void poi::hssf::record::chart::AreaFormatRecord::setForegroundColor(int32_t field_1_foregroundColor)
{
    this->field_1_foregroundColor = field_1_foregroundColor;
}

int32_t poi::hssf::record::chart::AreaFormatRecord::getBackgroundColor()
{
    return field_2_backgroundColor;
}

void poi::hssf::record::chart::AreaFormatRecord::setBackgroundColor(int32_t field_2_backgroundColor)
{
    this->field_2_backgroundColor = field_2_backgroundColor;
}

int16_t poi::hssf::record::chart::AreaFormatRecord::getPattern()
{
    return field_3_pattern;
}

void poi::hssf::record::chart::AreaFormatRecord::setPattern(int16_t field_3_pattern)
{
    this->field_3_pattern = field_3_pattern;
}

int16_t poi::hssf::record::chart::AreaFormatRecord::getFormatFlags()
{
    return field_4_formatFlags;
}

void poi::hssf::record::chart::AreaFormatRecord::setFormatFlags(int16_t field_4_formatFlags)
{
    this->field_4_formatFlags = field_4_formatFlags;
}

int16_t poi::hssf::record::chart::AreaFormatRecord::getForecolorIndex()
{
    return field_5_forecolorIndex;
}

void poi::hssf::record::chart::AreaFormatRecord::setForecolorIndex(int16_t field_5_forecolorIndex)
{
    this->field_5_forecolorIndex = field_5_forecolorIndex;
}

int16_t poi::hssf::record::chart::AreaFormatRecord::getBackcolorIndex()
{
    return field_6_backcolorIndex;
}

void poi::hssf::record::chart::AreaFormatRecord::setBackcolorIndex(int16_t field_6_backcolorIndex)
{
    this->field_6_backcolorIndex = field_6_backcolorIndex;
}

void poi::hssf::record::chart::AreaFormatRecord::setAutomatic(bool value)
{
    field_4_formatFlags = npc(automatic_)->setShortBoolean(field_4_formatFlags, value);
}

bool poi::hssf::record::chart::AreaFormatRecord::isAutomatic()
{
    return npc(automatic_)->isSet(field_4_formatFlags);
}

void poi::hssf::record::chart::AreaFormatRecord::setInvert(bool value)
{
    field_4_formatFlags = npc(invert_)->setShortBoolean(field_4_formatFlags, value);
}

bool poi::hssf::record::chart::AreaFormatRecord::isInvert()
{
    return npc(invert_)->isSet(field_4_formatFlags);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::AreaFormatRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.AreaFormatRecord", 49);
    return c;
}

void poi::hssf::record::chart::AreaFormatRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        automatic_ = ::poi::util::BitFieldFactory::getInstance(1);
        invert_ = ::poi::util::BitFieldFactory::getInstance(2);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::chart::AreaFormatRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::AreaFormatRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::AreaFormatRecord::getClass0()
{
    return class_();
}


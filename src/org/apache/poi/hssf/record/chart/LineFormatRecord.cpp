// Generated from /POI/java/org/apache/poi/hssf/record/chart/LineFormatRecord.java
#include <org/apache/poi/hssf/record/chart/LineFormatRecord.hpp>

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

poi::hssf::record::chart::LineFormatRecord::LineFormatRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::LineFormatRecord::LineFormatRecord() 
    : LineFormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::LineFormatRecord::LineFormatRecord(::poi::hssf::record::RecordInputStream* in) 
    : LineFormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::sid;

poi::util::BitField*& poi::hssf::record::chart::LineFormatRecord::auto_()
{
    clinit();
    return auto__;
}
poi::util::BitField* poi::hssf::record::chart::LineFormatRecord::auto__;

poi::util::BitField*& poi::hssf::record::chart::LineFormatRecord::drawTicks()
{
    clinit();
    return drawTicks_;
}
poi::util::BitField* poi::hssf::record::chart::LineFormatRecord::drawTicks_;

poi::util::BitField*& poi::hssf::record::chart::LineFormatRecord::unknown()
{
    clinit();
    return unknown_;
}
poi::util::BitField* poi::hssf::record::chart::LineFormatRecord::unknown_;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::LINE_PATTERN_SOLID;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::LINE_PATTERN_DASH;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::LINE_PATTERN_DOT;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::LINE_PATTERN_DASH_DOT;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::LINE_PATTERN_DASH_DOT_DOT;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::LINE_PATTERN_NONE;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::LINE_PATTERN_DARK_GRAY_PATTERN;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::LINE_PATTERN_MEDIUM_GRAY_PATTERN;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::LINE_PATTERN_LIGHT_GRAY_PATTERN;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::WEIGHT_HAIRLINE;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::WEIGHT_NARROW;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::WEIGHT_MEDIUM;

constexpr int16_t poi::hssf::record::chart::LineFormatRecord::WEIGHT_WIDE;

void poi::hssf::record::chart::LineFormatRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::LineFormatRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_lineColor = npc(in)->readInt();
    field_2_linePattern = npc(in)->readShort();
    field_3_weight = npc(in)->readShort();
    field_4_format = npc(in)->readShort();
    field_5_colourPaletteIndex = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::chart::LineFormatRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[LINEFORMAT]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .lineColor            = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getLineColor())))->append(u" ("_j))->append(getLineColor()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .linePattern          = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getLinePattern())))->append(u" ("_j))->append(static_cast< int32_t >(getLinePattern())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .weight               = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getWeight())))->append(u" ("_j))->append(static_cast< int32_t >(getWeight())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .format               = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getFormat())))->append(u" ("_j))->append(static_cast< int32_t >(getFormat())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .auto                     = "_j))->append(isAuto()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .drawTicks                = "_j))->append(isDrawTicks()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .unknown                  = "_j))->append(isUnknown()))->append(u'\u000a');
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .colourPaletteIndex   = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getColourPaletteIndex())))->append(u" ("_j))->append(static_cast< int32_t >(getColourPaletteIndex())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/LINEFORMAT]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::LineFormatRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(field_1_lineColor);
    npc(out)->writeShort(field_2_linePattern);
    npc(out)->writeShort(field_3_weight);
    npc(out)->writeShort(field_4_format);
    npc(out)->writeShort(field_5_colourPaletteIndex);
}

int32_t poi::hssf::record::chart::LineFormatRecord::getDataSize()
{
    return int32_t(4) + int32_t(2) + int32_t(2)+ int32_t(2)+ int32_t(2);
}

int16_t poi::hssf::record::chart::LineFormatRecord::getSid()
{
    return sid;
}

poi::hssf::record::chart::LineFormatRecord* poi::hssf::record::chart::LineFormatRecord::clone()
{
    auto rec = new LineFormatRecord();
    npc(rec)->field_1_lineColor = field_1_lineColor;
    npc(rec)->field_2_linePattern = field_2_linePattern;
    npc(rec)->field_3_weight = field_3_weight;
    npc(rec)->field_4_format = field_4_format;
    npc(rec)->field_5_colourPaletteIndex = field_5_colourPaletteIndex;
    return rec;
}

int32_t poi::hssf::record::chart::LineFormatRecord::getLineColor()
{
    return field_1_lineColor;
}

void poi::hssf::record::chart::LineFormatRecord::setLineColor(int32_t field_1_lineColor)
{
    this->field_1_lineColor = field_1_lineColor;
}

int16_t poi::hssf::record::chart::LineFormatRecord::getLinePattern()
{
    return field_2_linePattern;
}

void poi::hssf::record::chart::LineFormatRecord::setLinePattern(int16_t field_2_linePattern)
{
    this->field_2_linePattern = field_2_linePattern;
}

int16_t poi::hssf::record::chart::LineFormatRecord::getWeight()
{
    return field_3_weight;
}

void poi::hssf::record::chart::LineFormatRecord::setWeight(int16_t field_3_weight)
{
    this->field_3_weight = field_3_weight;
}

int16_t poi::hssf::record::chart::LineFormatRecord::getFormat()
{
    return field_4_format;
}

void poi::hssf::record::chart::LineFormatRecord::setFormat(int16_t field_4_format)
{
    this->field_4_format = field_4_format;
}

int16_t poi::hssf::record::chart::LineFormatRecord::getColourPaletteIndex()
{
    return field_5_colourPaletteIndex;
}

void poi::hssf::record::chart::LineFormatRecord::setColourPaletteIndex(int16_t field_5_colourPaletteIndex)
{
    this->field_5_colourPaletteIndex = field_5_colourPaletteIndex;
}

void poi::hssf::record::chart::LineFormatRecord::setAuto(bool value)
{
    field_4_format = npc(auto__)->setShortBoolean(field_4_format, value);
}

bool poi::hssf::record::chart::LineFormatRecord::isAuto()
{
    return npc(auto__)->isSet(field_4_format);
}

void poi::hssf::record::chart::LineFormatRecord::setDrawTicks(bool value)
{
    field_4_format = npc(drawTicks_)->setShortBoolean(field_4_format, value);
}

bool poi::hssf::record::chart::LineFormatRecord::isDrawTicks()
{
    return npc(drawTicks_)->isSet(field_4_format);
}

void poi::hssf::record::chart::LineFormatRecord::setUnknown(bool value)
{
    field_4_format = npc(unknown_)->setShortBoolean(field_4_format, value);
}

bool poi::hssf::record::chart::LineFormatRecord::isUnknown()
{
    return npc(unknown_)->isSet(field_4_format);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::LineFormatRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.LineFormatRecord", 49);
    return c;
}

void poi::hssf::record::chart::LineFormatRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        auto__ = ::poi::util::BitFieldFactory::getInstance(1);
        drawTicks_ = ::poi::util::BitFieldFactory::getInstance(4);
        unknown_ = ::poi::util::BitFieldFactory::getInstance(4);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::chart::LineFormatRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::LineFormatRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::LineFormatRecord::getClass0()
{
    return class_();
}


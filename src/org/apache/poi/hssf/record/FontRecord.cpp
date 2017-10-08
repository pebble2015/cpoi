// Generated from /POI/java/org/apache/poi/hssf/record/FontRecord.java
#include <org/apache/poi/hssf/record/FontRecord.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::FontRecord::FontRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::FontRecord::FontRecord() 
    : FontRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::FontRecord::FontRecord(RecordInputStream* in) 
    : FontRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void poi::hssf::record::FontRecord::init()
{
    field_9_zero = int32_t(0);
}

constexpr int16_t poi::hssf::record::FontRecord::sid;

constexpr int16_t poi::hssf::record::FontRecord::SS_NONE;

constexpr int16_t poi::hssf::record::FontRecord::SS_SUPER;

constexpr int16_t poi::hssf::record::FontRecord::SS_SUB;

constexpr int8_t poi::hssf::record::FontRecord::U_NONE;

constexpr int8_t poi::hssf::record::FontRecord::U_SINGLE;

constexpr int8_t poi::hssf::record::FontRecord::U_DOUBLE;

constexpr int8_t poi::hssf::record::FontRecord::U_SINGLE_ACCOUNTING;

constexpr int8_t poi::hssf::record::FontRecord::U_DOUBLE_ACCOUNTING;

poi::util::BitField*& poi::hssf::record::FontRecord::italic()
{
    clinit();
    return italic_;
}
poi::util::BitField* poi::hssf::record::FontRecord::italic_;

poi::util::BitField*& poi::hssf::record::FontRecord::strikeout()
{
    clinit();
    return strikeout_;
}
poi::util::BitField* poi::hssf::record::FontRecord::strikeout_;

poi::util::BitField*& poi::hssf::record::FontRecord::macoutline()
{
    clinit();
    return macoutline_;
}
poi::util::BitField* poi::hssf::record::FontRecord::macoutline_;

poi::util::BitField*& poi::hssf::record::FontRecord::macshadow()
{
    clinit();
    return macshadow_;
}
poi::util::BitField* poi::hssf::record::FontRecord::macshadow_;

void poi::hssf::record::FontRecord::ctor()
{
    super::ctor();
    init();
}

void poi::hssf::record::FontRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    init();
    field_1_font_height = npc(in)->readShort();
    field_2_attributes = npc(in)->readShort();
    field_3_color_palette_index = npc(in)->readShort();
    field_4_bold_weight = npc(in)->readShort();
    field_5_super_sub_script = npc(in)->readShort();
    field_6_underline = npc(in)->readByte();
    field_7_family = npc(in)->readByte();
    field_8_charset = npc(in)->readByte();
    field_9_zero = npc(in)->readByte();
    auto field_10_font_name_len = npc(in)->readUByte();
    auto unicodeFlags = npc(in)->readUByte();
    if(field_10_font_name_len > 0) {
        if(unicodeFlags == 0) {
            field_11_font_name = npc(in)->readCompressedUnicode(field_10_font_name_len);
        } else {
            field_11_font_name = npc(in)->readUnicodeLEString(field_10_font_name_len);
        }
    } else {
        field_11_font_name = u""_j;
    }
}

void poi::hssf::record::FontRecord::setFontHeight(int16_t height)
{
    field_1_font_height = height;
}

void poi::hssf::record::FontRecord::setAttributes(int16_t attributes)
{
    field_2_attributes = attributes;
}

void poi::hssf::record::FontRecord::setItalic(bool italics)
{
    field_2_attributes = npc(italic_)->setShortBoolean(field_2_attributes, italics);
}

void poi::hssf::record::FontRecord::setStrikeout(bool strike)
{
    field_2_attributes = npc(strikeout_)->setShortBoolean(field_2_attributes, strike);
}

void poi::hssf::record::FontRecord::setMacoutline(bool mac)
{
    field_2_attributes = npc(macoutline_)->setShortBoolean(field_2_attributes, mac);
}

void poi::hssf::record::FontRecord::setMacshadow(bool mac)
{
    field_2_attributes = npc(macshadow_)->setShortBoolean(field_2_attributes, mac);
}

void poi::hssf::record::FontRecord::setColorPaletteIndex(int16_t cpi)
{
    field_3_color_palette_index = cpi;
}

void poi::hssf::record::FontRecord::setBoldWeight(int16_t bw)
{
    field_4_bold_weight = bw;
}

void poi::hssf::record::FontRecord::setSuperSubScript(int16_t sss)
{
    field_5_super_sub_script = sss;
}

void poi::hssf::record::FontRecord::setUnderline(int8_t u)
{
    field_6_underline = u;
}

void poi::hssf::record::FontRecord::setFamily(int8_t f)
{
    field_7_family = f;
}

void poi::hssf::record::FontRecord::setCharset(int8_t charset)
{
    field_8_charset = charset;
}

void poi::hssf::record::FontRecord::setFontName(::java::lang::String* fn)
{
    field_11_font_name = fn;
}

int16_t poi::hssf::record::FontRecord::getFontHeight()
{
    return field_1_font_height;
}

int16_t poi::hssf::record::FontRecord::getAttributes()
{
    return field_2_attributes;
}

bool poi::hssf::record::FontRecord::isItalic()
{
    return npc(italic_)->isSet(field_2_attributes);
}

bool poi::hssf::record::FontRecord::isStruckout()
{
    return npc(strikeout_)->isSet(field_2_attributes);
}

bool poi::hssf::record::FontRecord::isMacoutlined()
{
    return npc(macoutline_)->isSet(field_2_attributes);
}

bool poi::hssf::record::FontRecord::isMacshadowed()
{
    return npc(macshadow_)->isSet(field_2_attributes);
}

int16_t poi::hssf::record::FontRecord::getColorPaletteIndex()
{
    return field_3_color_palette_index;
}

int16_t poi::hssf::record::FontRecord::getBoldWeight()
{
    return field_4_bold_weight;
}

int16_t poi::hssf::record::FontRecord::getSuperSubScript()
{
    return field_5_super_sub_script;
}

int8_t poi::hssf::record::FontRecord::getUnderline()
{
    return field_6_underline;
}

int8_t poi::hssf::record::FontRecord::getFamily()
{
    return field_7_family;
}

int8_t poi::hssf::record::FontRecord::getCharset()
{
    return field_8_charset;
}

java::lang::String* poi::hssf::record::FontRecord::getFontName()
{
    return field_11_font_name;
}

java::lang::String* poi::hssf::record::FontRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[FONT]\n"_j);
    npc(npc(npc(sb)->append(u"    .fontheight    = "_j))->append(::poi::util::HexDump::shortToHex(getFontHeight())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .attributes    = "_j))->append(::poi::util::HexDump::shortToHex(getAttributes())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"       .italic     = "_j))->append(isItalic()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"       .strikout   = "_j))->append(isStruckout()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"       .macoutlined= "_j))->append(isMacoutlined()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"       .macshadowed= "_j))->append(isMacshadowed()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .colorpalette  = "_j))->append(::poi::util::HexDump::shortToHex(getColorPaletteIndex())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .boldweight    = "_j))->append(::poi::util::HexDump::shortToHex(getBoldWeight())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .supersubscript= "_j))->append(::poi::util::HexDump::shortToHex(getSuperSubScript())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .underline     = "_j))->append(::poi::util::HexDump::byteToHex(getUnderline())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .family        = "_j))->append(::poi::util::HexDump::byteToHex(getFamily())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .charset       = "_j))->append(::poi::util::HexDump::byteToHex(getCharset())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .fontname      = "_j))->append(getFontName()))->append(u"\n"_j);
    npc(sb)->append(u"[/FONT]\n"_j);
    return npc(sb)->toString();
}

void poi::hssf::record::FontRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getFontHeight());
    npc(out)->writeShort(getAttributes());
    npc(out)->writeShort(getColorPaletteIndex());
    npc(out)->writeShort(getBoldWeight());
    npc(out)->writeShort(getSuperSubScript());
    npc(out)->writeByte(getUnderline());
    npc(out)->writeByte(getFamily());
    npc(out)->writeByte(getCharset());
    npc(out)->writeByte(field_9_zero);
    auto fontNameLen = npc(field_11_font_name)->length();
    npc(out)->writeByte(fontNameLen);
    auto hasMultibyte = ::poi::util::StringUtil::hasMultibyte(field_11_font_name);
    npc(out)->writeByte(hasMultibyte ? int32_t(1) : int32_t(0));
    if(fontNameLen > 0) {
        if(hasMultibyte) {
            ::poi::util::StringUtil::putUnicodeLE(field_11_font_name, out);
        } else {
            ::poi::util::StringUtil::putCompressedUnicode(field_11_font_name, out);
        }
    }
}

int32_t poi::hssf::record::FontRecord::getDataSize()
{
    auto size = int32_t(16);
    auto fontNameLen = npc(field_11_font_name)->length();
    if(fontNameLen < 1) {
        return size;
    }
    auto hasMultibyte = ::poi::util::StringUtil::hasMultibyte(field_11_font_name);
    return size + fontNameLen * (hasMultibyte ? int32_t(2) : int32_t(1));
}

int16_t poi::hssf::record::FontRecord::getSid()
{
    return sid;
}

void poi::hssf::record::FontRecord::cloneStyleFrom(FontRecord* source)
{
    field_1_font_height = npc(source)->field_1_font_height;
    field_2_attributes = npc(source)->field_2_attributes;
    field_3_color_palette_index = npc(source)->field_3_color_palette_index;
    field_4_bold_weight = npc(source)->field_4_bold_weight;
    field_5_super_sub_script = npc(source)->field_5_super_sub_script;
    field_6_underline = npc(source)->field_6_underline;
    field_7_family = npc(source)->field_7_family;
    field_8_charset = npc(source)->field_8_charset;
    field_9_zero = npc(source)->field_9_zero;
    field_11_font_name = npc(source)->field_11_font_name;
}

int32_t poi::hssf::record::FontRecord::hashCode()
{
    auto const prime = int32_t(31);
    auto result = int32_t(1);
    result = prime * result + ((field_11_font_name == nullptr) ? int32_t(0) : npc(field_11_font_name)->hashCode());
    result = prime * result + field_1_font_height;
    result = prime * result + field_2_attributes;
    result = prime * result + field_3_color_palette_index;
    result = prime * result + field_4_bold_weight;
    result = prime * result + field_5_super_sub_script;
    result = prime * result + field_6_underline;
    result = prime * result + field_7_family;
    result = prime * result + field_8_charset;
    result = prime * result + field_9_zero;
    return result;
}

bool poi::hssf::record::FontRecord::sameProperties(FontRecord* other)
{
    return field_1_font_height == npc(other)->field_1_font_height && field_2_attributes == npc(other)->field_2_attributes && field_3_color_palette_index == npc(other)->field_3_color_palette_index && field_4_bold_weight == npc(other)->field_4_bold_weight && field_5_super_sub_script == npc(other)->field_5_super_sub_script && field_6_underline == npc(other)->field_6_underline && field_7_family == npc(other)->field_7_family && field_8_charset == npc(other)->field_8_charset && field_9_zero == npc(other)->field_9_zero && stringEquals(this->field_11_font_name, npc(other)->field_11_font_name);
}

bool poi::hssf::record::FontRecord::equals(::java::lang::Object* o)
{
    return (dynamic_cast< FontRecord* >(o) != nullptr) ? sameProperties(java_cast< FontRecord* >(o)) : false;
}

bool poi::hssf::record::FontRecord::stringEquals(::java::lang::String* s1, ::java::lang::String* s2)
{
    clinit();
    return (s1 == s2 || (s1 != nullptr && npc(s1)->equals(static_cast< ::java::lang::Object* >(s2))));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::FontRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FontRecord", 37);
    return c;
}

void poi::hssf::record::FontRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        italic_ = ::poi::util::BitFieldFactory::getInstance(2);
        strikeout_ = ::poi::util::BitFieldFactory::getInstance(8);
        macoutline_ = ::poi::util::BitFieldFactory::getInstance(16);
        macshadow_ = ::poi::util::BitFieldFactory::getInstance(32);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::FontRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::FontRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::FontRecord::getClass0()
{
    return class_();
}


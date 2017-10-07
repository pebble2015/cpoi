// Generated from /POI/java/org/apache/poi/hssf/record/cf/FontFormatting.java
#include <org/apache/poi/hssf/record/cf/FontFormatting.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::cf::FontFormatting::FontFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::cf::FontFormatting::FontFormatting() 
    : FontFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::cf::FontFormatting::FontFormatting(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : FontFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::hssf::record::cf::FontFormatting::init()
{
    _rawData = new ::int8_tArray(RAW_DATA_SIZE);
}

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_FONT_NAME;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_FONT_HEIGHT;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_FONT_OPTIONS;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_FONT_WEIGHT;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_ESCAPEMENT_TYPE;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_UNDERLINE_TYPE;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_FONT_COLOR_INDEX;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_OPTION_FLAGS;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_ESCAPEMENT_TYPE_MODIFIED;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_UNDERLINE_TYPE_MODIFIED;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_FONT_WEIGHT_MODIFIED;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_NOT_USED1;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_NOT_USED2;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_NOT_USED3;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::OFFSET_FONT_FORMATING_END;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::RAW_DATA_SIZE;

constexpr int32_t org::apache::poi::hssf::record::cf::FontFormatting::FONT_CELL_HEIGHT_PRESERVED;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::FontFormatting::posture()
{
    clinit();
    return posture_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::FontFormatting::posture_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::FontFormatting::outline()
{
    clinit();
    return outline_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::FontFormatting::outline_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::FontFormatting::shadow()
{
    clinit();
    return shadow_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::FontFormatting::shadow_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::FontFormatting::cancellation()
{
    clinit();
    return cancellation_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::FontFormatting::cancellation_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::FontFormatting::styleModified()
{
    clinit();
    return styleModified_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::FontFormatting::styleModified_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::FontFormatting::outlineModified()
{
    clinit();
    return outlineModified_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::FontFormatting::outlineModified_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::FontFormatting::shadowModified()
{
    clinit();
    return shadowModified_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::FontFormatting::shadowModified_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::FontFormatting::cancellationModified()
{
    clinit();
    return cancellationModified_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::FontFormatting::cancellationModified_;

constexpr int16_t org::apache::poi::hssf::record::cf::FontFormatting::SS_NONE;

constexpr int16_t org::apache::poi::hssf::record::cf::FontFormatting::SS_SUPER;

constexpr int16_t org::apache::poi::hssf::record::cf::FontFormatting::SS_SUB;

constexpr int8_t org::apache::poi::hssf::record::cf::FontFormatting::U_NONE;

constexpr int8_t org::apache::poi::hssf::record::cf::FontFormatting::U_SINGLE;

constexpr int8_t org::apache::poi::hssf::record::cf::FontFormatting::U_DOUBLE;

constexpr int8_t org::apache::poi::hssf::record::cf::FontFormatting::U_SINGLE_ACCOUNTING;

constexpr int8_t org::apache::poi::hssf::record::cf::FontFormatting::U_DOUBLE_ACCOUNTING;

constexpr int16_t org::apache::poi::hssf::record::cf::FontFormatting::FONT_WEIGHT_NORMAL;

constexpr int16_t org::apache::poi::hssf::record::cf::FontFormatting::FONT_WEIGHT_BOLD;

void org::apache::poi::hssf::record::cf::FontFormatting::ctor()
{
    super::ctor();
    init();
    setFontHeight(-int32_t(1));
    setItalic(false);
    setFontWieghtModified(false);
    setOutline(false);
    setShadow(false);
    setStrikeout(false);
    setEscapementType(static_cast< int16_t >(int32_t(0)));
    setUnderlineType(static_cast< int8_t >(int32_t(0)));
    setFontColorIndex(static_cast< int16_t >(-int32_t(1)));
    setFontStyleModified(false);
    setFontOutlineModified(false);
    setFontShadowModified(false);
    setFontCancellationModified(false);
    setEscapementTypeModified(false);
    setUnderlineTypeModified(false);
    setShort(OFFSET_FONT_NAME, 0);
    setInt(OFFSET_NOT_USED1, 1);
    setInt(OFFSET_NOT_USED2, 0);
    setInt(OFFSET_NOT_USED3, 2147483647);
    setShort(OFFSET_FONT_FORMATING_END, 1);
}

void org::apache::poi::hssf::record::cf::FontFormatting::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    init();
    for (auto i = int32_t(0); i < npc(_rawData)->length; i++) {
        (*_rawData)[i] = npc(in)->readByte();
    }
}

int16_t org::apache::poi::hssf::record::cf::FontFormatting::getShort(int32_t offset)
{
    return ::org::apache::poi::util::LittleEndian::getShort(_rawData, offset);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setShort(int32_t offset, int32_t value)
{
    ::org::apache::poi::util::LittleEndian::putShort(_rawData, offset, static_cast< int16_t >(value));
}

int32_t org::apache::poi::hssf::record::cf::FontFormatting::getInt(int32_t offset)
{
    return ::org::apache::poi::util::LittleEndian::getInt(_rawData, offset);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setInt(int32_t offset, int32_t value)
{
    ::org::apache::poi::util::LittleEndian::putInt(_rawData, offset, value);
}

int8_tArray* org::apache::poi::hssf::record::cf::FontFormatting::getRawRecord()
{
    return _rawData;
}

int32_t org::apache::poi::hssf::record::cf::FontFormatting::getDataLength()
{
    return RAW_DATA_SIZE;
}

void org::apache::poi::hssf::record::cf::FontFormatting::setFontHeight(int32_t height)
{
    setInt(OFFSET_FONT_HEIGHT, height);
}

int32_t org::apache::poi::hssf::record::cf::FontFormatting::getFontHeight()
{
    return getInt(OFFSET_FONT_HEIGHT);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setFontOption(bool option, ::org::apache::poi::util::BitField* field)
{
    auto options = getInt(OFFSET_FONT_OPTIONS);
    options = npc(field)->setBoolean(options, option);
    setInt(OFFSET_FONT_OPTIONS, options);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::getFontOption(::org::apache::poi::util::BitField* field)
{
    auto options = getInt(OFFSET_FONT_OPTIONS);
    return npc(field)->isSet(options);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setItalic(bool italic)
{
    setFontOption(italic, posture_);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::isItalic()
{
    return getFontOption(posture_);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setOutline(bool on)
{
    setFontOption(on, outline_);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::isOutlineOn()
{
    return getFontOption(outline_);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setShadow(bool on)
{
    setFontOption(on, shadow_);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::isShadowOn()
{
    return getFontOption(shadow_);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setStrikeout(bool strike)
{
    setFontOption(strike, cancellation_);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::isStruckout()
{
    return getFontOption(cancellation_);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setFontWeight(int16_t pbw)
{
    auto bw = pbw;
    if(bw < 100) {
        bw = 100;
    }
    if(bw > 1000) {
        bw = 1000;
    }
    setShort(OFFSET_FONT_WEIGHT, bw);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setBold(bool bold)
{
    setFontWeight(bold ? FONT_WEIGHT_BOLD : FONT_WEIGHT_NORMAL);
}

int16_t org::apache::poi::hssf::record::cf::FontFormatting::getFontWeight()
{
    return getShort(OFFSET_FONT_WEIGHT);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::isBold()
{
    return getFontWeight() == FONT_WEIGHT_BOLD;
}

int16_t org::apache::poi::hssf::record::cf::FontFormatting::getEscapementType()
{
    return getShort(OFFSET_ESCAPEMENT_TYPE);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setEscapementType(int16_t escapementType)
{
    setShort(OFFSET_ESCAPEMENT_TYPE, escapementType);
}

int16_t org::apache::poi::hssf::record::cf::FontFormatting::getUnderlineType()
{
    return getShort(OFFSET_UNDERLINE_TYPE);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setUnderlineType(int16_t underlineType)
{
    setShort(OFFSET_UNDERLINE_TYPE, underlineType);
}

int16_t org::apache::poi::hssf::record::cf::FontFormatting::getFontColorIndex()
{
    return static_cast< int16_t >(getInt(OFFSET_FONT_COLOR_INDEX));
}

void org::apache::poi::hssf::record::cf::FontFormatting::setFontColorIndex(int16_t fci)
{
    setInt(OFFSET_FONT_COLOR_INDEX, fci);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::getOptionFlag(::org::apache::poi::util::BitField* field)
{
    auto optionFlags = getInt(OFFSET_OPTION_FLAGS);
    auto value = npc(field)->getValue(optionFlags);
    return value == 0 ? true : false;
}

void org::apache::poi::hssf::record::cf::FontFormatting::setOptionFlag(bool modified, ::org::apache::poi::util::BitField* field)
{
    auto value = modified ? int32_t(0) : int32_t(1);
    auto optionFlags = getInt(OFFSET_OPTION_FLAGS);
    optionFlags = npc(field)->setValue(optionFlags, value);
    setInt(OFFSET_OPTION_FLAGS, optionFlags);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::isFontStyleModified()
{
    return getOptionFlag(styleModified_);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setFontStyleModified(bool modified)
{
    setOptionFlag(modified, styleModified_);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::isFontOutlineModified()
{
    return getOptionFlag(outlineModified_);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setFontOutlineModified(bool modified)
{
    setOptionFlag(modified, outlineModified_);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::isFontShadowModified()
{
    return getOptionFlag(shadowModified_);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setFontShadowModified(bool modified)
{
    setOptionFlag(modified, shadowModified_);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setFontCancellationModified(bool modified)
{
    setOptionFlag(modified, cancellationModified_);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::isFontCancellationModified()
{
    return getOptionFlag(cancellationModified_);
}

void org::apache::poi::hssf::record::cf::FontFormatting::setEscapementTypeModified(bool modified)
{
    auto value = modified ? int32_t(0) : int32_t(1);
    setInt(OFFSET_ESCAPEMENT_TYPE_MODIFIED, value);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::isEscapementTypeModified()
{
    auto escapementModified = getInt(OFFSET_ESCAPEMENT_TYPE_MODIFIED);
    return escapementModified == 0;
}

void org::apache::poi::hssf::record::cf::FontFormatting::setUnderlineTypeModified(bool modified)
{
    auto value = modified ? int32_t(0) : int32_t(1);
    setInt(OFFSET_UNDERLINE_TYPE_MODIFIED, value);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::isUnderlineTypeModified()
{
    auto underlineModified = getInt(OFFSET_UNDERLINE_TYPE_MODIFIED);
    return underlineModified == 0;
}

void org::apache::poi::hssf::record::cf::FontFormatting::setFontWieghtModified(bool modified)
{
    auto value = modified ? int32_t(0) : int32_t(1);
    setInt(OFFSET_FONT_WEIGHT_MODIFIED, value);
}

bool org::apache::poi::hssf::record::cf::FontFormatting::isFontWeightModified()
{
    auto fontStyleModified = getInt(OFFSET_FONT_WEIGHT_MODIFIED);
    return fontStyleModified == 0;
}

java::lang::String* org::apache::poi::hssf::record::cf::FontFormatting::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"    [Font Formatting]\n"_j);
    npc(npc(npc(buffer)->append(u"	.font height = "_j))->append(getFontHeight()))->append(u" twips\n"_j);
    if(isFontStyleModified()) {
        npc(npc(npc(buffer)->append(u"	.font posture = "_j))->append(isItalic() ? u"Italic"_j : u"Normal"_j))->append(u"\n"_j);
    } else {
        npc(npc(buffer)->append(u"	.font posture = ]not modified]"_j))->append(u"\n"_j);
    }
    if(isFontOutlineModified()) {
        npc(npc(npc(buffer)->append(u"	.font outline = "_j))->append(isOutlineOn()))->append(u"\n"_j);
    } else {
        npc(buffer)->append(u"	.font outline is not modified\n"_j);
    }
    if(isFontShadowModified()) {
        npc(npc(npc(buffer)->append(u"	.font shadow = "_j))->append(isShadowOn()))->append(u"\n"_j);
    } else {
        npc(buffer)->append(u"	.font shadow is not modified\n"_j);
    }
    if(isFontCancellationModified()) {
        npc(npc(npc(buffer)->append(u"	.font strikeout = "_j))->append(isStruckout()))->append(u"\n"_j);
    } else {
        npc(buffer)->append(u"	.font strikeout is not modified\n"_j);
    }
    if(isFontStyleModified()) {
        npc(npc(npc(npc(buffer)->append(u"	.font weight = "_j))->append(static_cast< int32_t >(getFontWeight())))->append(getFontWeight() == FONT_WEIGHT_NORMAL ? u"(Normal)"_j : getFontWeight() == FONT_WEIGHT_BOLD ? u"(Bold)"_j : ::java::lang::StringBuilder().append(u"0x"_j)->append(::java::lang::Integer::toHexString(getFontWeight()))->toString()))->append(u"\n"_j);
    } else {
        npc(npc(buffer)->append(u"	.font weight = ]not modified]"_j))->append(u"\n"_j);
    }
    if(isEscapementTypeModified()) {
        npc(npc(npc(buffer)->append(u"	.escapement type = "_j))->append(static_cast< int32_t >(getEscapementType())))->append(u"\n"_j);
    } else {
        npc(buffer)->append(u"	.escapement type is not modified\n"_j);
    }
    if(isUnderlineTypeModified()) {
        npc(npc(npc(buffer)->append(u"	.underline type = "_j))->append(static_cast< int32_t >(getUnderlineType())))->append(u"\n"_j);
    } else {
        npc(buffer)->append(u"	.underline type is not modified\n"_j);
    }
    npc(npc(npc(buffer)->append(u"	.color index = "_j))->append(::java::lang::StringBuilder().append(u"0x"_j)->append(npc(::java::lang::Integer::toHexString(getFontColorIndex()))->toUpperCase(::java::util::Locale::ROOT()))->toString()))->append(u"\n"_j);
    npc(buffer)->append(u"    [/Font Formatting]\n"_j);
    return npc(buffer)->toString();
}

org::apache::poi::hssf::record::cf::FontFormatting* org::apache::poi::hssf::record::cf::FontFormatting::clone()
{
    auto other = new FontFormatting();
    ::java::lang::System::arraycopy(_rawData, 0, npc(other)->_rawData, 0, npc(_rawData)->length);
    return other;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::cf::FontFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cf.FontFormatting", 44);
    return c;
}

void org::apache::poi::hssf::record::cf::FontFormatting::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        posture_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        outline_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
        shadow_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16);
        cancellation_ = ::org::apache::poi::util::BitFieldFactory::getInstance(128);
        styleModified_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        outlineModified_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
        shadowModified_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16);
        cancellationModified_ = ::org::apache::poi::util::BitFieldFactory::getInstance(128);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::cf::FontFormatting::getClass0()
{
    return class_();
}


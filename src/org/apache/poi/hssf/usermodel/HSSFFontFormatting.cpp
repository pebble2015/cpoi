// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFFontFormatting.java
#include <org/apache/poi/hssf/usermodel/HSSFFontFormatting.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase.hpp>
#include <org/apache/poi/hssf/record/cf/FontFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPalette.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::usermodel::HSSFFontFormatting::HSSFFontFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFFontFormatting::HSSFFontFormatting(::org::apache::poi::hssf::record::CFRuleBase* cfRuleRecord, HSSFWorkbook* workbook) 
    : HSSFFontFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(cfRuleRecord,workbook);
}

constexpr int8_t org::apache::poi::hssf::usermodel::HSSFFontFormatting::U_NONE;

constexpr int8_t org::apache::poi::hssf::usermodel::HSSFFontFormatting::U_SINGLE;

constexpr int8_t org::apache::poi::hssf::usermodel::HSSFFontFormatting::U_DOUBLE;

constexpr int8_t org::apache::poi::hssf::usermodel::HSSFFontFormatting::U_SINGLE_ACCOUNTING;

constexpr int8_t org::apache::poi::hssf::usermodel::HSSFFontFormatting::U_DOUBLE_ACCOUNTING;

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::ctor(::org::apache::poi::hssf::record::CFRuleBase* cfRuleRecord, HSSFWorkbook* workbook)
{
    super::ctor();
    this->fontFormatting = npc(cfRuleRecord)->getFontFormatting();
    this->workbook = workbook;
}

org::apache::poi::hssf::record::cf::FontFormatting* org::apache::poi::hssf::usermodel::HSSFFontFormatting::getFontFormattingBlock()
{
    return fontFormatting;
}

int16_t org::apache::poi::hssf::usermodel::HSSFFontFormatting::getEscapementType()
{
    return npc(fontFormatting)->getEscapementType();
}

int16_t org::apache::poi::hssf::usermodel::HSSFFontFormatting::getFontColorIndex()
{
    return npc(fontFormatting)->getFontColorIndex();
}

org::apache::poi::hssf::util::HSSFColor* org::apache::poi::hssf::usermodel::HSSFFontFormatting::getFontColor()
{
    return npc(npc(workbook)->getCustomPalette())->getColor(getFontColorIndex());
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setFontColor(::org::apache::poi::ss::usermodel::Color* color)
{
    auto hcolor = ::org::apache::poi::hssf::util::HSSFColor::toHSSFColor(color);
    if(hcolor == nullptr) {
        npc(fontFormatting)->setFontColorIndex(static_cast< int16_t >(int32_t(0)));
    } else {
        npc(fontFormatting)->setFontColorIndex(npc(hcolor)->getIndex());
    }
}

int32_t org::apache::poi::hssf::usermodel::HSSFFontFormatting::getFontHeight()
{
    return npc(fontFormatting)->getFontHeight();
}

int16_t org::apache::poi::hssf::usermodel::HSSFFontFormatting::getFontWeight()
{
    return npc(fontFormatting)->getFontWeight();
}

int8_tArray* org::apache::poi::hssf::usermodel::HSSFFontFormatting::getRawRecord()
{
    return npc(fontFormatting)->getRawRecord();
}

int16_t org::apache::poi::hssf::usermodel::HSSFFontFormatting::getUnderlineType()
{
    return npc(fontFormatting)->getUnderlineType();
}

bool org::apache::poi::hssf::usermodel::HSSFFontFormatting::isBold()
{
    return npc(fontFormatting)->isFontWeightModified() && npc(fontFormatting)->isBold();
}

bool org::apache::poi::hssf::usermodel::HSSFFontFormatting::isEscapementTypeModified()
{
    return npc(fontFormatting)->isEscapementTypeModified();
}

bool org::apache::poi::hssf::usermodel::HSSFFontFormatting::isFontCancellationModified()
{
    return npc(fontFormatting)->isFontCancellationModified();
}

bool org::apache::poi::hssf::usermodel::HSSFFontFormatting::isFontOutlineModified()
{
    return npc(fontFormatting)->isFontOutlineModified();
}

bool org::apache::poi::hssf::usermodel::HSSFFontFormatting::isFontShadowModified()
{
    return npc(fontFormatting)->isFontShadowModified();
}

bool org::apache::poi::hssf::usermodel::HSSFFontFormatting::isFontStyleModified()
{
    return npc(fontFormatting)->isFontStyleModified();
}

bool org::apache::poi::hssf::usermodel::HSSFFontFormatting::isItalic()
{
    return npc(fontFormatting)->isFontStyleModified() && npc(fontFormatting)->isItalic();
}

bool org::apache::poi::hssf::usermodel::HSSFFontFormatting::isOutlineOn()
{
    return npc(fontFormatting)->isFontOutlineModified() && npc(fontFormatting)->isOutlineOn();
}

bool org::apache::poi::hssf::usermodel::HSSFFontFormatting::isShadowOn()
{
    return npc(fontFormatting)->isFontOutlineModified() && npc(fontFormatting)->isShadowOn();
}

bool org::apache::poi::hssf::usermodel::HSSFFontFormatting::isStruckout()
{
    return npc(fontFormatting)->isFontCancellationModified() && npc(fontFormatting)->isStruckout();
}

bool org::apache::poi::hssf::usermodel::HSSFFontFormatting::isUnderlineTypeModified()
{
    return npc(fontFormatting)->isUnderlineTypeModified();
}

bool org::apache::poi::hssf::usermodel::HSSFFontFormatting::isFontWeightModified()
{
    return npc(fontFormatting)->isFontWeightModified();
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setFontStyle(bool italic, bool bold)
{
    auto modified = italic || bold;
    npc(fontFormatting)->setItalic(italic);
    npc(fontFormatting)->setBold(bold);
    npc(fontFormatting)->setFontStyleModified(modified);
    npc(fontFormatting)->setFontWieghtModified(modified);
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::resetFontStyle()
{
    setFontStyle(false, false);
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setEscapementType(int16_t escapementType)
{
    switch (escapementType) {
    case HSSFFontFormatting::SS_SUB:
    case HSSFFontFormatting::SS_SUPER:
        npc(fontFormatting)->setEscapementType(escapementType);
        npc(fontFormatting)->setEscapementTypeModified(true);
        break;
    case HSSFFontFormatting::SS_NONE:
        npc(fontFormatting)->setEscapementType(escapementType);
        npc(fontFormatting)->setEscapementTypeModified(false);
        break;
    default: { }
    }

}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setEscapementTypeModified(bool modified)
{
    npc(fontFormatting)->setEscapementTypeModified(modified);
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setFontCancellationModified(bool modified)
{
    npc(fontFormatting)->setFontCancellationModified(modified);
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setFontColorIndex(int16_t fci)
{
    npc(fontFormatting)->setFontColorIndex(fci);
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setFontHeight(int32_t height)
{
    npc(fontFormatting)->setFontHeight(height);
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setFontOutlineModified(bool modified)
{
    npc(fontFormatting)->setFontOutlineModified(modified);
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setFontShadowModified(bool modified)
{
    npc(fontFormatting)->setFontShadowModified(modified);
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setFontStyleModified(bool modified)
{
    npc(fontFormatting)->setFontStyleModified(modified);
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setOutline(bool on)
{
    npc(fontFormatting)->setOutline(on);
    npc(fontFormatting)->setFontOutlineModified(on);
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setShadow(bool on)
{
    npc(fontFormatting)->setShadow(on);
    npc(fontFormatting)->setFontShadowModified(on);
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setStrikeout(bool strike)
{
    npc(fontFormatting)->setStrikeout(strike);
    npc(fontFormatting)->setFontCancellationModified(strike);
}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setUnderlineType(int16_t underlineType)
{
    switch (underlineType) {
    case HSSFFontFormatting::U_SINGLE:
    case HSSFFontFormatting::U_DOUBLE:
    case HSSFFontFormatting::U_SINGLE_ACCOUNTING:
    case HSSFFontFormatting::U_DOUBLE_ACCOUNTING:
        npc(fontFormatting)->setUnderlineType(underlineType);
        setUnderlineTypeModified(true);
        break;
    case HSSFFontFormatting::U_NONE:
        npc(fontFormatting)->setUnderlineType(underlineType);
        setUnderlineTypeModified(false);
        break;
    default: { }
    }

}

void org::apache::poi::hssf::usermodel::HSSFFontFormatting::setUnderlineTypeModified(bool modified)
{
    npc(fontFormatting)->setUnderlineTypeModified(modified);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFFontFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFFontFormatting", 48);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFFontFormatting::getClass0()
{
    return class_();
}


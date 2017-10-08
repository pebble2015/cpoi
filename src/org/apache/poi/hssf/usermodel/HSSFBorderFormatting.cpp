// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFBorderFormatting.java
#include <org/apache/poi/hssf/usermodel/HSSFBorderFormatting.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase.hpp>
#include <org/apache/poi/hssf/record/cf/BorderFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPalette.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorPredefined.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>
#include <org/apache/poi/ss/usermodel/BorderStyle.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::usermodel::HSSFBorderFormatting::HSSFBorderFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFBorderFormatting::HSSFBorderFormatting(::poi::hssf::record::CFRuleBase* cfRuleRecord, HSSFWorkbook* workbook) 
    : HSSFBorderFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(cfRuleRecord,workbook);
}

void poi::hssf::usermodel::HSSFBorderFormatting::ctor(::poi::hssf::record::CFRuleBase* cfRuleRecord, HSSFWorkbook* workbook)
{
    super::ctor();
    this->workbook = workbook;
    this->cfRuleRecord = cfRuleRecord;
    this->borderFormatting = npc(cfRuleRecord)->getBorderFormatting();
}

poi::hssf::record::cf::BorderFormatting* poi::hssf::usermodel::HSSFBorderFormatting::getBorderFormattingBlock()
{
    return borderFormatting;
}

int16_t poi::hssf::usermodel::HSSFBorderFormatting::getBorderBottom()
{
    return static_cast< int16_t >(npc(borderFormatting)->getBorderBottom());
}

poi::ss::usermodel::BorderStyle* poi::hssf::usermodel::HSSFBorderFormatting::getBorderBottomEnum()
{
    return ::poi::ss::usermodel::BorderStyle::valueOf(static_cast< int16_t >(npc(borderFormatting)->getBorderBottom()));
}

int16_t poi::hssf::usermodel::HSSFBorderFormatting::getBorderDiagonal()
{
    return static_cast< int16_t >(npc(borderFormatting)->getBorderDiagonal());
}

poi::ss::usermodel::BorderStyle* poi::hssf::usermodel::HSSFBorderFormatting::getBorderDiagonalEnum()
{
    return ::poi::ss::usermodel::BorderStyle::valueOf(static_cast< int16_t >(npc(borderFormatting)->getBorderDiagonal()));
}

int16_t poi::hssf::usermodel::HSSFBorderFormatting::getBorderLeft()
{
    return static_cast< int16_t >(npc(borderFormatting)->getBorderLeft());
}

poi::ss::usermodel::BorderStyle* poi::hssf::usermodel::HSSFBorderFormatting::getBorderLeftEnum()
{
    return ::poi::ss::usermodel::BorderStyle::valueOf(static_cast< int16_t >(npc(borderFormatting)->getBorderLeft()));
}

int16_t poi::hssf::usermodel::HSSFBorderFormatting::getBorderRight()
{
    return static_cast< int16_t >(npc(borderFormatting)->getBorderRight());
}

poi::ss::usermodel::BorderStyle* poi::hssf::usermodel::HSSFBorderFormatting::getBorderRightEnum()
{
    return ::poi::ss::usermodel::BorderStyle::valueOf(static_cast< int16_t >(npc(borderFormatting)->getBorderRight()));
}

int16_t poi::hssf::usermodel::HSSFBorderFormatting::getBorderTop()
{
    return static_cast< int16_t >(npc(borderFormatting)->getBorderTop());
}

poi::ss::usermodel::BorderStyle* poi::hssf::usermodel::HSSFBorderFormatting::getBorderTopEnum()
{
    return ::poi::ss::usermodel::BorderStyle::valueOf(static_cast< int16_t >(npc(borderFormatting)->getBorderTop()));
}

int16_t poi::hssf::usermodel::HSSFBorderFormatting::getBottomBorderColor()
{
    return static_cast< int16_t >(npc(borderFormatting)->getBottomBorderColor());
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFBorderFormatting::getBottomBorderColorColor()
{
    return npc(npc(workbook)->getCustomPalette())->getColor(npc(borderFormatting)->getBottomBorderColor());
}

int16_t poi::hssf::usermodel::HSSFBorderFormatting::getDiagonalBorderColor()
{
    return static_cast< int16_t >(npc(borderFormatting)->getDiagonalBorderColor());
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFBorderFormatting::getDiagonalBorderColorColor()
{
    return npc(npc(workbook)->getCustomPalette())->getColor(npc(borderFormatting)->getDiagonalBorderColor());
}

int16_t poi::hssf::usermodel::HSSFBorderFormatting::getLeftBorderColor()
{
    return static_cast< int16_t >(npc(borderFormatting)->getLeftBorderColor());
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFBorderFormatting::getLeftBorderColorColor()
{
    return npc(npc(workbook)->getCustomPalette())->getColor(npc(borderFormatting)->getLeftBorderColor());
}

int16_t poi::hssf::usermodel::HSSFBorderFormatting::getRightBorderColor()
{
    return static_cast< int16_t >(npc(borderFormatting)->getRightBorderColor());
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFBorderFormatting::getRightBorderColorColor()
{
    return npc(npc(workbook)->getCustomPalette())->getColor(npc(borderFormatting)->getRightBorderColor());
}

int16_t poi::hssf::usermodel::HSSFBorderFormatting::getTopBorderColor()
{
    return static_cast< int16_t >(npc(borderFormatting)->getTopBorderColor());
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFBorderFormatting::getTopBorderColorColor()
{
    return npc(npc(workbook)->getCustomPalette())->getColor(npc(borderFormatting)->getTopBorderColor());
}

bool poi::hssf::usermodel::HSSFBorderFormatting::isBackwardDiagonalOn()
{
    return npc(borderFormatting)->isBackwardDiagonalOn();
}

bool poi::hssf::usermodel::HSSFBorderFormatting::isForwardDiagonalOn()
{
    return npc(borderFormatting)->isForwardDiagonalOn();
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBackwardDiagonalOn(bool on)
{
    npc(borderFormatting)->setBackwardDiagonalOn(on);
    if(on) {
        npc(cfRuleRecord)->setTopLeftBottomRightBorderModified(on);
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setForwardDiagonalOn(bool on)
{
    npc(borderFormatting)->setForwardDiagonalOn(on);
    if(on) {
        npc(cfRuleRecord)->setBottomLeftTopRightBorderModified(on);
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBorderBottom(int16_t border)
{
    npc(borderFormatting)->setBorderBottom(border);
    if(border != 0) {
        npc(cfRuleRecord)->setBottomBorderModified(true);
    } else {
        npc(cfRuleRecord)->setBottomBorderModified(false);
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBorderBottom(::poi::ss::usermodel::BorderStyle* border)
{
    setBorderBottom(npc(border)->getCode());
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBorderDiagonal(int16_t border)
{
    npc(borderFormatting)->setBorderDiagonal(border);
    if(border != 0) {
        npc(cfRuleRecord)->setBottomLeftTopRightBorderModified(true);
        npc(cfRuleRecord)->setTopLeftBottomRightBorderModified(true);
    } else {
        npc(cfRuleRecord)->setBottomLeftTopRightBorderModified(false);
        npc(cfRuleRecord)->setTopLeftBottomRightBorderModified(false);
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBorderDiagonal(::poi::ss::usermodel::BorderStyle* border)
{
    setBorderDiagonal(npc(border)->getCode());
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBorderLeft(int16_t border)
{
    npc(borderFormatting)->setBorderLeft(border);
    if(border != 0) {
        npc(cfRuleRecord)->setLeftBorderModified(true);
    } else {
        npc(cfRuleRecord)->setLeftBorderModified(false);
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBorderLeft(::poi::ss::usermodel::BorderStyle* border)
{
    setBorderLeft(npc(border)->getCode());
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBorderRight(int16_t border)
{
    npc(borderFormatting)->setBorderRight(border);
    if(border != 0) {
        npc(cfRuleRecord)->setRightBorderModified(true);
    } else {
        npc(cfRuleRecord)->setRightBorderModified(false);
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBorderRight(::poi::ss::usermodel::BorderStyle* border)
{
    setBorderRight(npc(border)->getCode());
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBorderTop(int16_t border)
{
    npc(borderFormatting)->setBorderTop(border);
    if(border != 0) {
        npc(cfRuleRecord)->setTopBorderModified(true);
    } else {
        npc(cfRuleRecord)->setTopBorderModified(false);
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBorderTop(::poi::ss::usermodel::BorderStyle* border)
{
    setBorderTop(npc(border)->getCode());
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBottomBorderColor(int16_t color)
{
    npc(borderFormatting)->setBottomBorderColor(color);
    if(color != 0) {
        npc(cfRuleRecord)->setBottomBorderModified(true);
    } else {
        npc(cfRuleRecord)->setBottomBorderModified(false);
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBottomBorderColor(::poi::ss::usermodel::Color* color)
{
    auto hcolor = ::poi::hssf::util::HSSFColor::toHSSFColor(color);
    if(hcolor == nullptr) {
        setBottomBorderColor(static_cast< int16_t >(int32_t(0)));
    } else {
        setBottomBorderColor(npc(hcolor)->getIndex());
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setDiagonalBorderColor(int16_t color)
{
    npc(borderFormatting)->setDiagonalBorderColor(color);
    if(color != 0) {
        npc(cfRuleRecord)->setBottomLeftTopRightBorderModified(true);
        npc(cfRuleRecord)->setTopLeftBottomRightBorderModified(true);
    } else {
        npc(cfRuleRecord)->setBottomLeftTopRightBorderModified(false);
        npc(cfRuleRecord)->setTopLeftBottomRightBorderModified(false);
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setDiagonalBorderColor(::poi::ss::usermodel::Color* color)
{
    auto hcolor = ::poi::hssf::util::HSSFColor::toHSSFColor(color);
    if(hcolor == nullptr) {
        setDiagonalBorderColor(static_cast< int16_t >(int32_t(0)));
    } else {
        setDiagonalBorderColor(npc(hcolor)->getIndex());
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setLeftBorderColor(int16_t color)
{
    npc(borderFormatting)->setLeftBorderColor(color);
    if(color != 0) {
        npc(cfRuleRecord)->setLeftBorderModified(true);
    } else {
        npc(cfRuleRecord)->setLeftBorderModified(false);
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setLeftBorderColor(::poi::ss::usermodel::Color* color)
{
    auto hcolor = ::poi::hssf::util::HSSFColor::toHSSFColor(color);
    if(hcolor == nullptr) {
        setLeftBorderColor(static_cast< int16_t >(int32_t(0)));
    } else {
        setLeftBorderColor(npc(hcolor)->getIndex());
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setRightBorderColor(int16_t color)
{
    npc(borderFormatting)->setRightBorderColor(color);
    if(color != 0) {
        npc(cfRuleRecord)->setRightBorderModified(true);
    } else {
        npc(cfRuleRecord)->setRightBorderModified(false);
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setRightBorderColor(::poi::ss::usermodel::Color* color)
{
    auto hcolor = ::poi::hssf::util::HSSFColor::toHSSFColor(color);
    if(hcolor == nullptr) {
        setRightBorderColor(static_cast< int16_t >(int32_t(0)));
    } else {
        setRightBorderColor(npc(hcolor)->getIndex());
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setTopBorderColor(int16_t color)
{
    npc(borderFormatting)->setTopBorderColor(color);
    if(color != 0) {
        npc(cfRuleRecord)->setTopBorderModified(true);
    } else {
        npc(cfRuleRecord)->setTopBorderModified(false);
    }
}

void poi::hssf::usermodel::HSSFBorderFormatting::setTopBorderColor(::poi::ss::usermodel::Color* color)
{
    auto hcolor = ::poi::hssf::util::HSSFColor::toHSSFColor(color);
    if(hcolor == nullptr) {
        setTopBorderColor(static_cast< int16_t >(int32_t(0)));
    } else {
        setTopBorderColor(npc(hcolor)->getIndex());
    }
}

poi::ss::usermodel::BorderStyle* poi::hssf::usermodel::HSSFBorderFormatting::getBorderVerticalEnum()
{
    return ::poi::ss::usermodel::BorderStyle::NONE;
}

poi::ss::usermodel::BorderStyle* poi::hssf::usermodel::HSSFBorderFormatting::getBorderHorizontalEnum()
{
    return ::poi::ss::usermodel::BorderStyle::NONE;
}

int16_t poi::hssf::usermodel::HSSFBorderFormatting::getVerticalBorderColor()
{
    return npc(::poi::hssf::util::HSSFColor_HSSFColorPredefined::AUTOMATIC)->getIndex();
}

poi::ss::usermodel::Color* poi::hssf::usermodel::HSSFBorderFormatting::getVerticalBorderColorColor()
{
    return npc(::poi::hssf::util::HSSFColor_HSSFColorPredefined::AUTOMATIC)->getColor();
}

int16_t poi::hssf::usermodel::HSSFBorderFormatting::getHorizontalBorderColor()
{
    return npc(::poi::hssf::util::HSSFColor_HSSFColorPredefined::AUTOMATIC)->getIndex();
}

poi::ss::usermodel::Color* poi::hssf::usermodel::HSSFBorderFormatting::getHorizontalBorderColorColor()
{
    return npc(::poi::hssf::util::HSSFColor_HSSFColorPredefined::AUTOMATIC)->getColor();
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBorderHorizontal(::poi::ss::usermodel::BorderStyle* border)
{
}

void poi::hssf::usermodel::HSSFBorderFormatting::setBorderVertical(::poi::ss::usermodel::BorderStyle* border)
{
}

void poi::hssf::usermodel::HSSFBorderFormatting::setHorizontalBorderColor(int16_t color)
{
}

void poi::hssf::usermodel::HSSFBorderFormatting::setHorizontalBorderColor(::poi::ss::usermodel::Color* color)
{
}

void poi::hssf::usermodel::HSSFBorderFormatting::setVerticalBorderColor(int16_t color)
{
}

void poi::hssf::usermodel::HSSFBorderFormatting::setVerticalBorderColor(::poi::ss::usermodel::Color* color)
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFBorderFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFBorderFormatting", 50);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFBorderFormatting::getClass0()
{
    return class_();
}


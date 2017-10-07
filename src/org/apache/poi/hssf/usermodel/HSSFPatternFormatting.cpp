// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPatternFormatting.java
#include <org/apache/poi/hssf/usermodel/HSSFPatternFormatting.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase.hpp>
#include <org/apache/poi/hssf/record/cf/PatternFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPalette.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::usermodel::HSSFPatternFormatting::HSSFPatternFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFPatternFormatting::HSSFPatternFormatting(::org::apache::poi::hssf::record::CFRuleBase* cfRuleRecord, HSSFWorkbook* workbook) 
    : HSSFPatternFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(cfRuleRecord,workbook);
}

void org::apache::poi::hssf::usermodel::HSSFPatternFormatting::ctor(::org::apache::poi::hssf::record::CFRuleBase* cfRuleRecord, HSSFWorkbook* workbook)
{
    super::ctor();
    this->workbook = workbook;
    this->cfRuleRecord = cfRuleRecord;
    this->patternFormatting = npc(cfRuleRecord)->getPatternFormatting();
}

org::apache::poi::hssf::record::cf::PatternFormatting* org::apache::poi::hssf::usermodel::HSSFPatternFormatting::getPatternFormattingBlock()
{
    return patternFormatting;
}

org::apache::poi::hssf::util::HSSFColor* org::apache::poi::hssf::usermodel::HSSFPatternFormatting::getFillBackgroundColorColor()
{
    return npc(npc(workbook)->getCustomPalette())->getColor(getFillBackgroundColor());
}

org::apache::poi::hssf::util::HSSFColor* org::apache::poi::hssf::usermodel::HSSFPatternFormatting::getFillForegroundColorColor()
{
    return npc(npc(workbook)->getCustomPalette())->getColor(getFillForegroundColor());
}

int16_t org::apache::poi::hssf::usermodel::HSSFPatternFormatting::getFillBackgroundColor()
{
    return static_cast< int16_t >(npc(patternFormatting)->getFillBackgroundColor());
}

int16_t org::apache::poi::hssf::usermodel::HSSFPatternFormatting::getFillForegroundColor()
{
    return static_cast< int16_t >(npc(patternFormatting)->getFillForegroundColor());
}

int16_t org::apache::poi::hssf::usermodel::HSSFPatternFormatting::getFillPattern()
{
    return static_cast< int16_t >(npc(patternFormatting)->getFillPattern());
}

void org::apache::poi::hssf::usermodel::HSSFPatternFormatting::setFillBackgroundColor(::org::apache::poi::ss::usermodel::Color* bg)
{
    auto hcolor = ::org::apache::poi::hssf::util::HSSFColor::toHSSFColor(bg);
    if(hcolor == nullptr) {
        setFillBackgroundColor(static_cast< int16_t >(int32_t(0)));
    } else {
        setFillBackgroundColor(npc(hcolor)->getIndex());
    }
}

void org::apache::poi::hssf::usermodel::HSSFPatternFormatting::setFillForegroundColor(::org::apache::poi::ss::usermodel::Color* fg)
{
    auto hcolor = ::org::apache::poi::hssf::util::HSSFColor::toHSSFColor(fg);
    if(hcolor == nullptr) {
        setFillForegroundColor(static_cast< int16_t >(int32_t(0)));
    } else {
        setFillForegroundColor(npc(hcolor)->getIndex());
    }
}

void org::apache::poi::hssf::usermodel::HSSFPatternFormatting::setFillBackgroundColor(int16_t bg)
{
    npc(patternFormatting)->setFillBackgroundColor(bg);
    if(bg != 0) {
        npc(cfRuleRecord)->setPatternBackgroundColorModified(true);
    }
}

void org::apache::poi::hssf::usermodel::HSSFPatternFormatting::setFillForegroundColor(int16_t fg)
{
    npc(patternFormatting)->setFillForegroundColor(fg);
    if(fg != 0) {
        npc(cfRuleRecord)->setPatternColorModified(true);
    }
}

void org::apache::poi::hssf::usermodel::HSSFPatternFormatting::setFillPattern(int16_t fp)
{
    npc(patternFormatting)->setFillPattern(fp);
    if(fp != 0) {
        npc(cfRuleRecord)->setPatternStyleModified(true);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFPatternFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFPatternFormatting", 51);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFPatternFormatting::getClass0()
{
    return class_();
}


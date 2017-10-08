// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFConditionalFormattingThreshold.java
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingThreshold.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase.hpp>
#include <org/apache/poi/hssf/record/cf/Threshold.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingRule.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingThreshold_RangeType.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>

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

poi::hssf::usermodel::HSSFConditionalFormattingThreshold::HSSFConditionalFormattingThreshold(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFConditionalFormattingThreshold::HSSFConditionalFormattingThreshold(::poi::hssf::record::cf::Threshold* threshold, HSSFSheet* sheet) 
    : HSSFConditionalFormattingThreshold(*static_cast< ::default_init_tag* >(0))
{
    ctor(threshold,sheet);
}

void poi::hssf::usermodel::HSSFConditionalFormattingThreshold::ctor(::poi::hssf::record::cf::Threshold* threshold, HSSFSheet* sheet)
{
    super::ctor();
    this->threshold = threshold;
    this->sheet = sheet;
    this->workbook = java_cast< HSSFWorkbook* >(npc(sheet)->getWorkbook());
}

poi::hssf::record::cf::Threshold* poi::hssf::usermodel::HSSFConditionalFormattingThreshold::getThreshold()
{
    return threshold;
}

poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* poi::hssf::usermodel::HSSFConditionalFormattingThreshold::getRangeType()
{
    return ::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::byId(npc(threshold)->getType());
}

void poi::hssf::usermodel::HSSFConditionalFormattingThreshold::setRangeType(::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* type)
{
    npc(threshold)->setType(static_cast< int8_t >(npc(type)->id));
}

java::lang::String* poi::hssf::usermodel::HSSFConditionalFormattingThreshold::getFormula()
{
    return HSSFConditionalFormattingRule::toFormulaString(npc(threshold)->getParsedExpression(), workbook);
}

void poi::hssf::usermodel::HSSFConditionalFormattingThreshold::setFormula(::java::lang::String* formula)
{
    npc(threshold)->setParsedExpression(::poi::hssf::record::CFRuleBase::parseFormula(formula, sheet));
}

java::lang::Double* poi::hssf::usermodel::HSSFConditionalFormattingThreshold::getValue()
{
    return npc(threshold)->getValue();
}

void poi::hssf::usermodel::HSSFConditionalFormattingThreshold::setValue(::java::lang::Double* value)
{
    npc(threshold)->setValue(value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFConditionalFormattingThreshold::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFConditionalFormattingThreshold", 64);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFConditionalFormattingThreshold::getClass0()
{
    return class_();
}


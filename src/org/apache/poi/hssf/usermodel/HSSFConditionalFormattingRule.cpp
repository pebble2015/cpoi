// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFConditionalFormattingRule.java
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingRule.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/model/HSSFFormulaParser.hpp>
#include <org/apache/poi/hssf/record/CFRule12Record.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase_ComparisonOperator.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase.hpp>
#include <org/apache/poi/hssf/record/cf/BorderFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/ColorGradientFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/DataBarFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/FontFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/IconMultiStateFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/PatternFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFBorderFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFColorScaleFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataBarFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFFontFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFIconMultiStateFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatternFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/usermodel/ConditionFilterType.hpp>
#include <org/apache/poi/ss/usermodel/ConditionType.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

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

poi::hssf::usermodel::HSSFConditionalFormattingRule::HSSFConditionalFormattingRule(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFConditionalFormattingRule::HSSFConditionalFormattingRule(HSSFSheet* pSheet, ::poi::hssf::record::CFRuleBase* pRuleRecord) 
    : HSSFConditionalFormattingRule(*static_cast< ::default_init_tag* >(0))
{
    ctor(pSheet,pRuleRecord);
}

constexpr int8_t poi::hssf::usermodel::HSSFConditionalFormattingRule::CELL_COMPARISON;

void poi::hssf::usermodel::HSSFConditionalFormattingRule::ctor(HSSFSheet* pSheet, ::poi::hssf::record::CFRuleBase* pRuleRecord)
{
    super::ctor();
    if(pSheet == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"pSheet must not be null"_j);
    }
    if(pRuleRecord == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"pRuleRecord must not be null"_j);
    }
    sheet = pSheet;
    workbook = java_cast< HSSFWorkbook* >(npc(pSheet)->getWorkbook());
    cfRuleRecord = pRuleRecord;
}

int32_t poi::hssf::usermodel::HSSFConditionalFormattingRule::getPriority()
{
    auto rule12 = getCFRule12Record(false);
    if(rule12 == nullptr)
        return 0;

    return npc(rule12)->getPriority();
}

bool poi::hssf::usermodel::HSSFConditionalFormattingRule::getStopIfTrue()
{
    return true;
}

poi::hssf::record::CFRuleBase* poi::hssf::usermodel::HSSFConditionalFormattingRule::getCfRuleRecord()
{
    return cfRuleRecord;
}

poi::hssf::record::CFRule12Record* poi::hssf::usermodel::HSSFConditionalFormattingRule::getCFRule12Record(bool create)
{
    if(dynamic_cast< ::poi::hssf::record::CFRule12Record* >(cfRuleRecord) != nullptr) {
    } else {
        if(create)
            throw new ::java::lang::IllegalArgumentException(u"Can't convert a CF into a CF12 record"_j);

        return nullptr;
    }
    return java_cast< ::poi::hssf::record::CFRule12Record* >(cfRuleRecord);
}

poi::ss::usermodel::ExcelNumberFormat* poi::hssf::usermodel::HSSFConditionalFormattingRule::getNumberFormat()
{
    return nullptr;
}

poi::hssf::usermodel::HSSFFontFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::getFontFormatting(bool create)
{
    auto fontFormatting = npc(cfRuleRecord)->getFontFormatting();
    if(fontFormatting == nullptr) {
        if(!create)
            return nullptr;

        fontFormatting = new ::poi::hssf::record::cf::FontFormatting();
        npc(cfRuleRecord)->setFontFormatting(fontFormatting);
    }
    return new HSSFFontFormatting(cfRuleRecord, workbook);
}

poi::hssf::usermodel::HSSFFontFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::getFontFormatting()
{
    return getFontFormatting(false);
}

poi::hssf::usermodel::HSSFFontFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::createFontFormatting()
{
    return getFontFormatting(true);
}

poi::hssf::usermodel::HSSFBorderFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::getBorderFormatting(bool create)
{
    auto borderFormatting = npc(cfRuleRecord)->getBorderFormatting();
    if(borderFormatting == nullptr) {
        if(!create)
            return nullptr;

        borderFormatting = new ::poi::hssf::record::cf::BorderFormatting();
        npc(cfRuleRecord)->setBorderFormatting(borderFormatting);
    }
    return new HSSFBorderFormatting(cfRuleRecord, workbook);
}

poi::hssf::usermodel::HSSFBorderFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::getBorderFormatting()
{
    return getBorderFormatting(false);
}

poi::hssf::usermodel::HSSFBorderFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::createBorderFormatting()
{
    return getBorderFormatting(true);
}

poi::hssf::usermodel::HSSFPatternFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::getPatternFormatting(bool create)
{
    auto patternFormatting = npc(cfRuleRecord)->getPatternFormatting();
    if(patternFormatting == nullptr) {
        if(!create)
            return nullptr;

        patternFormatting = new ::poi::hssf::record::cf::PatternFormatting();
        npc(cfRuleRecord)->setPatternFormatting(patternFormatting);
    }
    return new HSSFPatternFormatting(cfRuleRecord, workbook);
}

poi::hssf::usermodel::HSSFPatternFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::getPatternFormatting()
{
    return getPatternFormatting(false);
}

poi::hssf::usermodel::HSSFPatternFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::createPatternFormatting()
{
    return getPatternFormatting(true);
}

poi::hssf::usermodel::HSSFDataBarFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::getDataBarFormatting(bool create)
{
    auto cfRule12Record = getCFRule12Record(create);
    if(cfRule12Record == nullptr)
        return nullptr;

    auto databarFormatting = npc(cfRule12Record)->getDataBarFormatting();
    if(databarFormatting == nullptr) {
        if(!create)
            return nullptr;

        npc(cfRule12Record)->createDataBarFormatting();
    }
    return new HSSFDataBarFormatting(cfRule12Record, sheet);
}

poi::hssf::usermodel::HSSFDataBarFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::getDataBarFormatting()
{
    return getDataBarFormatting(false);
}

poi::hssf::usermodel::HSSFDataBarFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::createDataBarFormatting()
{
    return getDataBarFormatting(true);
}

poi::hssf::usermodel::HSSFIconMultiStateFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::getMultiStateFormatting(bool create)
{
    auto cfRule12Record = getCFRule12Record(create);
    if(cfRule12Record == nullptr)
        return nullptr;

    auto iconFormatting = npc(cfRule12Record)->getMultiStateFormatting();
    if(iconFormatting == nullptr) {
        if(!create)
            return nullptr;

        npc(cfRule12Record)->createMultiStateFormatting();
    }
    return new HSSFIconMultiStateFormatting(cfRule12Record, sheet);
}

poi::hssf::usermodel::HSSFIconMultiStateFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::getMultiStateFormatting()
{
    return getMultiStateFormatting(false);
}

poi::hssf::usermodel::HSSFIconMultiStateFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::createMultiStateFormatting()
{
    return getMultiStateFormatting(true);
}

poi::hssf::usermodel::HSSFColorScaleFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::getColorScaleFormatting(bool create)
{
    auto cfRule12Record = getCFRule12Record(create);
    if(cfRule12Record == nullptr)
        return nullptr;

    auto colorFormatting = npc(cfRule12Record)->getColorGradientFormatting();
    if(colorFormatting == nullptr) {
        if(!create)
            return nullptr;

        npc(cfRule12Record)->createColorGradientFormatting();
    }
    return new HSSFColorScaleFormatting(cfRule12Record, sheet);
}

poi::hssf::usermodel::HSSFColorScaleFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::getColorScaleFormatting()
{
    return getColorScaleFormatting(false);
}

poi::hssf::usermodel::HSSFColorScaleFormatting* poi::hssf::usermodel::HSSFConditionalFormattingRule::createColorScaleFormatting()
{
    return getColorScaleFormatting(true);
}

poi::ss::usermodel::ConditionType* poi::hssf::usermodel::HSSFConditionalFormattingRule::getConditionType()
{
    auto code = npc(cfRuleRecord)->getConditionType();
    return ::poi::ss::usermodel::ConditionType::forId(code);
}

poi::ss::usermodel::ConditionFilterType* poi::hssf::usermodel::HSSFConditionalFormattingRule::getConditionFilterType()
{
    return getConditionType() == ::poi::ss::usermodel::ConditionType::FILTER() ? ::poi::ss::usermodel::ConditionFilterType::FILTER : static_cast< ::poi::ss::usermodel::ConditionFilterType* >(nullptr);
}

poi::ss::usermodel::ConditionFilterData* poi::hssf::usermodel::HSSFConditionalFormattingRule::getFilterConfiguration()
{
    return nullptr;
}

int8_t poi::hssf::usermodel::HSSFConditionalFormattingRule::getComparisonOperation()
{
    return npc(cfRuleRecord)->getComparisonOperation();
}

java::lang::String* poi::hssf::usermodel::HSSFConditionalFormattingRule::getFormula1()
{
    return toFormulaString(npc(cfRuleRecord)->getParsedExpression1());
}

java::lang::String* poi::hssf::usermodel::HSSFConditionalFormattingRule::getFormula2()
{
    auto conditionType = npc(cfRuleRecord)->getConditionType();
    if(conditionType == CELL_COMPARISON) {
        auto comparisonOperation = npc(cfRuleRecord)->getComparisonOperation();
        switch (comparisonOperation) {
        case ::poi::hssf::record::CFRuleBase_ComparisonOperator::BETWEEN:
        case ::poi::hssf::record::CFRuleBase_ComparisonOperator::NOT_BETWEEN:
            return toFormulaString(npc(cfRuleRecord)->getParsedExpression2());
        }

    }
    return nullptr;
}

java::lang::String* poi::hssf::usermodel::HSSFConditionalFormattingRule::toFormulaString(::poi::ss::formula::ptg::PtgArray* parsedExpression)
{
    return toFormulaString(parsedExpression, workbook);
}

java::lang::String* poi::hssf::usermodel::HSSFConditionalFormattingRule::toFormulaString(::poi::ss::formula::ptg::PtgArray* parsedExpression, HSSFWorkbook* workbook)
{
    clinit();
    if(parsedExpression == nullptr || npc(parsedExpression)->length == 0) {
        return nullptr;
    }
    return ::poi::hssf::model::HSSFFormulaParser::toFormulaString(workbook, parsedExpression);
}

int32_t poi::hssf::usermodel::HSSFConditionalFormattingRule::getStripeSize()
{
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFConditionalFormattingRule::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFConditionalFormattingRule", 59);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFConditionalFormattingRule::getClass0()
{
    return class_();
}


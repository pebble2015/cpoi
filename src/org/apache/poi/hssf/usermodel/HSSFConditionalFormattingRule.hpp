// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFConditionalFormattingRule.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingRule.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFBorderFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFColorScaleFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataBarFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFFontFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFIconMultiStateFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatternFormatting.hpp>

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

struct default_init_tag;

class poi::hssf::usermodel::HSSFConditionalFormattingRule final
    : public virtual ::java::lang::Object
    , public ::poi::ss::usermodel::ConditionalFormattingRule
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int8_t CELL_COMPARISON { int8_t(1) };
    ::poi::hssf::record::CFRuleBase* cfRuleRecord {  };
    HSSFWorkbook* workbook {  };
    HSSFSheet* sheet {  };
protected:
    void ctor(HSSFSheet* pSheet, ::poi::hssf::record::CFRuleBase* pRuleRecord);

public:
    int32_t getPriority() override;
    bool getStopIfTrue() override;

public: /* package */
    ::poi::hssf::record::CFRuleBase* getCfRuleRecord();

private:
    ::poi::hssf::record::CFRule12Record* getCFRule12Record(bool create);

public:
    ::poi::ss::usermodel::ExcelNumberFormat* getNumberFormat() override;

private:
    HSSFFontFormatting* getFontFormatting(bool create);

public:
    HSSFFontFormatting* getFontFormatting() override;
    HSSFFontFormatting* createFontFormatting() override;

private:
    HSSFBorderFormatting* getBorderFormatting(bool create);

public:
    HSSFBorderFormatting* getBorderFormatting() override;
    HSSFBorderFormatting* createBorderFormatting() override;

private:
    HSSFPatternFormatting* getPatternFormatting(bool create);

public:
    HSSFPatternFormatting* getPatternFormatting() override;
    HSSFPatternFormatting* createPatternFormatting() override;

private:
    HSSFDataBarFormatting* getDataBarFormatting(bool create);

public:
    HSSFDataBarFormatting* getDataBarFormatting() override;
    HSSFDataBarFormatting* createDataBarFormatting();

private:
    HSSFIconMultiStateFormatting* getMultiStateFormatting(bool create);

public:
    HSSFIconMultiStateFormatting* getMultiStateFormatting() override;
    HSSFIconMultiStateFormatting* createMultiStateFormatting();

private:
    HSSFColorScaleFormatting* getColorScaleFormatting(bool create);

public:
    HSSFColorScaleFormatting* getColorScaleFormatting() override;
    HSSFColorScaleFormatting* createColorScaleFormatting();
    ::poi::ss::usermodel::ConditionType* getConditionType() override;
    ::poi::ss::usermodel::ConditionFilterType* getConditionFilterType() override;
    ::poi::ss::usermodel::ConditionFilterData* getFilterConfiguration() override;
    int8_t getComparisonOperation() override;
    ::java::lang::String* getFormula1() override;
    ::java::lang::String* getFormula2() override;

public: /* protected */
    ::java::lang::String* toFormulaString(::poi::ss::formula::ptg::PtgArray* parsedExpression);
    static ::java::lang::String* toFormulaString(::poi::ss::formula::ptg::PtgArray* parsedExpression, HSSFWorkbook* workbook);

public:
    int32_t getStripeSize() override;

    // Generated

public: /* package */
    HSSFConditionalFormattingRule(HSSFSheet* pSheet, ::poi::hssf::record::CFRuleBase* pRuleRecord);
protected:
    HSSFConditionalFormattingRule(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

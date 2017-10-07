// Generated from /POI/java/org/apache/poi/ss/usermodel/ConditionalFormattingRule.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/DifferentialStyleProvider.hpp>

struct org::apache::poi::ss::usermodel::ConditionalFormattingRule
    : public virtual DifferentialStyleProvider
{
    virtual BorderFormatting* createBorderFormatting() = 0;
    /*BorderFormatting* getBorderFormatting(); (already declared) */
    virtual FontFormatting* createFontFormatting() = 0;
    /*FontFormatting* getFontFormatting(); (already declared) */
    virtual PatternFormatting* createPatternFormatting() = 0;
    /*PatternFormatting* getPatternFormatting(); (already declared) */
    virtual DataBarFormatting* getDataBarFormatting() = 0;
    virtual IconMultiStateFormatting* getMultiStateFormatting() = 0;
    virtual ColorScaleFormatting* getColorScaleFormatting() = 0;
    /*ExcelNumberFormat* getNumberFormat(); (already declared) */
    virtual ConditionType* getConditionType() = 0;
    virtual ConditionFilterType* getConditionFilterType() = 0;
    virtual ConditionFilterData* getFilterConfiguration() = 0;
    virtual int8_t getComparisonOperation() = 0;
    virtual ::java::lang::String* getFormula1() = 0;
    virtual ::java::lang::String* getFormula2() = 0;
    virtual int32_t getPriority() = 0;
    virtual bool getStopIfTrue() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

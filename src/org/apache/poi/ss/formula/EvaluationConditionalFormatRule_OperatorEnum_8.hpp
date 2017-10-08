// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum.hpp>

struct default_init_tag;

class poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_8 final
    : public EvaluationConditionalFormatRule_OperatorEnum
{

public:
    typedef EvaluationConditionalFormatRule_OperatorEnum super;
    /* <C extends Comparable<C>> */bool isValid(::java::lang::Comparable* cellValue, ::java::lang::Comparable* v1, ::java::lang::Comparable* v2) override;

    // Generated
    EvaluationConditionalFormatRule_OperatorEnum_8(::java::lang::String* name, int ordinal);
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class EvaluationConditionalFormatRule;
    friend class EvaluationConditionalFormatRule_checkFilter_1;
    friend class EvaluationConditionalFormatRule_checkFilter_2;
    friend class EvaluationConditionalFormatRule_checkFilter_3;
    friend class EvaluationConditionalFormatRule_checkFilter_4;
    friend class EvaluationConditionalFormatRule_ValueFunction;
    friend class EvaluationConditionalFormatRule_OperatorEnum;
    friend class EvaluationConditionalFormatRule_OperatorEnum_1;
    friend class EvaluationConditionalFormatRule_OperatorEnum_2;
    friend class EvaluationConditionalFormatRule_OperatorEnum_3;
    friend class EvaluationConditionalFormatRule_OperatorEnum_4;
    friend class EvaluationConditionalFormatRule_OperatorEnum_5;
    friend class EvaluationConditionalFormatRule_OperatorEnum_6;
    friend class EvaluationConditionalFormatRule_OperatorEnum_7;
    friend class EvaluationConditionalFormatRule_OperatorEnum_9;
    friend class EvaluationConditionalFormatRule_ValueAndFormat;
};

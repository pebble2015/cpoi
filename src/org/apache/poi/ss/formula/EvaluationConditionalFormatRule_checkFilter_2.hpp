// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_ValueFunction.hpp>

struct default_init_tag;

class poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_2
    : public virtual ::java::lang::Object
    , public virtual EvaluationConditionalFormatRule_ValueFunction
{

public:
    typedef ::java::lang::Object super;
    ::java::util::Set* evaluate(::java::util::List* allValues) override;

    // Generated
    EvaluationConditionalFormatRule_checkFilter_2(EvaluationConditionalFormatRule *EvaluationConditionalFormatRule_this);
    static ::java::lang::Class *class_();
    EvaluationConditionalFormatRule *EvaluationConditionalFormatRule_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class EvaluationConditionalFormatRule;
    friend class EvaluationConditionalFormatRule_checkFilter_1;
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
    friend class EvaluationConditionalFormatRule_OperatorEnum_8;
    friend class EvaluationConditionalFormatRule_OperatorEnum_9;
    friend class EvaluationConditionalFormatRule_ValueAndFormat;
};

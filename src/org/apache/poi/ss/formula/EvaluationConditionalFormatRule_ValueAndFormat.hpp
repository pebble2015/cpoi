// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Comparable
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::Double* value {  };
    ::java::lang::String* string {  };
    ::java::lang::String* format {  };
protected:
    void ctor(::java::lang::Double* value, ::java::lang::String* format);
    void ctor(::java::lang::String* value, ::java::lang::String* format);

public:
    virtual bool isNumber();
    virtual ::java::lang::Double* getValue();
    virtual ::java::lang::String* getString();
    bool equals(::java::lang::Object* obj) override;
    virtual int32_t compareTo(EvaluationConditionalFormatRule_ValueAndFormat* o);
    int32_t hashCode() override;

    // Generated
    EvaluationConditionalFormatRule_ValueAndFormat(::java::lang::Double* value, ::java::lang::String* format);
    EvaluationConditionalFormatRule_ValueAndFormat(::java::lang::String* value, ::java::lang::String* format);
protected:
    EvaluationConditionalFormatRule_ValueAndFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

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
    friend class EvaluationConditionalFormatRule_OperatorEnum_8;
    friend class EvaluationConditionalFormatRule_OperatorEnum_9;
};

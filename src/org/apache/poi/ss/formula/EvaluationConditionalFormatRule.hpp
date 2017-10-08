// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
        } // util
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::EvaluationConditionalFormatRule
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Comparable
{

public:
    typedef ::java::lang::Object super;

private:
    WorkbookEvaluator* workbookEvaluator {  };
    ::poi::ss::usermodel::Sheet* sheet {  };
    ::poi::ss::usermodel::ConditionalFormatting* formatting {  };
    ::poi::ss::usermodel::ConditionalFormattingRule* rule {  };
    ::poi::ss::util::CellRangeAddressArray* regions {  };
    ::java::util::Map* meaningfulRegionValues {  };
    int32_t priority {  };
    int32_t formattingIndex {  };
    int32_t ruleIndex {  };
    ::java::lang::String* formula1 {  };
    ::java::lang::String* formula2 {  };
    EvaluationConditionalFormatRule_OperatorEnum* operator_ {  };
    ::poi::ss::usermodel::ConditionType* type {  };
    ::poi::ss::usermodel::ExcelNumberFormat* numberFormat {  };
protected:
    void ctor(WorkbookEvaluator* workbookEvaluator, ::poi::ss::usermodel::Sheet* sheet, ::poi::ss::usermodel::ConditionalFormatting* formatting, int32_t formattingIndex, ::poi::ss::usermodel::ConditionalFormattingRule* rule, int32_t ruleIndex, ::poi::ss::util::CellRangeAddressArray* regions);

public:
    virtual ::poi::ss::usermodel::Sheet* getSheet();
    virtual ::poi::ss::usermodel::ConditionalFormatting* getFormatting();
    virtual int32_t getFormattingIndex();
    virtual ::poi::ss::usermodel::ExcelNumberFormat* getNumberFormat();
    virtual ::poi::ss::usermodel::ConditionalFormattingRule* getRule();
    virtual int32_t getRuleIndex();
    virtual ::poi::ss::util::CellRangeAddressArray* getRegions();
    virtual int32_t getPriority();
    virtual ::java::lang::String* getFormula1();
    virtual ::java::lang::String* getFormula2();
    virtual EvaluationConditionalFormatRule_OperatorEnum* getOperator();
    virtual ::poi::ss::usermodel::ConditionType* getType();
    bool equals(::java::lang::Object* obj) override;
    virtual int32_t compareTo(EvaluationConditionalFormatRule* o);
    int32_t hashCode() override;

public: /* package */
    virtual bool matches(::poi::ss::util::CellReference* ref);

private:
    bool checkValue(::poi::ss::usermodel::Cell* cell, ::poi::ss::util::CellRangeAddress* region);
    ::poi::ss::formula::eval::ValueEval* unwrapEval(::poi::ss::formula::eval::ValueEval* eval);
    bool checkFormula(::poi::ss::util::CellReference* ref, ::poi::ss::util::CellRangeAddress* region);
    bool checkFilter(::poi::ss::usermodel::Cell* cell, ::poi::ss::util::CellReference* ref, ::poi::ss::util::CellRangeAddress* region);
    ::java::util::Set* getMeaningfulValues(::poi::ss::util::CellRangeAddress* region, bool withText, EvaluationConditionalFormatRule_ValueFunction* func);
    EvaluationConditionalFormatRule_ValueAndFormat* getCellValue(::poi::ss::usermodel::Cell* cell);

    // Generated

public:
    EvaluationConditionalFormatRule(WorkbookEvaluator* workbookEvaluator, ::poi::ss::usermodel::Sheet* sheet, ::poi::ss::usermodel::ConditionalFormatting* formatting, int32_t formattingIndex, ::poi::ss::usermodel::ConditionalFormattingRule* rule, int32_t ruleIndex, ::poi::ss::util::CellRangeAddressArray* regions);
protected:
    EvaluationConditionalFormatRule(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    virtual ::java::lang::Class* getClass0();
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
    friend class EvaluationConditionalFormatRule_ValueAndFormat;
};

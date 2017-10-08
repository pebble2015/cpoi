// Generated from /POI/java/org/apache/poi/hssf/usermodel/DVConstraint.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/DataValidationConstraint.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

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

class poi::hssf::usermodel::DVConstraint
    : public virtual ::java::lang::Object
    , public virtual ::poi::ss::usermodel::DataValidationConstraint
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _validationType {  };
    int32_t _operator {  };
    ::java::lang::StringArray* _explicitListValues {  };
    ::java::lang::String* _formula1 {  };
    ::java::lang::String* _formula2 {  };
    ::java::lang::Double* _value1 {  };
    ::java::lang::Double* _value2 {  };
protected:
    void ctor(int32_t validationType, int32_t comparisonOperator, ::java::lang::String* formulaA, ::java::lang::String* formulaB, ::java::lang::Double* value1, ::java::lang::Double* value2, ::java::lang::StringArray* excplicitListValues);
    void ctor(::java::lang::String* listFormula, ::java::lang::StringArray* excplicitListValues);

public:
    static DVConstraint* createNumericConstraint(int32_t validationType, int32_t comparisonOperator, ::java::lang::String* expr1, ::java::lang::String* expr2);
    static DVConstraint* createFormulaListConstraint(::java::lang::String* listFormula);
    static DVConstraint* createExplicitListConstraint(::java::lang::StringArray* explicitListValues);
    static DVConstraint* createTimeConstraint(int32_t comparisonOperator, ::java::lang::String* expr1, ::java::lang::String* expr2);
    static DVConstraint* createDateConstraint(int32_t comparisonOperator, ::java::lang::String* expr1, ::java::lang::String* expr2, ::java::lang::String* dateFormat);

private:
    static ::java::lang::String* getFormulaFromTextExpression(::java::lang::String* textExpr);
    static ::java::lang::Double* convertNumber(::java::lang::String* numberStr);
    static ::java::lang::Double* convertTime(::java::lang::String* timeStr);
    static ::java::lang::Double* convertDate(::java::lang::String* dateStr, ::java::text::SimpleDateFormat* dateFormat);

public:
    static DVConstraint* createCustomFormulaConstraint(::java::lang::String* formula);
    int32_t getValidationType() override;
    virtual bool isListValidationType();
    virtual bool isExplicitList();
    int32_t getOperator() override;
    void setOperator(int32_t operator_) override;
    ::java::lang::StringArray* getExplicitListValues() override;
    void setExplicitListValues(::java::lang::StringArray* explicitListValues) override;
    ::java::lang::String* getFormula1() override;
    void setFormula1(::java::lang::String* formula1) override;
    ::java::lang::String* getFormula2() override;
    void setFormula2(::java::lang::String* formula2) override;
    virtual ::java::lang::Double* getValue1();
    virtual void setValue1(double value1);
    virtual ::java::lang::Double* getValue2();
    virtual void setValue2(double value2);

public: /* package */
    virtual DVConstraint_FormulaPair* createFormulas(HSSFSheet* sheet);

private:
    ::poi::ss::formula::ptg::PtgArray* createListFormula(HSSFSheet* sheet);
    static ::poi::ss::formula::ptg::PtgArray* convertDoubleFormula(::java::lang::String* formula, ::java::lang::Double* value, HSSFSheet* sheet);

public: /* package */
    static DVConstraint* createDVConstraint(::poi::hssf::record::DVRecord* dvRecord, ::poi::ss::formula::FormulaRenderingWorkbook* book);

private:
    static DVConstraint_FormulaValuePair* toFormulaString(::poi::ss::formula::ptg::PtgArray* ptgs, ::poi::ss::formula::FormulaRenderingWorkbook* book);

    // Generated
    DVConstraint(int32_t validationType, int32_t comparisonOperator, ::java::lang::String* formulaA, ::java::lang::String* formulaB, ::java::lang::Double* value1, ::java::lang::Double* value2, ::java::lang::StringArray* excplicitListValues);
    DVConstraint(::java::lang::String* listFormula, ::java::lang::StringArray* excplicitListValues);
protected:
    DVConstraint(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DVConstraint_FormulaPair;
    friend class DVConstraint_FormulaValuePair;
};

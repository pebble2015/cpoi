// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFFormulaEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/BaseFormulaEvaluator.hpp>

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
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::FormulaEvaluator, ::java::lang::ObjectArray > FormulaEvaluatorArray;
        } // usermodel

        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::WorkbookEvaluatorProvider, ::java::lang::ObjectArray > WorkbookEvaluatorProviderArray;
typedef ::SubArray< ::poi::ss::formula::BaseFormulaEvaluator, ::java::lang::ObjectArray, ::poi::ss::usermodel::FormulaEvaluatorArray, WorkbookEvaluatorProviderArray > BaseFormulaEvaluatorArray;
        } // formula
    } // ss

    namespace hssf
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::hssf::usermodel::HSSFFormulaEvaluator, ::poi::ss::formula::BaseFormulaEvaluatorArray > HSSFFormulaEvaluatorArray;
        } // usermodel
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::usermodel::HSSFFormulaEvaluator
    : public ::poi::ss::formula::BaseFormulaEvaluator
{

public:
    typedef ::poi::ss::formula::BaseFormulaEvaluator super;

private:
    HSSFWorkbook* _book {  };
protected:
    void ctor(HSSFWorkbook* workbook);
    void ctor(HSSFWorkbook* workbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier);
    void ctor(HSSFWorkbook* workbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier, ::poi::ss::formula::udf::UDFFinder* udfFinder);

public:
    static HSSFFormulaEvaluator* create(HSSFWorkbook* workbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier, ::poi::ss::formula::udf::UDFFinder* udfFinder);

public: /* protected */
    ::poi::ss::usermodel::RichTextString* createRichTextString(::java::lang::String* str) override;

public:
    static void setupEnvironment(::java::lang::StringArray* workbookNames, HSSFFormulaEvaluatorArray* evaluators);
    void setupReferencedWorkbooks(::java::util::Map* evaluators) override;
    virtual void notifyUpdateCell(HSSFCell* cell);
    void notifyUpdateCell(::poi::ss::usermodel::Cell* cell) override;
    virtual void notifyDeleteCell(HSSFCell* cell);
    void notifyDeleteCell(::poi::ss::usermodel::Cell* cell) override;
    void notifySetFormula(::poi::ss::usermodel::Cell* cell) override;
    ::poi::ss::usermodel::Cell* evaluateInCell(::poi::ss::usermodel::Cell* cell) override;
    static void evaluateAllFormulaCells(HSSFWorkbook* wb);
    static void evaluateAllFormulaCells(::poi::ss::usermodel::Workbook* wb);
    void evaluateAll() override;

public: /* protected */
    ::poi::ss::usermodel::CellValue* evaluateFormulaCellValue(::poi::ss::usermodel::Cell* cell) override;

public:
    void setIgnoreMissingWorkbooks(bool ignore) override;
    void setDebugEvaluationOutputForNextEval(bool value) override;

    // Generated
    HSSFFormulaEvaluator(HSSFWorkbook* workbook);
    HSSFFormulaEvaluator(HSSFWorkbook* workbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier);

private:
    HSSFFormulaEvaluator(HSSFWorkbook* workbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier, ::poi::ss::formula::udf::UDFFinder* udfFinder);
protected:
    HSSFFormulaEvaluator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* protected */
    static void evaluateAllFormulaCells(::poi::ss::usermodel::Workbook* wb, ::poi::ss::usermodel::FormulaEvaluator* evaluator);

public:
    static void setupEnvironment(::java::lang::StringArray* workbookNames, ::poi::ss::formula::BaseFormulaEvaluatorArray* evaluators);

private:
    virtual ::java::lang::Class* getClass0();
};

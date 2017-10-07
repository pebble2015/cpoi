// Generated from /POI/java/org/apache/poi/ss/formula/BaseFormulaEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/FormulaEvaluator.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluatorProvider.hpp>

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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::FormulaEvaluator, ::java::lang::ObjectArray > FormulaEvaluatorArray;
                } // usermodel

                namespace formula
                {
typedef ::SubArray< ::org::apache::poi::ss::formula::WorkbookEvaluatorProvider, ::java::lang::ObjectArray > WorkbookEvaluatorProviderArray;
typedef ::SubArray< ::org::apache::poi::ss::formula::BaseFormulaEvaluator, ::java::lang::ObjectArray, ::org::apache::poi::ss::usermodel::FormulaEvaluatorArray, WorkbookEvaluatorProviderArray > BaseFormulaEvaluatorArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::BaseFormulaEvaluator
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::ss::usermodel::FormulaEvaluator
    , public virtual WorkbookEvaluatorProvider
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    WorkbookEvaluator* _bookEvaluator {  };
protected:
    void ctor(WorkbookEvaluator* bookEvaluator);

public:
    static void setupEnvironment(::java::lang::StringArray* workbookNames, BaseFormulaEvaluatorArray* evaluators);
    void setupReferencedWorkbooks(::java::util::Map* evaluators) override;
    WorkbookEvaluator* _getWorkbookEvaluator() override;
    void clearAllCachedResultValues() override;
    ::org::apache::poi::ss::usermodel::CellValue* evaluate(::org::apache::poi::ss::usermodel::Cell* cell) override;
    ::org::apache::poi::ss::usermodel::Cell* evaluateInCell(::org::apache::poi::ss::usermodel::Cell* cell) override;

public: /* protected */
    virtual ::org::apache::poi::ss::usermodel::CellValue* evaluateFormulaCellValue(::org::apache::poi::ss::usermodel::Cell* cell) = 0;

public:
    int32_t evaluateFormulaCell(::org::apache::poi::ss::usermodel::Cell* cell) override;
    ::org::apache::poi::ss::usermodel::CellType* evaluateFormulaCellEnum(::org::apache::poi::ss::usermodel::Cell* cell) override;

public: /* protected */
    static void setCellType(::org::apache::poi::ss::usermodel::Cell* cell, ::org::apache::poi::ss::usermodel::CellValue* cv);
    virtual ::org::apache::poi::ss::usermodel::RichTextString* createRichTextString(::java::lang::String* str) = 0;
    virtual void setCellValue(::org::apache::poi::ss::usermodel::Cell* cell, ::org::apache::poi::ss::usermodel::CellValue* cv);

public:
    static void evaluateAllFormulaCells(::org::apache::poi::ss::usermodel::Workbook* wb);

public: /* protected */
    static void evaluateAllFormulaCells(::org::apache::poi::ss::usermodel::Workbook* wb, ::org::apache::poi::ss::usermodel::FormulaEvaluator* evaluator);

public:
    void setIgnoreMissingWorkbooks(bool ignore) override;
    void setDebugEvaluationOutputForNextEval(bool value) override;

    // Generated

public: /* protected */
    BaseFormulaEvaluator(WorkbookEvaluator* bookEvaluator);
protected:
    BaseFormulaEvaluator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

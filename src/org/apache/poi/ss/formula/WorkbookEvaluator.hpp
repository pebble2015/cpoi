// Generated from /POI/java/org/apache/poi/ss/formula/WorkbookEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::WorkbookEvaluator final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* LOG_;
    EvaluationWorkbook* _workbook {  };
    EvaluationCache* _cache {  };
    int32_t _workbookIx {  };
    IEvaluationListener* _evaluationListener {  };
    ::java::util::Map* _sheetIndexesBySheet {  };
    ::java::util::Map* _sheetIndexesByName {  };
    CollaboratingWorkbooksEnvironment* _collaboratingWorkbookEnvironment {  };
    IStabilityClassifier* _stabilityClassifier {  };
    ::org::apache::poi::ss::formula::udf::AggregatingUDFFinder* _udfFinder {  };
    bool _ignoreMissingWorkbooks {  };
    bool dbgEvaluationOutputForNextEval {  };
    ::org::apache::poi::util::POILogger* EVAL_LOG {  };
    int32_t dbgEvaluationOutputIndent {  };
protected:
    void ctor(EvaluationWorkbook* workbook, IStabilityClassifier* stabilityClassifier, ::org::apache::poi::ss::formula::udf::UDFFinder* udfFinder);
    void ctor(EvaluationWorkbook* workbook, IEvaluationListener* evaluationListener, IStabilityClassifier* stabilityClassifier, ::org::apache::poi::ss::formula::udf::UDFFinder* udfFinder);

public: /* package */
    ::java::lang::String* getSheetName(int32_t sheetIndex);
    EvaluationSheet* getSheet(int32_t sheetIndex);
    EvaluationWorkbook* getWorkbook();
    EvaluationName* getName(::java::lang::String* name, int32_t sheetIndex);

private:
    static bool isDebugLogEnabled();
    static bool isInfoLogEnabled();
    static void logDebug(::java::lang::String* s);
    static void logInfo(::java::lang::String* s);

public: /* package */
    void attachToEnvironment(CollaboratingWorkbooksEnvironment* collaboratingWorkbooksEnvironment, EvaluationCache* cache, int32_t workbookIx);
    CollaboratingWorkbooksEnvironment* getEnvironment();
    void detachFromEnvironment();
    WorkbookEvaluator* getOtherWorkbookEvaluator(::java::lang::String* workbookName) /* throws(WorkbookNotFoundException) */;
    IEvaluationListener* getEvaluationListener();

public:
    void clearAllCachedResultValues();
    void notifyUpdateCell(EvaluationCell* cell);
    void notifyDeleteCell(EvaluationCell* cell);

private:
    int32_t getSheetIndex(EvaluationSheet* sheet);

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(EvaluationCell* srcCell);

public: /* package */
    int32_t getSheetIndex(::java::lang::String* sheetName);
    int32_t getSheetIndexByExternIndex(int32_t externSheetIndex);

private:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluateAny(EvaluationCell* srcCell, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex, EvaluationTracker* tracker);
    ::org::apache::poi::ss::formula::eval::NotImplementedException* addExceptionInfo(::org::apache::poi::ss::formula::eval::NotImplementedException* inner, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex);

public: /* package */
    static ::org::apache::poi::ss::formula::eval::ValueEval* getValueFromNonFormulaCell(EvaluationCell* cell);
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluateFormula(OperationEvaluationContext* ec, ::org::apache::poi::ss::formula::ptg::PtgArray* ptgs);

private:
    static int32_t countTokensToBeSkipped(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs, int32_t startIndex, int32_t distInBytes);

public:
    static ::org::apache::poi::ss::formula::eval::ValueEval* dereferenceResult(::org::apache::poi::ss::formula::eval::ValueEval* evaluationResult, int32_t srcRowNum, int32_t srcColNum);

private:
    ::org::apache::poi::ss::formula::eval::ValueEval* getEvalForPtg(::org::apache::poi::ss::formula::ptg::Ptg* ptg, OperationEvaluationContext* ec);
    ::org::apache::poi::ss::formula::eval::ValueEval* processNameEval(::org::apache::poi::ss::formula::eval::ValueEval* eval, OperationEvaluationContext* ec);
    ::org::apache::poi::ss::formula::eval::ValueEval* getEvalForNameRecord(EvaluationName* nameRecord, OperationEvaluationContext* ec);

public: /* package */
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluateNameFormula(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs, OperationEvaluationContext* ec);
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluateReference(EvaluationSheet* sheet, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex, EvaluationTracker* tracker);

public:
    ::org::apache::poi::ss::formula::functions::FreeRefFunction* findUserDefinedFunction(::java::lang::String* functionName);
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::java::lang::String* formula, ::org::apache::poi::ss::util::CellReference* ref);
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::java::lang::String* formula, ::org::apache::poi::ss::util::CellReference* target, ::org::apache::poi::ss::util::CellRangeAddressBase* region);
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluateList(::java::lang::String* formula, ::org::apache::poi::ss::util::CellReference* target, ::org::apache::poi::ss::util::CellRangeAddressBase* region);

private:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::java::lang::String* formula, ::org::apache::poi::ss::util::CellReference* target, ::org::apache::poi::ss::util::CellRangeAddressBase* region, FormulaType* formulaType);

public: /* protected */
    bool adjustRegionRelativeReference(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs, ::org::apache::poi::ss::util::CellReference* target, ::org::apache::poi::ss::util::CellRangeAddressBase* region);
    bool adjustRegionRelativeReference(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs, int32_t deltaRow, int32_t deltaColumn);

public:
    void setIgnoreMissingWorkbooks(bool ignore);
    bool isIgnoreMissingWorkbooks();
    static ::java::util::Collection* getSupportedFunctionNames();
    static ::java::util::Collection* getNotSupportedFunctionNames();
    static void registerFunction(::java::lang::String* name, ::org::apache::poi::ss::formula::functions::FreeRefFunction* func);
    static void registerFunction(::java::lang::String* name, ::org::apache::poi::ss::formula::functions::Function* func);
    void setDebugEvaluationOutputForNextEval(bool value);
    bool isDebugEvaluationOutputForNextEval();

    // Generated
    WorkbookEvaluator(EvaluationWorkbook* workbook, IStabilityClassifier* stabilityClassifier, ::org::apache::poi::ss::formula::udf::UDFFinder* udfFinder);

public: /* package */
    WorkbookEvaluator(EvaluationWorkbook* workbook, IEvaluationListener* evaluationListener, IStabilityClassifier* stabilityClassifier, ::org::apache::poi::ss::formula::udf::UDFFinder* udfFinder);
protected:
    WorkbookEvaluator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::org::apache::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};

// Generated from /POI/java/org/apache/poi/ss/formula/WorkbookEvaluator.java
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/IdentityHashMap.hpp>
#include <java/util/Map.hpp>
#include <java/util/Stack.hpp>
#include <java/util/TreeSet.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment_WorkbookNotFoundException.hpp>
#include <org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment.hpp>
#include <org/apache/poi/ss/formula/EvaluationCache.hpp>
#include <org/apache/poi/ss/formula/EvaluationCell.hpp>
#include <org/apache/poi/ss/formula/EvaluationName.hpp>
#include <org/apache/poi/ss/formula/EvaluationSheet.hpp>
#include <org/apache/poi/ss/formula/EvaluationTracker.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook.hpp>
#include <org/apache/poi/ss/formula/FormulaCellCacheEntry.hpp>
#include <org/apache/poi/ss/formula/FormulaParser.hpp>
#include <org/apache/poi/ss/formula/FormulaParsingWorkbook.hpp>
#include <org/apache/poi/ss/formula/FormulaType.hpp>
#include <org/apache/poi/ss/formula/IEvaluationListener.hpp>
#include <org/apache/poi/ss/formula/IStabilityClassifier.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluatorFactory.hpp>
#include <org/apache/poi/ss/formula/SheetRangeEvaluator.hpp>
#include <org/apache/poi/ss/formula/atp/AnalysisToolPak.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/ExternalNameEval.hpp>
#include <org/apache/poi/ss/formula/eval/FunctionEval.hpp>
#include <org/apache/poi/ss/formula/eval/FunctionNameEval.hpp>
#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>
#include <org/apache/poi/ss/formula/eval/NotImplementedException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/RefListEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadataRegistry.hpp>
#include <org/apache/poi/ss/formula/functions/Choose.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>
#include <org/apache/poi/ss/formula/functions/IfFunc.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPxg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaErrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AttrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/BoolPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ControlPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/DeletedArea3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/DeletedRef3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ErrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ExpPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/FuncVarPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/IntPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemAreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemErrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemFuncPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MissingArgPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NamePtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NameXPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NameXPxg.hpp>
#include <org/apache/poi/ss/formula/ptg/NumberPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/OperationPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref3DPxg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefErrorPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefPtgBase.hpp>
#include <org/apache/poi/ss/formula/ptg/StringPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnionPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnknownPtg.hpp>
#include <org/apache/poi/ss/formula/udf/AggregatingUDFFinder.hpp>
#include <org/apache/poi/ss/formula/udf/UDFFinder.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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
                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval

                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
org::apache::poi::ss::formula::WorkbookEvaluator::WorkbookEvaluator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::WorkbookEvaluator::WorkbookEvaluator(EvaluationWorkbook* workbook, IStabilityClassifier* stabilityClassifier, ::org::apache::poi::ss::formula::udf::UDFFinder* udfFinder) 
    : WorkbookEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbook,stabilityClassifier,udfFinder);
}

org::apache::poi::ss::formula::WorkbookEvaluator::WorkbookEvaluator(EvaluationWorkbook* workbook, IEvaluationListener* evaluationListener, IStabilityClassifier* stabilityClassifier, ::org::apache::poi::ss::formula::udf::UDFFinder* udfFinder) 
    : WorkbookEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbook,evaluationListener,stabilityClassifier,udfFinder);
}

void org::apache::poi::ss::formula::WorkbookEvaluator::init()
{
    EVAL_LOG = ::org::apache::poi::util::POILogFactory::getLogger(u"POI.FormulaEval"_j);
    dbgEvaluationOutputIndent = -int32_t(1);
}

org::apache::poi::util::POILogger*& org::apache::poi::ss::formula::WorkbookEvaluator::LOG()
{
    clinit();
    return LOG_;
}
org::apache::poi::util::POILogger* org::apache::poi::ss::formula::WorkbookEvaluator::LOG_;

void org::apache::poi::ss::formula::WorkbookEvaluator::ctor(EvaluationWorkbook* workbook, IStabilityClassifier* stabilityClassifier, ::org::apache::poi::ss::formula::udf::UDFFinder* udfFinder)
{
    ctor(workbook, nullptr, stabilityClassifier, udfFinder);
}

void org::apache::poi::ss::formula::WorkbookEvaluator::ctor(EvaluationWorkbook* workbook, IEvaluationListener* evaluationListener, IStabilityClassifier* stabilityClassifier, ::org::apache::poi::ss::formula::udf::UDFFinder* udfFinder)
{
    super::ctor();
    init();
    _workbook = workbook;
    _evaluationListener = evaluationListener;
    _cache = new EvaluationCache(evaluationListener);
    _sheetIndexesBySheet = new ::java::util::IdentityHashMap();
    _sheetIndexesByName = new ::java::util::IdentityHashMap();
    _collaboratingWorkbookEnvironment = CollaboratingWorkbooksEnvironment::EMPTY();
    _workbookIx = 0;
    _stabilityClassifier = stabilityClassifier;
    auto defaultToolkit = workbook == nullptr ? static_cast< ::org::apache::poi::ss::formula::udf::AggregatingUDFFinder* >(nullptr) : java_cast< ::org::apache::poi::ss::formula::udf::AggregatingUDFFinder* >(npc(workbook)->getUDFFinder());
    if(defaultToolkit != nullptr && udfFinder != nullptr) {
        npc(defaultToolkit)->add(udfFinder);
    }
    _udfFinder = defaultToolkit;
}

java::lang::String* org::apache::poi::ss::formula::WorkbookEvaluator::getSheetName(int32_t sheetIndex)
{
    return npc(_workbook)->getSheetName(sheetIndex);
}

org::apache::poi::ss::formula::EvaluationSheet* org::apache::poi::ss::formula::WorkbookEvaluator::getSheet(int32_t sheetIndex)
{
    return npc(_workbook)->getSheet(sheetIndex);
}

org::apache::poi::ss::formula::EvaluationWorkbook* org::apache::poi::ss::formula::WorkbookEvaluator::getWorkbook()
{
    return _workbook;
}

org::apache::poi::ss::formula::EvaluationName* org::apache::poi::ss::formula::WorkbookEvaluator::getName(::java::lang::String* name, int32_t sheetIndex)
{
    auto evalName = npc(_workbook)->getName(name, sheetIndex);
    return evalName;
}

bool org::apache::poi::ss::formula::WorkbookEvaluator::isDebugLogEnabled()
{
    clinit();
    return npc(LOG_)->check(::org::apache::poi::util::POILogger::DEBUG);
}

bool org::apache::poi::ss::formula::WorkbookEvaluator::isInfoLogEnabled()
{
    clinit();
    return npc(LOG_)->check(::org::apache::poi::util::POILogger::INFO);
}

void org::apache::poi::ss::formula::WorkbookEvaluator::logDebug(::java::lang::String* s)
{
    clinit();
    if(isDebugLogEnabled()) {
        npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(s)}));
    }
}

void org::apache::poi::ss::formula::WorkbookEvaluator::logInfo(::java::lang::String* s)
{
    clinit();
    if(isInfoLogEnabled()) {
        npc(LOG_)->log(::org::apache::poi::util::POILogger::INFO, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(s)}));
    }
}

void org::apache::poi::ss::formula::WorkbookEvaluator::attachToEnvironment(CollaboratingWorkbooksEnvironment* collaboratingWorkbooksEnvironment, EvaluationCache* cache, int32_t workbookIx)
{
    _collaboratingWorkbookEnvironment = collaboratingWorkbooksEnvironment;
    _cache = cache;
    _workbookIx = workbookIx;
}

org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment* org::apache::poi::ss::formula::WorkbookEvaluator::getEnvironment()
{
    return _collaboratingWorkbookEnvironment;
}

void org::apache::poi::ss::formula::WorkbookEvaluator::detachFromEnvironment()
{
    _collaboratingWorkbookEnvironment = CollaboratingWorkbooksEnvironment::EMPTY();
    _cache = new EvaluationCache(_evaluationListener);
    _workbookIx = 0;
}

org::apache::poi::ss::formula::WorkbookEvaluator* org::apache::poi::ss::formula::WorkbookEvaluator::getOtherWorkbookEvaluator(::java::lang::String* workbookName) /* throws(WorkbookNotFoundException) */
{
    return npc(_collaboratingWorkbookEnvironment)->getWorkbookEvaluator(workbookName);
}

org::apache::poi::ss::formula::IEvaluationListener* org::apache::poi::ss::formula::WorkbookEvaluator::getEvaluationListener()
{
    return _evaluationListener;
}

void org::apache::poi::ss::formula::WorkbookEvaluator::clearAllCachedResultValues()
{
    npc(_cache)->clear();
    npc(_sheetIndexesBySheet)->clear();
    npc(_workbook)->clearAllCachedResultValues();
}

void org::apache::poi::ss::formula::WorkbookEvaluator::notifyUpdateCell(EvaluationCell* cell)
{
    auto sheetIndex = getSheetIndex(npc(cell)->getSheet());
    npc(_cache)->notifyUpdateCell(_workbookIx, sheetIndex, cell);
}

void org::apache::poi::ss::formula::WorkbookEvaluator::notifyDeleteCell(EvaluationCell* cell)
{
    auto sheetIndex = getSheetIndex(npc(cell)->getSheet());
    npc(_cache)->notifyDeleteCell(_workbookIx, sheetIndex, cell);
}

int32_t org::apache::poi::ss::formula::WorkbookEvaluator::getSheetIndex(EvaluationSheet* sheet)
{
    auto result = java_cast< ::java::lang::Integer* >(npc(_sheetIndexesBySheet)->get(sheet));
    if(result == nullptr) {
        auto sheetIndex = npc(_workbook)->getSheetIndex(sheet);
        if(sheetIndex < 0) {
            throw new ::java::lang::RuntimeException(u"Specified sheet from a different book"_j);
        }
        result = ::java::lang::Integer::valueOf(sheetIndex);
        npc(_sheetIndexesBySheet)->put(sheet, result);
    }
    return npc(result)->intValue();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::evaluate(EvaluationCell* srcCell)
{
    auto sheetIndex = getSheetIndex(npc(srcCell)->getSheet());
    return evaluateAny(srcCell, sheetIndex, npc(srcCell)->getRowIndex(), npc(srcCell)->getColumnIndex(), new EvaluationTracker(_cache));
}

int32_t org::apache::poi::ss::formula::WorkbookEvaluator::getSheetIndex(::java::lang::String* sheetName)
{
    auto result = java_cast< ::java::lang::Integer* >(npc(_sheetIndexesByName)->get(sheetName));
    if(result == nullptr) {
        auto sheetIndex = npc(_workbook)->getSheetIndex(sheetName);
        if(sheetIndex < 0) {
            return -int32_t(1);
        }
        result = ::java::lang::Integer::valueOf(sheetIndex);
        npc(_sheetIndexesByName)->put(sheetName, result);
    }
    return npc(result)->intValue();
}

int32_t org::apache::poi::ss::formula::WorkbookEvaluator::getSheetIndexByExternIndex(int32_t externSheetIndex)
{
    return npc(_workbook)->convertFromExternSheetIndex(externSheetIndex);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::evaluateAny(EvaluationCell* srcCell, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex, EvaluationTracker* tracker)
{
    auto shouldCellDependencyBeRecorded = _stabilityClassifier == nullptr ? true : !npc(_stabilityClassifier)->isCellFinal(sheetIndex, rowIndex, columnIndex);
    if(srcCell == nullptr || npc(srcCell)->getCellTypeEnum() != ::org::apache::poi::ss::usermodel::CellType::FORMULA) {
        auto result = getValueFromNonFormulaCell(srcCell);
        if(shouldCellDependencyBeRecorded) {
            npc(tracker)->acceptPlainValueDependency(_workbookIx, sheetIndex, rowIndex, columnIndex, result);
        }
        return result;
    }
    auto cce = npc(_cache)->getOrCreateFormulaCellEntry(srcCell);
    if(shouldCellDependencyBeRecorded || npc(cce)->isInputSensitive()) {
        npc(tracker)->acceptFormulaDependency(cce);
    }
    auto evalListener = _evaluationListener;
    ::org::apache::poi::ss::formula::eval::ValueEval* result;
    if(npc(cce)->getValue() == nullptr) {
        if(!npc(tracker)->startEvaluate(cce)) {
            return ::org::apache::poi::ss::formula::eval::ErrorEval::CIRCULAR_REF_ERROR();
        }
        auto ec = new OperationEvaluationContext(this, _workbook, sheetIndex, rowIndex, columnIndex, tracker);
        {
            auto finally0 = finally([&] {
                npc(tracker)->endEvaluate(cce);
            });
            try {
                auto ptgs = npc(_workbook)->getFormulaTokens(srcCell);
                if(evalListener == nullptr) {
                    result = evaluateFormula(ec, ptgs);
                } else {
                    npc(evalListener)->onStartEvaluate(srcCell, cce);
                    result = evaluateFormula(ec, ptgs);
                    npc(evalListener)->onEndEvaluate(cce, result);
                }
                npc(tracker)->updateCacheResult(result);
            } catch (::org::apache::poi::ss::formula::eval::NotImplementedException* e) {
                throw addExceptionInfo(e, sheetIndex, rowIndex, columnIndex);
            } catch (::java::lang::RuntimeException* re) {
                if(dynamic_cast< CollaboratingWorkbooksEnvironment_WorkbookNotFoundException* >(npc(re)->getCause()) != nullptr && _ignoreMissingWorkbooks) {
                    logInfo(::java::lang::StringBuilder().append(npc(npc(re)->getCause())->getMessage())->append(u" - Continuing with cached value!"_j)->toString());
                    {
                        auto v = npc(srcCell)->getCachedFormulaResultTypeEnum();
                        if((v == ::org::apache::poi::ss::usermodel::CellType::NUMERIC)) {
                            result = new ::org::apache::poi::ss::formula::eval::NumberEval(npc(srcCell)->getNumericCellValue());
                            goto end_switch0;;
                        }
                        if((v == ::org::apache::poi::ss::usermodel::CellType::STRING)) {
                            result = new ::org::apache::poi::ss::formula::eval::StringEval(npc(srcCell)->getStringCellValue());
                            goto end_switch0;;
                        }
                        if((v == ::org::apache::poi::ss::usermodel::CellType::BLANK)) {
                            result = ::org::apache::poi::ss::formula::eval::BlankEval::instance();
                            goto end_switch0;;
                        }
                        if((v == ::org::apache::poi::ss::usermodel::CellType::BOOLEAN)) {
                            result = ::org::apache::poi::ss::formula::eval::BoolEval::valueOf(npc(srcCell)->getBooleanCellValue());
                            goto end_switch0;;
                        }
                        if((v == ::org::apache::poi::ss::usermodel::CellType::ERROR)) {
                            result = ::org::apache::poi::ss::formula::eval::ErrorEval::valueOf(npc(srcCell)->getErrorCellValue());
                            goto end_switch0;;
                        }
                        if(((v == ::org::apache::poi::ss::usermodel::CellType::FORMULA) || ((v != ::org::apache::poi::ss::usermodel::CellType::NUMERIC) && (v != ::org::apache::poi::ss::usermodel::CellType::STRING) && (v != ::org::apache::poi::ss::usermodel::CellType::BLANK) && (v != ::org::apache::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::org::apache::poi::ss::usermodel::CellType::ERROR) && (v != ::org::apache::poi::ss::usermodel::CellType::FORMULA)))) {
                            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected cell type '"_j)->append(static_cast< ::java::lang::Object* >(npc(srcCell)->getCellTypeEnum()))
                                ->append(u"' found!"_j)->toString());
                        }
end_switch0:;
                    }

                } else {
                    throw re;
                }
            }
        }
    } else {
        if(evalListener != nullptr) {
            npc(evalListener)->onCacheHit(sheetIndex, rowIndex, columnIndex, npc(cce)->getValue());
        }
        return npc(cce)->getValue();
    }
    if(isDebugLogEnabled()) {
        auto sheetName = getSheetName(sheetIndex);
        auto cr = new ::org::apache::poi::ss::util::CellReference(rowIndex, columnIndex);
        logDebug(::java::lang::StringBuilder().append(u"Evaluated "_j)->append(sheetName)
            ->append(u"!"_j)
            ->append(npc(cr)->formatAsString())
            ->append(u" to "_j)
            ->append(static_cast< ::java::lang::Object* >(result))->toString());
    }
    return result;
}

org::apache::poi::ss::formula::eval::NotImplementedException* org::apache::poi::ss::formula::WorkbookEvaluator::addExceptionInfo(::org::apache::poi::ss::formula::eval::NotImplementedException* inner, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex)
{
    try {
        auto sheetName = npc(_workbook)->getSheetName(sheetIndex);
        auto cr = new ::org::apache::poi::ss::util::CellReference(sheetName, rowIndex, columnIndex, false, false);
        auto msg = ::java::lang::StringBuilder().append(u"Error evaluating cell "_j)->append(npc(cr)->formatAsString())->toString();
        return new ::org::apache::poi::ss::formula::eval::NotImplementedException(msg, inner);
    } catch (::java::lang::Exception* e) {
        npc(LOG_)->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Can't add exception info"_j), static_cast< ::java::lang::Object* >(e)}));
        return inner;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::getValueFromNonFormulaCell(EvaluationCell* cell)
{
    clinit();
    if(cell == nullptr) {
        return ::org::apache::poi::ss::formula::eval::BlankEval::instance();
    }
    auto cellType = npc(cell)->getCellTypeEnum();
    {
        auto v = cellType;
        if((v == ::org::apache::poi::ss::usermodel::CellType::NUMERIC)) {
            return new ::org::apache::poi::ss::formula::eval::NumberEval(npc(cell)->getNumericCellValue());
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::STRING)) {
            return new ::org::apache::poi::ss::formula::eval::StringEval(npc(cell)->getStringCellValue());
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::BOOLEAN)) {
            return ::org::apache::poi::ss::formula::eval::BoolEval::valueOf(npc(cell)->getBooleanCellValue());
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::BLANK)) {
            return ::org::apache::poi::ss::formula::eval::BlankEval::instance();
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::ERROR)) {
            return ::org::apache::poi::ss::formula::eval::ErrorEval::valueOf(npc(cell)->getErrorCellValue());
        }
        if((((v != ::org::apache::poi::ss::usermodel::CellType::NUMERIC) && (v != ::org::apache::poi::ss::usermodel::CellType::STRING) && (v != ::org::apache::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::org::apache::poi::ss::usermodel::CellType::BLANK) && (v != ::org::apache::poi::ss::usermodel::CellType::ERROR)))) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected cell type ("_j)->append(static_cast< ::java::lang::Object* >(cellType))
                ->append(u")"_j)->toString());
        }
end_switch1:;
    }

}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::evaluateFormula(OperationEvaluationContext* ec, ::org::apache::poi::ss::formula::ptg::PtgArray* ptgs)
{
    auto dbgIndentStr = u""_j;
    if(dbgEvaluationOutputForNextEval) {
        dbgEvaluationOutputIndent = 1;
        dbgEvaluationOutputForNextEval = false;
    }
    if(dbgEvaluationOutputIndent > 0) {
        dbgIndentStr = u"                                                                                                    "_j;
        dbgIndentStr = npc(dbgIndentStr)->substring(0, ::java::lang::Math::min(npc(dbgIndentStr)->length(), dbgEvaluationOutputIndent * int32_t(2)));
        npc(EVAL_LOG)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(dbgIndentStr)->append(u"- evaluateFormula('"_j)
            ->append(npc(npc(ec)->getRefEvaluatorForCurrentSheet())->getSheetNameRange())
            ->append(u"'/"_j)
            ->append((new ::org::apache::poi::ss::util::CellReference(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex()))->formatAsString())
            ->append(u"): "_j)
            ->append(npc(::java::util::Arrays::toString(static_cast< ::java::lang::ObjectArray* >(ptgs)))->replaceAll(u"\\Qorg.apache.poi.ss.formula.ptg.\\E"_j, u""_j))->toString())}));
        dbgEvaluationOutputIndent++;
    }
    auto stack = new ::java::util::Stack();
    for (int32_t i = int32_t(0), iSize = npc(ptgs)->length; i < iSize; i++) {
        auto ptg = (*ptgs)[i];
        if(dbgEvaluationOutputIndent > 0) {
            npc(EVAL_LOG)->log(::org::apache::poi::util::POILogger::INFO, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(dbgIndentStr)->append(u"  * ptg "_j)
                ->append(i)
                ->append(u": "_j)
                ->append(static_cast< ::java::lang::Object* >(ptg))
                ->append(u", stack: "_j)
                ->append(static_cast< ::java::lang::Object* >(stack))->toString())}));
        }
        if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::AttrPtg* >(ptg) != nullptr) {
            auto attrPtg = java_cast< ::org::apache::poi::ss::formula::ptg::AttrPtg* >(ptg);
            if(npc(attrPtg)->isSum()) {
                ptg = ::org::apache::poi::ss::formula::ptg::FuncVarPtg::SUM();
            }
            if(npc(attrPtg)->isOptimizedChoose()) {
                auto arg0 = java_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(npc(stack)->pop());
                auto jumpTable = npc(attrPtg)->getJumpTable();
                int32_t dist;
                auto nChoices = npc(jumpTable)->length;
                try {
                    auto switchIndex = ::org::apache::poi::ss::formula::functions::Choose::evaluateFirstArg(arg0, npc(ec)->getRowIndex(), npc(ec)->getColumnIndex());
                    if(switchIndex < 1 || switchIndex > nChoices) {
                        npc(stack)->push(::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
                        dist = npc(attrPtg)->getChooseFuncOffset() + int32_t(4);
                    } else {
                        dist = (*jumpTable)[switchIndex - int32_t(1)];
                    }
                } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
                    npc(stack)->push(npc(e)->getErrorEval());
                    dist = npc(attrPtg)->getChooseFuncOffset() + int32_t(4);
                }
                dist -= nChoices * int32_t(2) + int32_t(2);
                i += countTokensToBeSkipped(ptgs, i, dist);
                continue;
            }
            if(npc(attrPtg)->isOptimizedIf()) {
                auto arg0 = java_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(npc(stack)->pop());
                bool evaluatedPredicate;
                try {
                    evaluatedPredicate = ::org::apache::poi::ss::formula::functions::IfFunc::evaluateFirstArg(arg0, npc(ec)->getRowIndex(), npc(ec)->getColumnIndex());
                } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
                    npc(stack)->push(npc(e)->getErrorEval());
                    int32_t dist = npc(attrPtg)->getData();
                    i += countTokensToBeSkipped(ptgs, i, dist);
                    attrPtg = java_cast< ::org::apache::poi::ss::formula::ptg::AttrPtg* >((*ptgs)[i]);
                    dist = npc(attrPtg)->getData() + int32_t(1);
                    i += countTokensToBeSkipped(ptgs, i, dist);
                    continue;
                }
                if(evaluatedPredicate) {
                } else {
                    int32_t dist = npc(attrPtg)->getData();
                    i += countTokensToBeSkipped(ptgs, i, dist);
                    auto nextPtg = (*ptgs)[i + int32_t(1)];
                    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::AttrPtg* >((*ptgs)[i]) != nullptr && dynamic_cast< ::org::apache::poi::ss::formula::ptg::FuncVarPtg* >(nextPtg) != nullptr && npc((java_cast< ::org::apache::poi::ss::formula::ptg::FuncVarPtg* >(nextPtg)))->getFunctionIndex() == ::org::apache::poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_INDEX_IF) {
                        i++;
                        npc(stack)->push(::org::apache::poi::ss::formula::eval::BoolEval::FALSE());
                    }
                }
                continue;
            }
            if(npc(attrPtg)->isSkip()) {
                auto dist = npc(attrPtg)->getData() + int32_t(1);
                i += countTokensToBeSkipped(ptgs, i, dist);
                if(java_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(npc(stack)->peek()) == static_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(::org::apache::poi::ss::formula::eval::MissingArgEval::instance())) {
                    npc(stack)->pop();
                    npc(stack)->push(::org::apache::poi::ss::formula::eval::BlankEval::instance());
                }
                continue;
            }
        }
        if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::ControlPtg* >(ptg) != nullptr) {
            continue;
        }
        if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::MemFuncPtg* >(ptg) != nullptr || dynamic_cast< ::org::apache::poi::ss::formula::ptg::MemAreaPtg* >(ptg) != nullptr) {
            continue;
        }
        if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::MemErrPtg* >(ptg) != nullptr) {
            continue;
        }
        if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::UnionPtg* >(ptg) != nullptr) {
            auto v2 = java_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(npc(stack)->pop());
            auto v1 = java_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(npc(stack)->pop());
            npc(stack)->push(new ::org::apache::poi::ss::formula::eval::RefListEval(v1, v2));
            continue;
        }
        ::org::apache::poi::ss::formula::eval::ValueEval* opResult;
        if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::OperationPtg* >(ptg) != nullptr) {
            auto optg = java_cast< ::org::apache::poi::ss::formula::ptg::OperationPtg* >(ptg);
            auto numops = npc(optg)->getNumberOfOperands();
            auto ops = new ::org::apache::poi::ss::formula::eval::ValueEvalArray(numops);
            for (auto j = numops - int32_t(1); j >= 0; j--) {
                auto p = java_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(npc(stack)->pop());
                ops->set(j, p);
            }
            opResult = OperationEvaluatorFactory::evaluate(optg, ops, ec);
        } else {
            opResult = getEvalForPtg(ptg, ec);
        }
        if(opResult == nullptr) {
            throw new ::java::lang::RuntimeException(u"Evaluation result must not be null"_j);
        }
        npc(stack)->push(opResult);
        if(dbgEvaluationOutputIndent > 0) {
            npc(EVAL_LOG)->log(::org::apache::poi::util::POILogger::INFO, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(dbgIndentStr)->append(u"    = "_j)
                ->append(static_cast< ::java::lang::Object* >(opResult))->toString())}));
        }
    }
    auto value = java_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(npc(stack)->pop());
    if(!npc(stack)->isEmpty()) {
        throw new ::java::lang::IllegalStateException(u"evaluation stack not empty"_j);
    }
    ::org::apache::poi::ss::formula::eval::ValueEval* result;
    if(npc(ec)->isSingleValue()) {
        result = dereferenceResult(value, npc(ec)->getRowIndex(), npc(ec)->getColumnIndex());
    } else {
        result = value;
    }
    if(dbgEvaluationOutputIndent > 0) {
        npc(EVAL_LOG)->log(::org::apache::poi::util::POILogger::INFO, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(dbgIndentStr)->append(u"finshed eval of "_j)
            ->append((new ::org::apache::poi::ss::util::CellReference(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex()))->formatAsString())
            ->append(u": "_j)
            ->append(static_cast< ::java::lang::Object* >(result))->toString())}));
        dbgEvaluationOutputIndent--;
        if(dbgEvaluationOutputIndent == 1) {
            dbgEvaluationOutputIndent = -int32_t(1);
        }
    }
    return result;
}

int32_t org::apache::poi::ss::formula::WorkbookEvaluator::countTokensToBeSkipped(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs, int32_t startIndex, int32_t distInBytes)
{
    clinit();
    auto remBytes = distInBytes;
    auto index = startIndex;
    while (remBytes != 0) {
        index++;
        remBytes -= npc((*ptgs)[index])->getSize();
        if(remBytes < 0) {
            throw new ::java::lang::RuntimeException(u"Bad skip distance (wrong token size calculation)."_j);
        }
        if(index >= npc(ptgs)->length) {
            throw new ::java::lang::RuntimeException(u"Skip distance too far (ran out of formula tokens)."_j);
        }
    }
    return index - startIndex;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::dereferenceResult(::org::apache::poi::ss::formula::eval::ValueEval* evaluationResult, int32_t srcRowNum, int32_t srcColNum)
{
    clinit();
    ::org::apache::poi::ss::formula::eval::ValueEval* value;
    try {
        value = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(evaluationResult, srcRowNum, srcColNum);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    if(value == static_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(::org::apache::poi::ss::formula::eval::BlankEval::instance())) {
        return ::org::apache::poi::ss::formula::eval::NumberEval::ZERO();
    }
    return value;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::getEvalForPtg(::org::apache::poi::ss::formula::ptg::Ptg* ptg, OperationEvaluationContext* ec)
{
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::NamePtg* >(ptg) != nullptr) {
        auto namePtg = java_cast< ::org::apache::poi::ss::formula::ptg::NamePtg* >(ptg);
        auto nameRecord = npc(_workbook)->getName(namePtg);
        return getEvalForNameRecord(nameRecord, ec);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::NameXPtg* >(ptg) != nullptr) {
        return processNameEval(npc(ec)->getNameXEval(java_cast< ::org::apache::poi::ss::formula::ptg::NameXPtg* >(ptg)), ec);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::NameXPxg* >(ptg) != nullptr) {
        return processNameEval(npc(ec)->getNameXEval(java_cast< ::org::apache::poi::ss::formula::ptg::NameXPxg* >(ptg)), ec);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::IntPtg* >(ptg) != nullptr) {
        return new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(npc((java_cast< ::org::apache::poi::ss::formula::ptg::IntPtg* >(ptg)))->getValue()));
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::NumberPtg* >(ptg) != nullptr) {
        return new ::org::apache::poi::ss::formula::eval::NumberEval(npc((java_cast< ::org::apache::poi::ss::formula::ptg::NumberPtg* >(ptg)))->getValue());
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::StringPtg* >(ptg) != nullptr) {
        return new ::org::apache::poi::ss::formula::eval::StringEval(npc((java_cast< ::org::apache::poi::ss::formula::ptg::StringPtg* >(ptg)))->getValue());
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::BoolPtg* >(ptg) != nullptr) {
        return ::org::apache::poi::ss::formula::eval::BoolEval::valueOf(npc((java_cast< ::org::apache::poi::ss::formula::ptg::BoolPtg* >(ptg)))->getValue());
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::ErrPtg* >(ptg) != nullptr) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::valueOf(npc((java_cast< ::org::apache::poi::ss::formula::ptg::ErrPtg* >(ptg)))->getErrorCode());
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::MissingArgPtg* >(ptg) != nullptr) {
        return ::org::apache::poi::ss::formula::eval::MissingArgEval::instance();
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::AreaErrPtg* >(ptg) != nullptr || dynamic_cast< ::org::apache::poi::ss::formula::ptg::RefErrorPtg* >(ptg) != nullptr || dynamic_cast< ::org::apache::poi::ss::formula::ptg::DeletedArea3DPtg* >(ptg) != nullptr|| dynamic_cast< ::org::apache::poi::ss::formula::ptg::DeletedRef3DPtg* >(ptg) != nullptr) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::REF_INVALID();
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPtg* >(ptg) != nullptr) {
        return npc(ec)->getRef3DEval(java_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPtg* >(ptg));
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPxg* >(ptg) != nullptr) {
        return npc(ec)->getRef3DEval(java_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPxg* >(ptg));
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Area3DPtg* >(ptg) != nullptr) {
        return npc(ec)->getArea3DEval(java_cast< ::org::apache::poi::ss::formula::ptg::Area3DPtg* >(ptg));
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Area3DPxg* >(ptg) != nullptr) {
        return npc(ec)->getArea3DEval(java_cast< ::org::apache::poi::ss::formula::ptg::Area3DPxg* >(ptg));
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::RefPtg* >(ptg) != nullptr) {
        auto rptg = java_cast< ::org::apache::poi::ss::formula::ptg::RefPtg* >(ptg);
        return npc(ec)->getRefEval(npc(rptg)->getRow(), npc(rptg)->getColumn());
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::AreaPtg* >(ptg) != nullptr) {
        auto aptg = java_cast< ::org::apache::poi::ss::formula::ptg::AreaPtg* >(ptg);
        return npc(ec)->getAreaEval(npc(aptg)->getFirstRow(), npc(aptg)->getFirstColumn(), npc(aptg)->getLastRow(), npc(aptg)->getLastColumn());
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::UnknownPtg* >(ptg) != nullptr) {
        throw new ::java::lang::RuntimeException(u"UnknownPtg not allowed"_j);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::ExpPtg* >(ptg) != nullptr) {
        throw new ::java::lang::RuntimeException(u"ExpPtg currently not supported"_j);
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected ptg class ("_j)->append(npc(npc(ptg)->getClass())->getName())
        ->append(u")"_j)->toString());
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::processNameEval(::org::apache::poi::ss::formula::eval::ValueEval* eval, OperationEvaluationContext* ec)
{
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::ExternalNameEval* >(eval) != nullptr) {
        auto name = npc((java_cast< ::org::apache::poi::ss::formula::eval::ExternalNameEval* >(eval)))->getName();
        return getEvalForNameRecord(name, ec);
    }
    return eval;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::getEvalForNameRecord(EvaluationName* nameRecord, OperationEvaluationContext* ec)
{
    if(npc(nameRecord)->isFunctionName()) {
        return new ::org::apache::poi::ss::formula::eval::FunctionNameEval(npc(nameRecord)->getNameText());
    }
    if(npc(nameRecord)->hasFormula()) {
        return evaluateNameFormula(npc(nameRecord)->getNameDefinition(), ec);
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Don't now how to evalate name '"_j)->append(npc(nameRecord)->getNameText())
        ->append(u"'"_j)->toString());
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::evaluateNameFormula(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs, OperationEvaluationContext* ec)
{
    if(npc(ptgs)->length == 1) {
        return getEvalForPtg((*ptgs)[int32_t(0)], ec);
    }
    return evaluateFormula(ec, ptgs);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::evaluateReference(EvaluationSheet* sheet, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex, EvaluationTracker* tracker)
{
    auto cell = npc(sheet)->getCell(rowIndex, columnIndex);
    return evaluateAny(cell, sheetIndex, rowIndex, columnIndex, tracker);
}

org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::WorkbookEvaluator::findUserDefinedFunction(::java::lang::String* functionName)
{
    return npc(_udfFinder)->findFunction(functionName);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::evaluate(::java::lang::String* formula, ::org::apache::poi::ss::util::CellReference* ref)
{
    auto const sheetName = ref == nullptr ? static_cast< ::java::lang::String* >(nullptr) : npc(ref)->getSheetName();
    int32_t sheetIndex;
    if(sheetName == nullptr) {
        sheetIndex = -int32_t(1);
    } else {
        sheetIndex = npc(getWorkbook())->getSheetIndex(sheetName);
    }
    auto rowIndex = ref == nullptr ? -int32_t(1) : npc(ref)->getRow();
    auto colIndex = ref == nullptr ? static_cast< int16_t >(-int32_t(1)) : npc(ref)->getCol();
    auto const ec = new OperationEvaluationContext(this, getWorkbook(), sheetIndex, rowIndex, colIndex, new EvaluationTracker(_cache));
    auto ptgs = FormulaParser::parse(formula, java_cast< FormulaParsingWorkbook* >(getWorkbook()), FormulaType::CELL, sheetIndex, rowIndex);
    return evaluateNameFormula(ptgs, ec);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::evaluate(::java::lang::String* formula, ::org::apache::poi::ss::util::CellReference* target, ::org::apache::poi::ss::util::CellRangeAddressBase* region)
{
    return evaluate(formula, target, region, FormulaType::CELL);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::evaluateList(::java::lang::String* formula, ::org::apache::poi::ss::util::CellReference* target, ::org::apache::poi::ss::util::CellRangeAddressBase* region)
{
    return evaluate(formula, target, region, FormulaType::DATAVALIDATION_LIST);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::WorkbookEvaluator::evaluate(::java::lang::String* formula, ::org::apache::poi::ss::util::CellReference* target, ::org::apache::poi::ss::util::CellRangeAddressBase* region, FormulaType* formulaType)
{
    auto const sheetName = target == nullptr ? static_cast< ::java::lang::String* >(nullptr) : npc(target)->getSheetName();
    if(sheetName == nullptr)
        throw new ::java::lang::IllegalArgumentException(u"Sheet name is required"_j);

    auto const sheetIndex = npc(getWorkbook())->getSheetIndex(sheetName);
    auto ptgs = FormulaParser::parse(formula, java_cast< FormulaParsingWorkbook* >(getWorkbook()), formulaType, sheetIndex, npc(target)->getRow());
    adjustRegionRelativeReference(ptgs, target, region);
    auto const ec = new OperationEvaluationContext(this, getWorkbook(), sheetIndex, npc(target)->getRow(), npc(target)->getCol(), new EvaluationTracker(_cache), npc(formulaType)->isSingleValue());
    return evaluateNameFormula(ptgs, ec);
}

bool org::apache::poi::ss::formula::WorkbookEvaluator::adjustRegionRelativeReference(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs, ::org::apache::poi::ss::util::CellReference* target, ::org::apache::poi::ss::util::CellRangeAddressBase* region)
{
    if(!npc(region)->isInRange(target)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(static_cast< ::java::lang::Object* >(target))->append(u" is not within "_j)
            ->append(static_cast< ::java::lang::Object* >(region))->toString());
    }
    return adjustRegionRelativeReference(ptgs, npc(target)->getRow() - npc(region)->getFirstRow(), npc(target)->getCol() - npc(region)->getFirstColumn());
}

bool org::apache::poi::ss::formula::WorkbookEvaluator::adjustRegionRelativeReference(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs, int32_t deltaRow, int32_t deltaColumn)
{
    if(deltaRow < 0)
        throw new ::java::lang::IllegalArgumentException(u"offset row must be positive"_j);

    if(deltaColumn < 0)
        throw new ::java::lang::IllegalArgumentException(u"offset column must be positive"_j);

    auto shifted = false;
    for(auto ptg : *npc(ptgs)) {
        if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::RefPtgBase* >(ptg) != nullptr) {
            auto ref = java_cast< ::org::apache::poi::ss::formula::ptg::RefPtgBase* >(ptg);
            auto const version = npc(_workbook)->getSpreadsheetVersion();
            if(npc(ref)->isRowRelative()) {
                auto const rowIndex = npc(ref)->getRow() + deltaRow;
                if(rowIndex > npc(version)->getMaxRows()) {
                    throw new ::java::lang::IndexOutOfBoundsException(::java::lang::StringBuilder().append(npc(version)->name())->append(u" files can only have "_j)
                        ->append(npc(version)->getMaxRows())
                        ->append(u" rows, but row "_j)
                        ->append(rowIndex)
                        ->append(u" was requested."_j)->toString());
                }
                npc(ref)->setRow(rowIndex);
                shifted = true;
            }
            if(npc(ref)->isColRelative()) {
                auto const colIndex = npc(ref)->getColumn() + deltaColumn;
                if(colIndex > npc(version)->getMaxColumns()) {
                    throw new ::java::lang::IndexOutOfBoundsException(::java::lang::StringBuilder().append(npc(version)->name())->append(u" files can only have "_j)
                        ->append(npc(version)->getMaxColumns())
                        ->append(u" columns, but column "_j)
                        ->append(colIndex)
                        ->append(u" was requested."_j)->toString());
                }
                npc(ref)->setColumn(colIndex);
                shifted = true;
            }
        }
    }
    return shifted;
}

void org::apache::poi::ss::formula::WorkbookEvaluator::setIgnoreMissingWorkbooks(bool ignore)
{
    _ignoreMissingWorkbooks = ignore;
}

bool org::apache::poi::ss::formula::WorkbookEvaluator::isIgnoreMissingWorkbooks()
{
    return _ignoreMissingWorkbooks;
}

java::util::Collection* org::apache::poi::ss::formula::WorkbookEvaluator::getSupportedFunctionNames()
{
    clinit();
    ::java::util::Collection* lst = new ::java::util::TreeSet();
    npc(lst)->addAll(::org::apache::poi::ss::formula::eval::FunctionEval::getSupportedFunctionNames());
    npc(lst)->addAll(::org::apache::poi::ss::formula::atp::AnalysisToolPak::getSupportedFunctionNames());
    return ::java::util::Collections::unmodifiableCollection(lst);
}

java::util::Collection* org::apache::poi::ss::formula::WorkbookEvaluator::getNotSupportedFunctionNames()
{
    clinit();
    ::java::util::Collection* lst = new ::java::util::TreeSet();
    npc(lst)->addAll(::org::apache::poi::ss::formula::eval::FunctionEval::getNotSupportedFunctionNames());
    npc(lst)->addAll(::org::apache::poi::ss::formula::atp::AnalysisToolPak::getNotSupportedFunctionNames());
    return ::java::util::Collections::unmodifiableCollection(lst);
}

void org::apache::poi::ss::formula::WorkbookEvaluator::registerFunction(::java::lang::String* name, ::org::apache::poi::ss::formula::functions::FreeRefFunction* func)
{
    clinit();
    ::org::apache::poi::ss::formula::atp::AnalysisToolPak::registerFunction(name, func);
}

void org::apache::poi::ss::formula::WorkbookEvaluator::registerFunction(::java::lang::String* name, ::org::apache::poi::ss::formula::functions::Function* func)
{
    clinit();
    ::org::apache::poi::ss::formula::eval::FunctionEval::registerFunction(name, func);
}

void org::apache::poi::ss::formula::WorkbookEvaluator::setDebugEvaluationOutputForNextEval(bool value)
{
    dbgEvaluationOutputForNextEval = value;
}

bool org::apache::poi::ss::formula::WorkbookEvaluator::isDebugEvaluationOutputForNextEval()
{
    return dbgEvaluationOutputForNextEval;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::WorkbookEvaluator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.WorkbookEvaluator", 43);
    return c;
}

void org::apache::poi::ss::formula::WorkbookEvaluator::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(WorkbookEvaluator::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::WorkbookEvaluator::getClass0()
{
    return class_();
}


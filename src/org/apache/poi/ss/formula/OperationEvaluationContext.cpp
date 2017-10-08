// Generated from /POI/java/org/apache/poi/ss/formula/OperationEvaluationContext.java
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment_WorkbookNotFoundException.hpp>
#include <org/apache/poi/ss/formula/EvaluationName.hpp>
#include <org/apache/poi/ss/formula/EvaluationTracker.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalName.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalSheet.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalSheetRange.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook.hpp>
#include <org/apache/poi/ss/formula/ExternSheetReferenceToken.hpp>
#include <org/apache/poi/ss/formula/FormulaParsingWorkbook.hpp>
#include <org/apache/poi/ss/formula/LazyAreaEval.hpp>
#include <org/apache/poi/ss/formula/LazyRefEval.hpp>
#include <org/apache/poi/ss/formula/SheetRangeEvaluator.hpp>
#include <org/apache/poi/ss/formula/SheetRefEvaluator.hpp>
#include <org/apache/poi/ss/formula/UserDefinedFunction.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/ExternalNameEval.hpp>
#include <org/apache/poi/ss/formula/eval/FunctionNameEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPxg.hpp>
#include <org/apache/poi/ss/formula/ptg/NameXPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NameXPxg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref3DPxg.hpp>
#include <org/apache/poi/ss/util/CellReference_NameType.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::SheetRefEvaluator, ::java::lang::ObjectArray > SheetRefEvaluatorArray;

            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

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

poi::ss::formula::OperationEvaluationContext::OperationEvaluationContext(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::OperationEvaluationContext::OperationEvaluationContext(WorkbookEvaluator* bookEvaluator, EvaluationWorkbook* workbook, int32_t sheetIndex, int32_t srcRowNum, int32_t srcColNum, EvaluationTracker* tracker) 
    : OperationEvaluationContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(bookEvaluator,workbook,sheetIndex,srcRowNum,srcColNum,tracker);
}

poi::ss::formula::OperationEvaluationContext::OperationEvaluationContext(WorkbookEvaluator* bookEvaluator, EvaluationWorkbook* workbook, int32_t sheetIndex, int32_t srcRowNum, int32_t srcColNum, EvaluationTracker* tracker, bool isSingleValue) 
    : OperationEvaluationContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(bookEvaluator,workbook,sheetIndex,srcRowNum,srcColNum,tracker,isSingleValue);
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::OperationEvaluationContext::UDF()
{
    clinit();
    return UDF_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::OperationEvaluationContext::UDF_;

void poi::ss::formula::OperationEvaluationContext::ctor(WorkbookEvaluator* bookEvaluator, EvaluationWorkbook* workbook, int32_t sheetIndex, int32_t srcRowNum, int32_t srcColNum, EvaluationTracker* tracker)
{
    ctor(bookEvaluator, workbook, sheetIndex, srcRowNum, srcColNum, tracker, true);
}

void poi::ss::formula::OperationEvaluationContext::ctor(WorkbookEvaluator* bookEvaluator, EvaluationWorkbook* workbook, int32_t sheetIndex, int32_t srcRowNum, int32_t srcColNum, EvaluationTracker* tracker, bool isSingleValue)
{
    super::ctor();
    _bookEvaluator = bookEvaluator;
    _workbook = workbook;
    _sheetIndex = sheetIndex;
    _rowIndex = srcRowNum;
    _columnIndex = srcColNum;
    _tracker = tracker;
    _isSingleValue = isSingleValue;
}

poi::ss::formula::EvaluationWorkbook* poi::ss::formula::OperationEvaluationContext::getWorkbook()
{
    return _workbook;
}

int32_t poi::ss::formula::OperationEvaluationContext::getRowIndex()
{
    return _rowIndex;
}

int32_t poi::ss::formula::OperationEvaluationContext::getColumnIndex()
{
    return _columnIndex;
}

poi::ss::formula::SheetRangeEvaluator* poi::ss::formula::OperationEvaluationContext::createExternSheetRefEvaluator(ExternSheetReferenceToken* ptg)
{
    return createExternSheetRefEvaluator(npc(ptg)->getExternSheetIndex());
}

poi::ss::formula::SheetRangeEvaluator* poi::ss::formula::OperationEvaluationContext::createExternSheetRefEvaluator(::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName, int32_t externalWorkbookNumber)
{
    auto externalSheet = npc(_workbook)->getExternalSheet(firstSheetName, lastSheetName, externalWorkbookNumber);
    return createExternSheetRefEvaluator(externalSheet);
}

poi::ss::formula::SheetRangeEvaluator* poi::ss::formula::OperationEvaluationContext::createExternSheetRefEvaluator(int32_t externSheetIndex)
{
    auto externalSheet = npc(_workbook)->getExternalSheet(externSheetIndex);
    return createExternSheetRefEvaluator(externalSheet);
}

poi::ss::formula::SheetRangeEvaluator* poi::ss::formula::OperationEvaluationContext::createExternSheetRefEvaluator(EvaluationWorkbook_ExternalSheet* externalSheet)
{
    WorkbookEvaluator* targetEvaluator;
    int32_t otherFirstSheetIndex;
    auto otherLastSheetIndex = -int32_t(1);
    if(externalSheet == nullptr || npc(externalSheet)->getWorkbookName() == nullptr) {
        targetEvaluator = _bookEvaluator;
        if(externalSheet == nullptr) {
            otherFirstSheetIndex = 0;
        } else {
            otherFirstSheetIndex = npc(_workbook)->getSheetIndex(npc(externalSheet)->getSheetName());
        }
        if(dynamic_cast< EvaluationWorkbook_ExternalSheetRange* >(externalSheet) != nullptr) {
            auto lastSheetName = npc((java_cast< EvaluationWorkbook_ExternalSheetRange* >(externalSheet)))->getLastSheetName();
            otherLastSheetIndex = npc(_workbook)->getSheetIndex(lastSheetName);
        }
    } else {
        auto workbookName = npc(externalSheet)->getWorkbookName();
        try {
            targetEvaluator = npc(_bookEvaluator)->getOtherWorkbookEvaluator(workbookName);
        } catch (CollaboratingWorkbooksEnvironment_WorkbookNotFoundException* e) {
            throw new ::java::lang::RuntimeException(npc(e)->getMessage(), e);
        }
        otherFirstSheetIndex = npc(targetEvaluator)->getSheetIndex(npc(externalSheet)->getSheetName());
        if(dynamic_cast< EvaluationWorkbook_ExternalSheetRange* >(externalSheet) != nullptr) {
            auto lastSheetName = npc((java_cast< EvaluationWorkbook_ExternalSheetRange* >(externalSheet)))->getLastSheetName();
            otherLastSheetIndex = npc(targetEvaluator)->getSheetIndex(lastSheetName);
        }
        if(otherFirstSheetIndex < 0) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Invalid sheet name '"_j)->append(npc(externalSheet)->getSheetName())
                ->append(u"' in bool '"_j)
                ->append(workbookName)
                ->append(u"'."_j)->toString());
        }
    }
    if(otherLastSheetIndex == -int32_t(1)) {
        otherLastSheetIndex = otherFirstSheetIndex;
    }
    auto evals = new SheetRefEvaluatorArray(otherLastSheetIndex - otherFirstSheetIndex + int32_t(1));
    for (auto i = int32_t(0); i < npc(evals)->length; i++) {
        auto otherSheetIndex = i + otherFirstSheetIndex;
        evals->set(i, new SheetRefEvaluator(targetEvaluator, _tracker, otherSheetIndex));
    }
    return new SheetRangeEvaluator(otherFirstSheetIndex, otherLastSheetIndex, evals);
}

poi::ss::formula::SheetRefEvaluator* poi::ss::formula::OperationEvaluationContext::createExternSheetRefEvaluator(::java::lang::String* workbookName, ::java::lang::String* sheetName)
{
    WorkbookEvaluator* targetEvaluator;
    if(workbookName == nullptr) {
        targetEvaluator = _bookEvaluator;
    } else {
        if(sheetName == nullptr) {
            throw new ::java::lang::IllegalArgumentException(u"sheetName must not be null if workbookName is provided"_j);
        }
        try {
            targetEvaluator = npc(_bookEvaluator)->getOtherWorkbookEvaluator(workbookName);
        } catch (CollaboratingWorkbooksEnvironment_WorkbookNotFoundException* e) {
            return nullptr;
        }
    }
    auto otherSheetIndex = sheetName == nullptr ? _sheetIndex : npc(targetEvaluator)->getSheetIndex(sheetName);
    if(otherSheetIndex < 0) {
        return nullptr;
    }
    return new SheetRefEvaluator(targetEvaluator, _tracker, otherSheetIndex);
}

poi::ss::formula::SheetRangeEvaluator* poi::ss::formula::OperationEvaluationContext::getRefEvaluatorForCurrentSheet()
{
    auto sre = new SheetRefEvaluator(_bookEvaluator, _tracker, _sheetIndex);
    return new SheetRangeEvaluator(_sheetIndex, sre);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluationContext::getDynamicReference(::java::lang::String* workbookName, ::java::lang::String* sheetName, ::java::lang::String* refStrPart1, ::java::lang::String* refStrPart2, bool isA1Style)
{
    if(!isA1Style) {
        throw new ::java::lang::RuntimeException(u"R1C1 style not supported yet"_j);
    }
    auto se = createExternSheetRefEvaluator(workbookName, sheetName);
    if(se == nullptr) {
        return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
    }
    auto sre = new SheetRangeEvaluator(_sheetIndex, se);
    auto ssVersion = npc((java_cast< FormulaParsingWorkbook* >(_workbook)))->getSpreadsheetVersion();
    auto part1refType = classifyCellReference(refStrPart1, ssVersion);
    {
        EvaluationName* nm;
        {
            auto v = part1refType;
            if((v == ::poi::ss::util::CellReference_NameType::BAD_CELL_OR_NAMED_RANGE)) {
                return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
            }
            if((v == ::poi::ss::util::CellReference_NameType::NAMED_RANGE)) {
                auto nm = npc((java_cast< FormulaParsingWorkbook* >(_workbook)))->getName(refStrPart1, _sheetIndex);
                if(!npc(nm)->isRange()) {
                    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Specified name '"_j)->append(refStrPart1)
                        ->append(u"' is not a range as expected."_j)->toString());
                }
                return npc(_bookEvaluator)->evaluateNameFormula(npc(nm)->getNameDefinition(), this);
            }
end_switch0:;
        }
    }

    if(refStrPart2 == nullptr) {
        {
            ::poi::ss::util::CellReference* cr;
            {
                auto v = part1refType;
                if((v == ::poi::ss::util::CellReference_NameType::COLUMN) || (v == ::poi::ss::util::CellReference_NameType::ROW)) {
                    return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
                }
                if((v == ::poi::ss::util::CellReference_NameType::CELL)) {
                    auto cr = new ::poi::ss::util::CellReference(refStrPart1);
                    return new LazyRefEval(npc(cr)->getRow(), npc(cr)->getCol(), sre);
                }
end_switch1:;
            }
        }

        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected reference classification of '"_j)->append(refStrPart1)
            ->append(u"'."_j)->toString());
    }
    auto part2refType = classifyCellReference(refStrPart1, ssVersion);
    {
        auto v = part2refType;
        if((v == ::poi::ss::util::CellReference_NameType::BAD_CELL_OR_NAMED_RANGE)) {
            return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
        }
        if((v == ::poi::ss::util::CellReference_NameType::NAMED_RANGE)) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Cannot evaluate '"_j)->append(refStrPart1)
                ->append(u"'. Indirect evaluation of defined names not supported yet"_j)->toString());
        }
end_switch2:;
    }

    if(part2refType != part1refType) {
        return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
    }
    int32_t firstRow, firstCol, lastRow, lastCol;
    {
        ::poi::ss::util::CellReference* cr;
        {
            auto v = part1refType;
            if((v == ::poi::ss::util::CellReference_NameType::COLUMN)) {
                firstRow = 0;
                if(npc(part2refType)->equals(static_cast< ::java::lang::Object* >(::poi::ss::util::CellReference_NameType::COLUMN))) {
                    lastRow = npc(ssVersion)->getLastRowIndex();
                    firstCol = parseRowRef(refStrPart1);
                    lastCol = parseRowRef(refStrPart2);
                } else {
                    lastRow = npc(ssVersion)->getLastRowIndex();
                    firstCol = parseColRef(refStrPart1);
                    lastCol = parseColRef(refStrPart2);
                }
                goto end_switch3;;
            }
            if((v == ::poi::ss::util::CellReference_NameType::ROW)) {
                firstCol = 0;
                if(npc(part2refType)->equals(static_cast< ::java::lang::Object* >(::poi::ss::util::CellReference_NameType::ROW))) {
                    firstRow = parseColRef(refStrPart1);
                    lastRow = parseColRef(refStrPart2);
                    lastCol = npc(ssVersion)->getLastColumnIndex();
                } else {
                    lastCol = npc(ssVersion)->getLastColumnIndex();
                    firstRow = parseRowRef(refStrPart1);
                    lastRow = parseRowRef(refStrPart2);
                }
                goto end_switch3;;
            }
            if((v == ::poi::ss::util::CellReference_NameType::CELL)) {
                ::poi::ss::util::CellReference* cr;
                cr = new ::poi::ss::util::CellReference(refStrPart1);
                firstRow = npc(cr)->getRow();
                firstCol = npc(cr)->getCol();
                cr = new ::poi::ss::util::CellReference(refStrPart2);
                lastRow = npc(cr)->getRow();
                lastCol = npc(cr)->getCol();
                goto end_switch3;;
            }
            if((((v != ::poi::ss::util::CellReference_NameType::COLUMN) && (v != ::poi::ss::util::CellReference_NameType::ROW) && (v != ::poi::ss::util::CellReference_NameType::CELL)))) {
                throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected reference classification of '"_j)->append(refStrPart1)
                    ->append(u"'."_j)->toString());
            }
end_switch3:;
        }
    }

    return new LazyAreaEval(firstRow, firstCol, lastRow, lastCol, sre);
}

int32_t poi::ss::formula::OperationEvaluationContext::parseRowRef(::java::lang::String* refStrPart)
{
    clinit();
    return ::poi::ss::util::CellReference::convertColStringToIndex(refStrPart);
}

int32_t poi::ss::formula::OperationEvaluationContext::parseColRef(::java::lang::String* refStrPart)
{
    clinit();
    return ::java::lang::Integer::parseInt(refStrPart) - int32_t(1);
}

poi::ss::util::CellReference_NameType* poi::ss::formula::OperationEvaluationContext::classifyCellReference(::java::lang::String* str, ::poi::ss::SpreadsheetVersion* ssVersion)
{
    clinit();
    auto len = npc(str)->length();
    if(len < 1) {
        return ::poi::ss::util::CellReference_NameType::BAD_CELL_OR_NAMED_RANGE;
    }
    return ::poi::ss::util::CellReference::classifyCellReference(str, ssVersion);
}

poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::OperationEvaluationContext::findUserDefinedFunction(::java::lang::String* functionName)
{
    return npc(_bookEvaluator)->findUserDefinedFunction(functionName);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluationContext::getRefEval(int32_t rowIndex, int32_t columnIndex)
{
    auto sre = getRefEvaluatorForCurrentSheet();
    return new LazyRefEval(rowIndex, columnIndex, sre);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluationContext::getRef3DEval(::poi::ss::formula::ptg::Ref3DPtg* rptg)
{
    auto sre = createExternSheetRefEvaluator(npc(rptg)->getExternSheetIndex());
    return new LazyRefEval(npc(rptg)->getRow(), npc(rptg)->getColumn(), sre);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluationContext::getRef3DEval(::poi::ss::formula::ptg::Ref3DPxg* rptg)
{
    auto sre = createExternSheetRefEvaluator(npc(rptg)->getSheetName(), npc(rptg)->getLastSheetName(), npc(rptg)->getExternalWorkbookNumber());
    return new LazyRefEval(npc(rptg)->getRow(), npc(rptg)->getColumn(), sre);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluationContext::getAreaEval(int32_t firstRowIndex, int32_t firstColumnIndex, int32_t lastRowIndex, int32_t lastColumnIndex)
{
    auto sre = getRefEvaluatorForCurrentSheet();
    return new LazyAreaEval(firstRowIndex, firstColumnIndex, lastRowIndex, lastColumnIndex, sre);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluationContext::getArea3DEval(::poi::ss::formula::ptg::Area3DPtg* aptg)
{
    auto sre = createExternSheetRefEvaluator(npc(aptg)->getExternSheetIndex());
    return new LazyAreaEval(npc(aptg)->getFirstRow(), npc(aptg)->getFirstColumn(), npc(aptg)->getLastRow(), npc(aptg)->getLastColumn(), sre);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluationContext::getArea3DEval(::poi::ss::formula::ptg::Area3DPxg* aptg)
{
    auto sre = createExternSheetRefEvaluator(npc(aptg)->getSheetName(), npc(aptg)->getLastSheetName(), npc(aptg)->getExternalWorkbookNumber());
    return new LazyAreaEval(npc(aptg)->getFirstRow(), npc(aptg)->getFirstColumn(), npc(aptg)->getLastRow(), npc(aptg)->getLastColumn(), sre);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluationContext::getNameXEval(::poi::ss::formula::ptg::NameXPtg* nameXPtg)
{
    auto externSheet = npc(_workbook)->getExternalSheet(npc(nameXPtg)->getSheetRefIndex());
    if(externSheet == nullptr || npc(externSheet)->getWorkbookName() == nullptr) {
        return getLocalNameXEval(nameXPtg);
    }
    auto workbookName = npc(externSheet)->getWorkbookName();
    auto externName = npc(_workbook)->getExternalName(npc(nameXPtg)->getSheetRefIndex(), npc(nameXPtg)->getNameIndex());
    return getExternalNameXEval(externName, workbookName);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluationContext::getNameXEval(::poi::ss::formula::ptg::NameXPxg* nameXPxg)
{
    auto externSheet = npc(_workbook)->getExternalSheet(npc(nameXPxg)->getSheetName(), nullptr, npc(nameXPxg)->getExternalWorkbookNumber());
    if(externSheet == nullptr || npc(externSheet)->getWorkbookName() == nullptr) {
        return getLocalNameXEval(nameXPxg);
    }
    auto workbookName = npc(externSheet)->getWorkbookName();
    auto externName = npc(_workbook)->getExternalName(npc(nameXPxg)->getNameName(), npc(nameXPxg)->getSheetName(), npc(nameXPxg)->getExternalWorkbookNumber());
    return getExternalNameXEval(externName, workbookName);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluationContext::getLocalNameXEval(::poi::ss::formula::ptg::NameXPxg* nameXPxg)
{
    auto sIdx = -int32_t(1);
    if(npc(nameXPxg)->getSheetName() != nullptr) {
        sIdx = npc(_workbook)->getSheetIndex(npc(nameXPxg)->getSheetName());
    }
    auto name = npc(nameXPxg)->getNameName();
    auto evalName = npc(_workbook)->getName(name, sIdx);
    if(evalName != nullptr) {
        return new ::poi::ss::formula::eval::ExternalNameEval(evalName);
    } else {
        return new ::poi::ss::formula::eval::FunctionNameEval(name);
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluationContext::getLocalNameXEval(::poi::ss::formula::ptg::NameXPtg* nameXPtg)
{
    auto name = npc(_workbook)->resolveNameXText(nameXPtg);
    auto sheetNameAt = npc(name)->indexOf(static_cast< int32_t >(u'!'));
    EvaluationName* evalName = nullptr;
    if(sheetNameAt > -int32_t(1)) {
        auto sheetName = npc(name)->substring(0, sheetNameAt);
        auto nameName = npc(name)->substring(sheetNameAt + int32_t(1));
        evalName = npc(_workbook)->getName(nameName, npc(_workbook)->getSheetIndex(sheetName));
    } else {
        evalName = npc(_workbook)->getName(name, -int32_t(1));
    }
    if(evalName != nullptr) {
        return new ::poi::ss::formula::eval::ExternalNameEval(evalName);
    } else {
        return new ::poi::ss::formula::eval::FunctionNameEval(name);
    }
}

int32_t poi::ss::formula::OperationEvaluationContext::getSheetIndex()
{
    return _sheetIndex;
}

bool poi::ss::formula::OperationEvaluationContext::isSingleValue()
{
    return _isSingleValue;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluationContext::getExternalNameXEval(EvaluationWorkbook_ExternalName* externName, ::java::lang::String* workbookName)
{
    try {
        auto refWorkbookEvaluator = npc(_bookEvaluator)->getOtherWorkbookEvaluator(workbookName);
        auto evaluationName = npc(refWorkbookEvaluator)->getName(npc(externName)->getName(), npc(externName)->getIx() - int32_t(1));
        if(evaluationName != nullptr && npc(evaluationName)->hasFormula()) {
            if(npc(npc(evaluationName)->getNameDefinition())->length > 1) {
                throw new ::java::lang::RuntimeException(u"Complex name formulas not supported yet"_j);
            }
            auto refWorkbookContext = new OperationEvaluationContext(refWorkbookEvaluator, npc(refWorkbookEvaluator)->getWorkbook(), -int32_t(1), -int32_t(1), -int32_t(1), _tracker);
            auto ptg = (*npc(evaluationName)->getNameDefinition())[int32_t(0)];
            if(dynamic_cast< ::poi::ss::formula::ptg::Ref3DPtg* >(ptg) != nullptr) {
                auto ref3D = java_cast< ::poi::ss::formula::ptg::Ref3DPtg* >(ptg);
                return npc(refWorkbookContext)->getRef3DEval(ref3D);
            } else if(dynamic_cast< ::poi::ss::formula::ptg::Ref3DPxg* >(ptg) != nullptr) {
                auto ref3D = java_cast< ::poi::ss::formula::ptg::Ref3DPxg* >(ptg);
                return npc(refWorkbookContext)->getRef3DEval(ref3D);
            } else if(dynamic_cast< ::poi::ss::formula::ptg::Area3DPtg* >(ptg) != nullptr) {
                auto area3D = java_cast< ::poi::ss::formula::ptg::Area3DPtg* >(ptg);
                return npc(refWorkbookContext)->getArea3DEval(area3D);
            } else if(dynamic_cast< ::poi::ss::formula::ptg::Area3DPxg* >(ptg) != nullptr) {
                auto area3D = java_cast< ::poi::ss::formula::ptg::Area3DPxg* >(ptg);
                return npc(refWorkbookContext)->getArea3DEval(area3D);
            }
        }
        return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
    } catch (CollaboratingWorkbooksEnvironment_WorkbookNotFoundException* wnfe) {
        return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::OperationEvaluationContext::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.OperationEvaluationContext", 52);
    return c;
}

void poi::ss::formula::OperationEvaluationContext::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        UDF_ = UserDefinedFunction::instance();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::OperationEvaluationContext::getClass0()
{
    return class_();
}


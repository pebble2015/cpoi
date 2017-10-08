// Generated from /POI/java/org/apache/poi/ss/formula/OperationEvaluationContext.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::OperationEvaluationContext final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::ss::formula::functions::FreeRefFunction* UDF_;
    EvaluationWorkbook* _workbook {  };
    int32_t _sheetIndex {  };
    int32_t _rowIndex {  };
    int32_t _columnIndex {  };
    EvaluationTracker* _tracker {  };
    WorkbookEvaluator* _bookEvaluator {  };
    bool _isSingleValue {  };
protected:
    void ctor(WorkbookEvaluator* bookEvaluator, EvaluationWorkbook* workbook, int32_t sheetIndex, int32_t srcRowNum, int32_t srcColNum, EvaluationTracker* tracker);
    void ctor(WorkbookEvaluator* bookEvaluator, EvaluationWorkbook* workbook, int32_t sheetIndex, int32_t srcRowNum, int32_t srcColNum, EvaluationTracker* tracker, bool isSingleValue);

public:
    EvaluationWorkbook* getWorkbook();
    int32_t getRowIndex();
    int32_t getColumnIndex();

public: /* package */
    SheetRangeEvaluator* createExternSheetRefEvaluator(ExternSheetReferenceToken* ptg);
    SheetRangeEvaluator* createExternSheetRefEvaluator(::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName, int32_t externalWorkbookNumber);
    SheetRangeEvaluator* createExternSheetRefEvaluator(int32_t externSheetIndex);
    SheetRangeEvaluator* createExternSheetRefEvaluator(EvaluationWorkbook_ExternalSheet* externalSheet);

private:
    SheetRefEvaluator* createExternSheetRefEvaluator(::java::lang::String* workbookName, ::java::lang::String* sheetName);

public:
    SheetRangeEvaluator* getRefEvaluatorForCurrentSheet();
    ::poi::ss::formula::eval::ValueEval* getDynamicReference(::java::lang::String* workbookName, ::java::lang::String* sheetName, ::java::lang::String* refStrPart1, ::java::lang::String* refStrPart2, bool isA1Style);

private:
    static int32_t parseRowRef(::java::lang::String* refStrPart);
    static int32_t parseColRef(::java::lang::String* refStrPart);
    static ::poi::ss::util::CellReference_NameType* classifyCellReference(::java::lang::String* str, ::poi::ss::SpreadsheetVersion* ssVersion);

public:
    ::poi::ss::formula::functions::FreeRefFunction* findUserDefinedFunction(::java::lang::String* functionName);
    ::poi::ss::formula::eval::ValueEval* getRefEval(int32_t rowIndex, int32_t columnIndex);
    ::poi::ss::formula::eval::ValueEval* getRef3DEval(::poi::ss::formula::ptg::Ref3DPtg* rptg);
    ::poi::ss::formula::eval::ValueEval* getRef3DEval(::poi::ss::formula::ptg::Ref3DPxg* rptg);
    ::poi::ss::formula::eval::ValueEval* getAreaEval(int32_t firstRowIndex, int32_t firstColumnIndex, int32_t lastRowIndex, int32_t lastColumnIndex);
    ::poi::ss::formula::eval::ValueEval* getArea3DEval(::poi::ss::formula::ptg::Area3DPtg* aptg);
    ::poi::ss::formula::eval::ValueEval* getArea3DEval(::poi::ss::formula::ptg::Area3DPxg* aptg);
    ::poi::ss::formula::eval::ValueEval* getNameXEval(::poi::ss::formula::ptg::NameXPtg* nameXPtg);
    ::poi::ss::formula::eval::ValueEval* getNameXEval(::poi::ss::formula::ptg::NameXPxg* nameXPxg);

private:
    ::poi::ss::formula::eval::ValueEval* getLocalNameXEval(::poi::ss::formula::ptg::NameXPxg* nameXPxg);
    ::poi::ss::formula::eval::ValueEval* getLocalNameXEval(::poi::ss::formula::ptg::NameXPtg* nameXPtg);

public:
    int32_t getSheetIndex();
    bool isSingleValue();

private:
    ::poi::ss::formula::eval::ValueEval* getExternalNameXEval(EvaluationWorkbook_ExternalName* externName, ::java::lang::String* workbookName);

    // Generated

public:
    OperationEvaluationContext(WorkbookEvaluator* bookEvaluator, EvaluationWorkbook* workbook, int32_t sheetIndex, int32_t srcRowNum, int32_t srcColNum, EvaluationTracker* tracker);
    OperationEvaluationContext(WorkbookEvaluator* bookEvaluator, EvaluationWorkbook* workbook, int32_t sheetIndex, int32_t srcRowNum, int32_t srcColNum, EvaluationTracker* tracker, bool isSingleValue);
protected:
    OperationEvaluationContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::poi::ss::formula::functions::FreeRefFunction*& UDF();

private:
    virtual ::java::lang::Class* getClass0();
};

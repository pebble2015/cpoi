// Generated from /POI/java/org/apache/poi/ss/formula/SheetRefEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::SheetRefEvaluator final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    WorkbookEvaluator* _bookEvaluator {  };
    EvaluationTracker* _tracker {  };
    int32_t _sheetIndex {  };
    EvaluationSheet* _sheet {  };
protected:
    void ctor(WorkbookEvaluator* bookEvaluator, EvaluationTracker* tracker, int32_t sheetIndex);

public:
    ::java::lang::String* getSheetName();
    ::org::apache::poi::ss::formula::eval::ValueEval* getEvalForCell(int32_t rowIndex, int32_t columnIndex);

private:
    EvaluationSheet* getSheet();

public:
    bool isSubTotal(int32_t rowIndex, int32_t columnIndex);

    // Generated
    SheetRefEvaluator(WorkbookEvaluator* bookEvaluator, EvaluationTracker* tracker, int32_t sheetIndex);
protected:
    SheetRefEvaluator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

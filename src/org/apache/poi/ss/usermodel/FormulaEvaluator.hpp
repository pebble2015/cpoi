// Generated from /POI/java/org/apache/poi/ss/usermodel/FormulaEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::FormulaEvaluator
    : public virtual ::java::lang::Object
{
    virtual void clearAllCachedResultValues() = 0;
    virtual void notifySetFormula(Cell* cell) = 0;
    virtual void notifyDeleteCell(Cell* cell) = 0;
    virtual void notifyUpdateCell(Cell* cell) = 0;
    virtual void evaluateAll() = 0;
    virtual CellValue* evaluate(Cell* cell) = 0;
    virtual int32_t evaluateFormulaCell(Cell* cell) = 0;
    virtual CellType* evaluateFormulaCellEnum(Cell* cell) = 0;
    virtual Cell* evaluateInCell(Cell* cell) = 0;
    virtual void setupReferencedWorkbooks(::java::util::Map* workbooks) = 0;
    virtual void setIgnoreMissingWorkbooks(bool ignore) = 0;
    virtual void setDebugEvaluationOutputForNextEval(bool value) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

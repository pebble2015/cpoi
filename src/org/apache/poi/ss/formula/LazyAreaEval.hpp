// Generated from /POI/java/org/apache/poi/ss/formula/LazyAreaEval.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEvalBase.hpp>

struct default_init_tag;

class poi::ss::formula::LazyAreaEval final
    : public ::poi::ss::formula::eval::AreaEvalBase
{

public:
    typedef ::poi::ss::formula::eval::AreaEvalBase super;

private:
    SheetRangeEvaluator* _evaluator {  };
protected:
    void ctor(::poi::ss::formula::ptg::AreaI* ptg, SheetRangeEvaluator* evaluator);
    void ctor(int32_t firstRowIndex, int32_t firstColumnIndex, int32_t lastRowIndex, int32_t lastColumnIndex, SheetRangeEvaluator* evaluator);

public:
    ::poi::ss::formula::eval::ValueEval* getRelativeValue(int32_t relativeRowIndex, int32_t relativeColumnIndex) override;
    ::poi::ss::formula::eval::ValueEval* getRelativeValue(int32_t sheetIndex, int32_t relativeRowIndex, int32_t relativeColumnIndex) override;
    ::poi::ss::formula::eval::AreaEval* offset(int32_t relFirstRowIx, int32_t relLastRowIx, int32_t relFirstColIx, int32_t relLastColIx) override;
    LazyAreaEval* getRow(int32_t rowIndex) override;
    LazyAreaEval* getColumn(int32_t columnIndex) override;
    ::java::lang::String* toString() override;
    bool isSubTotal(int32_t rowIndex, int32_t columnIndex) override;

    // Generated

public: /* package */
    LazyAreaEval(::poi::ss::formula::ptg::AreaI* ptg, SheetRangeEvaluator* evaluator);

public:
    LazyAreaEval(int32_t firstRowIndex, int32_t firstColumnIndex, int32_t lastRowIndex, int32_t lastColumnIndex, SheetRangeEvaluator* evaluator);
protected:
    LazyAreaEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

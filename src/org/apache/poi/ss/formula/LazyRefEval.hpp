// Generated from /POI/java/org/apache/poi/ss/formula/LazyRefEval.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/RefEvalBase.hpp>

struct default_init_tag;

class poi::ss::formula::LazyRefEval final
    : public ::poi::ss::formula::eval::RefEvalBase
{

public:
    typedef ::poi::ss::formula::eval::RefEvalBase super;

private:
    SheetRangeEvaluator* _evaluator {  };
protected:
    void ctor(int32_t rowIndex, int32_t columnIndex, SheetRangeEvaluator* sre);

public:
    ::poi::ss::formula::eval::ValueEval* getInnerValueEval(int32_t sheetIndex) override;
    ::poi::ss::formula::eval::AreaEval* offset(int32_t relFirstRowIx, int32_t relLastRowIx, int32_t relFirstColIx, int32_t relLastColIx) override;
    bool isSubTotal();
    ::java::lang::String* toString() override;

    // Generated
    LazyRefEval(int32_t rowIndex, int32_t columnIndex, SheetRangeEvaluator* sre);
protected:
    LazyRefEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

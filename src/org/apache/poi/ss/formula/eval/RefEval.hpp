// Generated from /POI/java/org/apache/poi/ss/formula/eval/RefEval.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/SheetRange.hpp>

struct org::apache::poi::ss::formula::eval::RefEval
    : public virtual ValueEval
    , public virtual ::org::apache::poi::ss::formula::SheetRange
{
    virtual ValueEval* getInnerValueEval(int32_t sheetIndex) = 0;
    virtual int32_t getColumn() = 0;
    virtual int32_t getRow() = 0;
    /*int32_t getFirstSheetIndex(); (already declared) */
    /*int32_t getLastSheetIndex(); (already declared) */
    virtual int32_t getNumberOfSheets() = 0;
    virtual AreaEval* offset(int32_t relFirstRowIx, int32_t relLastRowIx, int32_t relFirstColIx, int32_t relLastColIx) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

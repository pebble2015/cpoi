// Generated from /POI/java/org/apache/poi/ss/formula/eval/AreaEval.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/ThreeDEval.hpp>

struct poi::ss::formula::eval::AreaEval
    : public virtual ::poi::ss::formula::TwoDEval
    , public virtual ::poi::ss::formula::ThreeDEval
{
    virtual int32_t getFirstRow() = 0;
    virtual int32_t getLastRow() = 0;
    virtual int32_t getFirstColumn() = 0;
    virtual int32_t getLastColumn() = 0;
    virtual ValueEval* getAbsoluteValue(int32_t row, int32_t col) = 0;
    virtual bool contains(int32_t row, int32_t col) = 0;
    virtual bool containsColumn(int32_t col) = 0;
    virtual bool containsRow(int32_t row) = 0;
    /*int32_t getWidth(); (already declared) */
    /*int32_t getHeight(); (already declared) */
    virtual ValueEval* getRelativeValue(int32_t relativeRowIndex, int32_t relativeColumnIndex) = 0;
    virtual AreaEval* offset(int32_t relFirstRowIx, int32_t relLastRowIx, int32_t relFirstColIx, int32_t relLastColIx) = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual ValueEval* getValue(int32_t rowIndex, int32_t columnIndex) = 0;
    virtual ValueEval* getValue(int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex) = 0;
};

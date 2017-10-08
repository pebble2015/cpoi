// Generated from /POI/java/org/apache/poi/ss/formula/TwoDEval.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

struct poi::ss::formula::TwoDEval
    : public virtual ::poi::ss::formula::eval::ValueEval
{
    virtual ::poi::ss::formula::eval::ValueEval* getValue(int32_t rowIndex, int32_t columnIndex) = 0;
    virtual int32_t getWidth() = 0;
    virtual int32_t getHeight() = 0;
    virtual bool isRow() = 0;
    virtual bool isColumn() = 0;
    virtual TwoDEval* getRow(int32_t rowIndex) = 0;
    virtual TwoDEval* getColumn(int32_t columnIndex) = 0;
    virtual bool isSubTotal(int32_t rowIndex, int32_t columnIndex) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

// Generated from /POI/java/org/apache/poi/ss/formula/ThreeDEval.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/SheetRange.hpp>

struct poi::ss::formula::ThreeDEval
    : public virtual TwoDEval
    , public virtual SheetRange
{
    virtual ::poi::ss::formula::eval::ValueEval* getValue(int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex) = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual ::poi::ss::formula::eval::ValueEval* getValue(int32_t rowIndex, int32_t columnIndex) = 0;
};

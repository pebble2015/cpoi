// Generated from /POI/java/org/apache/poi/ss/formula/eval/NumericValueEval.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

struct poi::ss::formula::eval::NumericValueEval
    : public virtual ValueEval
{
    virtual double getNumberValue() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

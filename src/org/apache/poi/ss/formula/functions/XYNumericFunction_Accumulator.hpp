// Generated from /POI/java/org/apache/poi/ss/formula/functions/XYNumericFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::formula::functions::XYNumericFunction_Accumulator
    : public virtual ::java::lang::Object
{
    virtual double accumulate(double x, double y) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

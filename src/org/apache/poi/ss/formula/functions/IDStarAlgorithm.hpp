// Generated from /POI/java/org/apache/poi/ss/formula/functions/IDStarAlgorithm.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::formula::functions::IDStarAlgorithm
    : public virtual ::java::lang::Object
{
    virtual bool processMatch(::poi::ss::formula::eval::ValueEval* eval) = 0;
    virtual ::poi::ss::formula::eval::ValueEval* getResult() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

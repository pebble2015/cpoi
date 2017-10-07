// Generated from /POI/java/org/apache/poi/ss/formula/functions/CountUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils_I_MatchPredicate.hpp>

struct org::apache::poi::ss::formula::functions::CountUtils_I_MatchAreaPredicate
    : public virtual CountUtils_I_MatchPredicate
{
    virtual bool matches(::org::apache::poi::ss::formula::TwoDEval* x, int32_t rowIndex, int32_t columnIndex) = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual bool matches(::org::apache::poi::ss::formula::eval::ValueEval* x) = 0;
};

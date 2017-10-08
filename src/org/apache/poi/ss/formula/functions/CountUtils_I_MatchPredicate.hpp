// Generated from /POI/java/org/apache/poi/ss/formula/functions/CountUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::formula::functions::CountUtils_I_MatchPredicate
    : public virtual ::java::lang::Object
{
    virtual bool matches(::poi::ss::formula::eval::ValueEval* x) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

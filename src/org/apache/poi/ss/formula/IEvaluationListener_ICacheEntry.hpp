// Generated from /POI/java/org/apache/poi/ss/formula/IEvaluationListener.java

#pragma once

#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::formula::IEvaluationListener_ICacheEntry
    : public virtual ::java::lang::Object
{
    virtual ::poi::ss::formula::eval::ValueEval* getValue() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

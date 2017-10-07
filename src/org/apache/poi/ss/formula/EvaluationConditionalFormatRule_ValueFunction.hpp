// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::formula::EvaluationConditionalFormatRule_ValueFunction
    : public virtual ::java::lang::Object
{
    virtual ::java::util::Set* evaluate(::java::util::List* values) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

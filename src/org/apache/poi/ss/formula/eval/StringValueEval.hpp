// Generated from /POI/java/org/apache/poi/ss/formula/eval/StringValueEval.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

struct org::apache::poi::ss::formula::eval::StringValueEval
    : public virtual ValueEval
{
    virtual ::java::lang::String* getStringValue() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java

#pragma once

#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::formula::functions::LookupUtils_LookupValueComparer
    : public virtual ::java::lang::Object
{
    virtual LookupUtils_CompareResult* compareTo(::org::apache::poi::ss::formula::eval::ValueEval* other) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

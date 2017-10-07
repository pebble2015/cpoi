// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::formula::functions::LookupUtils_ValueVector
    : public virtual ::java::lang::Object
{
    virtual ::org::apache::poi::ss::formula::eval::ValueEval* getItem(int32_t index) = 0;
    virtual int32_t getSize() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

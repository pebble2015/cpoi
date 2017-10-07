// Generated from /POI/java/org/apache/poi/ss/formula/WorkbookEvaluatorProvider.java

#pragma once

#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::formula::WorkbookEvaluatorProvider
    : public virtual ::java::lang::Object
{
    virtual WorkbookEvaluator* _getWorkbookEvaluator() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

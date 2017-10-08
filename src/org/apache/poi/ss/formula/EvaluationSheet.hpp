// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationSheet.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::formula::EvaluationSheet
    : public virtual ::java::lang::Object
{
    virtual EvaluationCell* getCell(int32_t rowIndex, int32_t columnIndex) = 0;
    virtual void clearAllCachedResultValues() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

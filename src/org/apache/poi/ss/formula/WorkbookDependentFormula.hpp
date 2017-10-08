// Generated from /POI/java/org/apache/poi/ss/formula/WorkbookDependentFormula.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::formula::WorkbookDependentFormula
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* toFormulaString(FormulaRenderingWorkbook* book) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Pxg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::formula::ptg::Pxg
    : public virtual ::java::lang::Object
{
    virtual int32_t getExternalWorkbookNumber() = 0;
    virtual ::java::lang::String* getSheetName() = 0;
    virtual void setSheetName(::java::lang::String* sheetName) = 0;
    virtual ::java::lang::String* toFormulaString() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

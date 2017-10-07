// Generated from /POI/java/org/apache/poi/ss/formula/FormulaRenderingWorkbook.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::formula::FormulaRenderingWorkbook
    : public virtual ::java::lang::Object
{
    virtual EvaluationWorkbook_ExternalSheet* getExternalSheet(int32_t externSheetIndex) = 0;
    virtual ::java::lang::String* getSheetFirstNameByExternSheet(int32_t externSheetIndex) = 0;
    virtual ::java::lang::String* getSheetLastNameByExternSheet(int32_t externSheetIndex) = 0;
    virtual ::java::lang::String* resolveNameXText(::org::apache::poi::ss::formula::ptg::NameXPtg* nameXPtg) = 0;
    virtual ::java::lang::String* getNameText(::org::apache::poi::ss::formula::ptg::NamePtg* namePtg) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

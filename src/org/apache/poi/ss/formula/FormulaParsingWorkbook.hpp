// Generated from /POI/java/org/apache/poi/ss/formula/FormulaParsingWorkbook.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::formula::FormulaParsingWorkbook
    : public virtual ::java::lang::Object
{
    virtual EvaluationName* getName(::java::lang::String* name, int32_t sheetIndex) = 0;
    virtual ::poi::ss::usermodel::Name* createName() = 0;
    virtual ::poi::ss::usermodel::Table* getTable(::java::lang::String* name) = 0;
    virtual ::poi::ss::formula::ptg::Ptg* getNameXPtg(::java::lang::String* name, SheetIdentifier* sheet) = 0;
    virtual ::poi::ss::formula::ptg::Ptg* get3DReferencePtg(::poi::ss::util::CellReference* cell, SheetIdentifier* sheet) = 0;
    virtual ::poi::ss::formula::ptg::Ptg* get3DReferencePtg(::poi::ss::util::AreaReference* area, SheetIdentifier* sheet) = 0;
    virtual int32_t getExternalSheetIndex(::java::lang::String* sheetName) = 0;
    virtual int32_t getExternalSheetIndex(::java::lang::String* workbookName, ::java::lang::String* sheetName) = 0;
    virtual ::poi::ss::SpreadsheetVersion* getSpreadsheetVersion() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

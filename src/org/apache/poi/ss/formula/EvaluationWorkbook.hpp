// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationWorkbook.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

struct poi::ss::formula::EvaluationWorkbook
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* getSheetName(int32_t sheetIndex) = 0;
    virtual int32_t getSheetIndex(EvaluationSheet* sheet) = 0;
    virtual int32_t getSheetIndex(::java::lang::String* sheetName) = 0;
    virtual EvaluationSheet* getSheet(int32_t sheetIndex) = 0;
    virtual EvaluationWorkbook_ExternalSheet* getExternalSheet(int32_t externSheetIndex) = 0;
    virtual EvaluationWorkbook_ExternalSheet* getExternalSheet(::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName, int32_t externalWorkbookNumber) = 0;
    virtual int32_t convertFromExternSheetIndex(int32_t externSheetIndex) = 0;
    virtual EvaluationWorkbook_ExternalName* getExternalName(int32_t externSheetIndex, int32_t externNameIndex) = 0;
    virtual EvaluationWorkbook_ExternalName* getExternalName(::java::lang::String* nameName, ::java::lang::String* sheetName, int32_t externalWorkbookNumber) = 0;
    virtual EvaluationName* getName(::poi::ss::formula::ptg::NamePtg* namePtg) = 0;
    virtual EvaluationName* getName(::java::lang::String* name, int32_t sheetIndex) = 0;
    virtual ::java::lang::String* resolveNameXText(::poi::ss::formula::ptg::NameXPtg* ptg) = 0;
    virtual ::poi::ss::formula::ptg::PtgArray* getFormulaTokens(EvaluationCell* cell) = 0;
    virtual ::poi::ss::formula::udf::UDFFinder* getUDFFinder() = 0;
    virtual ::poi::ss::SpreadsheetVersion* getSpreadsheetVersion() = 0;
    virtual void clearAllCachedResultValues() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

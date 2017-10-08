// Generated from /POI/java/org/apache/poi/ss/formula/eval/forked/ForkedEvaluationWorkbook.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/forked/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook.hpp>

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

struct default_init_tag;

class poi::ss::formula::eval::forked::ForkedEvaluationWorkbook final
    : public virtual ::java::lang::Object
    , public ::poi::ss::formula::EvaluationWorkbook
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::ss::formula::EvaluationWorkbook* _masterBook {  };
    ::java::util::Map* _sharedSheetsByName {  };
protected:
    void ctor(::poi::ss::formula::EvaluationWorkbook* master);

public:
    ForkedEvaluationCell* getOrCreateUpdatableCell(::java::lang::String* sheetName, int32_t rowIndex, int32_t columnIndex);
    ::poi::ss::formula::EvaluationCell* getEvaluationCell(::java::lang::String* sheetName, int32_t rowIndex, int32_t columnIndex);

private:
    ForkedEvaluationSheet* getSharedSheet(::java::lang::String* sheetName);

public:
    void copyUpdatedCells(::poi::ss::usermodel::Workbook* workbook);
    int32_t convertFromExternSheetIndex(int32_t externSheetIndex) override;
    ::poi::ss::formula::EvaluationWorkbook_ExternalSheet* getExternalSheet(int32_t externSheetIndex) override;
    ::poi::ss::formula::EvaluationWorkbook_ExternalSheet* getExternalSheet(::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName, int32_t externalWorkbookNumber) override;
    ::poi::ss::formula::ptg::PtgArray* getFormulaTokens(::poi::ss::formula::EvaluationCell* cell) override;
    ::poi::ss::formula::EvaluationName* getName(::poi::ss::formula::ptg::NamePtg* namePtg) override;
    ::poi::ss::formula::EvaluationName* getName(::java::lang::String* name, int32_t sheetIndex) override;
    ::poi::ss::formula::EvaluationSheet* getSheet(int32_t sheetIndex) override;
    ::poi::ss::formula::EvaluationWorkbook_ExternalName* getExternalName(int32_t externSheetIndex, int32_t externNameIndex) override;
    ::poi::ss::formula::EvaluationWorkbook_ExternalName* getExternalName(::java::lang::String* nameName, ::java::lang::String* sheetName, int32_t externalWorkbookNumber) override;
    int32_t getSheetIndex(::poi::ss::formula::EvaluationSheet* sheet) override;
    int32_t getSheetIndex(::java::lang::String* sheetName) override;
    ::java::lang::String* getSheetName(int32_t sheetIndex) override;
    ::java::lang::String* resolveNameXText(::poi::ss::formula::ptg::NameXPtg* ptg) override;
    ::poi::ss::formula::udf::UDFFinder* getUDFFinder() override;
    ::poi::ss::SpreadsheetVersion* getSpreadsheetVersion() override;
    void clearAllCachedResultValues() override;

    // Generated
    ForkedEvaluationWorkbook(::poi::ss::formula::EvaluationWorkbook* master);
protected:
    ForkedEvaluationWorkbook(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

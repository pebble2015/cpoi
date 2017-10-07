// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFEvaluationWorkbook.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/FormulaRenderingWorkbook.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook.hpp>
#include <org/apache/poi/ss/formula/FormulaParsingWorkbook.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFName.hpp>
#include <org/apache/poi/ss/formula/ptg/NameXPtg.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::formula::FormulaRenderingWorkbook
    , public ::org::apache::poi::ss::formula::EvaluationWorkbook
    , public ::org::apache::poi::ss::formula::FormulaParsingWorkbook
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFWorkbook* _uBook {  };
    ::org::apache::poi::hssf::model::InternalWorkbook* _iBook {  };

public:
    static HSSFEvaluationWorkbook* create(HSSFWorkbook* book);
protected:
    void ctor(HSSFWorkbook* book);

public:
    void clearAllCachedResultValues() override;
    HSSFName* createName() override;
    int32_t getExternalSheetIndex(::java::lang::String* sheetName) override;
    int32_t getExternalSheetIndex(::java::lang::String* workbookName, ::java::lang::String* sheetName) override;
    ::org::apache::poi::ss::formula::ptg::Ptg* get3DReferencePtg(::org::apache::poi::ss::util::CellReference* cr, ::org::apache::poi::ss::formula::SheetIdentifier* sheet) override;
    ::org::apache::poi::ss::formula::ptg::Ptg* get3DReferencePtg(::org::apache::poi::ss::util::AreaReference* areaRef, ::org::apache::poi::ss::formula::SheetIdentifier* sheet) override;
    ::org::apache::poi::ss::formula::ptg::NameXPtg* getNameXPtg(::java::lang::String* name, ::org::apache::poi::ss::formula::SheetIdentifier* sheet) override;
    ::org::apache::poi::ss::formula::EvaluationName* getName(::java::lang::String* name, int32_t sheetIndex) override;
    int32_t getSheetIndex(::org::apache::poi::ss::formula::EvaluationSheet* evalSheet) override;
    int32_t getSheetIndex(::java::lang::String* sheetName) override;
    ::java::lang::String* getSheetName(int32_t sheetIndex) override;
    ::org::apache::poi::ss::formula::EvaluationSheet* getSheet(int32_t sheetIndex) override;
    int32_t convertFromExternSheetIndex(int32_t externSheetIndex) override;
    ::org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheet* getExternalSheet(int32_t externSheetIndex) override;
    ::org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheet* getExternalSheet(::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName, int32_t externalWorkbookNumber) override;
    ::org::apache::poi::ss::formula::EvaluationWorkbook_ExternalName* getExternalName(int32_t externSheetIndex, int32_t externNameIndex) override;
    ::org::apache::poi::ss::formula::EvaluationWorkbook_ExternalName* getExternalName(::java::lang::String* nameName, ::java::lang::String* sheetName, int32_t externalWorkbookNumber) override;
    ::java::lang::String* resolveNameXText(::org::apache::poi::ss::formula::ptg::NameXPtg* n) override;
    ::java::lang::String* getSheetFirstNameByExternSheet(int32_t externSheetIndex) override;
    ::java::lang::String* getSheetLastNameByExternSheet(int32_t externSheetIndex) override;
    ::java::lang::String* getNameText(::org::apache::poi::ss::formula::ptg::NamePtg* namePtg) override;
    ::org::apache::poi::ss::formula::EvaluationName* getName(::org::apache::poi::ss::formula::ptg::NamePtg* namePtg) override;
    ::org::apache::poi::ss::formula::ptg::PtgArray* getFormulaTokens(::org::apache::poi::ss::formula::EvaluationCell* evalCell) override;
    ::org::apache::poi::ss::formula::udf::UDFFinder* getUDFFinder() override;

private:
    int32_t getSheetExtIx(::org::apache::poi::ss::formula::SheetIdentifier* sheetIden);

public:
    ::org::apache::poi::ss::SpreadsheetVersion* getSpreadsheetVersion() override;
    ::org::apache::poi::ss::usermodel::Table* getTable(::java::lang::String* name) override;

    // Generated

private:
    HSSFEvaluationWorkbook(HSSFWorkbook* book);
protected:
    HSSFEvaluationWorkbook(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HSSFEvaluationWorkbook_Name;
};

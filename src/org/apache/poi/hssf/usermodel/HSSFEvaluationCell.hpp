// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFEvaluationCell.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/EvaluationCell.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFEvaluationCell final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::formula::EvaluationCell
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::ss::formula::EvaluationSheet* _evalSheet {  };
    HSSFCell* _cell {  };
protected:
    void ctor(HSSFCell* cell, ::org::apache::poi::ss::formula::EvaluationSheet* evalSheet);
    void ctor(HSSFCell* cell);

public:
    ::java::lang::Object* getIdentityKey() override;
    HSSFCell* getHSSFCell();
    bool getBooleanCellValue() override;
    int32_t getCellType() override;
    ::org::apache::poi::ss::usermodel::CellType* getCellTypeEnum() override;
    int32_t getColumnIndex() override;
    int32_t getErrorCellValue() override;
    double getNumericCellValue() override;
    int32_t getRowIndex() override;
    ::org::apache::poi::ss::formula::EvaluationSheet* getSheet() override;
    ::java::lang::String* getStringCellValue() override;
    int32_t getCachedFormulaResultType() override;
    ::org::apache::poi::ss::usermodel::CellType* getCachedFormulaResultTypeEnum() override;

    // Generated
    HSSFEvaluationCell(HSSFCell* cell, ::org::apache::poi::ss::formula::EvaluationSheet* evalSheet);
    HSSFEvaluationCell(HSSFCell* cell);
protected:
    HSSFEvaluationCell(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

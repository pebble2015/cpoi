// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationCell.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::formula::EvaluationCell
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::Object* getIdentityKey() = 0;
    virtual EvaluationSheet* getSheet() = 0;
    virtual int32_t getRowIndex() = 0;
    virtual int32_t getColumnIndex() = 0;
    virtual int32_t getCellType() = 0;
    virtual ::org::apache::poi::ss::usermodel::CellType* getCellTypeEnum() = 0;
    virtual double getNumericCellValue() = 0;
    virtual ::java::lang::String* getStringCellValue() = 0;
    virtual bool getBooleanCellValue() = 0;
    virtual int32_t getErrorCellValue() = 0;
    virtual int32_t getCachedFormulaResultType() = 0;
    virtual ::org::apache::poi::ss::usermodel::CellType* getCachedFormulaResultTypeEnum() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

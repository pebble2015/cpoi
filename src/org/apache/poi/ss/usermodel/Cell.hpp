// Generated from /POI/java/org/apache/poi/ss/usermodel/Cell.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::Cell
    : public virtual ::java::lang::Object
{
    static constexpr int32_t CELL_TYPE_NUMERIC { int32_t(0) };
    static constexpr int32_t CELL_TYPE_STRING { int32_t(1) };
    static constexpr int32_t CELL_TYPE_FORMULA { int32_t(2) };
    static constexpr int32_t CELL_TYPE_BLANK { int32_t(3) };
    static constexpr int32_t CELL_TYPE_BOOLEAN { int32_t(4) };
    static constexpr int32_t CELL_TYPE_ERROR { int32_t(5) };
    virtual int32_t getColumnIndex() = 0;
    virtual int32_t getRowIndex() = 0;
    virtual Sheet* getSheet() = 0;
    virtual Row* getRow() = 0;
    virtual void setCellType(int32_t cellType) = 0;
    virtual void setCellType(CellType* cellType) = 0;
    virtual int32_t getCellType() = 0;
    virtual CellType* getCellTypeEnum() = 0;
    virtual int32_t getCachedFormulaResultType() = 0;
    virtual CellType* getCachedFormulaResultTypeEnum() = 0;
    virtual void setCellValue(double value) = 0;
    virtual void setCellValue(::java::util::Date* value) = 0;
    virtual void setCellValue(::java::util::Calendar* value) = 0;
    virtual void setCellValue(RichTextString* value) = 0;
    virtual void setCellValue(::java::lang::String* value) = 0;
    virtual void setCellFormula(::java::lang::String* formula) /* throws(FormulaParseException) */ = 0;
    virtual ::java::lang::String* getCellFormula() = 0;
    virtual double getNumericCellValue() = 0;
    virtual ::java::util::Date* getDateCellValue() = 0;
    virtual RichTextString* getRichStringCellValue() = 0;
    virtual ::java::lang::String* getStringCellValue() = 0;
    virtual void setCellValue(bool value) = 0;
    virtual void setCellErrorValue(int8_t value) = 0;
    virtual bool getBooleanCellValue() = 0;
    virtual int8_t getErrorCellValue() = 0;
    virtual void setCellStyle(CellStyle* style) = 0;
    virtual CellStyle* getCellStyle() = 0;
    virtual void setAsActiveCell() = 0;
    virtual ::poi::ss::util::CellAddress* getAddress() = 0;
    virtual void setCellComment(Comment* comment) = 0;
    virtual Comment* getCellComment() = 0;
    virtual void removeCellComment() = 0;
    virtual Hyperlink* getHyperlink() = 0;
    virtual void setHyperlink(Hyperlink* link) = 0;
    virtual void removeHyperlink() = 0;
    virtual ::poi::ss::util::CellRangeAddress* getArrayFormulaRange() = 0;
    virtual bool isPartOfArrayFormulaGroup() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

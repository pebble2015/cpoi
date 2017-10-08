// Generated from /POI/java/org/apache/poi/ss/usermodel/Row.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Iterable.hpp>

struct poi::ss::usermodel::Row
    : public virtual ::java::lang::Iterable
{
    virtual Cell* createCell(int32_t column) = 0;
    virtual Cell* createCell(int32_t column, int32_t type) = 0;
    virtual Cell* createCell(int32_t column, CellType* type) = 0;
    virtual void removeCell(Cell* cell) = 0;
    virtual void setRowNum(int32_t rowNum) = 0;
    virtual int32_t getRowNum() = 0;
    virtual Cell* getCell(int32_t cellnum) = 0;
    virtual Cell* getCell(int32_t cellnum, Row_MissingCellPolicy* policy) = 0;
    virtual int16_t getFirstCellNum() = 0;
    virtual int16_t getLastCellNum() = 0;
    virtual int32_t getPhysicalNumberOfCells() = 0;
    virtual void setHeight(int16_t height) = 0;
    virtual void setZeroHeight(bool zHeight) = 0;
    virtual bool getZeroHeight() = 0;
    virtual void setHeightInPoints(float height) = 0;
    virtual int16_t getHeight() = 0;
    virtual float getHeightInPoints() = 0;
    virtual bool isFormatted() = 0;
    virtual CellStyle* getRowStyle() = 0;
    virtual void setRowStyle(CellStyle* style) = 0;
    virtual ::java::util::Iterator* cellIterator() = 0;
    virtual Sheet* getSheet() = 0;
    virtual int32_t getOutlineLevel() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

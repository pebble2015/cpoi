// Generated from /POI/java/org/apache/poi/hssf/record/CellValueRecordInterface.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::hssf::record::CellValueRecordInterface
    : public virtual ::java::lang::Object
{
    virtual int32_t getRow() = 0;
    virtual int16_t getColumn() = 0;
    virtual void setRow(int32_t row) = 0;
    virtual void setColumn(int16_t col) = 0;
    virtual void setXFIndex(int16_t xf) = 0;
    virtual int16_t getXFIndex() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

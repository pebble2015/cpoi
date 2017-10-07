// Generated from /POI/java/org/apache/poi/ss/usermodel/Hyperlink.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/Hyperlink.hpp>

struct org::apache::poi::ss::usermodel::Hyperlink
    : public virtual ::org::apache::poi::common::usermodel::Hyperlink
{
    virtual int32_t getFirstRow() = 0;
    virtual void setFirstRow(int32_t row) = 0;
    virtual int32_t getLastRow() = 0;
    virtual void setLastRow(int32_t row) = 0;
    virtual int32_t getFirstColumn() = 0;
    virtual void setFirstColumn(int32_t col) = 0;
    virtual int32_t getLastColumn() = 0;
    virtual void setLastColumn(int32_t col) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

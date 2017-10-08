// Generated from /POI/java/org/apache/poi/ss/usermodel/Table.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::Table
    : public virtual ::java::lang::Object
{

private:
    static ::java::util::regex::Pattern* isStructuredReference_;

public:
    virtual int32_t getStartColIndex() = 0;
    virtual int32_t getStartRowIndex() = 0;
    virtual int32_t getEndColIndex() = 0;
    virtual int32_t getEndRowIndex() = 0;
    virtual ::java::lang::String* getName() = 0;
    virtual ::java::lang::String* getStyleName() = 0;
    virtual int32_t findColumnIndex(::java::lang::String* columnHeader) = 0;
    virtual ::java::lang::String* getSheetName() = 0;
    virtual bool isHasTotalsRow() = 0;
    virtual int32_t getTotalsRowCount() = 0;
    virtual int32_t getHeaderRowCount() = 0;
    virtual TableStyleInfo* getStyle() = 0;
    virtual bool contains(Cell* cell) = 0;

    // Generated
    static ::java::lang::Class *class_();
    static ::java::util::regex::Pattern*& isStructuredReference();
};

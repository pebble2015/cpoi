// Generated from /POI/java/org/apache/poi/ss/usermodel/Name.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::Name
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* getSheetName() = 0;
    virtual ::java::lang::String* getNameName() = 0;
    virtual void setNameName(::java::lang::String* name) = 0;
    virtual ::java::lang::String* getRefersToFormula() = 0;
    virtual void setRefersToFormula(::java::lang::String* formulaText) = 0;
    virtual bool isFunctionName() = 0;
    virtual bool isDeleted() = 0;
    virtual void setSheetIndex(int32_t sheetId) = 0;
    virtual int32_t getSheetIndex() = 0;
    virtual ::java::lang::String* getComment() = 0;
    virtual void setComment(::java::lang::String* comment) = 0;
    virtual void setFunction(bool value) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

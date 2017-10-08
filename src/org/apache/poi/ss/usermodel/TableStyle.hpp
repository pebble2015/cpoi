// Generated from /POI/java/org/apache/poi/ss/usermodel/TableStyle.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::TableStyle
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* getName() = 0;
    virtual int32_t getIndex() = 0;
    virtual bool isBuiltin() = 0;
    virtual DifferentialStyleProvider* getStyle(TableStyleType* type) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

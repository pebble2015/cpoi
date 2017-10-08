// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormat.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::DataFormat
    : public virtual ::java::lang::Object
{
    virtual int16_t getFormat(::java::lang::String* format) = 0;
    virtual ::java::lang::String* getFormat(int16_t index) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

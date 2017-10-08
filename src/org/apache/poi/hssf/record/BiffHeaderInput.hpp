// Generated from /POI/java/org/apache/poi/hssf/record/BiffHeaderInput.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::hssf::record::BiffHeaderInput
    : public virtual ::java::lang::Object
{
    virtual int32_t readRecordSID() = 0;
    virtual int32_t readDataSize() = 0;
    virtual int32_t available() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

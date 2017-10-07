// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AreaI.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::formula::ptg::AreaI
    : public virtual ::java::lang::Object
{
    virtual int32_t getFirstRow() = 0;
    virtual int32_t getLastRow() = 0;
    virtual int32_t getFirstColumn() = 0;
    virtual int32_t getLastColumn() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

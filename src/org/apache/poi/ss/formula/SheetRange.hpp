// Generated from /POI/java/org/apache/poi/ss/formula/SheetRange.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::formula::SheetRange
    : public virtual ::java::lang::Object
{
    virtual int32_t getFirstSheetIndex() = 0;
    virtual int32_t getLastSheetIndex() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

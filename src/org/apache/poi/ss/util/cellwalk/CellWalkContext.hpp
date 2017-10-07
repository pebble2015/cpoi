// Generated from /POI/java/org/apache/poi/ss/util/cellwalk/CellWalkContext.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/util/cellwalk/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::util::cellwalk::CellWalkContext
    : public virtual ::java::lang::Object
{
    virtual int64_t getOrdinalNumber() = 0;
    virtual int32_t getRowNumber() = 0;
    virtual int32_t getColumnNumber() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

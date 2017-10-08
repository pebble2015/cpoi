// Generated from /POI/java/org/apache/poi/util/DelayableLittleEndianOutput.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

struct poi::util::DelayableLittleEndianOutput
    : public virtual LittleEndianOutput
{
    virtual LittleEndianOutput* createDelayedOutput(int32_t size) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

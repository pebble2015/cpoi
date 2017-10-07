// Generated from /POI/java/org/apache/poi/hssf/record/common/SharedFeature.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::hssf::record::common::SharedFeature
    : public virtual ::java::lang::Object
{
    /*virtual ::java::lang::String* toString(); (already declared) */
    virtual void serialize(::org::apache::poi::util::LittleEndianOutput* out) = 0;
    virtual int32_t getDataSize() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

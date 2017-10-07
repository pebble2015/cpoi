// Generated from /POI/java/org/apache/poi/ddf/EscherRecordFactory.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ddf::EscherRecordFactory
    : public virtual ::java::lang::Object
{
    virtual EscherRecord* createRecord(::int8_tArray* data, int32_t offset) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

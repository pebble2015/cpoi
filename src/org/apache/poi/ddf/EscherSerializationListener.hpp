// Generated from /POI/java/org/apache/poi/ddf/EscherSerializationListener.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ddf::EscherSerializationListener
    : public virtual ::java::lang::Object
{
    virtual void beforeRecordSerialize(int32_t offset, int16_t recordId, EscherRecord* record) = 0;
    virtual void afterRecordSerialize(int32_t offset, int16_t recordId, int32_t size, EscherRecord* record) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

// Generated from /POI/java/org/apache/poi/hssf/dev/BiffViewer.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/dev/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::hssf::dev::BiffViewer_IBiffRecordListener
    : public virtual ::java::lang::Object
{
    virtual void processRecord(int32_t globalOffset, int32_t recordCounter, int32_t sid, int32_t dataSize, ::int8_tArray* data) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

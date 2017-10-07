// Generated from /POI/java/org/apache/poi/hssf/record/common/FutureRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::hssf::record::common::FutureRecord
    : public virtual ::java::lang::Object
{
    virtual int16_t getFutureRecordType() = 0;
    virtual FtrHeader* getFutureHeader() = 0;
    virtual ::org::apache::poi::ss::util::CellRangeAddress* getAssociatedRange() = 0;

    // Generated
    static ::java::lang::Class *class_();
};

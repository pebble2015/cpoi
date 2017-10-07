// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/RecordAggregate.java

#pragma once

#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordVisitor
    : public virtual ::java::lang::Object
{
    virtual void visitRecord(::org::apache::poi::hssf::record::Record* r) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/RecordAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::aggregates::RecordAggregate
    : public ::org::apache::poi::hssf::record::RecordBase
{

public:
    typedef ::org::apache::poi::hssf::record::RecordBase super;
    virtual void visitContainedRecords(RecordAggregate_RecordVisitor* rv) = 0;
    int32_t serialize(int32_t offset, ::int8_tArray* data) override;
    int32_t getRecordSize() override;

    // Generated
    RecordAggregate();
protected:
    RecordAggregate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class RecordAggregate_RecordVisitor;
    friend class RecordAggregate_SerializingRecordVisitor;
    friend class RecordAggregate_RecordSizingVisitor;
    friend class RecordAggregate_PositionTrackingVisitor;
};

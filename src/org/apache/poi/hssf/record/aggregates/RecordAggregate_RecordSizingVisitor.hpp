// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/RecordAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordSizingVisitor final
    : public virtual ::java::lang::Object
    , public RecordAggregate_RecordVisitor
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _totalSize {  };
protected:
    void ctor();

public:
    int32_t getTotalSize();
    void visitRecord(::org::apache::poi::hssf::record::Record* r) override;

    // Generated
    RecordAggregate_RecordSizingVisitor();
protected:
    RecordAggregate_RecordSizingVisitor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class RecordAggregate;
    friend class RecordAggregate_RecordVisitor;
    friend class RecordAggregate_SerializingRecordVisitor;
    friend class RecordAggregate_PositionTrackingVisitor;
};

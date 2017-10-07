// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/RecordAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::aggregates::RecordAggregate_SerializingRecordVisitor final
    : public virtual ::java::lang::Object
    , public RecordAggregate_RecordVisitor
{

public:
    typedef ::java::lang::Object super;

private:
    ::int8_tArray* _data {  };
    int32_t _startOffset {  };
    int32_t _countBytesWritten {  };
protected:
    void ctor(::int8_tArray* data, int32_t startOffset);

public:
    int32_t countBytesWritten();
    void visitRecord(::org::apache::poi::hssf::record::Record* r) override;

    // Generated
    RecordAggregate_SerializingRecordVisitor(::int8_tArray* data, int32_t startOffset);
protected:
    RecordAggregate_SerializingRecordVisitor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class RecordAggregate;
    friend class RecordAggregate_RecordVisitor;
    friend class RecordAggregate_RecordSizingVisitor;
    friend class RecordAggregate_PositionTrackingVisitor;
};

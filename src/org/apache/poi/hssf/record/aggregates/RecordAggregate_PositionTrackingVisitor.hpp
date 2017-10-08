// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/RecordAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>

struct default_init_tag;

class poi::hssf::record::aggregates::RecordAggregate_PositionTrackingVisitor final
    : public virtual ::java::lang::Object
    , public RecordAggregate_RecordVisitor
{

public:
    typedef ::java::lang::Object super;

private:
    RecordAggregate_RecordVisitor* _rv {  };
    int32_t _position {  };
protected:
    void ctor(RecordAggregate_RecordVisitor* rv, int32_t initialPosition);

public:
    void visitRecord(::poi::hssf::record::Record* r) override;
    void setPosition(int32_t position);
    int32_t getPosition();

    // Generated
    RecordAggregate_PositionTrackingVisitor(RecordAggregate_RecordVisitor* rv, int32_t initialPosition);
protected:
    RecordAggregate_PositionTrackingVisitor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class RecordAggregate;
    friend class RecordAggregate_RecordVisitor;
    friend class RecordAggregate_SerializingRecordVisitor;
    friend class RecordAggregate_RecordSizingVisitor;
};

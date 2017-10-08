// Generated from /POI/java/org/apache/poi/hssf/record/EscherAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ddf/EscherSerializationListener.hpp>

struct default_init_tag;

class poi::hssf::record::EscherAggregate_getRecordSize_3
    : public virtual ::java::lang::Object
    , public virtual ::poi::ddf::EscherSerializationListener
{

public:
    typedef ::java::lang::Object super;
    void beforeRecordSerialize(int32_t offset, int16_t recordId, ::poi::ddf::EscherRecord* record) override;
    void afterRecordSerialize(int32_t offset, int16_t recordId, int32_t size, ::poi::ddf::EscherRecord* record) override;

    // Generated
    EscherAggregate_getRecordSize_3(EscherAggregate *EscherAggregate_this, ::java::util::List* spEndingOffsets);
    static ::java::lang::Class *class_();
    EscherAggregate *EscherAggregate_this;
    ::java::util::List* spEndingOffsets;

private:
    virtual ::java::lang::Class* getClass0();
    friend class EscherAggregate;
    friend class EscherAggregate_createAggregate_1;
    friend class EscherAggregate_serialize_2;
};

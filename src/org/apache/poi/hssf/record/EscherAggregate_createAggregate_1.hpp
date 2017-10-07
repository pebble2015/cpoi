// Generated from /POI/java/org/apache/poi/hssf/record/EscherAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ddf/DefaultEscherRecordFactory.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::EscherAggregate_createAggregate_1
    : public ::org::apache::poi::ddf::DefaultEscherRecordFactory
{

public:
    typedef ::org::apache::poi::ddf::DefaultEscherRecordFactory super;
    ::org::apache::poi::ddf::EscherRecord* createRecord(::int8_tArray* data, int32_t offset) override;

    // Generated
    EscherAggregate_createAggregate_1(::java::util::List* shapeRecords);
    static ::java::lang::Class *class_();
    ::java::util::List* shapeRecords;

private:
    virtual ::java::lang::Class* getClass0();
    friend class EscherAggregate;
    friend class EscherAggregate_serialize_2;
    friend class EscherAggregate_getRecordSize_3;
};

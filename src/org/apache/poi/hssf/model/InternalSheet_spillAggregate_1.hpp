// Generated from /POI/java/org/apache/poi/hssf/model/InternalSheet.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>

struct default_init_tag;

class org::apache::poi::hssf::model::InternalSheet_spillAggregate_1
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordVisitor
{

public:
    typedef ::java::lang::Object super;
    void visitRecord(::org::apache::poi::hssf::record::Record* r) override;

    // Generated
    InternalSheet_spillAggregate_1(::java::util::List* recs);
    static ::java::lang::Class *class_();
    ::java::util::List* recs;

private:
    virtual ::java::lang::Class* getClass0();
    friend class InternalSheet;
    friend class InternalSheet_UnsupportedBOFType;
    friend class InternalSheet_RecordCloner;
};

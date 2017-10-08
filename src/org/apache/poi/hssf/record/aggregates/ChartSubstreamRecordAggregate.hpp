// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/ChartSubstreamRecordAggregate.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

struct default_init_tag;

class poi::hssf::record::aggregates::ChartSubstreamRecordAggregate final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    ::poi::hssf::record::BOFRecord* _bofRec {  };
    ::java::util::List* _recs {  };
    PageSettingsBlock* _psBlock {  };
protected:
    void ctor(::poi::hssf::model::RecordStream* rs);

public:
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;

    // Generated
    ChartSubstreamRecordAggregate(::poi::hssf::model::RecordStream* rs);
protected:
    ChartSubstreamRecordAggregate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

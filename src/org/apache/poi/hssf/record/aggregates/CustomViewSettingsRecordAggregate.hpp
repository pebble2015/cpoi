// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/CustomViewSettingsRecordAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

struct default_init_tag;

class poi::hssf::record::aggregates::CustomViewSettingsRecordAggregate final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    ::poi::hssf::record::Record* _begin {  };
    ::poi::hssf::record::Record* _end {  };
    ::java::util::List* _recs {  };
    PageSettingsBlock* _psBlock {  };
protected:
    void ctor(::poi::hssf::model::RecordStream* rs);

public:
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;
    static bool isBeginRecord(int32_t sid);
    void append(::poi::hssf::record::RecordBase* r);

    // Generated
    CustomViewSettingsRecordAggregate(::poi::hssf::model::RecordStream* rs);
protected:
    CustomViewSettingsRecordAggregate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

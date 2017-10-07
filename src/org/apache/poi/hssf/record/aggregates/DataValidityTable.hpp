// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/DataValidityTable.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::aggregates::DataValidityTable final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    ::org::apache::poi::hssf::record::DVALRecord* _headerRec {  };
    ::java::util::List* _validationList {  };
protected:
    void ctor(::org::apache::poi::hssf::model::RecordStream* rs);
    void ctor();

public:
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;
    void addDataValidation(::org::apache::poi::hssf::record::DVRecord* dvRecord);

    // Generated
    DataValidityTable(::org::apache::poi::hssf::model::RecordStream* rs);
    DataValidityTable();
protected:
    DataValidityTable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

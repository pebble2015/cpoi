// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/PageSettingsBlock.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::aggregates::PageSettingsBlock_positionRecords_1
    : public virtual ::java::lang::Object
    , public virtual RecordAggregate_RecordVisitor
{

public:
    typedef ::java::lang::Object super;
    void visitRecord(::org::apache::poi::hssf::record::Record* r) override;

    // Generated
    PageSettingsBlock_positionRecords_1(PageSettingsBlock *PageSettingsBlock_this, ::java::util::Map* hfGuidMap, CustomViewSettingsRecordAggregate* cv);
    static ::java::lang::Class *class_();
    PageSettingsBlock *PageSettingsBlock_this;
    ::java::util::Map* hfGuidMap;
    CustomViewSettingsRecordAggregate* cv;

private:
    virtual ::java::lang::Class* getClass0();
    friend class PageSettingsBlock;
    friend class PageSettingsBlock_PLSAggregate;
};

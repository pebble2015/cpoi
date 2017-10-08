// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/PageSettingsBlock.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::ContinueRecord, StandardRecordArray, ::java::lang::CloneableArray > ContinueRecordArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::record::aggregates::PageSettingsBlock_PLSAggregate final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    static ::poi::hssf::record::ContinueRecordArray* EMPTY_CONTINUE_RECORD_ARRAY_;
    ::poi::hssf::record::Record* _pls {  };
    ::poi::hssf::record::ContinueRecordArray* _plsContinues {  };
protected:
    void ctor(::poi::hssf::model::RecordStream* rs);

public:
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;

    // Generated
    PageSettingsBlock_PLSAggregate(::poi::hssf::model::RecordStream* rs);
protected:
    PageSettingsBlock_PLSAggregate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::hssf::record::ContinueRecordArray*& EMPTY_CONTINUE_RECORD_ARRAY();
    virtual ::java::lang::Class* getClass0();
    friend class PageSettingsBlock;
    friend class PageSettingsBlock_positionRecords_1;
};

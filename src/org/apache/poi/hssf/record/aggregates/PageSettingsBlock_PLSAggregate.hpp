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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
typedef ::SubArray< ::org::apache::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::ContinueRecord, StandardRecordArray, ::java::lang::CloneableArray > ContinueRecordArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::aggregates::PageSettingsBlock_PLSAggregate final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    static ::org::apache::poi::hssf::record::ContinueRecordArray* EMPTY_CONTINUE_RECORD_ARRAY_;
    ::org::apache::poi::hssf::record::Record* _pls {  };
    ::org::apache::poi::hssf::record::ContinueRecordArray* _plsContinues {  };
protected:
    void ctor(::org::apache::poi::hssf::model::RecordStream* rs);

public:
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;

    // Generated
    PageSettingsBlock_PLSAggregate(::org::apache::poi::hssf::model::RecordStream* rs);
protected:
    PageSettingsBlock_PLSAggregate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::hssf::record::ContinueRecordArray*& EMPTY_CONTINUE_RECORD_ARRAY();
    virtual ::java::lang::Class* getClass0();
    friend class PageSettingsBlock;
    friend class PageSettingsBlock_positionRecords_1;
};

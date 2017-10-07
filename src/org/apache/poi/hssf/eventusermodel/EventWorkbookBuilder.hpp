// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/EventWorkbookBuilder.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
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
typedef ::SubArray< ::org::apache::poi::hssf::record::BoundSheetRecord, StandardRecordArray > BoundSheetRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::ExternSheetRecord, StandardRecordArray > ExternSheetRecordArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::org::apache::poi::hssf::model::InternalWorkbook* createStubWorkbook(::org::apache::poi::hssf::record::ExternSheetRecordArray* externs, ::org::apache::poi::hssf::record::BoundSheetRecordArray* bounds, ::org::apache::poi::hssf::record::SSTRecord* sst);
    static ::org::apache::poi::hssf::model::InternalWorkbook* createStubWorkbook(::org::apache::poi::hssf::record::ExternSheetRecordArray* externs, ::org::apache::poi::hssf::record::BoundSheetRecordArray* bounds);

    // Generated
    EventWorkbookBuilder();
protected:
    EventWorkbookBuilder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class EventWorkbookBuilder_SheetRecordCollectingListener;
};

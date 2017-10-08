// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/EventWorkbookBuilder.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::BoundSheetRecord, StandardRecordArray > BoundSheetRecordArray;
typedef ::SubArray< ::poi::hssf::record::ExternSheetRecord, StandardRecordArray > ExternSheetRecordArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::eventusermodel::EventWorkbookBuilder
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::poi::hssf::model::InternalWorkbook* createStubWorkbook(::poi::hssf::record::ExternSheetRecordArray* externs, ::poi::hssf::record::BoundSheetRecordArray* bounds, ::poi::hssf::record::SSTRecord* sst);
    static ::poi::hssf::model::InternalWorkbook* createStubWorkbook(::poi::hssf::record::ExternSheetRecordArray* externs, ::poi::hssf::record::BoundSheetRecordArray* bounds);

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

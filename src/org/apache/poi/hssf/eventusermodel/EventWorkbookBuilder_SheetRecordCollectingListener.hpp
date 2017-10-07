// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/EventWorkbookBuilder.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFListener.hpp>

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

class org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener
    : public virtual ::java::lang::Object
    , public virtual HSSFListener
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFListener* childListener {  };
    ::java::util::List* boundSheetRecords {  };
    ::java::util::List* externSheetRecords {  };
    ::org::apache::poi::hssf::record::SSTRecord* sstRecord {  };
protected:
    void ctor(HSSFListener* childListener);

public:
    virtual ::org::apache::poi::hssf::record::BoundSheetRecordArray* getBoundSheetRecords();
    virtual ::org::apache::poi::hssf::record::ExternSheetRecordArray* getExternSheetRecords();
    virtual ::org::apache::poi::hssf::record::SSTRecord* getSSTRecord();
    virtual ::org::apache::poi::hssf::usermodel::HSSFWorkbook* getStubHSSFWorkbook();
    virtual ::org::apache::poi::hssf::model::InternalWorkbook* getStubWorkbook();
    void processRecord(::org::apache::poi::hssf::record::Record* record) override;
    virtual void processRecordInternally(::org::apache::poi::hssf::record::Record* record);

    // Generated
    EventWorkbookBuilder_SheetRecordCollectingListener(HSSFListener* childListener);
protected:
    EventWorkbookBuilder_SheetRecordCollectingListener(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class EventWorkbookBuilder;
};

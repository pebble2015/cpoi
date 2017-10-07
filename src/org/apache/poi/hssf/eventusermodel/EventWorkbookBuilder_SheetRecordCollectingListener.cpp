// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/EventWorkbookBuilder.java
#include <org/apache/poi/hssf/eventusermodel/EventWorkbookBuilder_SheetRecordCollectingListener.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/eventusermodel/EventWorkbookBuilder.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFListener.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/BoundSheetRecord.hpp>
#include <org/apache/poi/hssf/record/ExternSheetRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/SSTRecord.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::EventWorkbookBuilder_SheetRecordCollectingListener(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::EventWorkbookBuilder_SheetRecordCollectingListener(HSSFListener* childListener) 
    : EventWorkbookBuilder_SheetRecordCollectingListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(childListener);
}

void org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::init()
{
    boundSheetRecords = new ::java::util::ArrayList();
    externSheetRecords = new ::java::util::ArrayList();
    sstRecord = nullptr;
}

void org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::ctor(HSSFListener* childListener)
{
    super::ctor();
    init();
    this->childListener = childListener;
}

org::apache::poi::hssf::record::BoundSheetRecordArray* org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::getBoundSheetRecords()
{
    return java_cast< ::org::apache::poi::hssf::record::BoundSheetRecordArray* >(npc(boundSheetRecords)->toArray_(static_cast< ::java::lang::ObjectArray* >(new ::org::apache::poi::hssf::record::BoundSheetRecordArray(npc(boundSheetRecords)->size()))));
}

org::apache::poi::hssf::record::ExternSheetRecordArray* org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::getExternSheetRecords()
{
    return java_cast< ::org::apache::poi::hssf::record::ExternSheetRecordArray* >(npc(externSheetRecords)->toArray_(static_cast< ::java::lang::ObjectArray* >(new ::org::apache::poi::hssf::record::ExternSheetRecordArray(npc(externSheetRecords)->size()))));
}

org::apache::poi::hssf::record::SSTRecord* org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::getSSTRecord()
{
    return sstRecord;
}

org::apache::poi::hssf::usermodel::HSSFWorkbook* org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::getStubHSSFWorkbook()
{
    auto wb = ::org::apache::poi::hssf::usermodel::HSSFWorkbook::create(getStubWorkbook());
    for (auto _i = npc(boundSheetRecords)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::BoundSheetRecord* bsr = java_cast< ::org::apache::poi::hssf::record::BoundSheetRecord* >(_i->next());
        {
            java_cast< ::org::apache::poi::hssf::usermodel::HSSFSheet* >(npc(wb)->createSheet(npc(bsr)->getSheetname()));
        }
    }
    return wb;
}

org::apache::poi::hssf::model::InternalWorkbook* org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::getStubWorkbook()
{
    return EventWorkbookBuilder::createStubWorkbook(getExternSheetRecords(), getBoundSheetRecords(), getSSTRecord());
}

void org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::processRecord(::org::apache::poi::hssf::record::Record* record)
{
    processRecordInternally(record);
    npc(childListener)->processRecord(record);
}

void org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::processRecordInternally(::org::apache::poi::hssf::record::Record* record)
{
    if(dynamic_cast< ::org::apache::poi::hssf::record::BoundSheetRecord* >(record) != nullptr) {
        npc(boundSheetRecords)->add(static_cast< ::java::lang::Object* >(java_cast< ::org::apache::poi::hssf::record::BoundSheetRecord* >(record)));
    } else if(dynamic_cast< ::org::apache::poi::hssf::record::ExternSheetRecord* >(record) != nullptr) {
        npc(externSheetRecords)->add(static_cast< ::java::lang::Object* >(java_cast< ::org::apache::poi::hssf::record::ExternSheetRecord* >(record)));
    } else if(dynamic_cast< ::org::apache::poi::hssf::record::SSTRecord* >(record) != nullptr) {
        sstRecord = java_cast< ::org::apache::poi::hssf::record::SSTRecord* >(record);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.EventWorkbookBuilder.SheetRecordCollectingListener", 85);
    return c;
}

java::lang::Class* org::apache::poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::getClass0()
{
    return class_();
}


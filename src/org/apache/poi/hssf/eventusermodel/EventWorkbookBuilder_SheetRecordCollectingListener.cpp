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

poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::EventWorkbookBuilder_SheetRecordCollectingListener(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::EventWorkbookBuilder_SheetRecordCollectingListener(HSSFListener* childListener) 
    : EventWorkbookBuilder_SheetRecordCollectingListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(childListener);
}

void poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::init()
{
    boundSheetRecords = new ::java::util::ArrayList();
    externSheetRecords = new ::java::util::ArrayList();
    sstRecord = nullptr;
}

void poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::ctor(HSSFListener* childListener)
{
    super::ctor();
    init();
    this->childListener = childListener;
}

poi::hssf::record::BoundSheetRecordArray* poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::getBoundSheetRecords()
{
    return java_cast< ::poi::hssf::record::BoundSheetRecordArray* >(npc(boundSheetRecords)->toArray_(static_cast< ::java::lang::ObjectArray* >(new ::poi::hssf::record::BoundSheetRecordArray(npc(boundSheetRecords)->size()))));
}

poi::hssf::record::ExternSheetRecordArray* poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::getExternSheetRecords()
{
    return java_cast< ::poi::hssf::record::ExternSheetRecordArray* >(npc(externSheetRecords)->toArray_(static_cast< ::java::lang::ObjectArray* >(new ::poi::hssf::record::ExternSheetRecordArray(npc(externSheetRecords)->size()))));
}

poi::hssf::record::SSTRecord* poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::getSSTRecord()
{
    return sstRecord;
}

poi::hssf::usermodel::HSSFWorkbook* poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::getStubHSSFWorkbook()
{
    auto wb = ::poi::hssf::usermodel::HSSFWorkbook::create(getStubWorkbook());
    for (auto _i = npc(boundSheetRecords)->iterator(); _i->hasNext(); ) {
        ::poi::hssf::record::BoundSheetRecord* bsr = java_cast< ::poi::hssf::record::BoundSheetRecord* >(_i->next());
        {
            java_cast< ::poi::hssf::usermodel::HSSFSheet* >(npc(wb)->createSheet(npc(bsr)->getSheetname()));
        }
    }
    return wb;
}

poi::hssf::model::InternalWorkbook* poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::getStubWorkbook()
{
    return EventWorkbookBuilder::createStubWorkbook(getExternSheetRecords(), getBoundSheetRecords(), getSSTRecord());
}

void poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::processRecord(::poi::hssf::record::Record* record)
{
    processRecordInternally(record);
    npc(childListener)->processRecord(record);
}

void poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::processRecordInternally(::poi::hssf::record::Record* record)
{
    if(dynamic_cast< ::poi::hssf::record::BoundSheetRecord* >(record) != nullptr) {
        npc(boundSheetRecords)->add(static_cast< ::java::lang::Object* >(java_cast< ::poi::hssf::record::BoundSheetRecord* >(record)));
    } else if(dynamic_cast< ::poi::hssf::record::ExternSheetRecord* >(record) != nullptr) {
        npc(externSheetRecords)->add(static_cast< ::java::lang::Object* >(java_cast< ::poi::hssf::record::ExternSheetRecord* >(record)));
    } else if(dynamic_cast< ::poi::hssf::record::SSTRecord* >(record) != nullptr) {
        sstRecord = java_cast< ::poi::hssf::record::SSTRecord* >(record);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.EventWorkbookBuilder.SheetRecordCollectingListener", 85);
    return c;
}

java::lang::Class* poi::hssf::eventusermodel::EventWorkbookBuilder_SheetRecordCollectingListener::getClass0()
{
    return class_();
}


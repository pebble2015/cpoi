// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/EventWorkbookBuilder.java
#include <org/apache/poi/hssf/eventusermodel/EventWorkbookBuilder.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/BoundSheetRecord.hpp>
#include <org/apache/poi/hssf/record/EOFRecord.hpp>
#include <org/apache/poi/hssf/record/ExternSheetRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/SSTRecord.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/SupBookRecord.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::eventusermodel::EventWorkbookBuilder::EventWorkbookBuilder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::eventusermodel::EventWorkbookBuilder::EventWorkbookBuilder()
    : EventWorkbookBuilder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::model::InternalWorkbook* poi::hssf::eventusermodel::EventWorkbookBuilder::createStubWorkbook(::poi::hssf::record::ExternSheetRecordArray* externs, ::poi::hssf::record::BoundSheetRecordArray* bounds, ::poi::hssf::record::SSTRecord* sst)
{
    clinit();
    ::java::util::List* wbRecords = new ::java::util::ArrayList();
    if(bounds != nullptr) {
        for(auto bound : *npc(bounds)) {
            npc(wbRecords)->add(static_cast< ::java::lang::Object* >(bound));
        }
    }
    if(sst != nullptr) {
        npc(wbRecords)->add(static_cast< ::java::lang::Object* >(sst));
    }
    if(externs != nullptr) {
        npc(wbRecords)->add(static_cast< ::java::lang::Object* >(::poi::hssf::record::SupBookRecord::createInternalReferences(static_cast< int16_t >(npc(externs)->length))));
        for(auto extern_ : *npc(externs)) {
            npc(wbRecords)->add(static_cast< ::java::lang::Object* >(extern_));
        }
    }
    npc(wbRecords)->add(static_cast< ::java::lang::Object* >(::poi::hssf::record::EOFRecord::instance()));
    return ::poi::hssf::model::InternalWorkbook::createWorkbook(wbRecords);
}

poi::hssf::model::InternalWorkbook* poi::hssf::eventusermodel::EventWorkbookBuilder::createStubWorkbook(::poi::hssf::record::ExternSheetRecordArray* externs, ::poi::hssf::record::BoundSheetRecordArray* bounds)
{
    clinit();
    return createStubWorkbook(externs, bounds, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::eventusermodel::EventWorkbookBuilder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.EventWorkbookBuilder", 55);
    return c;
}

java::lang::Class* poi::hssf::eventusermodel::EventWorkbookBuilder::getClass0()
{
    return class_();
}


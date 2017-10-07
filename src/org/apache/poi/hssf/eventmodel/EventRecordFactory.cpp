// Generated from /POI/java/org/apache/poi/hssf/eventmodel/EventRecordFactory.java
#include <org/apache/poi/hssf/eventmodel/EventRecordFactory.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/hssf/eventmodel/ERFListener.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RecordFactory.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>
#include <Array.hpp>

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
                } // record
            } // hssf
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::eventmodel::EventRecordFactory::EventRecordFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::eventmodel::EventRecordFactory::EventRecordFactory(ERFListener* listener, ::int16_tArray* sids) 
    : EventRecordFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor(listener,sids);
}

void org::apache::poi::hssf::eventmodel::EventRecordFactory::ctor(ERFListener* listener, ::int16_tArray* sids)
{
    super::ctor();
    _listener = listener;
    if(sids == nullptr) {
        _sids = nullptr;
    } else {
        _sids = npc(sids)->clone();
        ::java::util::Arrays::sort(_sids);
    }
}

bool org::apache::poi::hssf::eventmodel::EventRecordFactory::isSidIncluded(int16_t sid)
{
    if(_sids == nullptr) {
        return true;
    }
    return ::java::util::Arrays::binarySearch(_sids, sid) >= 0;
}

bool org::apache::poi::hssf::eventmodel::EventRecordFactory::processRecord(::org::apache::poi::hssf::record::Record* record)
{
    if(!isSidIncluded(npc(record)->getSid())) {
        return true;
    }
    return npc(_listener)->processRecord(record);
}

void org::apache::poi::hssf::eventmodel::EventRecordFactory::processRecords(::java::io::InputStream* in) /* throws(RecordFormatException) */
{
    ::org::apache::poi::hssf::record::Record* last_record = nullptr;
    auto recStream = new ::org::apache::poi::hssf::record::RecordInputStream(in);
    while (npc(recStream)->hasNextRecord()) {
        npc(recStream)->nextRecord();
        auto recs = ::org::apache::poi::hssf::record::RecordFactory::createRecord(recStream);
        if(npc(recs)->length > 1) {
            for(auto rec : *npc(recs)) {
                if(last_record != nullptr) {
                    if(!processRecord(last_record)) {
                        return;
                    }
                }
                last_record = rec;
            }
        } else {
            auto record = (*recs)[int32_t(0)];
            if(record != nullptr) {
                if(last_record != nullptr) {
                    if(!processRecord(last_record)) {
                        return;
                    }
                }
                last_record = record;
            }
        }
    }
    if(last_record != nullptr) {
        processRecord(last_record);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::eventmodel::EventRecordFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventmodel.EventRecordFactory", 49);
    return c;
}

java::lang::Class* org::apache::poi::hssf::eventmodel::EventRecordFactory::getClass0()
{
    return class_();
}


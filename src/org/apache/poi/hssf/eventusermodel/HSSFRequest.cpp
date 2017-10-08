// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/HSSFRequest.java
#include <org/apache/poi/hssf/eventusermodel/HSSFRequest.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/hssf/eventusermodel/AbortableHSSFListener.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFListener.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordFactory.hpp>
#include <Array.hpp>

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

poi::hssf::eventusermodel::HSSFRequest::HSSFRequest(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::eventusermodel::HSSFRequest::HSSFRequest() 
    : HSSFRequest(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::eventusermodel::HSSFRequest::ctor()
{
    super::ctor();
    _records = new ::java::util::HashMap(int32_t(50));
}

void poi::hssf::eventusermodel::HSSFRequest::addListener(HSSFListener* lsnr, int16_t sid)
{
    auto list = java_cast< ::java::util::List* >(npc(_records)->get(::java::lang::Short::valueOf(sid)));
    if(list == nullptr) {
        list = new ::java::util::ArrayList(int32_t(1));
        npc(_records)->put(::java::lang::Short::valueOf(sid), list);
    }
    npc(list)->add(static_cast< ::java::lang::Object* >(lsnr));
}

void poi::hssf::eventusermodel::HSSFRequest::addListenerForAllRecords(HSSFListener* lsnr)
{
    auto rectypes = ::poi::hssf::record::RecordFactory::getAllKnownRecordSIDs();
    for(auto rectype : *npc(rectypes)) {
        addListener(lsnr, rectype);
    }
}

int16_t poi::hssf::eventusermodel::HSSFRequest::processRecord(::poi::hssf::record::Record* rec) /* throws(HSSFUserException) */
{
    auto listeners = java_cast< ::java::util::List* >(npc(_records)->get(::java::lang::Short::valueOf(npc(rec)->getSid())));
    int16_t userCode = int32_t(0);
    if(listeners != nullptr) {
        for (auto k = int32_t(0); k < npc(listeners)->size(); k++) {
            ::java::lang::Object* listenObj = java_cast< HSSFListener* >(npc(listeners)->get(k));
            if(dynamic_cast< AbortableHSSFListener* >(listenObj) != nullptr) {
                auto listener = java_cast< AbortableHSSFListener* >(listenObj);
                userCode = npc(listener)->abortableProcessRecord(rec);
                if(userCode != 0)
                    break;

            } else {
                auto listener = java_cast< HSSFListener* >(listenObj);
                npc(listener)->processRecord(rec);
            }
        }
    }
    return userCode;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::eventusermodel::HSSFRequest::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.HSSFRequest", 46);
    return c;
}

java::lang::Class* poi::hssf::eventusermodel::HSSFRequest::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/CustomViewSettingsRecordAggregate.java
#include <org/apache/poi/hssf/record/aggregates/CustomViewSettingsRecordAggregate.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/HeaderFooterRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/UserSViewBegin.hpp>
#include <org/apache/poi/hssf/record/UserSViewEnd.hpp>
#include <org/apache/poi/hssf/record/aggregates/PageSettingsBlock.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

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

org::apache::poi::hssf::record::aggregates::CustomViewSettingsRecordAggregate::CustomViewSettingsRecordAggregate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::CustomViewSettingsRecordAggregate::CustomViewSettingsRecordAggregate(::org::apache::poi::hssf::model::RecordStream* rs) 
    : CustomViewSettingsRecordAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs);
}

void org::apache::poi::hssf::record::aggregates::CustomViewSettingsRecordAggregate::ctor(::org::apache::poi::hssf::model::RecordStream* rs)
{
    super::ctor();
    _begin = npc(rs)->getNext();
    if(npc(_begin)->getSid() != ::org::apache::poi::hssf::record::UserSViewBegin::sid) {
        throw new ::java::lang::IllegalStateException(u"Bad begin record"_j);
    }
    ::java::util::List* temp = new ::java::util::ArrayList();
    while (npc(rs)->peekNextSid() != ::org::apache::poi::hssf::record::UserSViewEnd::sid) {
        if(PageSettingsBlock::isComponentRecord(npc(rs)->peekNextSid())) {
            if(_psBlock != nullptr) {
                if(npc(rs)->peekNextSid() == ::org::apache::poi::hssf::record::HeaderFooterRecord::sid) {
                    npc(_psBlock)->addLateHeaderFooter(java_cast< ::org::apache::poi::hssf::record::HeaderFooterRecord* >(npc(rs)->getNext()));
                    continue;
                }
                throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Found more than one PageSettingsBlock in chart sub-stream, had sid: "_j)->append(npc(rs)->peekNextSid())->toString());
            }
            _psBlock = new PageSettingsBlock(rs);
            npc(temp)->add(static_cast< ::java::lang::Object* >(_psBlock));
            continue;
        }
        npc(temp)->add(static_cast< ::java::lang::Object* >(npc(rs)->getNext()));
    }
    _recs = temp;
    _end = npc(rs)->getNext();
    if(npc(_end)->getSid() != ::org::apache::poi::hssf::record::UserSViewEnd::sid) {
        throw new ::java::lang::IllegalStateException(u"Bad custom view settings end record"_j);
    }
}

void org::apache::poi::hssf::record::aggregates::CustomViewSettingsRecordAggregate::visitContainedRecords(RecordAggregate_RecordVisitor* rv)
{
    if(npc(_recs)->isEmpty()) {
        return;
    }
    npc(rv)->visitRecord(_begin);
    for (auto i = int32_t(0); i < npc(_recs)->size(); i++) {
        auto rb = java_cast< ::org::apache::poi::hssf::record::RecordBase* >(npc(_recs)->get(i));
        if(dynamic_cast< RecordAggregate* >(rb) != nullptr) {
            npc((java_cast< RecordAggregate* >(rb)))->visitContainedRecords(rv);
        } else {
            npc(rv)->visitRecord(java_cast< ::org::apache::poi::hssf::record::Record* >(rb));
        }
    }
    npc(rv)->visitRecord(_end);
}

bool org::apache::poi::hssf::record::aggregates::CustomViewSettingsRecordAggregate::isBeginRecord(int32_t sid)
{
    clinit();
    return sid == ::org::apache::poi::hssf::record::UserSViewBegin::sid;
}

void org::apache::poi::hssf::record::aggregates::CustomViewSettingsRecordAggregate::append(::org::apache::poi::hssf::record::RecordBase* r)
{
    npc(_recs)->add(static_cast< ::java::lang::Object* >(r));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::CustomViewSettingsRecordAggregate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.CustomViewSettingsRecordAggregate", 71);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::CustomViewSettingsRecordAggregate::getClass0()
{
    return class_();
}


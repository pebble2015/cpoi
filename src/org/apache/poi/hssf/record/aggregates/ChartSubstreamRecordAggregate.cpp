// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/ChartSubstreamRecordAggregate.java
#include <org/apache/poi/hssf/record/aggregates/ChartSubstreamRecordAggregate.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/BOFRecord.hpp>
#include <org/apache/poi/hssf/record/EOFRecord.hpp>
#include <org/apache/poi/hssf/record/HeaderFooterRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
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

org::apache::poi::hssf::record::aggregates::ChartSubstreamRecordAggregate::ChartSubstreamRecordAggregate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::ChartSubstreamRecordAggregate::ChartSubstreamRecordAggregate(::org::apache::poi::hssf::model::RecordStream* rs) 
    : ChartSubstreamRecordAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs);
}

void org::apache::poi::hssf::record::aggregates::ChartSubstreamRecordAggregate::ctor(::org::apache::poi::hssf::model::RecordStream* rs)
{
    super::ctor();
    _bofRec = java_cast< ::org::apache::poi::hssf::record::BOFRecord* >(npc(rs)->getNext());
    ::java::util::List* temp = new ::java::util::ArrayList();
    while (static_cast< ::java::lang::Object* >(npc(rs)->peekNextClass()) != static_cast< ::java::lang::Object* >(::org::apache::poi::hssf::record::EOFRecord::class_())) {
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
    auto eof = npc(rs)->getNext();
    if(!(dynamic_cast< ::org::apache::poi::hssf::record::EOFRecord* >(eof) != nullptr)) {
        throw new ::java::lang::IllegalStateException(u"Bad chart EOF"_j);
    }
}

void org::apache::poi::hssf::record::aggregates::ChartSubstreamRecordAggregate::visitContainedRecords(RecordAggregate_RecordVisitor* rv)
{
    if(npc(_recs)->isEmpty()) {
        return;
    }
    npc(rv)->visitRecord(_bofRec);
    for (auto i = int32_t(0); i < npc(_recs)->size(); i++) {
        auto rb = java_cast< ::org::apache::poi::hssf::record::RecordBase* >(npc(_recs)->get(i));
        if(dynamic_cast< RecordAggregate* >(rb) != nullptr) {
            npc((java_cast< RecordAggregate* >(rb)))->visitContainedRecords(rv);
        } else {
            npc(rv)->visitRecord(java_cast< ::org::apache::poi::hssf::record::Record* >(rb));
        }
    }
    npc(rv)->visitRecord(::org::apache::poi::hssf::record::EOFRecord::instance());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::ChartSubstreamRecordAggregate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.ChartSubstreamRecordAggregate", 67);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::ChartSubstreamRecordAggregate::getClass0()
{
    return class_();
}


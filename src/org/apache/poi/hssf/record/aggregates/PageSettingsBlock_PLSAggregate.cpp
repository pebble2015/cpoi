// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/PageSettingsBlock.java
#include <org/apache/poi/hssf/record/aggregates/PageSettingsBlock_PLSAggregate.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/ContinueRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

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
typedef ::SubArray< ::org::apache::poi::hssf::record::ContinueRecord, StandardRecordArray, ::java::lang::CloneableArray > ContinueRecordArray;
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

org::apache::poi::hssf::record::aggregates::PageSettingsBlock_PLSAggregate::PageSettingsBlock_PLSAggregate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::PageSettingsBlock_PLSAggregate::PageSettingsBlock_PLSAggregate(::org::apache::poi::hssf::model::RecordStream* rs) 
    : PageSettingsBlock_PLSAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs);
}

org::apache::poi::hssf::record::ContinueRecordArray*& org::apache::poi::hssf::record::aggregates::PageSettingsBlock_PLSAggregate::EMPTY_CONTINUE_RECORD_ARRAY()
{
    clinit();
    return EMPTY_CONTINUE_RECORD_ARRAY_;
}
org::apache::poi::hssf::record::ContinueRecordArray* org::apache::poi::hssf::record::aggregates::PageSettingsBlock_PLSAggregate::EMPTY_CONTINUE_RECORD_ARRAY_;

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock_PLSAggregate::ctor(::org::apache::poi::hssf::model::RecordStream* rs)
{
    super::ctor();
    _pls = npc(rs)->getNext();
    if(npc(rs)->peekNextSid() == ::org::apache::poi::hssf::record::ContinueRecord::sid) {
        ::java::util::List* temp = new ::java::util::ArrayList();
        while (npc(rs)->peekNextSid() == ::org::apache::poi::hssf::record::ContinueRecord::sid) {
            npc(temp)->add(static_cast< ::java::lang::Object* >(java_cast< ::org::apache::poi::hssf::record::ContinueRecord* >(npc(rs)->getNext())));
        }
        _plsContinues = new ::org::apache::poi::hssf::record::ContinueRecordArray(npc(temp)->size());
        npc(temp)->toArray_(static_cast< ::java::lang::ObjectArray* >(_plsContinues));
    } else {
        _plsContinues = EMPTY_CONTINUE_RECORD_ARRAY_;
    }
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock_PLSAggregate::visitContainedRecords(RecordAggregate_RecordVisitor* rv)
{
    npc(rv)->visitRecord(_pls);
    for(auto _plsContinue : *npc(_plsContinues)) {
        npc(rv)->visitRecord(_plsContinue);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::PageSettingsBlock_PLSAggregate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.PageSettingsBlock.PLSAggregate", 68);
    return c;
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock_PLSAggregate::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_CONTINUE_RECORD_ARRAY_ = (new ::org::apache::poi::hssf::record::ContinueRecordArray({}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::PageSettingsBlock_PLSAggregate::getClass0()
{
    return class_();
}


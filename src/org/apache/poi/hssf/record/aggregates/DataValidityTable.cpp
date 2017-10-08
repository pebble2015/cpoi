// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/DataValidityTable.java
#include <org/apache/poi/hssf/record/aggregates/DataValidityTable.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/DVALRecord.hpp>
#include <org/apache/poi/hssf/record/DVRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>

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

poi::hssf::record::aggregates::DataValidityTable::DataValidityTable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::aggregates::DataValidityTable::DataValidityTable(::poi::hssf::model::RecordStream* rs) 
    : DataValidityTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs);
}

poi::hssf::record::aggregates::DataValidityTable::DataValidityTable() 
    : DataValidityTable(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::record::aggregates::DataValidityTable::ctor(::poi::hssf::model::RecordStream* rs)
{
    super::ctor();
    _headerRec = java_cast< ::poi::hssf::record::DVALRecord* >(npc(rs)->getNext());
    ::java::util::List* temp = new ::java::util::ArrayList();
    while (static_cast< ::java::lang::Object* >(npc(rs)->peekNextClass()) == static_cast< ::java::lang::Object* >(::poi::hssf::record::DVRecord::class_())) {
        npc(temp)->add(static_cast< ::java::lang::Object* >(java_cast< ::poi::hssf::record::DVRecord* >(npc(rs)->getNext())));
    }
    _validationList = temp;
}

void poi::hssf::record::aggregates::DataValidityTable::ctor()
{
    super::ctor();
    _headerRec = new ::poi::hssf::record::DVALRecord();
    _validationList = new ::java::util::ArrayList();
}

void poi::hssf::record::aggregates::DataValidityTable::visitContainedRecords(RecordAggregate_RecordVisitor* rv)
{
    if(npc(_validationList)->isEmpty()) {
        return;
    }
    npc(rv)->visitRecord(_headerRec);
    for (auto i = int32_t(0); i < npc(_validationList)->size(); i++) {
        npc(rv)->visitRecord(java_cast< ::poi::hssf::record::DVRecord* >(npc(_validationList)->get(i)));
    }
}

void poi::hssf::record::aggregates::DataValidityTable::addDataValidation(::poi::hssf::record::DVRecord* dvRecord)
{
    npc(_validationList)->add(static_cast< ::java::lang::Object* >(dvRecord));
    npc(_headerRec)->setDVRecNo(npc(_validationList)->size());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::aggregates::DataValidityTable::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.DataValidityTable", 55);
    return c;
}

java::lang::Class* poi::hssf::record::aggregates::DataValidityTable::getClass0()
{
    return class_();
}


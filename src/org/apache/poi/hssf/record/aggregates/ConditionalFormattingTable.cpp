// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/ConditionalFormattingTable.java
#include <org/apache/poi/hssf/record/aggregates/ConditionalFormattingTable.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/CFHeader12Record.hpp>
#include <org/apache/poi/hssf/record/CFHeaderBase.hpp>
#include <org/apache/poi/hssf/record/CFHeaderRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/CFRecordsAggregate.hpp>

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

org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::ConditionalFormattingTable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::ConditionalFormattingTable() 
    : ConditionalFormattingTable(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::ConditionalFormattingTable(::org::apache::poi::hssf::model::RecordStream* rs) 
    : ConditionalFormattingTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs);
}

void org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::ctor()
{
    super::ctor();
    _cfHeaders = new ::java::util::ArrayList();
}

void org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::ctor(::org::apache::poi::hssf::model::RecordStream* rs)
{
    super::ctor();
    ::java::util::List* temp = new ::java::util::ArrayList();
    while (static_cast< ::java::lang::Object* >(npc(rs)->peekNextClass()) == static_cast< ::java::lang::Object* >(::org::apache::poi::hssf::record::CFHeaderRecord::class_()) || static_cast< ::java::lang::Object* >(npc(rs)->peekNextClass()) == static_cast< ::java::lang::Object* >(::org::apache::poi::hssf::record::CFHeader12Record::class_())) {
        npc(temp)->add(static_cast< ::java::lang::Object* >(CFRecordsAggregate::createCFAggregate(rs)));
    }
    _cfHeaders = temp;
}

void org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::visitContainedRecords(RecordAggregate_RecordVisitor* rv)
{
    for (auto _i = npc(_cfHeaders)->iterator(); _i->hasNext(); ) {
        CFRecordsAggregate* subAgg = java_cast< CFRecordsAggregate* >(_i->next());
        {
            npc(subAgg)->visitContainedRecords(rv);
        }
    }
}

int32_t org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::add(CFRecordsAggregate* cfAggregate)
{
    npc(npc(cfAggregate)->getHeader())->setID(npc(_cfHeaders)->size());
    npc(_cfHeaders)->add(static_cast< ::java::lang::Object* >(cfAggregate));
    return npc(_cfHeaders)->size() - int32_t(1);
}

int32_t org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::size()
{
    return npc(_cfHeaders)->size();
}

org::apache::poi::hssf::record::aggregates::CFRecordsAggregate* org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::get(int32_t index)
{
    checkIndex(index);
    return java_cast< CFRecordsAggregate* >(npc(_cfHeaders)->get(index));
}

void org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::remove(int32_t index)
{
    checkIndex(index);
    npc(_cfHeaders)->remove(index);
}

void org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::checkIndex(int32_t index)
{
    if(index < 0 || index >= npc(_cfHeaders)->size()) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified CF index "_j)->append(index)
            ->append(u" is outside the allowable range (0.."_j)
            ->append((npc(_cfHeaders)->size() - int32_t(1)))
            ->append(u")"_j)->toString());
    }
}

void org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::updateFormulasAfterCellShift(::org::apache::poi::ss::formula::FormulaShifter* shifter, int32_t externSheetIndex)
{
    for (auto i = int32_t(0); i < npc(_cfHeaders)->size(); i++) {
        auto subAgg = java_cast< CFRecordsAggregate* >(npc(_cfHeaders)->get(i));
        auto shouldKeep = npc(subAgg)->updateFormulasAfterCellShift(shifter, externSheetIndex);
        if(!shouldKeep) {
            npc(_cfHeaders)->remove(i);
            i--;
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.ConditionalFormattingTable", 64);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable::getClass0()
{
    return class_();
}


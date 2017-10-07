// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/SharedValueManager.java
#include <org/apache/poi/hssf/record/aggregates/SharedValueManager_SharedFormulaGroup.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/SharedFormulaRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/FormulaRecordAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>
#include <org/apache/poi/hssf/util/CellRangeAddress8Bit.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
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
typedef ::SubArray< ::org::apache::poi::hssf::record::CellValueRecordInterface, ::java::lang::ObjectArray > CellValueRecordInterfaceArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;

                    namespace aggregates
                    {
typedef ::SubArray< ::org::apache::poi::hssf::record::aggregates::RecordAggregate, ::org::apache::poi::hssf::record::RecordBaseArray > RecordAggregateArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate, RecordAggregateArray, ::org::apache::poi::hssf::record::CellValueRecordInterfaceArray > FormulaRecordAggregateArray;
                    } // aggregates
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

org::apache::poi::hssf::record::aggregates::SharedValueManager_SharedFormulaGroup::SharedValueManager_SharedFormulaGroup(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::SharedValueManager_SharedFormulaGroup::SharedValueManager_SharedFormulaGroup(::org::apache::poi::hssf::record::SharedFormulaRecord* sfr, ::org::apache::poi::ss::util::CellReference* firstCell) 
    : SharedValueManager_SharedFormulaGroup(*static_cast< ::default_init_tag* >(0))
{
    ctor(sfr,firstCell);
}

void org::apache::poi::hssf::record::aggregates::SharedValueManager_SharedFormulaGroup::ctor(::org::apache::poi::hssf::record::SharedFormulaRecord* sfr, ::org::apache::poi::ss::util::CellReference* firstCell)
{
    super::ctor();
    if(!npc(sfr)->isInRange(npc(firstCell)->getRow(), npc(firstCell)->getCol())) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"First formula cell "_j)->append(npc(firstCell)->formatAsString())
            ->append(u" is not shared formula range "_j)
            ->append(static_cast< ::java::lang::Object* >(npc(sfr)->getRange()))
            ->append(u"."_j)->toString());
    }
    _sfr = sfr;
    _firstCell = firstCell;
    auto width = npc(sfr)->getLastColumn() - npc(sfr)->getFirstColumn() + int32_t(1);
    auto height = npc(sfr)->getLastRow() - npc(sfr)->getFirstRow() + int32_t(1);
    _frAggs = new FormulaRecordAggregateArray(width * height);
    _numberOfFormulas = 0;
}

void org::apache::poi::hssf::record::aggregates::SharedValueManager_SharedFormulaGroup::add(FormulaRecordAggregate* agg)
{
    if(_numberOfFormulas == 0) {
        if(npc(_firstCell)->getRow() != npc(agg)->getRow() || npc(_firstCell)->getCol() != npc(agg)->getColumn()) {
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"shared formula coding error: "_j)->append(npc(_firstCell)->getCol())
                ->append(u'/')
                ->append(npc(_firstCell)->getRow())
                ->append(u" != "_j)
                ->append(npc(agg)->getColumn())
                ->append(u'/')
                ->append(npc(agg)->getRow())->toString());
        }
    }
    if(_numberOfFormulas >= npc(_frAggs)->length) {
        throw new ::java::lang::RuntimeException(u"Too many formula records for shared formula group"_j);
    }
    _frAggs->set(_numberOfFormulas++, agg);
}

void org::apache::poi::hssf::record::aggregates::SharedValueManager_SharedFormulaGroup::unlinkSharedFormulas()
{
    for (auto i = int32_t(0); i < _numberOfFormulas; i++) {
        npc((*_frAggs)[i])->unlinkSharedFormula();
    }
}

org::apache::poi::hssf::record::SharedFormulaRecord* org::apache::poi::hssf::record::aggregates::SharedValueManager_SharedFormulaGroup::getSFR()
{
    return _sfr;
}

java::lang::String* org::apache::poi::hssf::record::aggregates::SharedValueManager_SharedFormulaGroup::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(sb)->append(static_cast< ::java::lang::Object* >(npc(_sfr)->getRange()));
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::SharedValueManager_SharedFormulaGroup::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.SharedValueManager.SharedFormulaGroup", 75);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::SharedValueManager_SharedFormulaGroup::getClass0()
{
    return class_();
}


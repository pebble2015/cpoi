// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/SharedValueManager.java
#include <org/apache/poi/hssf/record/aggregates/SharedValueManager.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/hssf/record/ArrayRecord.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/SharedFormulaRecord.hpp>
#include <org/apache/poi/hssf/record/SharedValueRecordBase.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/TableRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/FormulaRecordAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/SharedValueManager_SharedFormulaGroup.hpp>
#include <org/apache/poi/hssf/util/CellRangeAddress8Bit.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
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

namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::SharedValueRecordBase, StandardRecordArray > SharedValueRecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::ArrayRecord, SharedValueRecordBaseArray, ::java::lang::CloneableArray > ArrayRecordArray;
typedef ::SubArray< ::poi::hssf::record::SharedFormulaRecord, SharedValueRecordBaseArray > SharedFormulaRecordArray;
typedef ::SubArray< ::poi::hssf::record::TableRecord, SharedValueRecordBaseArray > TableRecordArray;
        } // record
    } // hssf

    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellReference, ::java::lang::ObjectArray > CellReferenceArray;
        } // util
    } // ss
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

poi::hssf::record::aggregates::SharedValueManager::SharedValueManager(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::aggregates::SharedValueManager::SharedValueManager(::poi::hssf::record::SharedFormulaRecordArray* sharedFormulaRecords, ::poi::ss::util::CellReferenceArray* firstCells, ::poi::hssf::record::ArrayRecordArray* arrayRecords, ::poi::hssf::record::TableRecordArray* tableRecords) 
    : SharedValueManager(*static_cast< ::default_init_tag* >(0))
{
    ctor(sharedFormulaRecords,firstCells,arrayRecords,tableRecords);
}

poi::hssf::record::aggregates::SharedValueManager* poi::hssf::record::aggregates::SharedValueManager::createEmpty()
{
    clinit();
    return new SharedValueManager(new ::poi::hssf::record::SharedFormulaRecordArray(int32_t(0)), new ::poi::ss::util::CellReferenceArray(int32_t(0)), new ::poi::hssf::record::ArrayRecordArray(int32_t(0)), new ::poi::hssf::record::TableRecordArray(int32_t(0)));
}

void poi::hssf::record::aggregates::SharedValueManager::ctor(::poi::hssf::record::SharedFormulaRecordArray* sharedFormulaRecords, ::poi::ss::util::CellReferenceArray* firstCells, ::poi::hssf::record::ArrayRecordArray* arrayRecords, ::poi::hssf::record::TableRecordArray* tableRecords)
{
    super::ctor();
    auto nShF = npc(sharedFormulaRecords)->length;
    if(nShF != npc(firstCells)->length) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"array sizes don't match: "_j)->append(nShF)
            ->append(u"!="_j)
            ->append(npc(firstCells)->length)
            ->append(u"."_j)->toString());
    }
    _arrayRecords = toList(arrayRecords);
    _tableRecords = tableRecords;
    ::java::util::Map* m = new ::java::util::HashMap(nShF * int32_t(3) / int32_t(2));
    for (auto i = int32_t(0); i < nShF; i++) {
        auto sfr = (*sharedFormulaRecords)[i];
        npc(m)->put(sfr, new SharedValueManager_SharedFormulaGroup(sfr, (*firstCells)[i]));
    }
    _groupsBySharedFormulaRecord = m;
}

/* <Z> */java::util::List* poi::hssf::record::aggregates::SharedValueManager::toList(::java::lang::ObjectArray* zz)
{
    clinit();
    ::java::util::List* result = new ::java::util::ArrayList(npc(zz)->length);
    for (auto i = int32_t(0); i < npc(zz)->length; i++) {
        npc(result)->add(static_cast< ::java::lang::Object* >((*zz)[i]));
    }
    return result;
}

poi::hssf::record::aggregates::SharedValueManager* poi::hssf::record::aggregates::SharedValueManager::create(::poi::hssf::record::SharedFormulaRecordArray* sharedFormulaRecords, ::poi::ss::util::CellReferenceArray* firstCells, ::poi::hssf::record::ArrayRecordArray* arrayRecords, ::poi::hssf::record::TableRecordArray* tableRecords)
{
    clinit();
    if(npc(sharedFormulaRecords)->length + npc(firstCells)->length + npc(arrayRecords)->length+ npc(tableRecords)->length < 1) {
        return createEmpty();
    }
    return new SharedValueManager(sharedFormulaRecords, firstCells, arrayRecords, tableRecords);
}

poi::hssf::record::SharedFormulaRecord* poi::hssf::record::aggregates::SharedValueManager::linkSharedFormulaRecord(::poi::ss::util::CellReference* firstCell, FormulaRecordAggregate* agg)
{
    auto result = findFormulaGroupForCell(firstCell);
    if(nullptr == result) {
        throw new ::java::lang::RuntimeException(u"Failed to find a matching shared formula record"_j);
    }
    npc(result)->add(agg);
    return npc(result)->getSFR();
}

poi::hssf::record::aggregates::SharedValueManager_SharedFormulaGroup* poi::hssf::record::aggregates::SharedValueManager::findFormulaGroupForCell(::poi::ss::util::CellReference* cellRef)
{
    if(nullptr == _groupsCache) {
        _groupsCache = new ::java::util::HashMap(npc(_groupsBySharedFormulaRecord)->size());
        for (auto _i = npc(npc(_groupsBySharedFormulaRecord)->values())->iterator(); _i->hasNext(); ) {
            SharedValueManager_SharedFormulaGroup* group = java_cast< SharedValueManager_SharedFormulaGroup* >(_i->next());
            {
                npc(_groupsCache)->put(getKeyForCache(npc(group)->_firstCell), group);
            }
        }
    }
    auto sfg = java_cast< SharedValueManager_SharedFormulaGroup* >(npc(_groupsCache)->get(getKeyForCache(cellRef)));
    return sfg;
}

java::lang::Integer* poi::hssf::record::aggregates::SharedValueManager::getKeyForCache(::poi::ss::util::CellReference* cellRef)
{
    return ::java::lang::Integer::valueOf(((npc(cellRef)->getCol() + int32_t(1)) << int32_t(16) | npc(cellRef)->getRow()));
}

poi::hssf::record::SharedValueRecordBase* poi::hssf::record::aggregates::SharedValueManager::getRecordForFirstCell(FormulaRecordAggregate* agg)
{
    auto firstCell = npc(npc(npc(agg)->getFormulaRecord())->getFormula())->getExpReference();
    if(firstCell == nullptr) {
        return nullptr;
    }
    auto row = npc(firstCell)->getRow();
    int32_t column = npc(firstCell)->getCol();
    if(npc(agg)->getRow() != row || npc(agg)->getColumn() != column) {
        return nullptr;
    }
    if(!npc(_groupsBySharedFormulaRecord)->isEmpty()) {
        auto sfg = findFormulaGroupForCell(firstCell);
        if(nullptr != sfg) {
            return npc(sfg)->getSFR();
        }
    }
    for(auto tr : *npc(_tableRecords)) {
        if(npc(tr)->isFirstCell(row, column)) {
            return tr;
        }
    }
    for (auto _i = npc(_arrayRecords)->iterator(); _i->hasNext(); ) {
        ::poi::hssf::record::ArrayRecord* ar = java_cast< ::poi::hssf::record::ArrayRecord* >(_i->next());
        {
            if(npc(ar)->isFirstCell(row, column)) {
                return ar;
            }
        }
    }
    return nullptr;
}

void poi::hssf::record::aggregates::SharedValueManager::unlink(::poi::hssf::record::SharedFormulaRecord* sharedFormulaRecord)
{
    auto svg = java_cast< SharedValueManager_SharedFormulaGroup* >(npc(_groupsBySharedFormulaRecord)->remove(sharedFormulaRecord));
    if(svg == nullptr) {
        throw new ::java::lang::IllegalStateException(u"Failed to find formulas for shared formula"_j);
    }
    _groupsCache = nullptr;
    npc(svg)->unlinkSharedFormulas();
}

void poi::hssf::record::aggregates::SharedValueManager::addArrayRecord(::poi::hssf::record::ArrayRecord* ar)
{
    npc(_arrayRecords)->add(static_cast< ::java::lang::Object* >(ar));
}

poi::hssf::util::CellRangeAddress8Bit* poi::hssf::record::aggregates::SharedValueManager::removeArrayFormula(int32_t rowIndex, int32_t columnIndex)
{
    for (auto _i = npc(_arrayRecords)->iterator(); _i->hasNext(); ) {
        ::poi::hssf::record::ArrayRecord* ar = java_cast< ::poi::hssf::record::ArrayRecord* >(_i->next());
        {
            if(npc(ar)->isInRange(rowIndex, columnIndex)) {
                npc(_arrayRecords)->remove(static_cast< ::java::lang::Object* >(ar));
                return npc(ar)->getRange();
            }
        }
    }
    auto ref = (new ::poi::ss::util::CellReference(rowIndex, columnIndex, false, false))->formatAsString();
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified cell "_j)->append(ref)
        ->append(u" is not part of an array formula."_j)->toString());
}

poi::hssf::record::ArrayRecord* poi::hssf::record::aggregates::SharedValueManager::getArrayRecord(int32_t firstRow, int32_t firstColumn)
{
    for (auto _i = npc(_arrayRecords)->iterator(); _i->hasNext(); ) {
        ::poi::hssf::record::ArrayRecord* ar = java_cast< ::poi::hssf::record::ArrayRecord* >(_i->next());
        {
            if(npc(ar)->isFirstCell(firstRow, firstColumn)) {
                return ar;
            }
        }
    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::aggregates::SharedValueManager::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.SharedValueManager", 56);
    return c;
}

java::lang::Class* poi::hssf::record::aggregates::SharedValueManager::getClass0()
{
    return class_();
}


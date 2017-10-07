// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/MergedCellsTable.java
#include <org/apache/poi/hssf/record/aggregates/MergedCellsTable.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/MergeCellsRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressList.hpp>
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
typedef ::SubArray< ::org::apache::poi::hssf::record::MergeCellsRecord, StandardRecordArray, ::java::lang::CloneableArray > MergeCellsRecordArray;
                } // record
            } // hssf

            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
                } // util
            } // ss
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

org::apache::poi::hssf::record::aggregates::MergedCellsTable::MergedCellsTable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::MergedCellsTable::MergedCellsTable() 
    : MergedCellsTable(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t& org::apache::poi::hssf::record::aggregates::MergedCellsTable::MAX_MERGED_REGIONS()
{
    clinit();
    return MAX_MERGED_REGIONS_;
}
int32_t org::apache::poi::hssf::record::aggregates::MergedCellsTable::MAX_MERGED_REGIONS_;

void org::apache::poi::hssf::record::aggregates::MergedCellsTable::ctor()
{
    super::ctor();
    _mergedRegions = new ::java::util::ArrayList();
}

void org::apache::poi::hssf::record::aggregates::MergedCellsTable::read(::org::apache::poi::hssf::model::RecordStream* rs)
{
    auto temp = _mergedRegions;
    while (static_cast< ::java::lang::Object* >(npc(rs)->peekNextClass()) == static_cast< ::java::lang::Object* >(::org::apache::poi::hssf::record::MergeCellsRecord::class_())) {
        auto mcr = java_cast< ::org::apache::poi::hssf::record::MergeCellsRecord* >(npc(rs)->getNext());
        int32_t nRegions = npc(mcr)->getNumAreas();
        for (auto i = int32_t(0); i < nRegions; i++) {
            auto cra = npc(mcr)->getAreaAt(i);
            npc(temp)->add(static_cast< ::java::lang::Object* >(cra));
        }
    }
}

int32_t org::apache::poi::hssf::record::aggregates::MergedCellsTable::getRecordSize()
{
    auto nRegions = npc(_mergedRegions)->size();
    if(nRegions < 1) {
        return 0;
    }
    auto nMergedCellsRecords = nRegions / MAX_MERGED_REGIONS_;
    auto nLeftoverMergedRegions = nRegions % MAX_MERGED_REGIONS_;
    auto result = nMergedCellsRecords * (int32_t(4) + ::org::apache::poi::ss::util::CellRangeAddressList::getEncodedSize(MAX_MERGED_REGIONS_)) + int32_t(4) + ::org::apache::poi::ss::util::CellRangeAddressList::getEncodedSize(nLeftoverMergedRegions);
    return result;
}

void org::apache::poi::hssf::record::aggregates::MergedCellsTable::visitContainedRecords(RecordAggregate_RecordVisitor* rv)
{
    auto nRegions = npc(_mergedRegions)->size();
    if(nRegions < 1) {
        return;
    }
    auto nFullMergedCellsRecords = nRegions / MAX_MERGED_REGIONS_;
    auto nLeftoverMergedRegions = nRegions % MAX_MERGED_REGIONS_;
    auto cras = new ::org::apache::poi::ss::util::CellRangeAddressArray(nRegions);
    npc(_mergedRegions)->toArray_(static_cast< ::java::lang::ObjectArray* >(cras));
    for (auto i = int32_t(0); i < nFullMergedCellsRecords; i++) {
        auto startIx = i * MAX_MERGED_REGIONS_;
        npc(rv)->visitRecord(new ::org::apache::poi::hssf::record::MergeCellsRecord(cras, startIx, MAX_MERGED_REGIONS_));
    }
    if(nLeftoverMergedRegions > 0) {
        auto startIx = nFullMergedCellsRecords * MAX_MERGED_REGIONS_;
        npc(rv)->visitRecord(new ::org::apache::poi::hssf::record::MergeCellsRecord(cras, startIx, nLeftoverMergedRegions));
    }
}

void org::apache::poi::hssf::record::aggregates::MergedCellsTable::addRecords(::org::apache::poi::hssf::record::MergeCellsRecordArray* mcrs)
{
    for (auto i = int32_t(0); i < npc(mcrs)->length; i++) {
        addMergeCellsRecord((*mcrs)[i]);
    }
}

void org::apache::poi::hssf::record::aggregates::MergedCellsTable::addMergeCellsRecord(::org::apache::poi::hssf::record::MergeCellsRecord* mcr)
{
    int32_t nRegions = npc(mcr)->getNumAreas();
    for (auto i = int32_t(0); i < nRegions; i++) {
        auto cra = npc(mcr)->getAreaAt(i);
        npc(_mergedRegions)->add(static_cast< ::java::lang::Object* >(cra));
    }
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::hssf::record::aggregates::MergedCellsTable::get(int32_t index)
{
    checkIndex(index);
    return java_cast< ::org::apache::poi::ss::util::CellRangeAddress* >(npc(_mergedRegions)->get(index));
}

void org::apache::poi::hssf::record::aggregates::MergedCellsTable::remove(int32_t index)
{
    checkIndex(index);
    npc(_mergedRegions)->remove(index);
}

void org::apache::poi::hssf::record::aggregates::MergedCellsTable::checkIndex(int32_t index)
{
    if(index < 0 || index >= npc(_mergedRegions)->size()) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified CF index "_j)->append(index)
            ->append(u" is outside the allowable range (0.."_j)
            ->append((npc(_mergedRegions)->size() - int32_t(1)))
            ->append(u")"_j)->toString());
    }
}

void org::apache::poi::hssf::record::aggregates::MergedCellsTable::addArea(int32_t rowFrom, int32_t colFrom, int32_t rowTo, int32_t colTo)
{
    npc(_mergedRegions)->add(static_cast< ::java::lang::Object* >(new ::org::apache::poi::ss::util::CellRangeAddress(rowFrom, rowTo, colFrom, colTo)));
}

int32_t org::apache::poi::hssf::record::aggregates::MergedCellsTable::getNumberOfMergedRegions()
{
    return npc(_mergedRegions)->size();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::MergedCellsTable::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.MergedCellsTable", 54);
    return c;
}

void org::apache::poi::hssf::record::aggregates::MergedCellsTable::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        MAX_MERGED_REGIONS_ = int32_t(1027);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::MergedCellsTable::getClass0()
{
    return class_();
}


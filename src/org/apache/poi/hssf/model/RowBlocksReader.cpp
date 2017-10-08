// Generated from /POI/java/org/apache/poi/hssf/model/RowBlocksReader.java
#include <org/apache/poi/hssf/model/RowBlocksReader.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/RecordOrderer.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/ArrayRecord.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/MergeCellsRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/SharedFormulaRecord.hpp>
#include <org/apache/poi/hssf/record/SharedValueRecordBase.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/TableRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/SharedValueManager.hpp>
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
typedef ::SubArray< ::poi::hssf::record::MergeCellsRecord, StandardRecordArray, ::java::lang::CloneableArray > MergeCellsRecordArray;
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

poi::hssf::model::RowBlocksReader::RowBlocksReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::model::RowBlocksReader::RowBlocksReader(RecordStream* rs) 
    : RowBlocksReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs);
}

void poi::hssf::model::RowBlocksReader::ctor(RecordStream* rs)
{
    super::ctor();
    ::java::util::List* plainRecords = new ::java::util::ArrayList();
    ::java::util::List* shFrmRecords = new ::java::util::ArrayList();
    ::java::util::List* firstCellRefs = new ::java::util::ArrayList();
    ::java::util::List* arrayRecords = new ::java::util::ArrayList();
    ::java::util::List* tableRecords = new ::java::util::ArrayList();
    ::java::util::List* mergeCellRecords = new ::java::util::ArrayList();
    ::poi::hssf::record::Record* prevRec = nullptr;
    while (!RecordOrderer::isEndOfRowBlock(npc(rs)->peekNextSid())) {
        if(!npc(rs)->hasNext()) {
            throw new ::java::lang::RuntimeException(u"Failed to find end of row/cell records"_j);
        }
        auto rec = npc(rs)->getNext();
        ::java::util::List* dest;
        {
            ::poi::hssf::record::FormulaRecord* fr;
            switch (npc(rec)->getSid()) {
            case ::poi::hssf::record::MergeCellsRecord::sid:
                dest = mergeCellRecords;
                break;
            case ::poi::hssf::record::SharedFormulaRecord::sid:
                dest = shFrmRecords;
                if(!(dynamic_cast< ::poi::hssf::record::FormulaRecord* >(prevRec) != nullptr)) {
                    throw new ::java::lang::RuntimeException(u"Shared formula record should follow a FormulaRecord"_j);
                }
                fr = java_cast< ::poi::hssf::record::FormulaRecord* >(prevRec);
                npc(firstCellRefs)->add(static_cast< ::java::lang::Object* >(new ::poi::ss::util::CellReference(npc(fr)->getRow(), npc(fr)->getColumn())));
                break;
            case ::poi::hssf::record::ArrayRecord::sid:
                dest = arrayRecords;
                break;
            case ::poi::hssf::record::TableRecord::sid:
                dest = tableRecords;
                break;
            default:
                dest = plainRecords;
            }
        }

        npc(dest)->add(static_cast< ::java::lang::Object* >(rec));
        prevRec = rec;
    }
    auto sharedFormulaRecs = new ::poi::hssf::record::SharedFormulaRecordArray(npc(shFrmRecords)->size());
    auto firstCells = new ::poi::ss::util::CellReferenceArray(npc(firstCellRefs)->size());
    auto arrayRecs = new ::poi::hssf::record::ArrayRecordArray(npc(arrayRecords)->size());
    auto tableRecs = new ::poi::hssf::record::TableRecordArray(npc(tableRecords)->size());
    npc(shFrmRecords)->toArray_(static_cast< ::java::lang::ObjectArray* >(sharedFormulaRecs));
    npc(firstCellRefs)->toArray_(static_cast< ::java::lang::ObjectArray* >(firstCells));
    npc(arrayRecords)->toArray_(static_cast< ::java::lang::ObjectArray* >(arrayRecs));
    npc(tableRecords)->toArray_(static_cast< ::java::lang::ObjectArray* >(tableRecs));
    _plainRecords = plainRecords;
    _sfm = ::poi::hssf::record::aggregates::SharedValueManager::create(sharedFormulaRecs, firstCells, arrayRecs, tableRecs);
    _mergedCellsRecords = new ::poi::hssf::record::MergeCellsRecordArray(npc(mergeCellRecords)->size());
    npc(mergeCellRecords)->toArray_(static_cast< ::java::lang::ObjectArray* >(_mergedCellsRecords));
}

poi::hssf::record::MergeCellsRecordArray* poi::hssf::model::RowBlocksReader::getLooseMergedCells()
{
    return _mergedCellsRecords;
}

poi::hssf::record::aggregates::SharedValueManager* poi::hssf::model::RowBlocksReader::getSharedFormulaManager()
{
    return _sfm;
}

poi::hssf::model::RecordStream* poi::hssf::model::RowBlocksReader::getPlainRecordStream()
{
    return new RecordStream(_plainRecords, int32_t(0));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::model::RowBlocksReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.RowBlocksReader", 41);
    return c;
}

java::lang::Class* poi::hssf::model::RowBlocksReader::getClass0()
{
    return class_();
}


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
typedef ::SubArray< ::org::apache::poi::hssf::record::SharedValueRecordBase, StandardRecordArray > SharedValueRecordBaseArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::ArrayRecord, SharedValueRecordBaseArray, ::java::lang::CloneableArray > ArrayRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::MergeCellsRecord, StandardRecordArray, ::java::lang::CloneableArray > MergeCellsRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::SharedFormulaRecord, SharedValueRecordBaseArray > SharedFormulaRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::TableRecord, SharedValueRecordBaseArray > TableRecordArray;
                } // record
            } // hssf

            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellReference, ::java::lang::ObjectArray > CellReferenceArray;
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

org::apache::poi::hssf::model::RowBlocksReader::RowBlocksReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::model::RowBlocksReader::RowBlocksReader(RecordStream* rs) 
    : RowBlocksReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs);
}

void org::apache::poi::hssf::model::RowBlocksReader::ctor(RecordStream* rs)
{
    super::ctor();
    ::java::util::List* plainRecords = new ::java::util::ArrayList();
    ::java::util::List* shFrmRecords = new ::java::util::ArrayList();
    ::java::util::List* firstCellRefs = new ::java::util::ArrayList();
    ::java::util::List* arrayRecords = new ::java::util::ArrayList();
    ::java::util::List* tableRecords = new ::java::util::ArrayList();
    ::java::util::List* mergeCellRecords = new ::java::util::ArrayList();
    ::org::apache::poi::hssf::record::Record* prevRec = nullptr;
    while (!RecordOrderer::isEndOfRowBlock(npc(rs)->peekNextSid())) {
        if(!npc(rs)->hasNext()) {
            throw new ::java::lang::RuntimeException(u"Failed to find end of row/cell records"_j);
        }
        auto rec = npc(rs)->getNext();
        ::java::util::List* dest;
        {
            ::org::apache::poi::hssf::record::FormulaRecord* fr;
            switch (npc(rec)->getSid()) {
            case ::org::apache::poi::hssf::record::MergeCellsRecord::sid:
                dest = mergeCellRecords;
                break;
            case ::org::apache::poi::hssf::record::SharedFormulaRecord::sid:
                dest = shFrmRecords;
                if(!(dynamic_cast< ::org::apache::poi::hssf::record::FormulaRecord* >(prevRec) != nullptr)) {
                    throw new ::java::lang::RuntimeException(u"Shared formula record should follow a FormulaRecord"_j);
                }
                fr = java_cast< ::org::apache::poi::hssf::record::FormulaRecord* >(prevRec);
                npc(firstCellRefs)->add(static_cast< ::java::lang::Object* >(new ::org::apache::poi::ss::util::CellReference(npc(fr)->getRow(), npc(fr)->getColumn())));
                break;
            case ::org::apache::poi::hssf::record::ArrayRecord::sid:
                dest = arrayRecords;
                break;
            case ::org::apache::poi::hssf::record::TableRecord::sid:
                dest = tableRecords;
                break;
            default:
                dest = plainRecords;
            }
        }

        npc(dest)->add(static_cast< ::java::lang::Object* >(rec));
        prevRec = rec;
    }
    auto sharedFormulaRecs = new ::org::apache::poi::hssf::record::SharedFormulaRecordArray(npc(shFrmRecords)->size());
    auto firstCells = new ::org::apache::poi::ss::util::CellReferenceArray(npc(firstCellRefs)->size());
    auto arrayRecs = new ::org::apache::poi::hssf::record::ArrayRecordArray(npc(arrayRecords)->size());
    auto tableRecs = new ::org::apache::poi::hssf::record::TableRecordArray(npc(tableRecords)->size());
    npc(shFrmRecords)->toArray_(static_cast< ::java::lang::ObjectArray* >(sharedFormulaRecs));
    npc(firstCellRefs)->toArray_(static_cast< ::java::lang::ObjectArray* >(firstCells));
    npc(arrayRecords)->toArray_(static_cast< ::java::lang::ObjectArray* >(arrayRecs));
    npc(tableRecords)->toArray_(static_cast< ::java::lang::ObjectArray* >(tableRecs));
    _plainRecords = plainRecords;
    _sfm = ::org::apache::poi::hssf::record::aggregates::SharedValueManager::create(sharedFormulaRecs, firstCells, arrayRecs, tableRecs);
    _mergedCellsRecords = new ::org::apache::poi::hssf::record::MergeCellsRecordArray(npc(mergeCellRecords)->size());
    npc(mergeCellRecords)->toArray_(static_cast< ::java::lang::ObjectArray* >(_mergedCellsRecords));
}

org::apache::poi::hssf::record::MergeCellsRecordArray* org::apache::poi::hssf::model::RowBlocksReader::getLooseMergedCells()
{
    return _mergedCellsRecords;
}

org::apache::poi::hssf::record::aggregates::SharedValueManager* org::apache::poi::hssf::model::RowBlocksReader::getSharedFormulaManager()
{
    return _sfm;
}

org::apache::poi::hssf::model::RecordStream* org::apache::poi::hssf::model::RowBlocksReader::getPlainRecordStream()
{
    return new RecordStream(_plainRecords, int32_t(0));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::model::RowBlocksReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.RowBlocksReader", 41);
    return c;
}

java::lang::Class* org::apache::poi::hssf::model::RowBlocksReader::getClass0()
{
    return class_();
}


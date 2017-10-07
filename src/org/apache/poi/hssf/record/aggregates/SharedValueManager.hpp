// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/SharedValueManager.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class org::apache::poi::hssf::record::aggregates::SharedValueManager final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static SharedValueManager* createEmpty();

private:
    ::java::util::List* _arrayRecords {  };
    ::org::apache::poi::hssf::record::TableRecordArray* _tableRecords {  };
    ::java::util::Map* _groupsBySharedFormulaRecord {  };
    ::java::util::Map* _groupsCache {  };
protected:
    void ctor(::org::apache::poi::hssf::record::SharedFormulaRecordArray* sharedFormulaRecords, ::org::apache::poi::ss::util::CellReferenceArray* firstCells, ::org::apache::poi::hssf::record::ArrayRecordArray* arrayRecords, ::org::apache::poi::hssf::record::TableRecordArray* tableRecords);

private:
    static /* <Z> */::java::util::List* toList(::java::lang::ObjectArray* zz);

public:
    static SharedValueManager* create(::org::apache::poi::hssf::record::SharedFormulaRecordArray* sharedFormulaRecords, ::org::apache::poi::ss::util::CellReferenceArray* firstCells, ::org::apache::poi::hssf::record::ArrayRecordArray* arrayRecords, ::org::apache::poi::hssf::record::TableRecordArray* tableRecords);
    ::org::apache::poi::hssf::record::SharedFormulaRecord* linkSharedFormulaRecord(::org::apache::poi::ss::util::CellReference* firstCell, FormulaRecordAggregate* agg);

private:
    SharedValueManager_SharedFormulaGroup* findFormulaGroupForCell(::org::apache::poi::ss::util::CellReference* cellRef);
    ::java::lang::Integer* getKeyForCache(::org::apache::poi::ss::util::CellReference* cellRef);

public:
    ::org::apache::poi::hssf::record::SharedValueRecordBase* getRecordForFirstCell(FormulaRecordAggregate* agg);
    void unlink(::org::apache::poi::hssf::record::SharedFormulaRecord* sharedFormulaRecord);
    void addArrayRecord(::org::apache::poi::hssf::record::ArrayRecord* ar);
    ::org::apache::poi::hssf::util::CellRangeAddress8Bit* removeArrayFormula(int32_t rowIndex, int32_t columnIndex);
    ::org::apache::poi::hssf::record::ArrayRecord* getArrayRecord(int32_t firstRow, int32_t firstColumn);

    // Generated

private:
    SharedValueManager(::org::apache::poi::hssf::record::SharedFormulaRecordArray* sharedFormulaRecords, ::org::apache::poi::ss::util::CellReferenceArray* firstCells, ::org::apache::poi::hssf::record::ArrayRecordArray* arrayRecords, ::org::apache::poi::hssf::record::TableRecordArray* tableRecords);
protected:
    SharedValueManager(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SharedValueManager_SharedFormulaGroup;
};

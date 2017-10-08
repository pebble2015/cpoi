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

struct default_init_tag;

class poi::hssf::record::aggregates::SharedValueManager final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static SharedValueManager* createEmpty();

private:
    ::java::util::List* _arrayRecords {  };
    ::poi::hssf::record::TableRecordArray* _tableRecords {  };
    ::java::util::Map* _groupsBySharedFormulaRecord {  };
    ::java::util::Map* _groupsCache {  };
protected:
    void ctor(::poi::hssf::record::SharedFormulaRecordArray* sharedFormulaRecords, ::poi::ss::util::CellReferenceArray* firstCells, ::poi::hssf::record::ArrayRecordArray* arrayRecords, ::poi::hssf::record::TableRecordArray* tableRecords);

private:
    static /* <Z> */::java::util::List* toList(::java::lang::ObjectArray* zz);

public:
    static SharedValueManager* create(::poi::hssf::record::SharedFormulaRecordArray* sharedFormulaRecords, ::poi::ss::util::CellReferenceArray* firstCells, ::poi::hssf::record::ArrayRecordArray* arrayRecords, ::poi::hssf::record::TableRecordArray* tableRecords);
    ::poi::hssf::record::SharedFormulaRecord* linkSharedFormulaRecord(::poi::ss::util::CellReference* firstCell, FormulaRecordAggregate* agg);

private:
    SharedValueManager_SharedFormulaGroup* findFormulaGroupForCell(::poi::ss::util::CellReference* cellRef);
    ::java::lang::Integer* getKeyForCache(::poi::ss::util::CellReference* cellRef);

public:
    ::poi::hssf::record::SharedValueRecordBase* getRecordForFirstCell(FormulaRecordAggregate* agg);
    void unlink(::poi::hssf::record::SharedFormulaRecord* sharedFormulaRecord);
    void addArrayRecord(::poi::hssf::record::ArrayRecord* ar);
    ::poi::hssf::util::CellRangeAddress8Bit* removeArrayFormula(int32_t rowIndex, int32_t columnIndex);
    ::poi::hssf::record::ArrayRecord* getArrayRecord(int32_t firstRow, int32_t firstColumn);

    // Generated

private:
    SharedValueManager(::poi::hssf::record::SharedFormulaRecordArray* sharedFormulaRecords, ::poi::ss::util::CellReferenceArray* firstCells, ::poi::hssf::record::ArrayRecordArray* arrayRecords, ::poi::hssf::record::TableRecordArray* tableRecords);
protected:
    SharedValueManager(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SharedValueManager_SharedFormulaGroup;
};

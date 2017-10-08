// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/ValueRecordsAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Iterable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

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
typedef ::SubArray< ::poi::hssf::record::CellValueRecordInterface, ::java::lang::ObjectArray > CellValueRecordInterfaceArray;
typedef ::SubArray< ::poi::hssf::record::CellValueRecordInterfaceArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > CellValueRecordInterfaceArrayArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::record::aggregates::ValueRecordsAggregate final
    : public virtual ::java::lang::Object
    , public ::java::lang::Iterable
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t MAX_ROW_INDEX { int32_t(65535) };
    static constexpr int32_t INDEX_NOT_SET { int32_t(-1) };
    int32_t firstcell {  };
    int32_t lastcell {  };
    ::poi::hssf::record::CellValueRecordInterfaceArrayArray* records {  };
protected:
    void ctor();
    void ctor(int32_t firstCellIx, int32_t lastCellIx, ::poi::hssf::record::CellValueRecordInterfaceArrayArray* pRecords);

public:
    void insertCell(::poi::hssf::record::CellValueRecordInterface* cell);
    void removeCell(::poi::hssf::record::CellValueRecordInterface* cell);
    void removeAllCellsValuesForRow(int32_t rowIndex);
    int32_t getPhysicalNumberOfCells();
    int32_t getFirstCellNum();
    int32_t getLastCellNum();
    void addMultipleBlanks(::poi::hssf::record::MulBlankRecord* mbr);
    void construct(::poi::hssf::record::CellValueRecordInterface* rec, ::poi::hssf::model::RecordStream* rs, SharedValueManager* sfh);
    int32_t getRowCellBlockSize(int32_t startRow, int32_t endRow);
    bool rowHasCells(int32_t row);

private:
    static int32_t getRowSerializedSize(::poi::hssf::record::CellValueRecordInterfaceArray* rowCells);

public:
    void visitCellsForRow(int32_t rowIndex, RecordAggregate_RecordVisitor* rv);

private:
    static int32_t countBlanks(::poi::hssf::record::CellValueRecordInterfaceArray* rowCellValues, int32_t startIx);
    ::poi::hssf::record::MulBlankRecord* createMBR(::poi::hssf::record::CellValueRecordInterfaceArray* cellValues, int32_t startIx, int32_t nBlank);

public:
    void updateFormulasAfterRowShift(::poi::ss::formula::FormulaShifter* shifter, int32_t currentExternSheetIndex);
    ::java::util::Iterator* iterator() override;
    ::java::lang::Object* clone() override;

    // Generated
    ValueRecordsAggregate();

private:
    ValueRecordsAggregate(int32_t firstCellIx, int32_t lastCellIx, ::poi::hssf::record::CellValueRecordInterfaceArrayArray* pRecords);
protected:
    ValueRecordsAggregate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class ValueRecordsAggregate_ValueIterator;
};

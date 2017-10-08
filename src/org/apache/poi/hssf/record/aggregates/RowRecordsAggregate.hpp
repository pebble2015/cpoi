// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/RowRecordsAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::RowRecord, StandardRecordArray > RowRecordArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::record::aggregates::RowRecordsAggregate final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    int32_t _firstrow {  };
    int32_t _lastrow {  };
    ::java::util::Map* _rowRecords {  };
    ValueRecordsAggregate* _valuesAgg {  };
    ::java::util::List* _unknownRecords {  };
    SharedValueManager* _sharedValueManager {  };
    ::poi::hssf::record::RowRecordArray* _rowRecordValues {  };
protected:
    void ctor();
    void ctor(SharedValueManager* svm);
    void ctor(::poi::hssf::model::RecordStream* rs, SharedValueManager* svm);

private:
    void addUnknownRecord(::poi::hssf::record::Record* rec);

public:
    void insertRow(::poi::hssf::record::RowRecord* row);
    void removeRow(::poi::hssf::record::RowRecord* row);
    ::poi::hssf::record::RowRecord* getRow(int32_t rowIndex);
    int32_t getPhysicalNumberOfRows();
    int32_t getFirstRowNum();
    int32_t getLastRowNum();
    int32_t getRowBlockCount();

private:
    int32_t getRowBlockSize(int32_t block);

public:
    int32_t getRowCountForBlock(int32_t block);

private:
    int32_t getStartRowNumberForBlock(int32_t block);
    int32_t getEndRowNumberForBlock(int32_t block);
    int32_t visitRowRecordsForBlock(int32_t blockIndex, RecordAggregate_RecordVisitor* rv);

public:
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;
    ::java::util::Iterator* getIterator();
    int32_t findStartOfRowOutlineGroup(int32_t row);
    int32_t findEndOfRowOutlineGroup(int32_t row);

private:
    int32_t writeHidden(::poi::hssf::record::RowRecord* pRowRecord, int32_t row);

public:
    void collapseRow(int32_t rowNumber);
    static ::poi::hssf::record::RowRecord* createRow(int32_t rowNumber);
    bool isRowGroupCollapsed(int32_t row);
    void expandRow(int32_t rowNumber);
    bool isRowGroupHiddenByParent(int32_t row);
    ::java::util::Iterator* getCellValueIterator();
    ::poi::hssf::record::IndexRecord* createIndexRecord(int32_t indexRecordOffset, int32_t sizeOfInitialSheetRecords);
    void insertCell(::poi::hssf::record::CellValueRecordInterface* cvRec);
    void removeCell(::poi::hssf::record::CellValueRecordInterface* cvRec);
    FormulaRecordAggregate* createFormula(int32_t row, int32_t col);
    void updateFormulasAfterRowShift(::poi::ss::formula::FormulaShifter* formulaShifter, int32_t currentExternSheetIndex);
    ::poi::hssf::record::DimensionsRecord* createDimensions();

    // Generated
    RowRecordsAggregate();

private:
    RowRecordsAggregate(SharedValueManager* svm);

public:
    RowRecordsAggregate(::poi::hssf::model::RecordStream* rs, SharedValueManager* svm);
protected:
    RowRecordsAggregate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};

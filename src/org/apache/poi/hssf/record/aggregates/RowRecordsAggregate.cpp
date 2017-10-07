// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/RowRecordsAggregate.java
#include <org/apache/poi/hssf/record/aggregates/RowRecordsAggregate.hpp>

#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <java/util/TreeMap.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/ContinueRecord.hpp>
#include <org/apache/poi/hssf/record/DBCellRecord_Builder.hpp>
#include <org/apache/poi/hssf/record/DBCellRecord.hpp>
#include <org/apache/poi/hssf/record/DConRefRecord.hpp>
#include <org/apache/poi/hssf/record/DimensionsRecord.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/IndexRecord.hpp>
#include <org/apache/poi/hssf/record/MulBlankRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RowRecord.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/UnknownRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/FormulaRecordAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_PositionTrackingVisitor.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>
#include <org/apache/poi/hssf/record/aggregates/SharedValueManager.hpp>
#include <org/apache/poi/hssf/record/aggregates/ValueRecordsAggregate.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
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
typedef ::SubArray< ::org::apache::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::RowRecord, StandardRecordArray > RowRecordArray;
                } // record
            } // hssf
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

org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::RowRecordsAggregate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::RowRecordsAggregate() 
    : RowRecordsAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::RowRecordsAggregate(SharedValueManager* svm) 
    : RowRecordsAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor(svm);
}

org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::RowRecordsAggregate(::org::apache::poi::hssf::model::RecordStream* rs, SharedValueManager* svm) 
    : RowRecordsAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs,svm);
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::init()
{
    _firstrow = -int32_t(1);
    _lastrow = -int32_t(1);
    _rowRecordValues = nullptr;
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::ctor()
{
    ctor(SharedValueManager::createEmpty());
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::ctor(SharedValueManager* svm)
{
    super::ctor();
    init();
    if(svm == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"SharedValueManager must be provided."_j);
    }
    _rowRecords = new ::java::util::TreeMap();
    _valuesAgg = new ValueRecordsAggregate();
    _unknownRecords = new ::java::util::ArrayList();
    _sharedValueManager = svm;
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::ctor(::org::apache::poi::hssf::model::RecordStream* rs, SharedValueManager* svm)
{
    ctor(svm);
    while (npc(rs)->hasNext()) {
        auto rec = npc(rs)->getNext();
        switch (npc(rec)->getSid()) {
        case ::org::apache::poi::hssf::record::RowRecord::sid:
            insertRow(java_cast< ::org::apache::poi::hssf::record::RowRecord* >(rec));
            continue;
        case ::org::apache::poi::hssf::record::DConRefRecord::sid:
            addUnknownRecord(rec);
            continue;
        case ::org::apache::poi::hssf::record::DBCellRecord::sid:
            continue;
        }

        if(dynamic_cast< ::org::apache::poi::hssf::record::UnknownRecord* >(rec) != nullptr) {
            addUnknownRecord(rec);
            while (npc(rs)->peekNextSid() == ::org::apache::poi::hssf::record::ContinueRecord::sid) {
                addUnknownRecord(npc(rs)->getNext());
            }
            continue;
        }
        if(dynamic_cast< ::org::apache::poi::hssf::record::MulBlankRecord* >(rec) != nullptr) {
            npc(_valuesAgg)->addMultipleBlanks(java_cast< ::org::apache::poi::hssf::record::MulBlankRecord* >(rec));
            continue;
        }
        if(!(dynamic_cast< ::org::apache::poi::hssf::record::CellValueRecordInterface* >(rec) != nullptr)) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected record type ("_j)->append(npc(npc(rec)->getClass())->getName())
                ->append(u")"_j)->toString());
        }
        npc(_valuesAgg)->construct(java_cast< ::org::apache::poi::hssf::record::CellValueRecordInterface* >(rec), rs, svm);
    }
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::addUnknownRecord(::org::apache::poi::hssf::record::Record* rec)
{
    npc(_unknownRecords)->add(static_cast< ::java::lang::Object* >(rec));
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::insertRow(::org::apache::poi::hssf::record::RowRecord* row)
{
    npc(_rowRecords)->put(::java::lang::Integer::valueOf(npc(row)->getRowNumber()), row);
    _rowRecordValues = nullptr;
    if((npc(row)->getRowNumber() < _firstrow) || (_firstrow == -int32_t(1))) {
        _firstrow = npc(row)->getRowNumber();
    }
    if((npc(row)->getRowNumber() > _lastrow) || (_lastrow == -int32_t(1))) {
        _lastrow = npc(row)->getRowNumber();
    }
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::removeRow(::org::apache::poi::hssf::record::RowRecord* row)
{
    auto rowIndex = npc(row)->getRowNumber();
    npc(_valuesAgg)->removeAllCellsValuesForRow(rowIndex);
    auto key = ::java::lang::Integer::valueOf(rowIndex);
    auto rr = java_cast< ::org::apache::poi::hssf::record::RowRecord* >(npc(_rowRecords)->remove(key));
    if(rr == nullptr) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Invalid row index ("_j)->append(npc(key)->intValue())
            ->append(u")"_j)->toString());
    }
    if(row != rr) {
        npc(_rowRecords)->put(key, rr);
        throw new ::java::lang::RuntimeException(u"Attempt to remove row that does not belong to this sheet"_j);
    }
    _rowRecordValues = nullptr;
}

org::apache::poi::hssf::record::RowRecord* org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::getRow(int32_t rowIndex)
{
    auto maxrow = npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastRowIndex();
    if(rowIndex < 0 || rowIndex > maxrow) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"The row number must be between 0 and "_j)->append(maxrow)
            ->append(u", but had: "_j)
            ->append(rowIndex)->toString());
    }
    return java_cast< ::org::apache::poi::hssf::record::RowRecord* >(npc(_rowRecords)->get(::java::lang::Integer::valueOf(rowIndex)));
}

int32_t org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::getPhysicalNumberOfRows()
{
    return npc(_rowRecords)->size();
}

int32_t org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::getFirstRowNum()
{
    return _firstrow;
}

int32_t org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::getLastRowNum()
{
    return _lastrow;
}

int32_t org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::getRowBlockCount()
{
    auto size = npc(_rowRecords)->size() / ::org::apache::poi::hssf::record::DBCellRecord::BLOCK_SIZE;
    if((npc(_rowRecords)->size() % ::org::apache::poi::hssf::record::DBCellRecord::BLOCK_SIZE) != 0)
        size++;

    return size;
}

int32_t org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::getRowBlockSize(int32_t block)
{
    return ::org::apache::poi::hssf::record::RowRecord::ENCODED_SIZE * getRowCountForBlock(block);
}

int32_t org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::getRowCountForBlock(int32_t block)
{
    auto startIndex = block * ::org::apache::poi::hssf::record::DBCellRecord::BLOCK_SIZE;
    auto endIndex = startIndex + ::org::apache::poi::hssf::record::DBCellRecord::BLOCK_SIZE - int32_t(1);
    if(endIndex >= npc(_rowRecords)->size())
        endIndex = npc(_rowRecords)->size() - int32_t(1);

    return endIndex - startIndex + int32_t(1);
}

int32_t org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::getStartRowNumberForBlock(int32_t block)
{
    auto startIndex = block * ::org::apache::poi::hssf::record::DBCellRecord::BLOCK_SIZE;
    if(_rowRecordValues == nullptr) {
        _rowRecordValues = java_cast< ::org::apache::poi::hssf::record::RowRecordArray* >(npc(npc(_rowRecords)->values())->toArray_(new ::org::apache::poi::hssf::record::RowRecordArray(npc(_rowRecords)->size())));
    }
    try {
        return npc((*_rowRecordValues)[startIndex])->getRowNumber();
    } catch (::java::lang::ArrayIndexOutOfBoundsException* e) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Did not find start row for block "_j)->append(block)->toString());
    }
}

int32_t org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::getEndRowNumberForBlock(int32_t block)
{
    auto endIndex = ((block + int32_t(1)) * ::org::apache::poi::hssf::record::DBCellRecord::BLOCK_SIZE) - int32_t(1);
    if(endIndex >= npc(_rowRecords)->size())
        endIndex = npc(_rowRecords)->size() - int32_t(1);

    if(_rowRecordValues == nullptr) {
        _rowRecordValues = java_cast< ::org::apache::poi::hssf::record::RowRecordArray* >(npc(npc(_rowRecords)->values())->toArray_(new ::org::apache::poi::hssf::record::RowRecordArray(npc(_rowRecords)->size())));
    }
    try {
        return npc((*_rowRecordValues)[endIndex])->getRowNumber();
    } catch (::java::lang::ArrayIndexOutOfBoundsException* e) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Did not find end row for block "_j)->append(block)->toString());
    }
}

int32_t org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::visitRowRecordsForBlock(int32_t blockIndex, RecordAggregate_RecordVisitor* rv)
{
    auto const startIndex = blockIndex * ::org::apache::poi::hssf::record::DBCellRecord::BLOCK_SIZE;
    auto const endIndex = startIndex + ::org::apache::poi::hssf::record::DBCellRecord::BLOCK_SIZE;
    auto rowIterator = npc(npc(_rowRecords)->values())->iterator();
    auto i = int32_t(0);
    for (; i < startIndex; i++) 
                npc(rowIterator)->next();

    auto result = int32_t(0);
    while (npc(rowIterator)->hasNext() && (i++ < endIndex)) {
        ::org::apache::poi::hssf::record::Record* rec = java_cast< ::org::apache::poi::hssf::record::RowRecord* >(npc(rowIterator)->next());
        result += npc(rec)->getRecordSize();
        npc(rv)->visitRecord(rec);
    }
    return result;
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::visitContainedRecords(RecordAggregate_RecordVisitor* rv)
{
    auto stv = new RecordAggregate_PositionTrackingVisitor(rv, int32_t(0));
    auto const blockCount = getRowBlockCount();
    for (auto blockIndex = int32_t(0); blockIndex < blockCount; blockIndex++) {
        auto pos = int32_t(0);
        auto const rowBlockSize = visitRowRecordsForBlock(blockIndex, rv);
        pos += rowBlockSize;
        auto const startRowNumber = getStartRowNumberForBlock(blockIndex);
        auto const endRowNumber = getEndRowNumberForBlock(blockIndex);
        auto dbcrBuilder = new ::org::apache::poi::hssf::record::DBCellRecord_Builder();
        auto cellRefOffset = (rowBlockSize - ::org::apache::poi::hssf::record::RowRecord::ENCODED_SIZE);
        for (auto row = startRowNumber; row <= endRowNumber; row++) {
            if(npc(_valuesAgg)->rowHasCells(row)) {
                npc(stv)->setPosition(0);
                npc(_valuesAgg)->visitCellsForRow(row, stv);
                auto rowCellSize = npc(stv)->getPosition();
                pos += rowCellSize;
                npc(dbcrBuilder)->addCellOffset(cellRefOffset);
                cellRefOffset = rowCellSize;
            }
        }
        npc(rv)->visitRecord(npc(dbcrBuilder)->build(pos));
    }
    for (auto _i = npc(_unknownRecords)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::Record* _unknownRecord = java_cast< ::org::apache::poi::hssf::record::Record* >(_i->next());
        {
            npc(rv)->visitRecord(_unknownRecord);
        }
    }
}

java::util::Iterator* org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::getIterator()
{
    return npc(npc(_rowRecords)->values())->iterator();
}

int32_t org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::findStartOfRowOutlineGroup(int32_t row)
{
    auto rowRecord = this->getRow(row);
    int32_t level = npc(rowRecord)->getOutlineLevel();
    auto currentRow = row;
    while (currentRow >= 0 && this->getRow(currentRow) != nullptr) {
        rowRecord = this->getRow(currentRow);
        if(npc(rowRecord)->getOutlineLevel() < level) {
            return currentRow + int32_t(1);
        }
        currentRow--;
    }
    return currentRow + int32_t(1);
}

int32_t org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::findEndOfRowOutlineGroup(int32_t row)
{
    int32_t level = npc(getRow(row))->getOutlineLevel();
    int32_t currentRow;
    for (currentRow = row; currentRow < getLastRowNum(); currentRow++) {
        if(getRow(currentRow) == nullptr || npc(getRow(currentRow))->getOutlineLevel() < level) {
            break;
        }
    }
    return currentRow - int32_t(1);
}

int32_t org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::writeHidden(::org::apache::poi::hssf::record::RowRecord* pRowRecord, int32_t row)
{
    auto rowIx = row;
    auto rowRecord = pRowRecord;
    int32_t level = npc(rowRecord)->getOutlineLevel();
    while (rowRecord != nullptr && npc(getRow(rowIx))->getOutlineLevel() >= level) {
        npc(rowRecord)->setZeroHeight(true);
        rowIx++;
        rowRecord = getRow(rowIx);
    }
    return rowIx;
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::collapseRow(int32_t rowNumber)
{
    auto startRow = findStartOfRowOutlineGroup(rowNumber);
    auto rowRecord = getRow(startRow);
    auto nextRowIx = writeHidden(rowRecord, startRow);
    auto row = getRow(nextRowIx);
    if(row == nullptr) {
        row = createRow(nextRowIx);
        insertRow(row);
    }
    npc(row)->setColapsed(true);
}

org::apache::poi::hssf::record::RowRecord* org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::createRow(int32_t rowNumber)
{
    clinit();
    return new ::org::apache::poi::hssf::record::RowRecord(rowNumber);
}

bool org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::isRowGroupCollapsed(int32_t row)
{
    auto collapseRow = findEndOfRowOutlineGroup(row) + int32_t(1);
    return getRow(collapseRow) != nullptr && npc(getRow(collapseRow))->getColapsed();
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::expandRow(int32_t rowNumber)
{
    if(rowNumber == -int32_t(1))
        return;

    if(!isRowGroupCollapsed(rowNumber)) {
        return;
    }
    auto startIdx = findStartOfRowOutlineGroup(rowNumber);
    auto row = getRow(startIdx);
    auto endIdx = findEndOfRowOutlineGroup(rowNumber);
    if(!isRowGroupHiddenByParent(rowNumber)) {
        for (auto i = startIdx; i <= endIdx; i++) {
            auto otherRow = getRow(i);
            if(npc(row)->getOutlineLevel() == npc(otherRow)->getOutlineLevel() || !isRowGroupCollapsed(i)) {
                npc(otherRow)->setZeroHeight(false);
            }
        }
    }
    npc(getRow(endIdx + int32_t(1)))->setColapsed(false);
}

bool org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::isRowGroupHiddenByParent(int32_t row)
{
    int32_t endLevel;
    bool endHidden;
    auto endOfOutlineGroupIdx = findEndOfRowOutlineGroup(row);
    if(getRow(endOfOutlineGroupIdx + int32_t(1)) == nullptr) {
        endLevel = 0;
        endHidden = false;
    } else {
        endLevel = npc(getRow(endOfOutlineGroupIdx + int32_t(1)))->getOutlineLevel();
        endHidden = npc(getRow(endOfOutlineGroupIdx + int32_t(1)))->getZeroHeight();
    }
    int32_t startLevel;
    bool startHidden;
    auto startOfOutlineGroupIdx = findStartOfRowOutlineGroup(row);
    if(startOfOutlineGroupIdx - int32_t(1) < 0 || getRow(startOfOutlineGroupIdx - int32_t(1)) == nullptr) {
        startLevel = 0;
        startHidden = false;
    } else {
        startLevel = npc(getRow(startOfOutlineGroupIdx - int32_t(1)))->getOutlineLevel();
        startHidden = npc(getRow(startOfOutlineGroupIdx - int32_t(1)))->getZeroHeight();
    }
    if(endLevel > startLevel) {
        return endHidden;
    }
    return startHidden;
}

java::util::Iterator* org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::getCellValueIterator()
{
    return npc(_valuesAgg)->iterator();
}

org::apache::poi::hssf::record::IndexRecord* org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::createIndexRecord(int32_t indexRecordOffset, int32_t sizeOfInitialSheetRecords)
{
    auto result = new ::org::apache::poi::hssf::record::IndexRecord();
    npc(result)->setFirstRow(_firstrow);
    npc(result)->setLastRowAdd1(_lastrow + int32_t(1));
    auto blockCount = getRowBlockCount();
    auto indexRecSize = ::org::apache::poi::hssf::record::IndexRecord::getRecordSizeForBlockCount(blockCount);
    auto currentOffset = indexRecordOffset + indexRecSize + sizeOfInitialSheetRecords;
    for (auto block = int32_t(0); block < blockCount; block++) {
        currentOffset += getRowBlockSize(block);
        currentOffset += npc(_valuesAgg)->getRowCellBlockSize(getStartRowNumberForBlock(block), getEndRowNumberForBlock(block));
        npc(result)->addDbcell(currentOffset);
        currentOffset += (int32_t(8) + (getRowCountForBlock(block) * int32_t(2)));
    }
    return result;
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::insertCell(::org::apache::poi::hssf::record::CellValueRecordInterface* cvRec)
{
    npc(_valuesAgg)->insertCell(cvRec);
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::removeCell(::org::apache::poi::hssf::record::CellValueRecordInterface* cvRec)
{
    if(dynamic_cast< FormulaRecordAggregate* >(cvRec) != nullptr) {
        npc((java_cast< FormulaRecordAggregate* >(cvRec)))->notifyFormulaChanging();
    }
    npc(_valuesAgg)->removeCell(cvRec);
}

org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate* org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::createFormula(int32_t row, int32_t col)
{
    auto fr = new ::org::apache::poi::hssf::record::FormulaRecord();
    npc(fr)->setRow(row);
    npc(fr)->setColumn(static_cast< int16_t >(col));
    return new FormulaRecordAggregate(fr, nullptr, _sharedValueManager);
}

void org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::updateFormulasAfterRowShift(::org::apache::poi::ss::formula::FormulaShifter* formulaShifter, int32_t currentExternSheetIndex)
{
    npc(_valuesAgg)->updateFormulasAfterRowShift(formulaShifter, currentExternSheetIndex);
}

org::apache::poi::hssf::record::DimensionsRecord* org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::createDimensions()
{
    auto result = new ::org::apache::poi::hssf::record::DimensionsRecord();
    npc(result)->setFirstRow(_firstrow);
    npc(result)->setLastRow(_lastrow);
    npc(result)->setFirstCol(static_cast< int16_t >(npc(_valuesAgg)->getFirstCellNum()));
    npc(result)->setLastCol(static_cast< int16_t >(npc(_valuesAgg)->getLastCellNum()));
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.RowRecordsAggregate", 57);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::RowRecordsAggregate::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/ValueRecordsAggregate.java
#include <org/apache/poi/hssf/record/aggregates/ValueRecordsAggregate.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/BlankRecord.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/MulBlankRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/StringRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/FormulaRecordAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/ValueRecordsAggregate_ValueIterator.hpp>
#include <org/apache/poi/ss/formula/FormulaShifter.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>
#include <Array.hpp>

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
        } // record
    } // hssf

    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss

    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::CellValueRecordInterfaceArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > CellValueRecordInterfaceArrayArray;
        } // record
    } // hssf
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

poi::hssf::record::aggregates::ValueRecordsAggregate::ValueRecordsAggregate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::aggregates::ValueRecordsAggregate::ValueRecordsAggregate() 
    : ValueRecordsAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::aggregates::ValueRecordsAggregate::ValueRecordsAggregate(int32_t firstCellIx, int32_t lastCellIx, ::poi::hssf::record::CellValueRecordInterfaceArrayArray* pRecords) 
    : ValueRecordsAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstCellIx,lastCellIx,pRecords);
}

void poi::hssf::record::aggregates::ValueRecordsAggregate::init()
{
    firstcell = ValueRecordsAggregate::INDEX_NOT_SET;
    lastcell = ValueRecordsAggregate::INDEX_NOT_SET;
}

constexpr int32_t poi::hssf::record::aggregates::ValueRecordsAggregate::MAX_ROW_INDEX;

constexpr int32_t poi::hssf::record::aggregates::ValueRecordsAggregate::INDEX_NOT_SET;

void poi::hssf::record::aggregates::ValueRecordsAggregate::ctor()
{
    ctor(INDEX_NOT_SET, INDEX_NOT_SET, new ::poi::hssf::record::CellValueRecordInterfaceArrayArray(int32_t(30)));
}

void poi::hssf::record::aggregates::ValueRecordsAggregate::ctor(int32_t firstCellIx, int32_t lastCellIx, ::poi::hssf::record::CellValueRecordInterfaceArrayArray* pRecords)
{
    super::ctor();
    init();
    firstcell = firstCellIx;
    lastcell = lastCellIx;
    records = pRecords;
}

void poi::hssf::record::aggregates::ValueRecordsAggregate::insertCell(::poi::hssf::record::CellValueRecordInterface* cell)
{
    auto column = npc(cell)->getColumn();
    auto row = npc(cell)->getRow();
    if(row >= npc(records)->length) {
        auto oldRecords = records;
        auto newSize = npc(oldRecords)->length * int32_t(2);
        if(newSize < row + int32_t(1))
            newSize = row + int32_t(1);

        records = new ::poi::hssf::record::CellValueRecordInterfaceArrayArray(newSize);
        ::java::lang::System::arraycopy(oldRecords, 0, records, 0, npc(oldRecords)->length);
    }
    auto rowCells = (*records)[row];
    if(rowCells == nullptr) {
        auto newSize = column + int32_t(1);
        if(newSize < 10)
            newSize = 10;

        rowCells = new ::poi::hssf::record::CellValueRecordInterfaceArray(newSize);
        records->set(row, rowCells);
    }
    if(column >= npc(rowCells)->length) {
        auto oldRowCells = rowCells;
        auto newSize = npc(oldRowCells)->length * int32_t(2);
        if(newSize < column + int32_t(1))
            newSize = column + int32_t(1);

        rowCells = new ::poi::hssf::record::CellValueRecordInterfaceArray(newSize);
        ::java::lang::System::arraycopy(oldRowCells, 0, rowCells, 0, npc(oldRowCells)->length);
        records->set(row, rowCells);
    }
    rowCells->set(column, cell);
    if(column < firstcell || firstcell == INDEX_NOT_SET) {
        firstcell = column;
    }
    if(column > lastcell || lastcell == INDEX_NOT_SET) {
        lastcell = column;
    }
}

void poi::hssf::record::aggregates::ValueRecordsAggregate::removeCell(::poi::hssf::record::CellValueRecordInterface* cell)
{
    if(cell == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"cell must not be null"_j);
    }
    auto row = npc(cell)->getRow();
    if(row >= npc(records)->length) {
        throw new ::java::lang::RuntimeException(u"cell row is out of range"_j);
    }
    auto rowCells = (*records)[row];
    if(rowCells == nullptr) {
        throw new ::java::lang::RuntimeException(u"cell row is already empty"_j);
    }
    auto column = npc(cell)->getColumn();
    if(column >= npc(rowCells)->length) {
        throw new ::java::lang::RuntimeException(u"cell column is out of range"_j);
    }
    rowCells->set(column, nullptr);
}

void poi::hssf::record::aggregates::ValueRecordsAggregate::removeAllCellsValuesForRow(int32_t rowIndex)
{
    if(rowIndex < 0 || rowIndex > MAX_ROW_INDEX) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified rowIndex "_j)->append(rowIndex)
            ->append(u" is outside the allowable range (0.."_j)
            ->append(MAX_ROW_INDEX)
            ->append(u")"_j)->toString());
    }
    if(rowIndex >= npc(records)->length) {
        return;
    }
    records->set(rowIndex, nullptr);
}

int32_t poi::hssf::record::aggregates::ValueRecordsAggregate::getPhysicalNumberOfCells()
{
    auto count = int32_t(0);
    for (auto r = int32_t(0); r < npc(records)->length; r++) {
        auto rowCells = (*records)[r];
        if(rowCells != nullptr) {
            for (auto c = int32_t(0); c < npc(rowCells)->length; c++) {
                if((*rowCells)[c] != nullptr)
                    count++;

            }
        }
    }
    return count;
}

int32_t poi::hssf::record::aggregates::ValueRecordsAggregate::getFirstCellNum()
{
    return firstcell;
}

int32_t poi::hssf::record::aggregates::ValueRecordsAggregate::getLastCellNum()
{
    return lastcell;
}

void poi::hssf::record::aggregates::ValueRecordsAggregate::addMultipleBlanks(::poi::hssf::record::MulBlankRecord* mbr)
{
    for (auto j = int32_t(0); j < npc(mbr)->getNumColumns(); j++) {
        auto br = new ::poi::hssf::record::BlankRecord();
        npc(br)->setColumn(static_cast< int16_t >((j + npc(mbr)->getFirstColumn())));
        npc(br)->setRow(npc(mbr)->getRow());
        npc(br)->setXFIndex(npc(mbr)->getXFAt(j));
        insertCell(br);
    }
}

void poi::hssf::record::aggregates::ValueRecordsAggregate::construct(::poi::hssf::record::CellValueRecordInterface* rec, ::poi::hssf::model::RecordStream* rs, SharedValueManager* sfh)
{
    if(dynamic_cast< ::poi::hssf::record::FormulaRecord* >(rec) != nullptr) {
        auto formulaRec = java_cast< ::poi::hssf::record::FormulaRecord* >(rec);
        ::poi::hssf::record::StringRecord* cachedText;
        auto nextClass = npc(rs)->peekNextClass();
        if(static_cast< ::java::lang::Object* >(nextClass) == static_cast< ::java::lang::Object* >(::poi::hssf::record::StringRecord::class_())) {
            cachedText = java_cast< ::poi::hssf::record::StringRecord* >(npc(rs)->getNext());
        } else {
            cachedText = nullptr;
        }
        insertCell(new FormulaRecordAggregate(formulaRec, cachedText, sfh));
    } else {
        insertCell(rec);
    }
}

int32_t poi::hssf::record::aggregates::ValueRecordsAggregate::getRowCellBlockSize(int32_t startRow, int32_t endRow)
{
    auto result = int32_t(0);
    for (auto rowIx = startRow; rowIx <= endRow && rowIx < npc(records)->length; rowIx++) {
        result += getRowSerializedSize((*records)[rowIx]);
    }
    return result;
}

bool poi::hssf::record::aggregates::ValueRecordsAggregate::rowHasCells(int32_t row)
{
    if(row >= npc(records)->length) {
        return false;
    }
    auto rowCells = (*records)[row];
    if(rowCells == nullptr)
        return false;

    for (auto col = int32_t(0); col < npc(rowCells)->length; col++) {
        if((*rowCells)[col] != nullptr)
            return true;

    }
    return false;
}

int32_t poi::hssf::record::aggregates::ValueRecordsAggregate::getRowSerializedSize(::poi::hssf::record::CellValueRecordInterfaceArray* rowCells)
{
    clinit();
    if(rowCells == nullptr) {
        return 0;
    }
    auto result = int32_t(0);
    for (auto i = int32_t(0); i < npc(rowCells)->length; i++) {
        auto cvr = java_cast< ::poi::hssf::record::RecordBase* >((*rowCells)[i]);
        if(cvr == nullptr) {
            continue;
        }
        auto nBlank = countBlanks(rowCells, i);
        if(nBlank > 1) {
            result += (int32_t(10) + int32_t(2) * nBlank);
            i += nBlank - int32_t(1);
        } else {
            result += npc(cvr)->getRecordSize();
        }
    }
    return result;
}

void poi::hssf::record::aggregates::ValueRecordsAggregate::visitCellsForRow(int32_t rowIndex, RecordAggregate_RecordVisitor* rv)
{
    auto rowCells = (*records)[rowIndex];
    if(rowCells == nullptr) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Row ["_j)->append(rowIndex)
            ->append(u"] is empty"_j)->toString());
    }
    for (auto i = int32_t(0); i < npc(rowCells)->length; i++) {
        auto cvr = java_cast< ::poi::hssf::record::RecordBase* >((*rowCells)[i]);
        if(cvr == nullptr) {
            continue;
        }
        auto nBlank = countBlanks(rowCells, i);
        if(nBlank > 1) {
            npc(rv)->visitRecord(createMBR(rowCells, i, nBlank));
            i += nBlank - int32_t(1);
        } else if(dynamic_cast< RecordAggregate* >(cvr) != nullptr) {
            auto agg = java_cast< RecordAggregate* >(cvr);
            npc(agg)->visitContainedRecords(rv);
        } else {
            npc(rv)->visitRecord(java_cast< ::poi::hssf::record::Record* >(cvr));
        }
    }
}

int32_t poi::hssf::record::aggregates::ValueRecordsAggregate::countBlanks(::poi::hssf::record::CellValueRecordInterfaceArray* rowCellValues, int32_t startIx)
{
    clinit();
    auto i = startIx;
    while (i < npc(rowCellValues)->length) {
        auto cvr = (*rowCellValues)[i];
        if(!(dynamic_cast< ::poi::hssf::record::BlankRecord* >(cvr) != nullptr)) {
            break;
        }
        i++;
    }
    return i - startIx;
}

poi::hssf::record::MulBlankRecord* poi::hssf::record::aggregates::ValueRecordsAggregate::createMBR(::poi::hssf::record::CellValueRecordInterfaceArray* cellValues, int32_t startIx, int32_t nBlank)
{
    auto xfs = new ::int16_tArray(nBlank);
    for (auto i = int32_t(0); i < npc(xfs)->length; i++) {
        (*xfs)[i] = npc((java_cast< ::poi::hssf::record::BlankRecord* >((*cellValues)[startIx + i])))->getXFIndex();
    }
    auto rowIx = npc((*cellValues)[startIx])->getRow();
    return new ::poi::hssf::record::MulBlankRecord(rowIx, startIx, xfs);
}

void poi::hssf::record::aggregates::ValueRecordsAggregate::updateFormulasAfterRowShift(::poi::ss::formula::FormulaShifter* shifter, int32_t currentExternSheetIndex)
{
    for (auto i = int32_t(0); i < npc(records)->length; i++) {
        auto rowCells = (*records)[i];
        if(rowCells == nullptr) {
            continue;
        }
        for (auto j = int32_t(0); j < npc(rowCells)->length; j++) {
            auto cell = (*rowCells)[j];
            if(dynamic_cast< FormulaRecordAggregate* >(cell) != nullptr) {
                auto fra = java_cast< FormulaRecordAggregate* >(cell);
                auto ptgs = npc(fra)->getFormulaTokens();
                auto ptgs2 = npc(npc((java_cast< FormulaRecordAggregate* >(cell)))->getFormulaRecord())->getParsedExpression();
                if(npc(shifter)->adjustFormula(ptgs, currentExternSheetIndex)) {
                    npc(fra)->setParsedExpression(ptgs);
                }
            }
        }
    }
}

java::util::Iterator* poi::hssf::record::aggregates::ValueRecordsAggregate::iterator()
{
    return new ValueRecordsAggregate_ValueIterator(this);
}

java::lang::Object* poi::hssf::record::aggregates::ValueRecordsAggregate::clone()
{
    throw new ::java::lang::RuntimeException(u"clone() should not be called.  ValueRecordsAggregate should be copied via Sheet.cloneSheet()"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::aggregates::ValueRecordsAggregate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.ValueRecordsAggregate", 59);
    return c;
}

java::lang::Class* poi::hssf::record::aggregates::ValueRecordsAggregate::getClass0()
{
    return class_();
}


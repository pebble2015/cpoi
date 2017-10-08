// Generated from /POI/java/org/apache/poi/hssf/model/InternalSheet.java
#include <org/apache/poi/hssf/model/InternalSheet.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/CloneNotSupportedException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/InternalSheet_spillAggregate_1.hpp>
#include <org/apache/poi/hssf/model/InternalSheet_RecordCloner.hpp>
#include <org/apache/poi/hssf/model/InternalSheet_UnsupportedBOFType.hpp>
#include <org/apache/poi/hssf/model/RecordOrderer.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/model/RowBlocksReader.hpp>
#include <org/apache/poi/hssf/record/BOFRecord.hpp>
#include <org/apache/poi/hssf/record/CFHeader12Record.hpp>
#include <org/apache/poi/hssf/record/CFHeaderRecord.hpp>
#include <org/apache/poi/hssf/record/CalcCountRecord.hpp>
#include <org/apache/poi/hssf/record/CalcModeRecord.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/ColumnInfoRecord.hpp>
#include <org/apache/poi/hssf/record/DVALRecord.hpp>
#include <org/apache/poi/hssf/record/DefaultColWidthRecord.hpp>
#include <org/apache/poi/hssf/record/DefaultRowHeightRecord.hpp>
#include <org/apache/poi/hssf/record/DeltaRecord.hpp>
#include <org/apache/poi/hssf/record/DimensionsRecord.hpp>
#include <org/apache/poi/hssf/record/DrawingRecord.hpp>
#include <org/apache/poi/hssf/record/EOFRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/FeatHdrRecord.hpp>
#include <org/apache/poi/hssf/record/FeatRecord.hpp>
#include <org/apache/poi/hssf/record/GridsetRecord.hpp>
#include <org/apache/poi/hssf/record/GutsRecord.hpp>
#include <org/apache/poi/hssf/record/IndexRecord.hpp>
#include <org/apache/poi/hssf/record/IterationRecord.hpp>
#include <org/apache/poi/hssf/record/MergeCellsRecord.hpp>
#include <org/apache/poi/hssf/record/NoteRecord.hpp>
#include <org/apache/poi/hssf/record/PaneRecord.hpp>
#include <org/apache/poi/hssf/record/PrintGridlinesRecord.hpp>
#include <org/apache/poi/hssf/record/PrintHeadersRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RefModeRecord.hpp>
#include <org/apache/poi/hssf/record/RowRecord.hpp>
#include <org/apache/poi/hssf/record/SCLRecord.hpp>
#include <org/apache/poi/hssf/record/SaveRecalcRecord.hpp>
#include <org/apache/poi/hssf/record/SelectionRecord.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/UncalcedRecord.hpp>
#include <org/apache/poi/hssf/record/WSBoolRecord.hpp>
#include <org/apache/poi/hssf/record/WindowTwoRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/ChartSubstreamRecordAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/ColumnInfoRecordsAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/ConditionalFormattingTable.hpp>
#include <org/apache/poi/hssf/record/aggregates/CustomViewSettingsRecordAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/DataValidityTable.hpp>
#include <org/apache/poi/hssf/record/aggregates/MergedCellsTable.hpp>
#include <org/apache/poi/hssf/record/aggregates/PageSettingsBlock.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_PositionTrackingVisitor.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/RowRecordsAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/WorksheetProtectionBlock.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/PaneInformation.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
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
typedef ::SubArray< ::poi::hssf::record::NoteRecord, StandardRecordArray, ::java::lang::CloneableArray > NoteRecordArray;
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

poi::hssf::model::InternalSheet::InternalSheet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::model::InternalSheet::InternalSheet(RecordStream* rs) 
    : InternalSheet(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs);
}

poi::hssf::model::InternalSheet::InternalSheet() 
    : InternalSheet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::model::InternalSheet::init()
{
    printGridlines = nullptr;
    printHeaders = nullptr;
    gridset = nullptr;
    defaultcolwidth = new ::poi::hssf::record::DefaultColWidthRecord();
    defaultrowheight = new ::poi::hssf::record::DefaultRowHeightRecord();
    _protectionBlock = new ::poi::hssf::record::aggregates::WorksheetProtectionBlock();
    windowTwo = nullptr;
    _selection = nullptr;
    _dataValidityTable = nullptr;
    rowRecIterator = nullptr;
    _isUncalced = false;
}

constexpr int16_t poi::hssf::model::InternalSheet::LeftMargin;

constexpr int16_t poi::hssf::model::InternalSheet::RightMargin;

constexpr int16_t poi::hssf::model::InternalSheet::TopMargin;

constexpr int16_t poi::hssf::model::InternalSheet::BottomMargin;

poi::util::POILogger*& poi::hssf::model::InternalSheet::log()
{
    clinit();
    return log_;
}
poi::util::POILogger* poi::hssf::model::InternalSheet::log_;

constexpr int8_t poi::hssf::model::InternalSheet::PANE_LOWER_RIGHT;

constexpr int8_t poi::hssf::model::InternalSheet::PANE_UPPER_RIGHT;

constexpr int8_t poi::hssf::model::InternalSheet::PANE_LOWER_LEFT;

constexpr int8_t poi::hssf::model::InternalSheet::PANE_UPPER_LEFT;

poi::hssf::model::InternalSheet* poi::hssf::model::InternalSheet::createSheet(RecordStream* rs)
{
    clinit();
    return new InternalSheet(rs);
}

void poi::hssf::model::InternalSheet::ctor(RecordStream* rs)
{
    super::ctor();
    init();
    _mergedCellsTable = new ::poi::hssf::record::aggregates::MergedCellsTable();
    ::poi::hssf::record::aggregates::RowRecordsAggregate* rra = nullptr;
    ::java::util::List* records = new ::java::util::ArrayList(int32_t(128));
    _records = records;
    auto dimsloc = -int32_t(1);
    if(npc(rs)->peekNextSid() != ::poi::hssf::record::BOFRecord::sid) {
        throw new ::poi::util::RecordFormatException(u"BOF record expected"_j);
    }
    auto bof = java_cast< ::poi::hssf::record::BOFRecord* >(npc(rs)->getNext());
    if(npc(bof)->getType() == ::poi::hssf::record::BOFRecord::TYPE_WORKSHEET) {
    } else if(npc(bof)->getType() == ::poi::hssf::record::BOFRecord::TYPE_CHART || npc(bof)->getType() == ::poi::hssf::record::BOFRecord::TYPE_EXCEL_4_MACRO) {
    } else {
        while (npc(rs)->hasNext()) {
            auto rec = npc(rs)->getNext();
            if(dynamic_cast< ::poi::hssf::record::EOFRecord* >(rec) != nullptr) {
                break;
            }
        }
        throw new InternalSheet_UnsupportedBOFType(npc(bof)->getType());
    }
    npc(records)->add(static_cast< ::java::lang::Object* >(bof));
    while (npc(rs)->hasNext()) {
        auto recSid = npc(rs)->peekNextSid();
        if(recSid == ::poi::hssf::record::CFHeaderRecord::sid || recSid == ::poi::hssf::record::CFHeader12Record::sid) {
            condFormatting = new ::poi::hssf::record::aggregates::ConditionalFormattingTable(rs);
            npc(records)->add(static_cast< ::java::lang::Object* >(condFormatting));
            continue;
        }
        if(recSid == ::poi::hssf::record::ColumnInfoRecord::sid) {
            _columnInfos = new ::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate(rs);
            npc(records)->add(static_cast< ::java::lang::Object* >(_columnInfos));
            continue;
        }
        if(recSid == ::poi::hssf::record::DVALRecord::sid) {
            _dataValidityTable = new ::poi::hssf::record::aggregates::DataValidityTable(rs);
            npc(records)->add(static_cast< ::java::lang::Object* >(_dataValidityTable));
            continue;
        }
        if(RecordOrderer::isRowBlockRecord(recSid)) {
            if(rra != nullptr) {
                throw new ::poi::util::RecordFormatException(u"row/cell records found in the wrong place"_j);
            }
            auto rbr = new RowBlocksReader(rs);
            npc(_mergedCellsTable)->addRecords(npc(rbr)->getLooseMergedCells());
            rra = new ::poi::hssf::record::aggregates::RowRecordsAggregate(npc(rbr)->getPlainRecordStream(), npc(rbr)->getSharedFormulaManager());
            npc(records)->add(static_cast< ::java::lang::Object* >(rra));
            continue;
        }
        if(::poi::hssf::record::aggregates::CustomViewSettingsRecordAggregate::isBeginRecord(recSid)) {
            npc(records)->add(static_cast< ::java::lang::Object* >(new ::poi::hssf::record::aggregates::CustomViewSettingsRecordAggregate(rs)));
            continue;
        }
        if(::poi::hssf::record::aggregates::PageSettingsBlock::isComponentRecord(recSid)) {
            if(_psBlock == nullptr) {
                _psBlock = new ::poi::hssf::record::aggregates::PageSettingsBlock(rs);
                npc(records)->add(static_cast< ::java::lang::Object* >(_psBlock));
            } else {
                npc(_psBlock)->addLateRecords(rs);
            }
            npc(_psBlock)->positionRecords(records);
            continue;
        }
        if(::poi::hssf::record::aggregates::WorksheetProtectionBlock::isComponentRecord(recSid)) {
            npc(_protectionBlock)->addRecords(rs);
            continue;
        }
        if(recSid == ::poi::hssf::record::MergeCellsRecord::sid) {
            npc(_mergedCellsTable)->read(rs);
            continue;
        }
        if(recSid == ::poi::hssf::record::BOFRecord::sid) {
            auto chartAgg = new ::poi::hssf::record::aggregates::ChartSubstreamRecordAggregate(rs);
            spillAggregate(chartAgg, records);
            continue;
        }
        auto rec = npc(rs)->getNext();
        if(recSid == ::poi::hssf::record::IndexRecord::sid) {
            continue;
        }
        if(recSid == ::poi::hssf::record::UncalcedRecord::sid) {
            _isUncalced = true;
            continue;
        }
        if(recSid == ::poi::hssf::record::FeatRecord::sid || recSid == ::poi::hssf::record::FeatHdrRecord::sid) {
            npc(records)->add(static_cast< ::java::lang::Object* >(rec));
            continue;
        }
        if(recSid == ::poi::hssf::record::EOFRecord::sid) {
            npc(records)->add(static_cast< ::java::lang::Object* >(rec));
            break;
        }
        if(recSid == ::poi::hssf::record::DimensionsRecord::sid) {
            if(_columnInfos == nullptr) {
                _columnInfos = new ::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate();
                npc(records)->add(static_cast< ::java::lang::Object* >(_columnInfos));
            }
            _dimensions = java_cast< ::poi::hssf::record::DimensionsRecord* >(rec);
            dimsloc = npc(records)->size();
        } else if(recSid == ::poi::hssf::record::DefaultColWidthRecord::sid) {
            defaultcolwidth = java_cast< ::poi::hssf::record::DefaultColWidthRecord* >(rec);
        } else if(recSid == ::poi::hssf::record::DefaultRowHeightRecord::sid) {
            defaultrowheight = java_cast< ::poi::hssf::record::DefaultRowHeightRecord* >(rec);
        } else if(recSid == ::poi::hssf::record::PrintGridlinesRecord::sid) {
            printGridlines = java_cast< ::poi::hssf::record::PrintGridlinesRecord* >(rec);
        } else if(recSid == ::poi::hssf::record::PrintHeadersRecord::sid) {
            printHeaders = java_cast< ::poi::hssf::record::PrintHeadersRecord* >(rec);
        } else if(recSid == ::poi::hssf::record::GridsetRecord::sid) {
            gridset = java_cast< ::poi::hssf::record::GridsetRecord* >(rec);
        } else if(recSid == ::poi::hssf::record::SelectionRecord::sid) {
            _selection = java_cast< ::poi::hssf::record::SelectionRecord* >(rec);
        } else if(recSid == ::poi::hssf::record::WindowTwoRecord::sid) {
            windowTwo = java_cast< ::poi::hssf::record::WindowTwoRecord* >(rec);
        } else if(recSid == ::poi::hssf::record::GutsRecord::sid) {
            _gutsRecord = java_cast< ::poi::hssf::record::GutsRecord* >(rec);
        }
        npc(records)->add(static_cast< ::java::lang::Object* >(rec));
    }
    if(windowTwo == nullptr) {
        throw new ::poi::util::RecordFormatException(u"WINDOW2 was not found"_j);
    }
    if(_dimensions == nullptr) {
        if(rra == nullptr) {
            rra = new ::poi::hssf::record::aggregates::RowRecordsAggregate();
        } else {
            if(npc(log_)->check(::poi::util::POILogger::WARN)) {
                npc(log_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"DIMENSION record not found even though row/cells present"_j)}));
            }
        }
        dimsloc = findFirstRecordLocBySid(::poi::hssf::record::WindowTwoRecord::sid);
        _dimensions = npc(rra)->createDimensions();
        npc(records)->add(dimsloc, _dimensions);
    }
    if(rra == nullptr) {
        rra = new ::poi::hssf::record::aggregates::RowRecordsAggregate();
        npc(records)->add(dimsloc + int32_t(1), rra);
    }
    _rowsAggregate = rra;
    RecordOrderer::addNewSheetRecord(records, _mergedCellsTable);
    RecordOrderer::addNewSheetRecord(records, _protectionBlock);
    if(npc(log_)->check(::poi::util::POILogger::DEBUG))
        npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"sheet createSheet (existing file) exited"_j)}));

}

void poi::hssf::model::InternalSheet::spillAggregate(::poi::hssf::record::aggregates::RecordAggregate* ra, ::java::util::List* recs)
{
    clinit();
    npc(ra)->visitContainedRecords(new InternalSheet_spillAggregate_1(recs));
}

poi::hssf::model::InternalSheet* poi::hssf::model::InternalSheet::cloneSheet()
{
    ::java::util::List* clonedRecords = new ::java::util::ArrayList(npc(_records)->size());
    for (auto i = int32_t(0); i < npc(_records)->size(); i++) {
        auto rb = java_cast< ::poi::hssf::record::RecordBase* >(npc(_records)->get(i));
        if(dynamic_cast< ::poi::hssf::record::aggregates::RecordAggregate* >(rb) != nullptr) {
            npc((java_cast< ::poi::hssf::record::aggregates::RecordAggregate* >(rb)))->visitContainedRecords(new InternalSheet_RecordCloner(clonedRecords));
            continue;
        }
        if(dynamic_cast< ::poi::hssf::record::EscherAggregate* >(rb) != nullptr) {
            rb = new ::poi::hssf::record::DrawingRecord();
        }
        try {
            auto rec = java_cast< ::poi::hssf::record::Record* >(npc((java_cast< ::poi::hssf::record::Record* >(rb)))->clone());
            npc(clonedRecords)->add(static_cast< ::java::lang::Object* >(rec));
        } catch (::java::lang::CloneNotSupportedException* e) {
            throw new ::poi::util::RecordFormatException(static_cast< ::java::lang::Throwable* >(e));
        }
    }
    return createSheet(new RecordStream(clonedRecords, int32_t(0)));
}

poi::hssf::model::InternalSheet* poi::hssf::model::InternalSheet::createSheet()
{
    clinit();
    return new InternalSheet();
}

void poi::hssf::model::InternalSheet::ctor()
{
    super::ctor();
    init();
    _mergedCellsTable = new ::poi::hssf::record::aggregates::MergedCellsTable();
    ::java::util::List* records = new ::java::util::ArrayList(int32_t(32));
    if(npc(log_)->check(::poi::util::POILogger::DEBUG))
        npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Sheet createsheet from scratch called"_j)}));

    npc(records)->add(static_cast< ::java::lang::Object* >(createBOF()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createCalcMode()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createCalcCount()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createRefMode()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createIteration()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createDelta()));
    npc(records)->add(static_cast< ::java::lang::Object* >(createSaveRecalc()));
    printHeaders = createPrintHeaders();
    npc(records)->add(static_cast< ::java::lang::Object* >(printHeaders));
    printGridlines = createPrintGridlines();
    npc(records)->add(static_cast< ::java::lang::Object* >(printGridlines));
    gridset = createGridset();
    npc(records)->add(static_cast< ::java::lang::Object* >(gridset));
    _gutsRecord = createGuts();
    npc(records)->add(static_cast< ::java::lang::Object* >(_gutsRecord));
    defaultrowheight = createDefaultRowHeight();
    npc(records)->add(static_cast< ::java::lang::Object* >(defaultrowheight));
    npc(records)->add(static_cast< ::java::lang::Object* >(createWSBool()));
    _psBlock = new ::poi::hssf::record::aggregates::PageSettingsBlock();
    npc(records)->add(static_cast< ::java::lang::Object* >(_psBlock));
    npc(records)->add(static_cast< ::java::lang::Object* >(_protectionBlock));
    defaultcolwidth = createDefaultColWidth();
    npc(records)->add(static_cast< ::java::lang::Object* >(defaultcolwidth));
    auto columns = new ::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate();
    npc(records)->add(static_cast< ::java::lang::Object* >(columns));
    _columnInfos = columns;
    _dimensions = createDimensions();
    npc(records)->add(static_cast< ::java::lang::Object* >(_dimensions));
    _rowsAggregate = new ::poi::hssf::record::aggregates::RowRecordsAggregate();
    npc(records)->add(static_cast< ::java::lang::Object* >(_rowsAggregate));
    npc(records)->add(static_cast< ::java::lang::Object* >(windowTwo = createWindowTwo()));
    _selection = createSelection();
    npc(records)->add(static_cast< ::java::lang::Object* >(_selection));
    npc(records)->add(static_cast< ::java::lang::Object* >(_mergedCellsTable));
    npc(records)->add(static_cast< ::java::lang::Object* >(::poi::hssf::record::EOFRecord::instance()));
    _records = records;
    if(npc(log_)->check(::poi::util::POILogger::DEBUG))
        npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Sheet createsheet from scratch exit"_j)}));

}

poi::hssf::record::aggregates::RowRecordsAggregate* poi::hssf::model::InternalSheet::getRowsAggregate()
{
    return _rowsAggregate;
}

poi::hssf::record::aggregates::MergedCellsTable* poi::hssf::model::InternalSheet::getMergedRecords()
{
    return _mergedCellsTable;
}

void poi::hssf::model::InternalSheet::updateFormulasAfterCellShift(::poi::ss::formula::FormulaShifter* shifter, int32_t externSheetIndex)
{
    npc(getRowsAggregate())->updateFormulasAfterRowShift(shifter, externSheetIndex);
    if(condFormatting != nullptr) {
        npc(getConditionalFormattingTable())->updateFormulasAfterCellShift(shifter, externSheetIndex);
    }
}

int32_t poi::hssf::model::InternalSheet::addMergedRegion(int32_t rowFrom, int32_t colFrom, int32_t rowTo, int32_t colTo)
{
    if(rowTo < rowFrom) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"The 'to' row ("_j)->append(rowTo)
            ->append(u") must not be less than the 'from' row ("_j)
            ->append(rowFrom)
            ->append(u")"_j)->toString());
    }
    if(colTo < colFrom) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"The 'to' col ("_j)->append(colTo)
            ->append(u") must not be less than the 'from' col ("_j)
            ->append(colFrom)
            ->append(u")"_j)->toString());
    }
    auto mrt = getMergedRecords();
    npc(mrt)->addArea(rowFrom, colFrom, rowTo, colTo);
    return npc(mrt)->getNumberOfMergedRegions() - int32_t(1);
}

void poi::hssf::model::InternalSheet::removeMergedRegion(int32_t index)
{
    auto mrt = getMergedRecords();
    if(index >= npc(mrt)->getNumberOfMergedRegions()) {
        return;
    }
    npc(mrt)->remove(index);
}

poi::ss::util::CellRangeAddress* poi::hssf::model::InternalSheet::getMergedRegionAt(int32_t index)
{
    auto mrt = getMergedRecords();
    if(index >= npc(mrt)->getNumberOfMergedRegions()) {
        return nullptr;
    }
    return npc(mrt)->get(index);
}

int32_t poi::hssf::model::InternalSheet::getNumMergedRegions()
{
    return npc(getMergedRecords())->getNumberOfMergedRegions();
}

poi::hssf::record::aggregates::ConditionalFormattingTable* poi::hssf::model::InternalSheet::getConditionalFormattingTable()
{
    if(condFormatting == nullptr) {
        condFormatting = new ::poi::hssf::record::aggregates::ConditionalFormattingTable();
        RecordOrderer::addNewSheetRecord(_records, condFormatting);
    }
    return condFormatting;
}

void poi::hssf::model::InternalSheet::setDimensions(int32_t firstrow, int16_t firstcol, int32_t lastrow, int16_t lastcol)
{
    if(npc(log_)->check(::poi::util::POILogger::DEBUG)) {
        npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Sheet.setDimensions"_j)}));
        npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(npc(npc(npc(npc(npc(npc(npc((new ::java::lang::StringBuffer(u"firstrow"_j))->append(firstrow))->append(u"firstcol"_j))->append(static_cast< int32_t >(firstcol)))->append(u"lastrow"_j))->append(lastrow))->append(u"lastcol"_j))->append(static_cast< int32_t >(lastcol)))->toString())}));
    }
    npc(_dimensions)->setFirstCol(firstcol);
    npc(_dimensions)->setFirstRow(firstrow);
    npc(_dimensions)->setLastCol(lastcol);
    npc(_dimensions)->setLastRow(lastrow);
    if(npc(log_)->check(::poi::util::POILogger::DEBUG))
        npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Sheet.setDimensions exiting"_j)}));

}

void poi::hssf::model::InternalSheet::visitContainedRecords(::poi::hssf::record::aggregates::RecordAggregate_RecordVisitor* rv, int32_t offset)
{
    auto ptv = new ::poi::hssf::record::aggregates::RecordAggregate_PositionTrackingVisitor(rv, offset);
    auto haveSerializedIndex = false;
    for (auto k = int32_t(0); k < npc(_records)->size(); k++) {
        auto record = java_cast< ::poi::hssf::record::RecordBase* >(npc(_records)->get(k));
        if(dynamic_cast< ::poi::hssf::record::aggregates::RecordAggregate* >(record) != nullptr) {
            auto agg = java_cast< ::poi::hssf::record::aggregates::RecordAggregate* >(record);
            npc(agg)->visitContainedRecords(ptv);
        } else {
            npc(ptv)->visitRecord(java_cast< ::poi::hssf::record::Record* >(record));
        }
        if(dynamic_cast< ::poi::hssf::record::BOFRecord* >(record) != nullptr) {
            if(!haveSerializedIndex) {
                haveSerializedIndex = true;
                if(_isUncalced) {
                    npc(ptv)->visitRecord(static_cast< ::poi::hssf::record::Record* >(new ::poi::hssf::record::UncalcedRecord()));
                }
                if(_rowsAggregate != nullptr) {
                    auto initRecsSize = getSizeOfInitialSheetRecords(k);
                    auto currentPos = npc(ptv)->getPosition();
                    npc(ptv)->visitRecord(static_cast< ::poi::hssf::record::Record* >(npc(_rowsAggregate)->createIndexRecord(currentPos, initRecsSize)));
                }
            }
        }
    }
}

int32_t poi::hssf::model::InternalSheet::getSizeOfInitialSheetRecords(int32_t bofRecordIndex)
{
    auto result = int32_t(0);
    for (auto j = bofRecordIndex + int32_t(1); j < npc(_records)->size(); j++) {
        auto tmpRec = java_cast< ::poi::hssf::record::RecordBase* >(npc(_records)->get(j));
        if(dynamic_cast< ::poi::hssf::record::aggregates::RowRecordsAggregate* >(tmpRec) != nullptr) {
            break;
        }
        result += npc(tmpRec)->getRecordSize();
    }
    if(_isUncalced) {
        result += ::poi::hssf::record::UncalcedRecord::getStaticRecordSize();
    }
    return result;
}

void poi::hssf::model::InternalSheet::addValueRecord(int32_t row, ::poi::hssf::record::CellValueRecordInterface* col)
{
    if(npc(log_)->check(::poi::util::POILogger::DEBUG)) {
        npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"add value record  row"_j)->append(row)->toString())}));
    }
    auto d = _dimensions;
    if(npc(col)->getColumn() >= npc(d)->getLastCol()) {
        npc(d)->setLastCol(static_cast< int16_t >((npc(col)->getColumn() + int32_t(1))));
    }
    if(npc(col)->getColumn() < npc(d)->getFirstCol()) {
        npc(d)->setFirstCol(npc(col)->getColumn());
    }
    npc(_rowsAggregate)->insertCell(col);
}

void poi::hssf::model::InternalSheet::removeValueRecord(int32_t row, ::poi::hssf::record::CellValueRecordInterface* col)
{
    npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"remove value record row "_j)->append(row)->toString())}));
    npc(_rowsAggregate)->removeCell(col);
}

void poi::hssf::model::InternalSheet::replaceValueRecord(::poi::hssf::record::CellValueRecordInterface* newval)
{
    if(npc(log_)->check(::poi::util::POILogger::DEBUG))
        npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"replaceValueRecord "_j)}));

    npc(_rowsAggregate)->removeCell(newval);
    npc(_rowsAggregate)->insertCell(newval);
}

void poi::hssf::model::InternalSheet::addRow(::poi::hssf::record::RowRecord* row)
{
    if(npc(log_)->check(::poi::util::POILogger::DEBUG))
        npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"addRow "_j)}));

    auto d = _dimensions;
    if(npc(row)->getRowNumber() >= npc(d)->getLastRow()) {
        npc(d)->setLastRow(npc(row)->getRowNumber() + int32_t(1));
    }
    if(npc(row)->getRowNumber() < npc(d)->getFirstRow()) {
        npc(d)->setFirstRow(npc(row)->getRowNumber());
    }
    auto existingRow = npc(_rowsAggregate)->getRow(npc(row)->getRowNumber());
    if(existingRow != nullptr) {
        npc(_rowsAggregate)->removeRow(existingRow);
    }
    npc(_rowsAggregate)->insertRow(row);
    if(npc(log_)->check(::poi::util::POILogger::DEBUG))
        npc(log_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"exit addRow"_j)}));

}

void poi::hssf::model::InternalSheet::removeRow(::poi::hssf::record::RowRecord* row)
{
    npc(_rowsAggregate)->removeRow(row);
}

java::util::Iterator* poi::hssf::model::InternalSheet::getCellValueIterator()
{
    return npc(_rowsAggregate)->getCellValueIterator();
}

poi::hssf::record::RowRecord* poi::hssf::model::InternalSheet::getNextRow()
{
    if(rowRecIterator == nullptr) {
        rowRecIterator = npc(_rowsAggregate)->getIterator();
    }
    if(!npc(rowRecIterator)->hasNext()) {
        return nullptr;
    }
    return java_cast< ::poi::hssf::record::RowRecord* >(npc(rowRecIterator)->next());
}

poi::hssf::record::RowRecord* poi::hssf::model::InternalSheet::getRow(int32_t rownum)
{
    return npc(_rowsAggregate)->getRow(rownum);
}

poi::hssf::record::BOFRecord* poi::hssf::model::InternalSheet::createBOF()
{
    clinit();
    auto retval = new ::poi::hssf::record::BOFRecord();
    npc(retval)->setVersion(static_cast< int16_t >(int32_t(1536)));
    npc(retval)->setType(static_cast< int16_t >(int32_t(16)));
    npc(retval)->setBuild(static_cast< int16_t >(int32_t(3515)));
    npc(retval)->setBuildYear(static_cast< int16_t >(int32_t(1996)));
    npc(retval)->setHistoryBitMask(193);
    npc(retval)->setRequiredVersion(6);
    return retval;
}

poi::hssf::record::CalcModeRecord* poi::hssf::model::InternalSheet::createCalcMode()
{
    clinit();
    auto retval = new ::poi::hssf::record::CalcModeRecord();
    npc(retval)->setCalcMode(static_cast< int16_t >(int32_t(1)));
    return retval;
}

poi::hssf::record::CalcCountRecord* poi::hssf::model::InternalSheet::createCalcCount()
{
    clinit();
    auto retval = new ::poi::hssf::record::CalcCountRecord();
    npc(retval)->setIterations(static_cast< int16_t >(int32_t(100)));
    return retval;
}

poi::hssf::record::RefModeRecord* poi::hssf::model::InternalSheet::createRefMode()
{
    clinit();
    auto retval = new ::poi::hssf::record::RefModeRecord();
    npc(retval)->setMode(::poi::hssf::record::RefModeRecord::USE_A1_MODE);
    return retval;
}

poi::hssf::record::IterationRecord* poi::hssf::model::InternalSheet::createIteration()
{
    clinit();
    return new ::poi::hssf::record::IterationRecord(false);
}

poi::hssf::record::DeltaRecord* poi::hssf::model::InternalSheet::createDelta()
{
    clinit();
    return new ::poi::hssf::record::DeltaRecord(::poi::hssf::record::DeltaRecord::DEFAULT_VALUE);
}

poi::hssf::record::SaveRecalcRecord* poi::hssf::model::InternalSheet::createSaveRecalc()
{
    clinit();
    auto retval = new ::poi::hssf::record::SaveRecalcRecord();
    npc(retval)->setRecalc(true);
    return retval;
}

poi::hssf::record::PrintHeadersRecord* poi::hssf::model::InternalSheet::createPrintHeaders()
{
    clinit();
    auto retval = new ::poi::hssf::record::PrintHeadersRecord();
    npc(retval)->setPrintHeaders(false);
    return retval;
}

poi::hssf::record::PrintGridlinesRecord* poi::hssf::model::InternalSheet::createPrintGridlines()
{
    clinit();
    auto retval = new ::poi::hssf::record::PrintGridlinesRecord();
    npc(retval)->setPrintGridlines(false);
    return retval;
}

poi::hssf::record::GridsetRecord* poi::hssf::model::InternalSheet::createGridset()
{
    clinit();
    auto retval = new ::poi::hssf::record::GridsetRecord();
    npc(retval)->setGridset(true);
    return retval;
}

poi::hssf::record::GutsRecord* poi::hssf::model::InternalSheet::createGuts()
{
    clinit();
    auto retval = new ::poi::hssf::record::GutsRecord();
    npc(retval)->setLeftRowGutter(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setTopColGutter(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setRowLevelMax(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setColLevelMax(static_cast< int16_t >(int32_t(0)));
    return retval;
}

poi::hssf::record::GutsRecord* poi::hssf::model::InternalSheet::getGutsRecord()
{
    if(_gutsRecord == nullptr) {
        auto result = createGuts();
        RecordOrderer::addNewSheetRecord(_records, result);
        _gutsRecord = result;
    }
    return _gutsRecord;
}

poi::hssf::record::DefaultRowHeightRecord* poi::hssf::model::InternalSheet::createDefaultRowHeight()
{
    clinit();
    auto retval = new ::poi::hssf::record::DefaultRowHeightRecord();
    npc(retval)->setOptionFlags(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setRowHeight(::poi::hssf::record::DefaultRowHeightRecord::DEFAULT_ROW_HEIGHT);
    return retval;
}

poi::hssf::record::WSBoolRecord* poi::hssf::model::InternalSheet::createWSBool()
{
    clinit();
    auto retval = new ::poi::hssf::record::WSBoolRecord();
    npc(retval)->setWSBool1(static_cast< int8_t >(int32_t(4)));
    npc(retval)->setWSBool2(static_cast< int8_t >(int32_t(-63)));
    return retval;
}

poi::hssf::record::DefaultColWidthRecord* poi::hssf::model::InternalSheet::createDefaultColWidth()
{
    clinit();
    auto retval = new ::poi::hssf::record::DefaultColWidthRecord();
    npc(retval)->setColWidth(::poi::hssf::record::DefaultColWidthRecord::DEFAULT_COLUMN_WIDTH);
    return retval;
}

int32_t poi::hssf::model::InternalSheet::getDefaultColumnWidth()
{
    return npc(defaultcolwidth)->getColWidth();
}

bool poi::hssf::model::InternalSheet::isGridsPrinted()
{
    if(gridset == nullptr) {
        gridset = createGridset();
        auto loc = findFirstRecordLocBySid(::poi::hssf::record::EOFRecord::sid);
        npc(_records)->add(loc, gridset);
    }
    return !npc(gridset)->getGridset();
}

void poi::hssf::model::InternalSheet::setGridsPrinted(bool value)
{
    npc(gridset)->setGridset(!value);
}

void poi::hssf::model::InternalSheet::setDefaultColumnWidth(int32_t dcw)
{
    npc(defaultcolwidth)->setColWidth(dcw);
}

void poi::hssf::model::InternalSheet::setDefaultRowHeight(int16_t dch)
{
    npc(defaultrowheight)->setRowHeight(dch);
    npc(defaultrowheight)->setOptionFlags(static_cast< int16_t >(int32_t(1)));
}

int16_t poi::hssf::model::InternalSheet::getDefaultRowHeight()
{
    return npc(defaultrowheight)->getRowHeight();
}

int32_t poi::hssf::model::InternalSheet::getColumnWidth(int32_t columnIndex)
{
    auto ci = npc(_columnInfos)->findColumnInfo(columnIndex);
    if(ci != nullptr) {
        return npc(ci)->getColumnWidth();
    }
    return (int32_t(256) * npc(defaultcolwidth)->getColWidth());
}

int16_t poi::hssf::model::InternalSheet::getXFIndexForColAt(int16_t columnIndex)
{
    auto ci = npc(_columnInfos)->findColumnInfo(columnIndex);
    if(ci != nullptr) {
        return static_cast< int16_t >(npc(ci)->getXFIndex());
    }
    return 15;
}

void poi::hssf::model::InternalSheet::setColumnWidth(int32_t column, int32_t width)
{
    if(width > int32_t(255) * int32_t(256))
        throw new ::java::lang::IllegalArgumentException(u"The maximum column width for an individual cell is 255 characters."_j);

    setColumn(column, nullptr, ::java::lang::Integer::valueOf(width), nullptr, nullptr, nullptr);
}

bool poi::hssf::model::InternalSheet::isColumnHidden(int32_t columnIndex)
{
    auto cir = npc(_columnInfos)->findColumnInfo(columnIndex);
    if(cir == nullptr) {
        return false;
    }
    return npc(cir)->getHidden();
}

void poi::hssf::model::InternalSheet::setColumnHidden(int32_t column, bool hidden)
{
    setColumn(column, nullptr, nullptr, nullptr, ::java::lang::Boolean::valueOf(hidden), nullptr);
}

void poi::hssf::model::InternalSheet::setDefaultColumnStyle(int32_t column, int32_t styleIndex)
{
    setColumn(column, ::java::lang::Short::valueOf(static_cast< int16_t >(styleIndex)), nullptr, nullptr, nullptr, nullptr);
}

void poi::hssf::model::InternalSheet::setColumn(int32_t column, ::java::lang::Short* xfStyle, ::java::lang::Integer* width, ::java::lang::Integer* level, ::java::lang::Boolean* hidden, ::java::lang::Boolean* collapsed)
{
    npc(_columnInfos)->setColumn(column, xfStyle, width, level, hidden, collapsed);
}

void poi::hssf::model::InternalSheet::groupColumnRange(int32_t fromColumn, int32_t toColumn, bool indent)
{
    npc(_columnInfos)->groupColumnRange(fromColumn, toColumn, indent);
    auto maxLevel = npc(_columnInfos)->getMaxOutlineLevel();
    auto guts = getGutsRecord();
    npc(guts)->setColLevelMax(static_cast< int16_t >((maxLevel + int32_t(1))));
    if(maxLevel == 0) {
        npc(guts)->setTopColGutter(static_cast< int16_t >(int32_t(0)));
    } else {
        npc(guts)->setTopColGutter(static_cast< int16_t >((int32_t(29) + (int32_t(12) * (maxLevel - int32_t(1))))));
    }
}

poi::hssf::record::DimensionsRecord* poi::hssf::model::InternalSheet::createDimensions()
{
    clinit();
    auto retval = new ::poi::hssf::record::DimensionsRecord();
    npc(retval)->setFirstCol(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setLastRow(1);
    npc(retval)->setFirstRow(0);
    npc(retval)->setLastCol(static_cast< int16_t >(int32_t(1)));
    return retval;
}

poi::hssf::record::WindowTwoRecord* poi::hssf::model::InternalSheet::createWindowTwo()
{
    clinit();
    auto retval = new ::poi::hssf::record::WindowTwoRecord();
    npc(retval)->setOptions(static_cast< int16_t >(int32_t(1718)));
    npc(retval)->setTopRow(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setLeftCol(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setHeaderColor(64);
    npc(retval)->setPageBreakZoom(static_cast< int16_t >(int32_t(0)));
    npc(retval)->setNormalZoom(static_cast< int16_t >(int32_t(0)));
    return retval;
}

poi::hssf::record::SelectionRecord* poi::hssf::model::InternalSheet::createSelection()
{
    clinit();
    return new ::poi::hssf::record::SelectionRecord(int32_t(0), int32_t(0));
}

int16_t poi::hssf::model::InternalSheet::getTopRow()
{
    return (windowTwo == nullptr) ? static_cast< int16_t >(int32_t(0)) : npc(windowTwo)->getTopRow();
}

void poi::hssf::model::InternalSheet::setTopRow(int16_t topRow)
{
    if(windowTwo != nullptr) {
        npc(windowTwo)->setTopRow(topRow);
    }
}

void poi::hssf::model::InternalSheet::setLeftCol(int16_t leftCol)
{
    if(windowTwo != nullptr) {
        npc(windowTwo)->setLeftCol(leftCol);
    }
}

int16_t poi::hssf::model::InternalSheet::getLeftCol()
{
    return (windowTwo == nullptr) ? static_cast< int16_t >(int32_t(0)) : npc(windowTwo)->getLeftCol();
}

int32_t poi::hssf::model::InternalSheet::getActiveCellRow()
{
    if(_selection == nullptr) {
        return 0;
    }
    return npc(_selection)->getActiveCellRow();
}

void poi::hssf::model::InternalSheet::setActiveCellRow(int32_t row)
{
    if(_selection != nullptr) {
        npc(_selection)->setActiveCellRow(row);
    }
}

int16_t poi::hssf::model::InternalSheet::getActiveCellCol()
{
    if(_selection == nullptr) {
        return 0;
    }
    return static_cast< int16_t >(npc(_selection)->getActiveCellCol());
}

void poi::hssf::model::InternalSheet::setActiveCellCol(int16_t col)
{
    if(_selection != nullptr) {
        npc(_selection)->setActiveCellCol(col);
    }
}

java::util::List* poi::hssf::model::InternalSheet::getRecords()
{
    return _records;
}

poi::hssf::record::GridsetRecord* poi::hssf::model::InternalSheet::getGridsetRecord()
{
    return gridset;
}

poi::hssf::record::Record* poi::hssf::model::InternalSheet::findFirstRecordBySid(int16_t sid)
{
    auto ix = findFirstRecordLocBySid(sid);
    if(ix < 0) {
        return nullptr;
    }
    return java_cast< ::poi::hssf::record::Record* >(java_cast< ::poi::hssf::record::RecordBase* >(npc(_records)->get(ix)));
}

void poi::hssf::model::InternalSheet::setSCLRecord(::poi::hssf::record::SCLRecord* sclRecord)
{
    auto oldRecordLoc = findFirstRecordLocBySid(::poi::hssf::record::SCLRecord::sid);
    if(oldRecordLoc == -int32_t(1)) {
        auto windowRecordLoc = findFirstRecordLocBySid(::poi::hssf::record::WindowTwoRecord::sid);
        npc(_records)->add(windowRecordLoc + int32_t(1), sclRecord);
    } else {
        npc(_records)->set(oldRecordLoc, sclRecord);
    }
}

int32_t poi::hssf::model::InternalSheet::findFirstRecordLocBySid(int16_t sid)
{
    auto max = npc(_records)->size();
    for (auto i = int32_t(0); i < max; i++) {
        ::java::lang::Object* rb = java_cast< ::poi::hssf::record::RecordBase* >(npc(_records)->get(i));
        if(!(dynamic_cast< ::poi::hssf::record::Record* >(rb) != nullptr)) {
            continue;
        }
        auto record = java_cast< ::poi::hssf::record::Record* >(rb);
        if(npc(record)->getSid() == sid) {
            return i;
        }
    }
    return -int32_t(1);
}

poi::hssf::record::WindowTwoRecord* poi::hssf::model::InternalSheet::getWindowTwo()
{
    return windowTwo;
}

poi::hssf::record::PrintGridlinesRecord* poi::hssf::model::InternalSheet::getPrintGridlines()
{
    return printGridlines;
}

void poi::hssf::model::InternalSheet::setPrintGridlines(::poi::hssf::record::PrintGridlinesRecord* newPrintGridlines)
{
    printGridlines = newPrintGridlines;
}

poi::hssf::record::PrintHeadersRecord* poi::hssf::model::InternalSheet::getPrintHeaders()
{
    return printHeaders;
}

void poi::hssf::model::InternalSheet::setPrintHeaders(::poi::hssf::record::PrintHeadersRecord* newPrintHeaders)
{
    printHeaders = newPrintHeaders;
}

void poi::hssf::model::InternalSheet::setSelected(bool sel)
{
    npc(windowTwo)->setSelected(sel);
}

void poi::hssf::model::InternalSheet::createFreezePane(int32_t colSplit, int32_t rowSplit, int32_t topRow, int32_t leftmostColumn)
{
    auto paneLoc = findFirstRecordLocBySid(::poi::hssf::record::PaneRecord::sid);
    if(paneLoc != -int32_t(1))
        npc(_records)->remove(paneLoc);

    if(colSplit == 0 && rowSplit == 0) {
        npc(windowTwo)->setFreezePanes(false);
        npc(windowTwo)->setFreezePanesNoSplit(false);
        auto sel = java_cast< ::poi::hssf::record::SelectionRecord* >(findFirstRecordBySid(::poi::hssf::record::SelectionRecord::sid));
        npc(sel)->setPane(::poi::ss::util::PaneInformation::PANE_UPPER_LEFT);
        return;
    }
    auto loc = findFirstRecordLocBySid(::poi::hssf::record::WindowTwoRecord::sid);
    auto pane = new ::poi::hssf::record::PaneRecord();
    npc(pane)->setX(static_cast< int16_t >(colSplit));
    npc(pane)->setY(static_cast< int16_t >(rowSplit));
    npc(pane)->setTopRow(static_cast< int16_t >(topRow));
    npc(pane)->setLeftColumn(static_cast< int16_t >(leftmostColumn));
    if(rowSplit == 0) {
        npc(pane)->setTopRow(static_cast< int16_t >(int32_t(0)));
        npc(pane)->setActivePane(static_cast< int16_t >(int32_t(1)));
    } else if(colSplit == 0) {
        npc(pane)->setLeftColumn(static_cast< int16_t >(int32_t(0)));
        npc(pane)->setActivePane(static_cast< int16_t >(int32_t(2)));
    } else {
        npc(pane)->setActivePane(static_cast< int16_t >(int32_t(0)));
    }
    npc(_records)->add(loc + int32_t(1), pane);
    npc(windowTwo)->setFreezePanes(true);
    npc(windowTwo)->setFreezePanesNoSplit(true);
    auto sel = java_cast< ::poi::hssf::record::SelectionRecord* >(findFirstRecordBySid(::poi::hssf::record::SelectionRecord::sid));
    npc(sel)->setPane(static_cast< int8_t >(npc(pane)->getActivePane()));
}

void poi::hssf::model::InternalSheet::createSplitPane(int32_t xSplitPos, int32_t ySplitPos, int32_t topRow, int32_t leftmostColumn, int32_t activePane)
{
    auto paneLoc = findFirstRecordLocBySid(::poi::hssf::record::PaneRecord::sid);
    if(paneLoc != -int32_t(1))
        npc(_records)->remove(paneLoc);

    auto loc = findFirstRecordLocBySid(::poi::hssf::record::WindowTwoRecord::sid);
    auto r = new ::poi::hssf::record::PaneRecord();
    npc(r)->setX(static_cast< int16_t >(xSplitPos));
    npc(r)->setY(static_cast< int16_t >(ySplitPos));
    npc(r)->setTopRow(static_cast< int16_t >(topRow));
    npc(r)->setLeftColumn(static_cast< int16_t >(leftmostColumn));
    npc(r)->setActivePane(static_cast< int16_t >(activePane));
    npc(_records)->add(loc + int32_t(1), r);
    npc(windowTwo)->setFreezePanes(false);
    npc(windowTwo)->setFreezePanesNoSplit(false);
    auto sel = java_cast< ::poi::hssf::record::SelectionRecord* >(findFirstRecordBySid(::poi::hssf::record::SelectionRecord::sid));
    npc(sel)->setPane(PANE_LOWER_RIGHT);
}

poi::ss::util::PaneInformation* poi::hssf::model::InternalSheet::getPaneInformation()
{
    auto rec = java_cast< ::poi::hssf::record::PaneRecord* >(findFirstRecordBySid(::poi::hssf::record::PaneRecord::sid));
    if(rec == nullptr)
        return nullptr;

    return new ::poi::ss::util::PaneInformation(npc(rec)->getX(), npc(rec)->getY(), npc(rec)->getTopRow(), npc(rec)->getLeftColumn(), static_cast< int8_t >(npc(rec)->getActivePane()), npc(windowTwo)->getFreezePanes());
}

poi::hssf::record::SelectionRecord* poi::hssf::model::InternalSheet::getSelection()
{
    return _selection;
}

void poi::hssf::model::InternalSheet::setSelection(::poi::hssf::record::SelectionRecord* selection)
{
    _selection = selection;
}

poi::hssf::record::aggregates::WorksheetProtectionBlock* poi::hssf::model::InternalSheet::getProtectionBlock()
{
    return _protectionBlock;
}

void poi::hssf::model::InternalSheet::setDisplayGridlines(bool show)
{
    npc(windowTwo)->setDisplayGridlines(show);
}

bool poi::hssf::model::InternalSheet::isDisplayGridlines()
{
    return npc(windowTwo)->getDisplayGridlines();
}

void poi::hssf::model::InternalSheet::setDisplayFormulas(bool show)
{
    npc(windowTwo)->setDisplayFormulas(show);
}

bool poi::hssf::model::InternalSheet::isDisplayFormulas()
{
    return npc(windowTwo)->getDisplayFormulas();
}

void poi::hssf::model::InternalSheet::setDisplayRowColHeadings(bool show)
{
    npc(windowTwo)->setDisplayRowColHeadings(show);
}

bool poi::hssf::model::InternalSheet::isDisplayRowColHeadings()
{
    return npc(windowTwo)->getDisplayRowColHeadings();
}

void poi::hssf::model::InternalSheet::setPrintRowColHeadings(bool show)
{
    npc(windowTwo)->setDisplayRowColHeadings(show);
}

bool poi::hssf::model::InternalSheet::isPrintRowColHeadings()
{
    return npc(windowTwo)->getDisplayRowColHeadings();
}

bool poi::hssf::model::InternalSheet::getUncalced()
{
    return _isUncalced;
}

void poi::hssf::model::InternalSheet::setUncalced(bool uncalced)
{
    this->_isUncalced = uncalced;
}

int32_t poi::hssf::model::InternalSheet::aggregateDrawingRecords(DrawingManager2* drawingManager, bool createIfMissing)
{
    auto loc = findFirstRecordLocBySid(::poi::hssf::record::DrawingRecord::sid);
    auto noDrawingRecordsFound = (loc == -int32_t(1));
    if(noDrawingRecordsFound) {
        if(!createIfMissing) {
            return -int32_t(1);
        }
        auto aggregate = new ::poi::hssf::record::EscherAggregate(true);
        loc = findFirstRecordLocBySid(::poi::hssf::record::EscherAggregate::sid_);
        if(loc == -int32_t(1)) {
            loc = findFirstRecordLocBySid(::poi::hssf::record::WindowTwoRecord::sid);
        } else {
            npc(getRecords())->remove(loc);
        }
        npc(getRecords())->add(loc, aggregate);
        return loc;
    }
    auto records = getRecords();
    ::poi::hssf::record::EscherAggregate::createAggregate(records, loc);
    return loc;
}

void poi::hssf::model::InternalSheet::preSerialize()
{
    for (auto _i = npc(getRecords())->iterator(); _i->hasNext(); ) {
        ::poi::hssf::record::RecordBase* r = java_cast< ::poi::hssf::record::RecordBase* >(_i->next());
        {
            if(dynamic_cast< ::poi::hssf::record::EscherAggregate* >(r) != nullptr) {
                npc(r)->getRecordSize();
            }
        }
    }
}

poi::hssf::record::aggregates::PageSettingsBlock* poi::hssf::model::InternalSheet::getPageSettings()
{
    if(_psBlock == nullptr) {
        _psBlock = new ::poi::hssf::record::aggregates::PageSettingsBlock();
        RecordOrderer::addNewSheetRecord(_records, _psBlock);
    }
    return _psBlock;
}

void poi::hssf::model::InternalSheet::setColumnGroupCollapsed(int32_t columnNumber, bool collapsed)
{
    if(collapsed) {
        npc(_columnInfos)->collapseColumn(columnNumber);
    } else {
        npc(_columnInfos)->expandColumn(columnNumber);
    }
}

void poi::hssf::model::InternalSheet::groupRowRange(int32_t fromRow, int32_t toRow, bool indent)
{
    for (auto rowNum = fromRow; rowNum <= toRow; rowNum++) {
        auto row = getRow(rowNum);
        if(row == nullptr) {
            row = ::poi::hssf::record::aggregates::RowRecordsAggregate::createRow(rowNum);
            addRow(row);
        }
        int32_t level = npc(row)->getOutlineLevel();
        if(indent)
            level++;
        else
            level--;
        level = ::java::lang::Math::max(int32_t(0), level);
        level = ::java::lang::Math::min(int32_t(7), level);
        npc(row)->setOutlineLevel(static_cast< int16_t >((level)));
    }
    recalcRowGutter();
}

void poi::hssf::model::InternalSheet::recalcRowGutter()
{
    auto maxLevel = int32_t(0);
    auto iterator = npc(_rowsAggregate)->getIterator();
    while (npc(iterator)->hasNext()) {
        auto rowRecord = java_cast< ::poi::hssf::record::RowRecord* >(npc(iterator)->next());
        maxLevel = ::java::lang::Math::max(static_cast< int32_t >(npc(rowRecord)->getOutlineLevel()), maxLevel);
    }
    auto guts = getGutsRecord();
    npc(guts)->setRowLevelMax(static_cast< int16_t >((maxLevel + int32_t(1))));
    npc(guts)->setLeftRowGutter(static_cast< int16_t >((int32_t(29) + (int32_t(12) * (maxLevel)))));
}

poi::hssf::record::aggregates::DataValidityTable* poi::hssf::model::InternalSheet::getOrCreateDataValidityTable()
{
    if(_dataValidityTable == nullptr) {
        auto result = new ::poi::hssf::record::aggregates::DataValidityTable();
        RecordOrderer::addNewSheetRecord(_records, result);
        _dataValidityTable = result;
    }
    return _dataValidityTable;
}

poi::hssf::record::NoteRecordArray* poi::hssf::model::InternalSheet::getNoteRecords()
{
    ::java::util::List* temp = new ::java::util::ArrayList();
    for (auto i = npc(_records)->size() - int32_t(1); i >= 0; i--) {
        auto rec = java_cast< ::poi::hssf::record::RecordBase* >(npc(_records)->get(i));
        if(dynamic_cast< ::poi::hssf::record::NoteRecord* >(rec) != nullptr) {
            npc(temp)->add(static_cast< ::java::lang::Object* >(java_cast< ::poi::hssf::record::NoteRecord* >(rec)));
        }
    }
    if(npc(temp)->size() < 1) {
        return ::poi::hssf::record::NoteRecord::EMPTY_ARRAY();
    }
    auto result = new ::poi::hssf::record::NoteRecordArray(npc(temp)->size());
    npc(temp)->toArray_(static_cast< ::java::lang::ObjectArray* >(result));
    return result;
}

int32_t poi::hssf::model::InternalSheet::getColumnOutlineLevel(int32_t columnIndex)
{
    return npc(_columnInfos)->getOutlineLevel(columnIndex);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::model::InternalSheet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.InternalSheet", 39);
    return c;
}

void poi::hssf::model::InternalSheet::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(InternalSheet::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::model::InternalSheet::getClass0()
{
    return class_();
}


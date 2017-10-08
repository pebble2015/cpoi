// Generated from /POI/java/org/apache/poi/hssf/model/InternalSheet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
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
typedef ::SubArray< ::poi::hssf::record::NoteRecord, StandardRecordArray, ::java::lang::CloneableArray > NoteRecordArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::model::InternalSheet final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int16_t LeftMargin { int16_t(0) };
    static constexpr int16_t RightMargin { int16_t(1) };
    static constexpr int16_t TopMargin { int16_t(2) };
    static constexpr int16_t BottomMargin { int16_t(3) };

private:
    static ::poi::util::POILogger* log_;
    ::java::util::List* _records {  };

public: /* protected */
    ::poi::hssf::record::PrintGridlinesRecord* printGridlines {  };
    ::poi::hssf::record::PrintHeadersRecord* printHeaders {  };
    ::poi::hssf::record::GridsetRecord* gridset {  };

private:
    ::poi::hssf::record::GutsRecord* _gutsRecord {  };

public: /* protected */
    ::poi::hssf::record::DefaultColWidthRecord* defaultcolwidth {  };
    ::poi::hssf::record::DefaultRowHeightRecord* defaultrowheight {  };

private:
    ::poi::hssf::record::aggregates::PageSettingsBlock* _psBlock {  };
    ::poi::hssf::record::aggregates::WorksheetProtectionBlock* _protectionBlock {  };

public: /* protected */
    ::poi::hssf::record::WindowTwoRecord* windowTwo {  };
    ::poi::hssf::record::SelectionRecord* _selection {  };

private:
    ::poi::hssf::record::aggregates::MergedCellsTable* _mergedCellsTable {  };

public: /* package */
    ::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate* _columnInfos {  };

private:
    ::poi::hssf::record::DimensionsRecord* _dimensions {  };

public: /* protected */
    ::poi::hssf::record::aggregates::RowRecordsAggregate* _rowsAggregate {  };

private:
    ::poi::hssf::record::aggregates::DataValidityTable* _dataValidityTable {  };
    ::poi::hssf::record::aggregates::ConditionalFormattingTable* condFormatting {  };
    ::java::util::Iterator* rowRecIterator {  };

public: /* protected */
    bool _isUncalced {  };

public:
    static constexpr int8_t PANE_LOWER_RIGHT { int8_t(0) };
    static constexpr int8_t PANE_UPPER_RIGHT { int8_t(1) };
    static constexpr int8_t PANE_LOWER_LEFT { int8_t(2) };
    static constexpr int8_t PANE_UPPER_LEFT { int8_t(3) };
    static InternalSheet* createSheet(RecordStream* rs);
protected:
    void ctor(RecordStream* rs);

private:
    static void spillAggregate(::poi::hssf::record::aggregates::RecordAggregate* ra, ::java::util::List* recs);

public:
    InternalSheet* cloneSheet();
    static InternalSheet* createSheet();
protected:
    void ctor();

public:
    ::poi::hssf::record::aggregates::RowRecordsAggregate* getRowsAggregate();

private:
    ::poi::hssf::record::aggregates::MergedCellsTable* getMergedRecords();

public:
    void updateFormulasAfterCellShift(::poi::ss::formula::FormulaShifter* shifter, int32_t externSheetIndex);
    int32_t addMergedRegion(int32_t rowFrom, int32_t colFrom, int32_t rowTo, int32_t colTo);
    void removeMergedRegion(int32_t index);
    ::poi::ss::util::CellRangeAddress* getMergedRegionAt(int32_t index);
    int32_t getNumMergedRegions();
    ::poi::hssf::record::aggregates::ConditionalFormattingTable* getConditionalFormattingTable();
    void setDimensions(int32_t firstrow, int16_t firstcol, int32_t lastrow, int16_t lastcol);
    void visitContainedRecords(::poi::hssf::record::aggregates::RecordAggregate_RecordVisitor* rv, int32_t offset);

private:
    int32_t getSizeOfInitialSheetRecords(int32_t bofRecordIndex);

public:
    void addValueRecord(int32_t row, ::poi::hssf::record::CellValueRecordInterface* col);
    void removeValueRecord(int32_t row, ::poi::hssf::record::CellValueRecordInterface* col);
    void replaceValueRecord(::poi::hssf::record::CellValueRecordInterface* newval);
    void addRow(::poi::hssf::record::RowRecord* row);
    void removeRow(::poi::hssf::record::RowRecord* row);
    ::java::util::Iterator* getCellValueIterator();
    ::poi::hssf::record::RowRecord* getNextRow();
    ::poi::hssf::record::RowRecord* getRow(int32_t rownum);

public: /* package */
    static ::poi::hssf::record::BOFRecord* createBOF();

private:
    static ::poi::hssf::record::CalcModeRecord* createCalcMode();
    static ::poi::hssf::record::CalcCountRecord* createCalcCount();
    static ::poi::hssf::record::RefModeRecord* createRefMode();
    static ::poi::hssf::record::IterationRecord* createIteration();
    static ::poi::hssf::record::DeltaRecord* createDelta();
    static ::poi::hssf::record::SaveRecalcRecord* createSaveRecalc();
    static ::poi::hssf::record::PrintHeadersRecord* createPrintHeaders();
    static ::poi::hssf::record::PrintGridlinesRecord* createPrintGridlines();
    static ::poi::hssf::record::GridsetRecord* createGridset();
    static ::poi::hssf::record::GutsRecord* createGuts();
    ::poi::hssf::record::GutsRecord* getGutsRecord();
    static ::poi::hssf::record::DefaultRowHeightRecord* createDefaultRowHeight();
    static ::poi::hssf::record::WSBoolRecord* createWSBool();
    static ::poi::hssf::record::DefaultColWidthRecord* createDefaultColWidth();

public:
    int32_t getDefaultColumnWidth();
    bool isGridsPrinted();
    void setGridsPrinted(bool value);
    void setDefaultColumnWidth(int32_t dcw);
    void setDefaultRowHeight(int16_t dch);
    int16_t getDefaultRowHeight();
    int32_t getColumnWidth(int32_t columnIndex);
    int16_t getXFIndexForColAt(int16_t columnIndex);
    void setColumnWidth(int32_t column, int32_t width);
    bool isColumnHidden(int32_t columnIndex);
    void setColumnHidden(int32_t column, bool hidden);
    void setDefaultColumnStyle(int32_t column, int32_t styleIndex);

private:
    void setColumn(int32_t column, ::java::lang::Short* xfStyle, ::java::lang::Integer* width, ::java::lang::Integer* level, ::java::lang::Boolean* hidden, ::java::lang::Boolean* collapsed);

public:
    void groupColumnRange(int32_t fromColumn, int32_t toColumn, bool indent);

private:
    static ::poi::hssf::record::DimensionsRecord* createDimensions();
    static ::poi::hssf::record::WindowTwoRecord* createWindowTwo();
    static ::poi::hssf::record::SelectionRecord* createSelection();

public:
    int16_t getTopRow();
    void setTopRow(int16_t topRow);
    void setLeftCol(int16_t leftCol);
    int16_t getLeftCol();
    int32_t getActiveCellRow();
    void setActiveCellRow(int32_t row);
    int16_t getActiveCellCol();
    void setActiveCellCol(int16_t col);
    ::java::util::List* getRecords();
    ::poi::hssf::record::GridsetRecord* getGridsetRecord();
    ::poi::hssf::record::Record* findFirstRecordBySid(int16_t sid);
    void setSCLRecord(::poi::hssf::record::SCLRecord* sclRecord);
    int32_t findFirstRecordLocBySid(int16_t sid);
    ::poi::hssf::record::WindowTwoRecord* getWindowTwo();
    ::poi::hssf::record::PrintGridlinesRecord* getPrintGridlines();
    void setPrintGridlines(::poi::hssf::record::PrintGridlinesRecord* newPrintGridlines);
    ::poi::hssf::record::PrintHeadersRecord* getPrintHeaders();
    void setPrintHeaders(::poi::hssf::record::PrintHeadersRecord* newPrintHeaders);
    void setSelected(bool sel);
    void createFreezePane(int32_t colSplit, int32_t rowSplit, int32_t topRow, int32_t leftmostColumn);
    void createSplitPane(int32_t xSplitPos, int32_t ySplitPos, int32_t topRow, int32_t leftmostColumn, int32_t activePane);
    ::poi::ss::util::PaneInformation* getPaneInformation();
    ::poi::hssf::record::SelectionRecord* getSelection();
    void setSelection(::poi::hssf::record::SelectionRecord* selection);
    ::poi::hssf::record::aggregates::WorksheetProtectionBlock* getProtectionBlock();
    void setDisplayGridlines(bool show);
    bool isDisplayGridlines();
    void setDisplayFormulas(bool show);
    bool isDisplayFormulas();
    void setDisplayRowColHeadings(bool show);
    bool isDisplayRowColHeadings();
    void setPrintRowColHeadings(bool show);
    bool isPrintRowColHeadings();
    bool getUncalced();
    void setUncalced(bool uncalced);
    int32_t aggregateDrawingRecords(DrawingManager2* drawingManager, bool createIfMissing);
    void preSerialize();
    ::poi::hssf::record::aggregates::PageSettingsBlock* getPageSettings();
    void setColumnGroupCollapsed(int32_t columnNumber, bool collapsed);
    void groupRowRange(int32_t fromRow, int32_t toRow, bool indent);

private:
    void recalcRowGutter();

public:
    ::poi::hssf::record::aggregates::DataValidityTable* getOrCreateDataValidityTable();
    ::poi::hssf::record::NoteRecordArray* getNoteRecords();
    int32_t getColumnOutlineLevel(int32_t columnIndex);

    // Generated

private:
    InternalSheet(RecordStream* rs);
    InternalSheet();
protected:
    InternalSheet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::poi::util::POILogger*& log();
    virtual ::java::lang::Class* getClass0();
    friend class InternalSheet_spillAggregate_1;
    friend class InternalSheet_UnsupportedBOFType;
    friend class InternalSheet_RecordCloner;
};

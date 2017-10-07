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
typedef ::SubArray< ::org::apache::poi::hssf::record::NoteRecord, StandardRecordArray, ::java::lang::CloneableArray > NoteRecordArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::model::InternalSheet final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int16_t LeftMargin { int16_t(0) };
    static constexpr int16_t RightMargin { int16_t(1) };
    static constexpr int16_t TopMargin { int16_t(2) };
    static constexpr int16_t BottomMargin { int16_t(3) };

private:
    static ::org::apache::poi::util::POILogger* log_;
    ::java::util::List* _records {  };

public: /* protected */
    ::org::apache::poi::hssf::record::PrintGridlinesRecord* printGridlines {  };
    ::org::apache::poi::hssf::record::PrintHeadersRecord* printHeaders {  };
    ::org::apache::poi::hssf::record::GridsetRecord* gridset {  };

private:
    ::org::apache::poi::hssf::record::GutsRecord* _gutsRecord {  };

public: /* protected */
    ::org::apache::poi::hssf::record::DefaultColWidthRecord* defaultcolwidth {  };
    ::org::apache::poi::hssf::record::DefaultRowHeightRecord* defaultrowheight {  };

private:
    ::org::apache::poi::hssf::record::aggregates::PageSettingsBlock* _psBlock {  };
    ::org::apache::poi::hssf::record::aggregates::WorksheetProtectionBlock* _protectionBlock {  };

public: /* protected */
    ::org::apache::poi::hssf::record::WindowTwoRecord* windowTwo {  };
    ::org::apache::poi::hssf::record::SelectionRecord* _selection {  };

private:
    ::org::apache::poi::hssf::record::aggregates::MergedCellsTable* _mergedCellsTable {  };

public: /* package */
    ::org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate* _columnInfos {  };

private:
    ::org::apache::poi::hssf::record::DimensionsRecord* _dimensions {  };

public: /* protected */
    ::org::apache::poi::hssf::record::aggregates::RowRecordsAggregate* _rowsAggregate {  };

private:
    ::org::apache::poi::hssf::record::aggregates::DataValidityTable* _dataValidityTable {  };
    ::org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable* condFormatting {  };
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
    static void spillAggregate(::org::apache::poi::hssf::record::aggregates::RecordAggregate* ra, ::java::util::List* recs);

public:
    InternalSheet* cloneSheet();
    static InternalSheet* createSheet();
protected:
    void ctor();

public:
    ::org::apache::poi::hssf::record::aggregates::RowRecordsAggregate* getRowsAggregate();

private:
    ::org::apache::poi::hssf::record::aggregates::MergedCellsTable* getMergedRecords();

public:
    void updateFormulasAfterCellShift(::org::apache::poi::ss::formula::FormulaShifter* shifter, int32_t externSheetIndex);
    int32_t addMergedRegion(int32_t rowFrom, int32_t colFrom, int32_t rowTo, int32_t colTo);
    void removeMergedRegion(int32_t index);
    ::org::apache::poi::ss::util::CellRangeAddress* getMergedRegionAt(int32_t index);
    int32_t getNumMergedRegions();
    ::org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable* getConditionalFormattingTable();
    void setDimensions(int32_t firstrow, int16_t firstcol, int32_t lastrow, int16_t lastcol);
    void visitContainedRecords(::org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordVisitor* rv, int32_t offset);

private:
    int32_t getSizeOfInitialSheetRecords(int32_t bofRecordIndex);

public:
    void addValueRecord(int32_t row, ::org::apache::poi::hssf::record::CellValueRecordInterface* col);
    void removeValueRecord(int32_t row, ::org::apache::poi::hssf::record::CellValueRecordInterface* col);
    void replaceValueRecord(::org::apache::poi::hssf::record::CellValueRecordInterface* newval);
    void addRow(::org::apache::poi::hssf::record::RowRecord* row);
    void removeRow(::org::apache::poi::hssf::record::RowRecord* row);
    ::java::util::Iterator* getCellValueIterator();
    ::org::apache::poi::hssf::record::RowRecord* getNextRow();
    ::org::apache::poi::hssf::record::RowRecord* getRow(int32_t rownum);

public: /* package */
    static ::org::apache::poi::hssf::record::BOFRecord* createBOF();

private:
    static ::org::apache::poi::hssf::record::CalcModeRecord* createCalcMode();
    static ::org::apache::poi::hssf::record::CalcCountRecord* createCalcCount();
    static ::org::apache::poi::hssf::record::RefModeRecord* createRefMode();
    static ::org::apache::poi::hssf::record::IterationRecord* createIteration();
    static ::org::apache::poi::hssf::record::DeltaRecord* createDelta();
    static ::org::apache::poi::hssf::record::SaveRecalcRecord* createSaveRecalc();
    static ::org::apache::poi::hssf::record::PrintHeadersRecord* createPrintHeaders();
    static ::org::apache::poi::hssf::record::PrintGridlinesRecord* createPrintGridlines();
    static ::org::apache::poi::hssf::record::GridsetRecord* createGridset();
    static ::org::apache::poi::hssf::record::GutsRecord* createGuts();
    ::org::apache::poi::hssf::record::GutsRecord* getGutsRecord();
    static ::org::apache::poi::hssf::record::DefaultRowHeightRecord* createDefaultRowHeight();
    static ::org::apache::poi::hssf::record::WSBoolRecord* createWSBool();
    static ::org::apache::poi::hssf::record::DefaultColWidthRecord* createDefaultColWidth();

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
    static ::org::apache::poi::hssf::record::DimensionsRecord* createDimensions();
    static ::org::apache::poi::hssf::record::WindowTwoRecord* createWindowTwo();
    static ::org::apache::poi::hssf::record::SelectionRecord* createSelection();

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
    ::org::apache::poi::hssf::record::GridsetRecord* getGridsetRecord();
    ::org::apache::poi::hssf::record::Record* findFirstRecordBySid(int16_t sid);
    void setSCLRecord(::org::apache::poi::hssf::record::SCLRecord* sclRecord);
    int32_t findFirstRecordLocBySid(int16_t sid);
    ::org::apache::poi::hssf::record::WindowTwoRecord* getWindowTwo();
    ::org::apache::poi::hssf::record::PrintGridlinesRecord* getPrintGridlines();
    void setPrintGridlines(::org::apache::poi::hssf::record::PrintGridlinesRecord* newPrintGridlines);
    ::org::apache::poi::hssf::record::PrintHeadersRecord* getPrintHeaders();
    void setPrintHeaders(::org::apache::poi::hssf::record::PrintHeadersRecord* newPrintHeaders);
    void setSelected(bool sel);
    void createFreezePane(int32_t colSplit, int32_t rowSplit, int32_t topRow, int32_t leftmostColumn);
    void createSplitPane(int32_t xSplitPos, int32_t ySplitPos, int32_t topRow, int32_t leftmostColumn, int32_t activePane);
    ::org::apache::poi::ss::util::PaneInformation* getPaneInformation();
    ::org::apache::poi::hssf::record::SelectionRecord* getSelection();
    void setSelection(::org::apache::poi::hssf::record::SelectionRecord* selection);
    ::org::apache::poi::hssf::record::aggregates::WorksheetProtectionBlock* getProtectionBlock();
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
    ::org::apache::poi::hssf::record::aggregates::PageSettingsBlock* getPageSettings();
    void setColumnGroupCollapsed(int32_t columnNumber, bool collapsed);
    void groupRowRange(int32_t fromRow, int32_t toRow, bool indent);

private:
    void recalcRowGutter();

public:
    ::org::apache::poi::hssf::record::aggregates::DataValidityTable* getOrCreateDataValidityTable();
    ::org::apache::poi::hssf::record::NoteRecordArray* getNoteRecords();
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
    static ::org::apache::poi::util::POILogger*& log();
    virtual ::java::lang::Class* getClass0();
    friend class InternalSheet_spillAggregate_1;
    friend class InternalSheet_UnsupportedBOFType;
    friend class InternalSheet_RecordCloner;
};

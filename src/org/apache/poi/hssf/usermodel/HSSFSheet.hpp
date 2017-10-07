// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFSheet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAutoFilter.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCellStyle.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFComment.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFFooter.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFHeader.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFHyperlink.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPrintSetup.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheetConditionalFormatting.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFSheet final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::usermodel::Sheet
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* log_;
    static constexpr int32_t DEBUG { int32_t(1) };
    static constexpr float PX_DEFAULT { 32.0f };
    static constexpr float PX_MODIFIED { 36.56f };
    static int32_t INITIAL_CAPACITY_;
    ::org::apache::poi::hssf::model::InternalSheet* _sheet {  };
    ::java::util::TreeMap* _rows {  };

public: /* protected */
    ::org::apache::poi::hssf::model::InternalWorkbook* _book {  };
    HSSFWorkbook* _workbook {  };

private:
    HSSFPatriarch* _patriarch {  };
    int32_t _firstrow {  };
    int32_t _lastrow {  };
protected:
    void ctor(HSSFWorkbook* workbook);
    void ctor(HSSFWorkbook* workbook, ::org::apache::poi::hssf::model::InternalSheet* sheet);

public: /* package */
    HSSFSheet* cloneSheet(HSSFWorkbook* workbook);

public: /* protected */
    void preSerialize();

public:
    ::org::apache::poi::ss::usermodel::Workbook* getWorkbook() override;

private:
    void setPropertiesFromSheet(::org::apache::poi::hssf::model::InternalSheet* sheet);

public:
    ::org::apache::poi::ss::usermodel::Row* createRow(int32_t rownum) override;

private:
    HSSFRow* createRowFromRecord(::org::apache::poi::hssf::record::RowRecord* row);

public:
    void removeRow(::org::apache::poi::ss::usermodel::Row* row) override;

private:
    int32_t findLastRow(int32_t lastrow);
    int32_t findFirstRow(int32_t firstrow);
    void addRow(HSSFRow* row, bool addLow);

public:
    ::org::apache::poi::ss::usermodel::Row* getRow(int32_t rowIndex) override;
    int32_t getPhysicalNumberOfRows() override;
    int32_t getFirstRowNum() override;
    int32_t getLastRowNum() override;
    ::java::util::List* getDataValidations() override;
    void addValidationData(::org::apache::poi::ss::usermodel::DataValidation* dataValidation) override;
    void setColumnHidden(int32_t columnIndex, bool hidden) override;
    bool isColumnHidden(int32_t columnIndex) override;
    void setColumnWidth(int32_t columnIndex, int32_t width) override;
    int32_t getColumnWidth(int32_t columnIndex) override;
    float getColumnWidthInPixels(int32_t column) override;
    int32_t getDefaultColumnWidth() override;
    void setDefaultColumnWidth(int32_t width) override;
    int16_t getDefaultRowHeight() override;
    float getDefaultRowHeightInPoints() override;
    void setDefaultRowHeight(int16_t height) override;
    void setDefaultRowHeightInPoints(float height) override;
    HSSFCellStyle* getColumnStyle(int32_t column) override;
    bool isGridsPrinted();
    void setGridsPrinted(bool value);
    int32_t addMergedRegion(::org::apache::poi::ss::util::CellRangeAddress* region) override;
    int32_t addMergedRegionUnsafe(::org::apache::poi::ss::util::CellRangeAddress* region) override;
    void validateMergedRegions() override;

private:
    int32_t addMergedRegion(::org::apache::poi::ss::util::CellRangeAddress* region, bool validate);
    void validateArrayFormulas(::org::apache::poi::ss::util::CellRangeAddress* region);
    void checkForMergedRegionsIntersectingArrayFormulas();
    void validateMergedRegions(::org::apache::poi::ss::util::CellRangeAddress* candidateRegion);
    void checkForIntersectingMergedRegions();

public:
    void setForceFormulaRecalculation(bool value) override;
    bool getForceFormulaRecalculation() override;
    void setVerticallyCenter(bool value) override;
    bool getVerticallyCenter() override;
    void setHorizontallyCenter(bool value) override;
    bool getHorizontallyCenter() override;
    void setRightToLeft(bool value) override;
    bool isRightToLeft() override;
    void removeMergedRegion(int32_t index) override;
    void removeMergedRegions(::java::util::Collection* indices) override;
    int32_t getNumMergedRegions() override;
    ::org::apache::poi::ss::util::CellRangeAddress* getMergedRegion(int32_t index) override;
    ::java::util::List* getMergedRegions() override;
    ::java::util::Iterator* rowIterator() override;
    ::java::util::Iterator* iterator() override;

public: /* package */
    ::org::apache::poi::hssf::model::InternalSheet* getSheet();

public:
    void setAlternativeExpression(bool b);
    void setAlternativeFormula(bool b);
    void setAutobreaks(bool b) override;
    void setDialog(bool b);
    void setDisplayGuts(bool b) override;
    void setFitToPage(bool b) override;
    void setRowSumsBelow(bool b) override;
    void setRowSumsRight(bool b) override;
    bool getAlternateExpression();
    bool getAlternateFormula();
    bool getAutobreaks() override;
    bool getDialog();
    bool getDisplayGuts() override;
    bool isDisplayZeros() override;
    void setDisplayZeros(bool value) override;
    bool getFitToPage() override;
    bool getRowSumsBelow() override;
    bool getRowSumsRight() override;
    bool isPrintGridlines() override;
    void setPrintGridlines(bool show) override;
    bool isPrintRowAndColumnHeadings() override;
    void setPrintRowAndColumnHeadings(bool show) override;
    HSSFPrintSetup* getPrintSetup() override;
    HSSFHeader* getHeader() override;
    HSSFFooter* getFooter() override;
    bool isSelected() override;
    void setSelected(bool sel) override;
    bool isActive();
    void setActive(bool sel);
    double getMargin(int16_t margin) override;
    void setMargin(int16_t margin, double size) override;

private:
    ::org::apache::poi::hssf::record::aggregates::WorksheetProtectionBlock* getProtectionBlock();

public:
    bool getProtect() override;
    int16_t getPassword();
    bool getObjectProtect();
    bool getScenarioProtect() override;
    void protectSheet(::java::lang::String* password) override;
    void setZoom(int32_t numerator, int32_t denominator);
    void setZoom(int32_t scale) override;
    int16_t getTopRow() override;
    int16_t getLeftCol() override;
    void showInPane(int32_t toprow, int32_t leftcol) override;

private:
    void showInPane(int16_t toprow, int16_t leftcol);

public: /* protected */
    void shiftMerged(int32_t startRow, int32_t endRow, int32_t n, bool isRow);

public:
    void shiftRows(int32_t startRow, int32_t endRow, int32_t n) override;
    void shiftRows(int32_t startRow, int32_t endRow, int32_t n, bool copyRowHeight, bool resetOriginalRowHeight) override;

private:
    static int32_t clip(int32_t row);

public:
    void shiftRows(int32_t startRow, int32_t endRow, int32_t n, bool copyRowHeight, bool resetOriginalRowHeight, bool moveComments);

public: /* protected */
    void insertChartRecords(::java::util::List* records);

private:
    void notifyRowShifting(HSSFRow* row);

public:
    void createFreezePane(int32_t colSplit, int32_t rowSplit, int32_t leftmostColumn, int32_t topRow) override;
    void createFreezePane(int32_t colSplit, int32_t rowSplit) override;
    void createSplitPane(int32_t xSplitPos, int32_t ySplitPos, int32_t leftmostColumn, int32_t topRow, int32_t activePane) override;
    ::org::apache::poi::ss::util::PaneInformation* getPaneInformation() override;
    void setDisplayGridlines(bool show) override;
    bool isDisplayGridlines() override;
    void setDisplayFormulas(bool show) override;
    bool isDisplayFormulas() override;
    void setDisplayRowColHeadings(bool show) override;
    bool isDisplayRowColHeadings() override;
    void setRowBreak(int32_t row) override;
    bool isRowBroken(int32_t row) override;
    void removeRowBreak(int32_t row) override;
    ::int32_tArray* getRowBreaks() override;
    ::int32_tArray* getColumnBreaks() override;
    void setColumnBreak(int32_t column) override;
    bool isColumnBroken(int32_t column) override;
    void removeColumnBreak(int32_t column) override;

public: /* protected */
    void validateRow(int32_t row);
    void validateColumn(int32_t column);

public:
    void dumpDrawingRecords(bool fat, ::java::io::PrintWriter* pw);
    ::org::apache::poi::hssf::record::EscherAggregate* getDrawingEscherAggregate();
    ::org::apache::poi::ss::usermodel::Drawing* getDrawingPatriarch() override;
    ::org::apache::poi::ss::usermodel::Drawing* createDrawingPatriarch() override;

private:
    HSSFPatriarch* getPatriarch(bool createIfMissing);

public:
    void setColumnGroupCollapsed(int32_t columnNumber, bool collapsed) override;
    void groupColumn(int32_t fromColumn, int32_t toColumn) override;
    void ungroupColumn(int32_t fromColumn, int32_t toColumn) override;
    void groupRow(int32_t fromRow, int32_t toRow) override;
    void ungroupRow(int32_t fromRow, int32_t toRow) override;
    void setRowGroupCollapsed(int32_t rowIndex, bool collapse) override;
    void setDefaultColumnStyle(int32_t column, ::org::apache::poi::ss::usermodel::CellStyle* style) override;
    void autoSizeColumn(int32_t column) override;
    void autoSizeColumn(int32_t column, bool useMergedCells) override;
    HSSFComment* getCellComment(::org::apache::poi::ss::util::CellAddress* ref) override;
    HSSFHyperlink* getHyperlink(int32_t row, int32_t column) override;
    HSSFHyperlink* getHyperlink(::org::apache::poi::ss::util::CellAddress* addr) override;
    ::java::util::List* getHyperlinkList() override;

public: /* protected */
    void removeHyperlink(HSSFHyperlink* link);
    void removeHyperlink(::org::apache::poi::hssf::record::HyperlinkRecord* link);

public:
    HSSFSheetConditionalFormatting* getSheetConditionalFormatting() override;
    ::java::lang::String* getSheetName() override;

private:
    ::org::apache::poi::ss::usermodel::CellRange* getCellRange(::org::apache::poi::ss::util::CellRangeAddress* range);

public:
    ::org::apache::poi::ss::usermodel::CellRange* setArrayFormula(::java::lang::String* formula, ::org::apache::poi::ss::util::CellRangeAddress* range) override;
    ::org::apache::poi::ss::usermodel::CellRange* removeArrayFormula(::org::apache::poi::ss::usermodel::Cell* cell) override;
    ::org::apache::poi::ss::usermodel::DataValidationHelper* getDataValidationHelper() override;
    HSSFAutoFilter* setAutoFilter(::org::apache::poi::ss::util::CellRangeAddress* range) override;

public: /* protected */
    HSSFComment* findCellComment(int32_t row, int32_t column);

private:
    HSSFComment* lookForComment(HSSFShapeContainer* container, int32_t row, int32_t column);

public:
    ::java::util::Map* getCellComments() override;

private:
    void findCellCommentLocations(HSSFShapeContainer* container, ::java::util::Map* locations);

public:
    ::org::apache::poi::ss::util::CellRangeAddress* getRepeatingRows() override;
    ::org::apache::poi::ss::util::CellRangeAddress* getRepeatingColumns() override;
    void setRepeatingRows(::org::apache::poi::ss::util::CellRangeAddress* rowRangeRef) override;
    void setRepeatingColumns(::org::apache::poi::ss::util::CellRangeAddress* columnRangeRef) override;

private:
    void setRepeatingRowsAndColumns(::org::apache::poi::ss::util::CellRangeAddress* rowDef, ::org::apache::poi::ss::util::CellRangeAddress* colDef);
    ::org::apache::poi::ss::util::CellRangeAddress* getRepeatingRowsOrColums(bool rows);
    ::org::apache::poi::hssf::record::NameRecord* getBuiltinNameRecord(int8_t builtinCode);

public:
    int32_t getColumnOutlineLevel(int32_t columnIndex) override;
    ::org::apache::poi::ss::util::CellAddress* getActiveCell() override;
    void setActiveCell(::org::apache::poi::ss::util::CellAddress* address) override;

    // Generated

public: /* protected */
    HSSFSheet(HSSFWorkbook* workbook);
    HSSFSheet(HSSFWorkbook* workbook, ::org::apache::poi::hssf::model::InternalSheet* sheet);
protected:
    HSSFSheet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& log();

public:
    static int32_t& INITIAL_CAPACITY();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HSSFSheet_getDataValidations_1;
};

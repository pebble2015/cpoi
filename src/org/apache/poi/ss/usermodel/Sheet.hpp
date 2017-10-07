// Generated from /POI/java/org/apache/poi/ss/usermodel/Sheet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Iterable.hpp>

struct org::apache::poi::ss::usermodel::Sheet
    : public virtual ::java::lang::Iterable
{
    static constexpr int16_t LeftMargin { int16_t(0) };
    static constexpr int16_t RightMargin { int16_t(1) };
    static constexpr int16_t TopMargin { int16_t(2) };
    static constexpr int16_t BottomMargin { int16_t(3) };
    static constexpr int16_t HeaderMargin { int16_t(4) };
    static constexpr int16_t FooterMargin { int16_t(5) };
    static constexpr int8_t PANE_LOWER_RIGHT { int8_t(0) };
    static constexpr int8_t PANE_UPPER_RIGHT { int8_t(1) };
    static constexpr int8_t PANE_LOWER_LEFT { int8_t(2) };
    static constexpr int8_t PANE_UPPER_LEFT { int8_t(3) };
    virtual Row* createRow(int32_t rownum) = 0;
    virtual void removeRow(Row* row) = 0;
    virtual Row* getRow(int32_t rownum) = 0;
    virtual int32_t getPhysicalNumberOfRows() = 0;
    virtual int32_t getFirstRowNum() = 0;
    virtual int32_t getLastRowNum() = 0;
    virtual void setColumnHidden(int32_t columnIndex, bool hidden) = 0;
    virtual bool isColumnHidden(int32_t columnIndex) = 0;
    virtual void setRightToLeft(bool value) = 0;
    virtual bool isRightToLeft() = 0;
    virtual void setColumnWidth(int32_t columnIndex, int32_t width) = 0;
    virtual int32_t getColumnWidth(int32_t columnIndex) = 0;
    virtual float getColumnWidthInPixels(int32_t columnIndex) = 0;
    virtual void setDefaultColumnWidth(int32_t width) = 0;
    virtual int32_t getDefaultColumnWidth() = 0;
    virtual int16_t getDefaultRowHeight() = 0;
    virtual float getDefaultRowHeightInPoints() = 0;
    virtual void setDefaultRowHeight(int16_t height) = 0;
    virtual void setDefaultRowHeightInPoints(float height) = 0;
    virtual CellStyle* getColumnStyle(int32_t column) = 0;
    virtual int32_t addMergedRegion(::org::apache::poi::ss::util::CellRangeAddress* region) = 0;
    virtual int32_t addMergedRegionUnsafe(::org::apache::poi::ss::util::CellRangeAddress* region) = 0;
    virtual void validateMergedRegions() = 0;
    virtual void setVerticallyCenter(bool value) = 0;
    virtual void setHorizontallyCenter(bool value) = 0;
    virtual bool getHorizontallyCenter() = 0;
    virtual bool getVerticallyCenter() = 0;
    virtual void removeMergedRegion(int32_t index) = 0;
    virtual void removeMergedRegions(::java::util::Collection* indices) = 0;
    virtual int32_t getNumMergedRegions() = 0;
    virtual ::org::apache::poi::ss::util::CellRangeAddress* getMergedRegion(int32_t index) = 0;
    virtual ::java::util::List* getMergedRegions() = 0;
    virtual ::java::util::Iterator* rowIterator() = 0;
    virtual void setForceFormulaRecalculation(bool value) = 0;
    virtual bool getForceFormulaRecalculation() = 0;
    virtual void setAutobreaks(bool value) = 0;
    virtual void setDisplayGuts(bool value) = 0;
    virtual void setDisplayZeros(bool value) = 0;
    virtual bool isDisplayZeros() = 0;
    virtual void setFitToPage(bool value) = 0;
    virtual void setRowSumsBelow(bool value) = 0;
    virtual void setRowSumsRight(bool value) = 0;
    virtual bool getAutobreaks() = 0;
    virtual bool getDisplayGuts() = 0;
    virtual bool getFitToPage() = 0;
    virtual bool getRowSumsBelow() = 0;
    virtual bool getRowSumsRight() = 0;
    virtual bool isPrintGridlines() = 0;
    virtual void setPrintGridlines(bool show) = 0;
    virtual bool isPrintRowAndColumnHeadings() = 0;
    virtual void setPrintRowAndColumnHeadings(bool show) = 0;
    virtual PrintSetup* getPrintSetup() = 0;
    virtual Header* getHeader() = 0;
    virtual Footer* getFooter() = 0;
    virtual void setSelected(bool value) = 0;
    virtual double getMargin(int16_t margin) = 0;
    virtual void setMargin(int16_t margin, double size) = 0;
    virtual bool getProtect() = 0;
    virtual void protectSheet(::java::lang::String* password) = 0;
    virtual bool getScenarioProtect() = 0;
    virtual void setZoom(int32_t scale) = 0;
    virtual int16_t getTopRow() = 0;
    virtual int16_t getLeftCol() = 0;
    virtual void showInPane(int32_t toprow, int32_t leftcol) = 0;
    virtual void shiftRows(int32_t startRow, int32_t endRow, int32_t n) = 0;
    virtual void shiftRows(int32_t startRow, int32_t endRow, int32_t n, bool copyRowHeight, bool resetOriginalRowHeight) = 0;
    virtual void createFreezePane(int32_t colSplit, int32_t rowSplit, int32_t leftmostColumn, int32_t topRow) = 0;
    virtual void createFreezePane(int32_t colSplit, int32_t rowSplit) = 0;
    virtual void createSplitPane(int32_t xSplitPos, int32_t ySplitPos, int32_t leftmostColumn, int32_t topRow, int32_t activePane) = 0;
    virtual ::org::apache::poi::ss::util::PaneInformation* getPaneInformation() = 0;
    virtual void setDisplayGridlines(bool show) = 0;
    virtual bool isDisplayGridlines() = 0;
    virtual void setDisplayFormulas(bool show) = 0;
    virtual bool isDisplayFormulas() = 0;
    virtual void setDisplayRowColHeadings(bool show) = 0;
    virtual bool isDisplayRowColHeadings() = 0;
    virtual void setRowBreak(int32_t row) = 0;
    virtual bool isRowBroken(int32_t row) = 0;
    virtual void removeRowBreak(int32_t row) = 0;
    virtual ::int32_tArray* getRowBreaks() = 0;
    virtual ::int32_tArray* getColumnBreaks() = 0;
    virtual void setColumnBreak(int32_t column) = 0;
    virtual bool isColumnBroken(int32_t column) = 0;
    virtual void removeColumnBreak(int32_t column) = 0;
    virtual void setColumnGroupCollapsed(int32_t columnNumber, bool collapsed) = 0;
    virtual void groupColumn(int32_t fromColumn, int32_t toColumn) = 0;
    virtual void ungroupColumn(int32_t fromColumn, int32_t toColumn) = 0;
    virtual void groupRow(int32_t fromRow, int32_t toRow) = 0;
    virtual void ungroupRow(int32_t fromRow, int32_t toRow) = 0;
    virtual void setRowGroupCollapsed(int32_t row, bool collapse) = 0;
    virtual void setDefaultColumnStyle(int32_t column, CellStyle* style) = 0;
    virtual void autoSizeColumn(int32_t column) = 0;
    virtual void autoSizeColumn(int32_t column, bool useMergedCells) = 0;
    virtual Comment* getCellComment(::org::apache::poi::ss::util::CellAddress* ref) = 0;
    virtual ::java::util::Map* getCellComments() = 0;
    virtual Drawing* getDrawingPatriarch() = 0;
    virtual Drawing* createDrawingPatriarch() = 0;
    virtual Workbook* getWorkbook() = 0;
    virtual ::java::lang::String* getSheetName() = 0;
    virtual bool isSelected() = 0;
    virtual CellRange* setArrayFormula(::java::lang::String* formula, ::org::apache::poi::ss::util::CellRangeAddress* range) = 0;
    virtual CellRange* removeArrayFormula(Cell* cell) = 0;
    virtual DataValidationHelper* getDataValidationHelper() = 0;
    virtual ::java::util::List* getDataValidations() = 0;
    virtual void addValidationData(DataValidation* dataValidation) = 0;
    virtual AutoFilter* setAutoFilter(::org::apache::poi::ss::util::CellRangeAddress* range) = 0;
    virtual SheetConditionalFormatting* getSheetConditionalFormatting() = 0;
    virtual ::org::apache::poi::ss::util::CellRangeAddress* getRepeatingRows() = 0;
    virtual ::org::apache::poi::ss::util::CellRangeAddress* getRepeatingColumns() = 0;
    virtual void setRepeatingRows(::org::apache::poi::ss::util::CellRangeAddress* rowRangeRef) = 0;
    virtual void setRepeatingColumns(::org::apache::poi::ss::util::CellRangeAddress* columnRangeRef) = 0;
    virtual int32_t getColumnOutlineLevel(int32_t columnIndex) = 0;
    virtual Hyperlink* getHyperlink(int32_t row, int32_t column) = 0;
    virtual Hyperlink* getHyperlink(::org::apache::poi::ss::util::CellAddress* addr) = 0;
    virtual ::java::util::List* getHyperlinkList() = 0;
    virtual ::org::apache::poi::ss::util::CellAddress* getActiveCell() = 0;
    virtual void setActiveCell(::org::apache::poi::ss::util::CellAddress* address) = 0;

    // Generated
    static ::java::lang::Class *class_();
};

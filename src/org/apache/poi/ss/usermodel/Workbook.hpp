// Generated from /POI/java/org/apache/poi/ss/usermodel/Workbook.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/io/Closeable.hpp>
#include <java/lang/Iterable.hpp>

struct poi::ss::usermodel::Workbook
    : public virtual ::java::io::Closeable
    , public virtual ::java::lang::Iterable
{
    static constexpr int32_t PICTURE_TYPE_EMF { int32_t(2) };
    static constexpr int32_t PICTURE_TYPE_WMF { int32_t(3) };
    static constexpr int32_t PICTURE_TYPE_PICT { int32_t(4) };
    static constexpr int32_t PICTURE_TYPE_JPEG { int32_t(5) };
    static constexpr int32_t PICTURE_TYPE_PNG { int32_t(6) };
    static constexpr int32_t PICTURE_TYPE_DIB { int32_t(7) };
    static constexpr int32_t SHEET_STATE_VISIBLE { int32_t(0) };
    static constexpr int32_t SHEET_STATE_HIDDEN { int32_t(1) };
    static constexpr int32_t SHEET_STATE_VERY_HIDDEN { int32_t(2) };
    virtual int32_t getActiveSheetIndex() = 0;
    virtual void setActiveSheet(int32_t sheetIndex) = 0;
    virtual int32_t getFirstVisibleTab() = 0;
    virtual void setFirstVisibleTab(int32_t sheetIndex) = 0;
    virtual void setSheetOrder(::java::lang::String* sheetname, int32_t pos) = 0;
    virtual void setSelectedTab(int32_t index) = 0;
    virtual void setSheetName(int32_t sheet, ::java::lang::String* name) = 0;
    virtual ::java::lang::String* getSheetName(int32_t sheet) = 0;
    virtual int32_t getSheetIndex(::java::lang::String* name) = 0;
    virtual int32_t getSheetIndex(Sheet* sheet) = 0;
    virtual Sheet* createSheet() = 0;
    virtual Sheet* createSheet(::java::lang::String* sheetname) = 0;
    virtual Sheet* cloneSheet(int32_t sheetNum) = 0;
    virtual ::java::util::Iterator* sheetIterator() = 0;
    virtual int32_t getNumberOfSheets() = 0;
    virtual Sheet* getSheetAt(int32_t index) = 0;
    virtual Sheet* getSheet(::java::lang::String* name) = 0;
    virtual void removeSheetAt(int32_t index) = 0;
    virtual Font* createFont() = 0;
    virtual Font* findFont(bool bold, int16_t color, int16_t fontHeight, ::java::lang::String* name, bool italic, bool strikeout, int16_t typeOffset, int8_t underline) = 0;
    virtual int16_t getNumberOfFonts() = 0;
    virtual Font* getFontAt(int16_t idx) = 0;
    virtual CellStyle* createCellStyle() = 0;
    virtual int32_t getNumCellStyles() = 0;
    virtual CellStyle* getCellStyleAt(int32_t idx) = 0;
    virtual void write(::java::io::OutputStream* stream) /* throws(IOException) */ = 0;
    /*void close(); (already declared) */
    virtual int32_t getNumberOfNames() = 0;
    virtual Name* getName(::java::lang::String* name) = 0;
    virtual ::java::util::List* getNames(::java::lang::String* name) = 0;
    virtual ::java::util::List* getAllNames() = 0;
    virtual Name* getNameAt(int32_t nameIndex) = 0;
    virtual Name* createName() = 0;
    virtual int32_t getNameIndex(::java::lang::String* name) = 0;
    virtual void removeName(int32_t index) = 0;
    virtual void removeName(::java::lang::String* name) = 0;
    virtual void removeName(Name* name) = 0;
    virtual int32_t linkExternalWorkbook(::java::lang::String* name, Workbook* workbook) = 0;
    virtual void setPrintArea(int32_t sheetIndex, ::java::lang::String* reference) = 0;
    virtual void setPrintArea(int32_t sheetIndex, int32_t startColumn, int32_t endColumn, int32_t startRow, int32_t endRow) = 0;
    virtual ::java::lang::String* getPrintArea(int32_t sheetIndex) = 0;
    virtual void removePrintArea(int32_t sheetIndex) = 0;
    virtual Row_MissingCellPolicy* getMissingCellPolicy() = 0;
    virtual void setMissingCellPolicy(Row_MissingCellPolicy* missingCellPolicy) = 0;
    virtual DataFormat* createDataFormat() = 0;
    virtual int32_t addPicture(::int8_tArray* pictureData, int32_t format) = 0;
    virtual ::java::util::List* getAllPictures() = 0;
    virtual CreationHelper* getCreationHelper() = 0;
    virtual bool isHidden() = 0;
    virtual void setHidden(bool hiddenFlag) = 0;
    virtual bool isSheetHidden(int32_t sheetIx) = 0;
    virtual bool isSheetVeryHidden(int32_t sheetIx) = 0;
    virtual void setSheetHidden(int32_t sheetIx, bool hidden) = 0;
    virtual void setSheetHidden(int32_t sheetIx, int32_t hidden) = 0;
    virtual SheetVisibility* getSheetVisibility(int32_t sheetIx) = 0;
    virtual void setSheetVisibility(int32_t sheetIx, SheetVisibility* visibility) = 0;
    virtual void addToolPack(::poi::ss::formula::udf::UDFFinder* toopack) = 0;
    virtual void setForceFormulaRecalculation(bool value) = 0;
    virtual bool getForceFormulaRecalculation() = 0;
    virtual ::poi::ss::SpreadsheetVersion* getSpreadsheetVersion() = 0;
    virtual int32_t addOlePackage(::int8_tArray* oleData, ::java::lang::String* label, ::java::lang::String* fileName, ::java::lang::String* command) /* throws(IOException) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};

// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFCell.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCellStyle.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFComment.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFHyperlink.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFCell
    : public virtual ::java::lang::Object
    , public virtual ::poi::ss::usermodel::Cell
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* FILE_FORMAT_NAME_;
    static int32_t LAST_COLUMN_NUMBER_;
    static ::java::lang::String* LAST_COLUMN_NAME_;

public:
    static constexpr int16_t ENCODING_UNCHANGED { int16_t(-1) };
    static constexpr int16_t ENCODING_COMPRESSED_UNICODE { int16_t(0) };
    static constexpr int16_t ENCODING_UTF_16 { int16_t(1) };

private:
    HSSFWorkbook* _book {  };
    HSSFSheet* _sheet {  };
    ::poi::ss::usermodel::CellType* _cellType {  };
    HSSFRichTextString* _stringValue {  };
    ::poi::hssf::record::CellValueRecordInterface* _record {  };
    HSSFComment* _comment {  };
protected:
    void ctor(HSSFWorkbook* book, HSSFSheet* sheet, int32_t row, int16_t col);

public:
    ::poi::ss::usermodel::Sheet* getSheet() override;
    ::poi::ss::usermodel::Row* getRow() override;
protected:
    void ctor(HSSFWorkbook* book, HSSFSheet* sheet, int32_t row, int16_t col, ::poi::ss::usermodel::CellType* type);
    void ctor(HSSFWorkbook* book, HSSFSheet* sheet, ::poi::hssf::record::CellValueRecordInterface* cval);

private:
    static ::poi::ss::usermodel::CellType* determineType(::poi::hssf::record::CellValueRecordInterface* cval);

public: /* protected */
    virtual ::poi::hssf::model::InternalWorkbook* getBoundWorkbook();

public:
    int32_t getRowIndex() override;

public: /* protected */
    virtual void updateCellNum(int16_t num);

public:
    int32_t getColumnIndex() override;
    ::poi::ss::util::CellAddress* getAddress() override;
    void setCellType(int32_t cellType) override;
    void setCellType(::poi::ss::usermodel::CellType* cellType) override;

private:
    void setCellType(::poi::ss::usermodel::CellType* cellType, bool setValue, int32_t row, int16_t col, int16_t styleIndex);

public:
    int32_t getCellType() override;
    ::poi::ss::usermodel::CellType* getCellTypeEnum() override;
    void setCellValue(double value) override;
    void setCellValue(::java::util::Date* value) override;
    void setCellValue(::java::util::Calendar* value) override;
    void setCellValue(::java::lang::String* value) override;
    void setCellValue(::poi::ss::usermodel::RichTextString* value) override;
    void setCellFormula(::java::lang::String* formula) override;

private:
    void notifyFormulaChanging();

public:
    ::java::lang::String* getCellFormula() override;

private:
    static ::java::lang::RuntimeException* typeMismatch(::poi::ss::usermodel::CellType* expectedTypeCode, ::poi::ss::usermodel::CellType* actualTypeCode, bool isFormulaCell);
    static void checkFormulaCachedValueType(::poi::ss::usermodel::CellType* expectedTypeCode, ::poi::hssf::record::FormulaRecord* fr);

public:
    double getNumericCellValue() override;
    ::java::util::Date* getDateCellValue() override;
    ::java::lang::String* getStringCellValue() override;
    HSSFRichTextString* getRichStringCellValue() override;
    void setCellValue(bool value) override;
    void setCellErrorValue(int8_t errorCode) override;
    virtual void setCellErrorValue(::poi::ss::usermodel::FormulaError* error);

private:
    bool convertCellValueToBoolean();
    ::java::lang::String* convertCellValueToString();

public:
    bool getBooleanCellValue() override;
    int8_t getErrorCellValue() override;
    void setCellStyle(::poi::ss::usermodel::CellStyle* style) override;
    virtual void setCellStyle(HSSFCellStyle* style);
    HSSFCellStyle* getCellStyle() override;

public: /* protected */
    virtual ::poi::hssf::record::CellValueRecordInterface* getCellValueRecord();

private:
    static void checkBounds(int32_t cellIndex);

public:
    void setAsActiveCell() override;
    ::java::lang::String* toString() override;
    void setCellComment(::poi::ss::usermodel::Comment* comment) override;
    HSSFComment* getCellComment() override;
    void removeCellComment() override;
    HSSFHyperlink* getHyperlink() override;
    void setHyperlink(::poi::ss::usermodel::Hyperlink* hyperlink) override;
    void removeHyperlink() override;
    int32_t getCachedFormulaResultType() override;
    ::poi::ss::usermodel::CellType* getCachedFormulaResultTypeEnum() override;

public: /* package */
    virtual void setCellArrayFormula(::poi::ss::util::CellRangeAddress* range);

public:
    ::poi::ss::util::CellRangeAddress* getArrayFormulaRange() override;
    bool isPartOfArrayFormulaGroup() override;

public: /* package */
    virtual void notifyArrayFormulaChanging(::java::lang::String* msg);
    virtual void notifyArrayFormulaChanging();

private:
    int16_t applyUserCellStyle(HSSFCellStyle* style);

    // Generated

public: /* protected */
    HSSFCell(HSSFWorkbook* book, HSSFSheet* sheet, int32_t row, int16_t col);
    HSSFCell(HSSFWorkbook* book, HSSFSheet* sheet, int32_t row, int16_t col, ::poi::ss::usermodel::CellType* type);
    HSSFCell(HSSFWorkbook* book, HSSFSheet* sheet, ::poi::hssf::record::CellValueRecordInterface* cval);
protected:
    HSSFCell(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::String*& FILE_FORMAT_NAME();

public:
    static int32_t& LAST_COLUMN_NUMBER();

private:
    static ::java::lang::String*& LAST_COLUMN_NAME();
    virtual ::java::lang::Class* getClass0();
};

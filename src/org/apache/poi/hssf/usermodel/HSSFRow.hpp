// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFRow.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <java/lang/Comparable.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCellStyle.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::Cell, ::java::lang::ObjectArray > CellArray;
        } // usermodel
    } // ss

    namespace hssf
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::hssf::usermodel::HSSFCell, ::java::lang::ObjectArray, ::poi::ss::usermodel::CellArray > HSSFCellArray;
        } // usermodel
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::usermodel::HSSFRow final
    : public virtual ::java::lang::Object
    , public ::poi::ss::usermodel::Row
    , public ::java::lang::Comparable
{

public:
    typedef ::java::lang::Object super;

private:
    static int32_t INITIAL_CAPACITY_;
    int32_t rowNum {  };
    HSSFCellArray* cells {  };
    ::poi::hssf::record::RowRecord* row {  };
    HSSFWorkbook* book {  };
    HSSFSheet* sheet {  };
protected:
    void ctor(HSSFWorkbook* book, HSSFSheet* sheet, int32_t rowNum);
    void ctor(HSSFWorkbook* book, HSSFSheet* sheet, ::poi::hssf::record::RowRecord* record);

public:
    ::poi::ss::usermodel::Cell* createCell(int32_t column) override;
    ::poi::ss::usermodel::Cell* createCell(int32_t columnIndex, int32_t type) override;
    ::poi::ss::usermodel::Cell* createCell(int32_t columnIndex, ::poi::ss::usermodel::CellType* type) override;
    void removeCell(::poi::ss::usermodel::Cell* cell) override;

private:
    void removeCell(HSSFCell* cell, bool alsoRemoveRecords);

public: /* protected */
    void removeAllCells();

public: /* package */
    HSSFCell* createCellFromRecord(::poi::hssf::record::CellValueRecordInterface* cell);

public:
    void setRowNum(int32_t rowIndex) override;
    int32_t getRowNum() override;
    ::poi::ss::usermodel::Sheet* getSheet() override;
    int32_t getOutlineLevel() override;
    void moveCell(HSSFCell* cell, int16_t newColumn);

private:
    void addCell(HSSFCell* cell);
    HSSFCell* retrieveCell(int32_t cellIndex);

public:
    ::poi::ss::usermodel::Cell* getCell(int32_t cellnum) override;
    ::poi::ss::usermodel::Cell* getCell(int32_t cellnum, ::poi::ss::usermodel::Row_MissingCellPolicy* policy) override;
    int16_t getFirstCellNum() override;
    int16_t getLastCellNum() override;
    int32_t getPhysicalNumberOfCells() override;
    void setHeight(int16_t height) override;
    void setZeroHeight(bool zHeight) override;
    bool getZeroHeight() override;
    void setHeightInPoints(float height) override;
    int16_t getHeight() override;
    float getHeightInPoints() override;

public: /* protected */
    ::poi::hssf::record::RowRecord* getRowRecord();

private:
    int32_t calculateNewLastCellPlusOne(int32_t lastcell);
    int32_t calculateNewFirstCell(int32_t firstcell);

public:
    bool isFormatted() override;
    HSSFCellStyle* getRowStyle() override;
    void setRowStyle(HSSFCellStyle* style);
    void setRowStyle(::poi::ss::usermodel::CellStyle* style) override;
    ::java::util::Iterator* cellIterator() override;
    ::java::util::Iterator* iterator() override;
    int32_t compareTo(HSSFRow* other);
    bool equals(::java::lang::Object* obj) override;
    int32_t hashCode() override;

    // Generated

public: /* package */
    HSSFRow(HSSFWorkbook* book, HSSFSheet* sheet, int32_t rowNum);
    HSSFRow(HSSFWorkbook* book, HSSFSheet* sheet, ::poi::hssf::record::RowRecord* record);
protected:
    HSSFRow(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual int32_t compareTo(::java::lang::Object* o) override;
    static int32_t& INITIAL_CAPACITY();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HSSFRow_CellIterator;
};

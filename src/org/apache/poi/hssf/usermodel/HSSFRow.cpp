// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFRow.java
#include <org/apache/poi/hssf/usermodel/HSSFRow.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/hssf/model/InternalSheet.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/ExtendedFormatRecord.hpp>
#include <org/apache/poi/hssf/record/RowRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCellStyle.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRow_CellIterator.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellStyle.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/Row_MissingCellPolicy.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/util/Configurator.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::Cell, ::java::lang::ObjectArray > CellArray;
                } // usermodel
            } // ss

            namespace hssf
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::hssf::usermodel::HSSFCell, ::java::lang::ObjectArray, ::org::apache::poi::ss::usermodel::CellArray > HSSFCellArray;
                } // usermodel
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

org::apache::poi::hssf::usermodel::HSSFRow::HSSFRow(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFRow::HSSFRow(HSSFWorkbook* book, HSSFSheet* sheet, int32_t rowNum) 
    : HSSFRow(*static_cast< ::default_init_tag* >(0))
{
    ctor(book,sheet,rowNum);
}

org::apache::poi::hssf::usermodel::HSSFRow::HSSFRow(HSSFWorkbook* book, HSSFSheet* sheet, ::org::apache::poi::hssf::record::RowRecord* record) 
    : HSSFRow(*static_cast< ::default_init_tag* >(0))
{
    ctor(book,sheet,record);
}

int32_t& org::apache::poi::hssf::usermodel::HSSFRow::INITIAL_CAPACITY()
{
    clinit();
    return INITIAL_CAPACITY_;
}
int32_t org::apache::poi::hssf::usermodel::HSSFRow::INITIAL_CAPACITY_;

void org::apache::poi::hssf::usermodel::HSSFRow::ctor(HSSFWorkbook* book, HSSFSheet* sheet, int32_t rowNum)
{
    ctor(book, sheet, new ::org::apache::poi::hssf::record::RowRecord(rowNum));
}

void org::apache::poi::hssf::usermodel::HSSFRow::ctor(HSSFWorkbook* book, HSSFSheet* sheet, ::org::apache::poi::hssf::record::RowRecord* record)
{
    super::ctor();
    this->book = book;
    this->sheet = sheet;
    row = record;
    setRowNum(npc(record)->getRowNumber());
    cells = new HSSFCellArray(npc(record)->getLastCol() + INITIAL_CAPACITY_);
    npc(record)->setEmpty();
}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::hssf::usermodel::HSSFRow::createCell(int32_t column)
{
    return java_cast< HSSFCell* >(this->createCell(column, ::org::apache::poi::ss::usermodel::CellType::BLANK));
}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::hssf::usermodel::HSSFRow::createCell(int32_t columnIndex, int32_t type)
{
    return java_cast< HSSFCell* >(createCell(columnIndex, ::org::apache::poi::ss::usermodel::CellType::forInt(type)));
}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::hssf::usermodel::HSSFRow::createCell(int32_t columnIndex, ::org::apache::poi::ss::usermodel::CellType* type)
{
    auto shortCellNum = static_cast< int16_t >(columnIndex);
    if(columnIndex > 32767) {
        shortCellNum = static_cast< int16_t >((int32_t(65535) - columnIndex));
    }
    auto cell = new HSSFCell(book, sheet, getRowNum(), shortCellNum, type);
    addCell(cell);
    npc(npc(sheet)->getSheet())->addValueRecord(getRowNum(), npc(cell)->getCellValueRecord());
    return cell;
}

void org::apache::poi::hssf::usermodel::HSSFRow::removeCell(::org::apache::poi::ss::usermodel::Cell* cell)
{
    if(cell == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"cell must not be null"_j);
    }
    removeCell(java_cast< HSSFCell* >(cell), true);
}

void org::apache::poi::hssf::usermodel::HSSFRow::removeCell(HSSFCell* cell, bool alsoRemoveRecords)
{
    auto column = npc(cell)->getColumnIndex();
    if(column < 0) {
        throw new ::java::lang::RuntimeException(u"Negative cell indexes not allowed"_j);
    }
    if(column >= npc(cells)->length || cell != (*cells)[column]) {
        throw new ::java::lang::RuntimeException(u"Specified cell is not from this row"_j);
    }
    if(npc(cell)->isPartOfArrayFormulaGroup()) {
        npc(cell)->notifyArrayFormulaChanging();
    }
    cells->set(column, nullptr);
    if(alsoRemoveRecords) {
        auto cval = npc(cell)->getCellValueRecord();
        npc(npc(sheet)->getSheet())->removeValueRecord(getRowNum(), cval);
    }
    if(npc(cell)->getColumnIndex() + int32_t(1) == npc(row)->getLastCol()) {
        npc(row)->setLastCol(calculateNewLastCellPlusOne(npc(row)->getLastCol()));
    }
    if(npc(cell)->getColumnIndex() == npc(row)->getFirstCol()) {
        npc(row)->setFirstCol(calculateNewFirstCell(npc(row)->getFirstCol()));
    }
}

void org::apache::poi::hssf::usermodel::HSSFRow::removeAllCells()
{
    for(auto cell : *npc(cells)) {
        if(cell != nullptr) {
            removeCell(cell, true);
        }
    }
    cells = new HSSFCellArray(INITIAL_CAPACITY_);
}

org::apache::poi::hssf::usermodel::HSSFCell* org::apache::poi::hssf::usermodel::HSSFRow::createCellFromRecord(::org::apache::poi::hssf::record::CellValueRecordInterface* cell)
{
    auto hcell = new HSSFCell(book, sheet, cell);
    addCell(hcell);
    int32_t colIx = npc(cell)->getColumn();
    if(npc(row)->isEmpty()) {
        npc(row)->setFirstCol(colIx);
        npc(row)->setLastCol(colIx + int32_t(1));
    } else {
        if(colIx < npc(row)->getFirstCol()) {
            npc(row)->setFirstCol(colIx);
        } else if(colIx > npc(row)->getLastCol()) {
            npc(row)->setLastCol(colIx + int32_t(1));
        }
    }
    return hcell;
}

void org::apache::poi::hssf::usermodel::HSSFRow::setRowNum(int32_t rowIndex)
{
    auto maxrow = npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastRowIndex();
    if((rowIndex < 0) || (rowIndex > maxrow)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid row number ("_j)->append(rowIndex)
            ->append(u") outside allowable range (0.."_j)
            ->append(maxrow)
            ->append(u")"_j)->toString());
    }
    rowNum = rowIndex;
    if(row != nullptr) {
        npc(row)->setRowNumber(rowIndex);
    }
}

int32_t org::apache::poi::hssf::usermodel::HSSFRow::getRowNum()
{
    return rowNum;
}

org::apache::poi::ss::usermodel::Sheet* org::apache::poi::hssf::usermodel::HSSFRow::getSheet()
{
    return sheet;
}

int32_t org::apache::poi::hssf::usermodel::HSSFRow::getOutlineLevel()
{
    return npc(row)->getOutlineLevel();
}

void org::apache::poi::hssf::usermodel::HSSFRow::moveCell(HSSFCell* cell, int16_t newColumn)
{
    if(npc(cells)->length > newColumn && (*cells)[newColumn] != nullptr) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Asked to move cell to column "_j)->append(newColumn)
            ->append(u" but there's already a cell there"_j)->toString());
    }
    if(!npc((*cells)[npc(cell)->getColumnIndex()])->equals(cell)) {
        throw new ::java::lang::IllegalArgumentException(u"Asked to move a cell, but it didn't belong to our row"_j);
    }
    removeCell(cell, false);
    npc(cell)->updateCellNum(newColumn);
    addCell(cell);
}

void org::apache::poi::hssf::usermodel::HSSFRow::addCell(HSSFCell* cell)
{
    auto column = npc(cell)->getColumnIndex();
    if(column >= npc(cells)->length) {
        auto oldCells = cells;
        auto newSize = npc(oldCells)->length * int32_t(3) / int32_t(2) + int32_t(1);
        if(newSize < column + int32_t(1)) {
            newSize = column + INITIAL_CAPACITY_;
        }
        cells = new HSSFCellArray(newSize);
        ::java::lang::System::arraycopy(oldCells, 0, cells, 0, npc(oldCells)->length);
    }
    cells->set(column, cell);
    if(npc(row)->isEmpty() || column < npc(row)->getFirstCol()) {
        npc(row)->setFirstCol(static_cast< int16_t >(column));
    }
    if(npc(row)->isEmpty() || column >= npc(row)->getLastCol()) {
        npc(row)->setLastCol(static_cast< int16_t >((column + int32_t(1))));
    }
}

org::apache::poi::hssf::usermodel::HSSFCell* org::apache::poi::hssf::usermodel::HSSFRow::retrieveCell(int32_t cellIndex)
{
    if(cellIndex < 0 || cellIndex >= npc(cells)->length) {
        return nullptr;
    }
    return (*cells)[cellIndex];
}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::hssf::usermodel::HSSFRow::getCell(int32_t cellnum)
{
    return java_cast< HSSFCell* >(getCell(cellnum, npc(book)->getMissingCellPolicy()));
}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::hssf::usermodel::HSSFRow::getCell(int32_t cellnum, ::org::apache::poi::ss::usermodel::Row_MissingCellPolicy* policy)
{
    auto cell = retrieveCell(cellnum);
    {
        bool isBlank;
        {
            auto v = policy;
            if((v == ::org::apache::poi::ss::usermodel::Row_MissingCellPolicy::RETURN_NULL_AND_BLANK)) {
                return cell;
            }
            if((v == ::org::apache::poi::ss::usermodel::Row_MissingCellPolicy::RETURN_BLANK_AS_NULL)) {
                auto isBlank = (cell != nullptr && npc(cell)->getCellTypeEnum() == ::org::apache::poi::ss::usermodel::CellType::BLANK);
                return (isBlank) ? static_cast< HSSFCell* >(nullptr) : cell;
            }
            if((v == ::org::apache::poi::ss::usermodel::Row_MissingCellPolicy::CREATE_NULL_AS_BLANK)) {
                return (cell == nullptr) ? java_cast< HSSFCell* >(createCell(cellnum, ::org::apache::poi::ss::usermodel::CellType::BLANK)) : cell;
            }
            if((((v != ::org::apache::poi::ss::usermodel::Row_MissingCellPolicy::RETURN_NULL_AND_BLANK) && (v != ::org::apache::poi::ss::usermodel::Row_MissingCellPolicy::RETURN_BLANK_AS_NULL) && (v != ::org::apache::poi::ss::usermodel::Row_MissingCellPolicy::CREATE_NULL_AS_BLANK)))) {
                throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Illegal policy "_j)->append(static_cast< ::java::lang::Object* >(policy))->toString());
            }
end_switch0:;
        }
    }

}

int16_t org::apache::poi::hssf::usermodel::HSSFRow::getFirstCellNum()
{
    if(npc(row)->isEmpty()) {
        return -int32_t(1);
    }
    return static_cast< int16_t >(npc(row)->getFirstCol());
}

int16_t org::apache::poi::hssf::usermodel::HSSFRow::getLastCellNum()
{
    if(npc(row)->isEmpty()) {
        return -int32_t(1);
    }
    return static_cast< int16_t >(npc(row)->getLastCol());
}

int32_t org::apache::poi::hssf::usermodel::HSSFRow::getPhysicalNumberOfCells()
{
    auto count = int32_t(0);
    for(auto cell : *npc(cells)) {
        if(cell != nullptr)
            count++;

    }
    return count;
}

void org::apache::poi::hssf::usermodel::HSSFRow::setHeight(int16_t height)
{
    if(height == -int32_t(1)) {
        npc(row)->setHeight(static_cast< int16_t >((int32_t(255) | int32_t(32768))));
        npc(row)->setBadFontHeight(false);
    } else {
        npc(row)->setBadFontHeight(true);
        npc(row)->setHeight(height);
    }
}

void org::apache::poi::hssf::usermodel::HSSFRow::setZeroHeight(bool zHeight)
{
    npc(row)->setZeroHeight(zHeight);
}

bool org::apache::poi::hssf::usermodel::HSSFRow::getZeroHeight()
{
    return npc(row)->getZeroHeight();
}

void org::apache::poi::hssf::usermodel::HSSFRow::setHeightInPoints(float height)
{
    if(height == -int32_t(1)) {
        npc(row)->setHeight(static_cast< int16_t >((int32_t(255) | int32_t(32768))));
        npc(row)->setBadFontHeight(false);
    } else {
        npc(row)->setBadFontHeight(true);
        npc(row)->setHeight(static_cast< int16_t >((height * int32_t(20))));
    }
}

int16_t org::apache::poi::hssf::usermodel::HSSFRow::getHeight()
{
    auto height = npc(row)->getHeight();
    if((height & int32_t(32768)) != 0)
        height = npc(npc(sheet)->getSheet())->getDefaultRowHeight();
    else
        height &= 32767;
    return height;
}

float org::apache::poi::hssf::usermodel::HSSFRow::getHeightInPoints()
{
    return (static_cast< float >(getHeight()) / int32_t(20));
}

org::apache::poi::hssf::record::RowRecord* org::apache::poi::hssf::usermodel::HSSFRow::getRowRecord()
{
    return row;
}

int32_t org::apache::poi::hssf::usermodel::HSSFRow::calculateNewLastCellPlusOne(int32_t lastcell)
{
    auto cellIx = lastcell - int32_t(1);
    auto r = retrieveCell(cellIx);
    while (r == nullptr) {
        if(cellIx < 0) {
            return 0;
        }
        r = retrieveCell(--cellIx);
    }
    return cellIx + int32_t(1);
}

int32_t org::apache::poi::hssf::usermodel::HSSFRow::calculateNewFirstCell(int32_t firstcell)
{
    auto cellIx = firstcell + int32_t(1);
    auto r = retrieveCell(cellIx);
    while (r == nullptr) {
        if(cellIx <= npc(cells)->length) {
            return 0;
        }
        r = retrieveCell(++cellIx);
    }
    return cellIx;
}

bool org::apache::poi::hssf::usermodel::HSSFRow::isFormatted()
{
    return npc(row)->getFormatted();
}

org::apache::poi::hssf::usermodel::HSSFCellStyle* org::apache::poi::hssf::usermodel::HSSFRow::getRowStyle()
{
    if(!isFormatted()) {
        return nullptr;
    }
    auto styleIndex = npc(row)->getXFIndex();
    auto xf = npc(npc(book)->getWorkbook())->getExFormatAt(styleIndex);
    return new HSSFCellStyle(styleIndex, xf, book);
}

void org::apache::poi::hssf::usermodel::HSSFRow::setRowStyle(HSSFCellStyle* style)
{
    npc(row)->setFormatted(true);
    npc(row)->setXFIndex(npc(style)->getIndex());
}

void org::apache::poi::hssf::usermodel::HSSFRow::setRowStyle(::org::apache::poi::ss::usermodel::CellStyle* style)
{
    setRowStyle(java_cast< HSSFCellStyle* >(style));
}

java::util::Iterator* org::apache::poi::hssf::usermodel::HSSFRow::cellIterator()
{
    return new HSSFRow_CellIterator(this);
}

java::util::Iterator* org::apache::poi::hssf::usermodel::HSSFRow::iterator()
{
    return cellIterator();
}

int32_t org::apache::poi::hssf::usermodel::HSSFRow::compareTo(HSSFRow* other)
{
    if(java_cast< HSSFSheet* >(this->getSheet()) != java_cast< HSSFSheet* >(npc(other)->getSheet())) {
        throw new ::java::lang::IllegalArgumentException(u"The compared rows must belong to the same sheet"_j);
    }
    ::java::lang::Integer* thisRow = ::java::lang::Integer::valueOf(this->getRowNum());
    ::java::lang::Integer* otherRow = ::java::lang::Integer::valueOf(npc(other)->getRowNum());
    return npc(thisRow)->compareTo(otherRow);
}

int32_t org::apache::poi::hssf::usermodel::HSSFRow::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< HSSFRow* >(o));
}

bool org::apache::poi::hssf::usermodel::HSSFRow::equals(::java::lang::Object* obj)
{
    if(!(dynamic_cast< HSSFRow* >(obj) != nullptr)) {
        return false;
    }
    auto other = java_cast< HSSFRow* >(obj);
    return (this->getRowNum() == npc(other)->getRowNum()) && (java_cast< HSSFSheet* >(this->getSheet()) == java_cast< HSSFSheet* >(npc(other)->getSheet()));
}

int32_t org::apache::poi::hssf::usermodel::HSSFRow::hashCode()
{
    return npc(row)->hashCode();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFRow::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFRow", 37);
    return c;
}

void org::apache::poi::hssf::usermodel::HSSFRow::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        INITIAL_CAPACITY_ = ::org::apache::poi::util::Configurator::getIntValue(u"HSSFRow.ColInitialCapacity"_j, 5);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFRow::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/DataSources.java
#include <org/apache/poi/ss/usermodel/charts/DataSources_AbstractCellRangeDataSource.hpp>

#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/usermodel/CellValue.hpp>
#include <org/apache/poi/ss/usermodel/CreationHelper.hpp>
#include <org/apache/poi/ss/usermodel/FormulaEvaluator.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::charts::DataSources_AbstractCellRangeDataSource::DataSources_AbstractCellRangeDataSource(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::charts::DataSources_AbstractCellRangeDataSource::DataSources_AbstractCellRangeDataSource(::poi::ss::usermodel::Sheet* sheet, ::poi::ss::util::CellRangeAddress* cellRangeAddress) 
    : DataSources_AbstractCellRangeDataSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheet,cellRangeAddress);
}

void poi::ss::usermodel::charts::DataSources_AbstractCellRangeDataSource::ctor(::poi::ss::usermodel::Sheet* sheet, ::poi::ss::util::CellRangeAddress* cellRangeAddress)
{
    super::ctor();
    this->sheet = sheet;
    this->cellRangeAddress = npc(cellRangeAddress)->copy();
    this->numOfCells = npc(this->cellRangeAddress)->getNumberOfCells();
    this->evaluator = npc(npc(npc(sheet)->getWorkbook())->getCreationHelper())->createFormulaEvaluator();
}

int32_t poi::ss::usermodel::charts::DataSources_AbstractCellRangeDataSource::getPointCount()
{
    return numOfCells;
}

bool poi::ss::usermodel::charts::DataSources_AbstractCellRangeDataSource::isReference()
{
    return true;
}

java::lang::String* poi::ss::usermodel::charts::DataSources_AbstractCellRangeDataSource::getFormulaString()
{
    return npc(cellRangeAddress)->formatAsString(npc(sheet)->getSheetName(), true);
}

poi::ss::usermodel::CellValue* poi::ss::usermodel::charts::DataSources_AbstractCellRangeDataSource::getCellValueAt(int32_t index)
{
    if(index < 0 || index >= numOfCells) {
        throw new ::java::lang::IndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Index must be between 0 and "_j)->append((numOfCells - int32_t(1)))
            ->append(u" (inclusive), given: "_j)
            ->append(index)->toString());
    }
    auto firstRow = npc(cellRangeAddress)->getFirstRow();
    auto firstCol = npc(cellRangeAddress)->getFirstColumn();
    auto lastCol = npc(cellRangeAddress)->getLastColumn();
    auto width = lastCol - firstCol + int32_t(1);
    auto rowIndex = firstRow + index / width;
    auto cellIndex = firstCol + index % width;
    auto row = npc(sheet)->getRow(rowIndex);
    return (row == nullptr) ? static_cast< ::poi::ss::usermodel::CellValue* >(nullptr) : npc(evaluator)->evaluate(npc(row)->getCell(cellIndex));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::charts::DataSources_AbstractCellRangeDataSource::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.DataSources.AbstractCellRangeDataSource", 74);
    return c;
}

java::lang::Class* poi::ss::usermodel::charts::DataSources_AbstractCellRangeDataSource::getClass0()
{
    return class_();
}


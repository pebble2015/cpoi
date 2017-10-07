// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFSheet.java
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>

#include <java/io/PrintWriter.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <java/util/NavigableSet.hpp>
#include <java/util/TreeMap.hpp>
#include <java/util/TreeSet.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/hssf/model/DrawingManager2.hpp>
#include <org/apache/poi/hssf/model/HSSFFormulaParser.hpp>
#include <org/apache/poi/hssf/model/InternalSheet.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/AutoFilterInfoRecord.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/DVRecord.hpp>
#include <org/apache/poi/hssf/record/DimensionsRecord.hpp>
#include <org/apache/poi/hssf/record/DrawingRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/ExtendedFormatRecord.hpp>
#include <org/apache/poi/hssf/record/HCenterRecord.hpp>
#include <org/apache/poi/hssf/record/HyperlinkRecord.hpp>
#include <org/apache/poi/hssf/record/NameRecord.hpp>
#include <org/apache/poi/hssf/record/PrintGridlinesRecord.hpp>
#include <org/apache/poi/hssf/record/PrintHeadersRecord.hpp>
#include <org/apache/poi/hssf/record/PrintSetupRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RowRecord.hpp>
#include <org/apache/poi/hssf/record/SCLRecord.hpp>
#include <org/apache/poi/hssf/record/VCenterRecord.hpp>
#include <org/apache/poi/hssf/record/WSBoolRecord.hpp>
#include <org/apache/poi/hssf/record/WindowTwoRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/DataValidityTable.hpp>
#include <org/apache/poi/hssf/record/aggregates/FormulaRecordAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/PageSettingsBlock.hpp>
#include <org/apache/poi/hssf/record/aggregates/RowRecordsAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/WorksheetProtectionBlock.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAutoFilter.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCellStyle.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFComment.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataValidation.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataValidationHelper.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFFooter.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFHeader.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFHyperlink.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFName.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPrintSetup.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRow.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShapeContainer.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShapeGroup.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet_getDataValidations_1.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheetConditionalFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/hssf/usermodel/helpers/HSSFRowShifter.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/FormulaShifter.hpp>
#include <org/apache/poi/ss/formula/FormulaType.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemFuncPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/OperationPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnionPtg.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellRange.hpp>
#include <org/apache/poi/ss/usermodel/CellStyle.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/DataValidation.hpp>
#include <org/apache/poi/ss/usermodel/Drawing.hpp>
#include <org/apache/poi/ss/usermodel/Name.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/ss/usermodel/helpers/RowShifter.hpp>
#include <org/apache/poi/ss/util/CellAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <org/apache/poi/ss/util/PaneInformation.hpp>
#include <org/apache/poi/ss/util/SSCellRange.hpp>
#include <org/apache/poi/ss/util/SheetUtil.hpp>
#include <org/apache/poi/util/Configurator.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
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
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
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

org::apache::poi::hssf::usermodel::HSSFSheet::HSSFSheet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFSheet::HSSFSheet(HSSFWorkbook* workbook) 
    : HSSFSheet(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbook);
}

org::apache::poi::hssf::usermodel::HSSFSheet::HSSFSheet(HSSFWorkbook* workbook, ::org::apache::poi::hssf::model::InternalSheet* sheet) 
    : HSSFSheet(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbook,sheet);
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::usermodel::HSSFSheet::log()
{
    clinit();
    return log_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::usermodel::HSSFSheet::log_;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFSheet::DEBUG;

constexpr float org::apache::poi::hssf::usermodel::HSSFSheet::PX_DEFAULT;

constexpr float org::apache::poi::hssf::usermodel::HSSFSheet::PX_MODIFIED;

int32_t& org::apache::poi::hssf::usermodel::HSSFSheet::INITIAL_CAPACITY()
{
    clinit();
    return INITIAL_CAPACITY_;
}
int32_t org::apache::poi::hssf::usermodel::HSSFSheet::INITIAL_CAPACITY_;

void org::apache::poi::hssf::usermodel::HSSFSheet::ctor(HSSFWorkbook* workbook)
{
    super::ctor();
    _sheet = ::org::apache::poi::hssf::model::InternalSheet::createSheet();
    _rows = new ::java::util::TreeMap();
    this->_workbook = workbook;
    this->_book = npc(workbook)->getWorkbook();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::ctor(HSSFWorkbook* workbook, ::org::apache::poi::hssf::model::InternalSheet* sheet)
{
    super::ctor();
    this->_sheet = sheet;
    _rows = new ::java::util::TreeMap();
    this->_workbook = workbook;
    this->_book = npc(workbook)->getWorkbook();
    setPropertiesFromSheet(sheet);
}

org::apache::poi::hssf::usermodel::HSSFSheet* org::apache::poi::hssf::usermodel::HSSFSheet::cloneSheet(HSSFWorkbook* workbook)
{
    java_cast< HSSFPatriarch* >(this->getDrawingPatriarch());
    auto sheet = new HSSFSheet(workbook, npc(_sheet)->cloneSheet());
    auto pos = npc(npc(sheet)->_sheet)->findFirstRecordLocBySid(::org::apache::poi::hssf::record::DrawingRecord::sid);
    auto dr = java_cast< ::org::apache::poi::hssf::record::DrawingRecord* >(npc(npc(sheet)->_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::DrawingRecord::sid));
    if(nullptr != dr) {
        npc(npc(npc(sheet)->_sheet)->getRecords())->remove(static_cast< ::java::lang::Object* >(dr));
    }
    if(java_cast< HSSFPatriarch* >(getDrawingPatriarch()) != nullptr) {
        auto patr = HSSFPatriarch::createPatriarch(java_cast< HSSFPatriarch* >(this->getDrawingPatriarch()), sheet);
        npc(npc(npc(sheet)->_sheet)->getRecords())->add(pos, npc(patr)->getBoundAggregate());
        npc(sheet)->_patriarch = patr;
    }
    return sheet;
}

void org::apache::poi::hssf::usermodel::HSSFSheet::preSerialize()
{
    if(_patriarch != nullptr) {
        npc(_patriarch)->preSerialize();
    }
}

org::apache::poi::ss::usermodel::Workbook* org::apache::poi::hssf::usermodel::HSSFSheet::getWorkbook()
{
    return _workbook;
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setPropertiesFromSheet(::org::apache::poi::hssf::model::InternalSheet* sheet)
{
    auto row = npc(sheet)->getNextRow();
    while (row != nullptr) {
        createRowFromRecord(row);
        row = npc(sheet)->getNextRow();
    }
    auto iter = npc(sheet)->getCellValueIterator();
    auto timestart = ::java::lang::System::currentTimeMillis();
    if(npc(log_)->check(::org::apache::poi::util::POILogger::DEBUG)) {
        npc(log_)->log(DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Time at start of cell creating in HSSF sheet = "_j), static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(timestart))}));
    }
    HSSFRow* lastrow = nullptr;
    while (npc(iter)->hasNext()) {
        auto cval = java_cast< ::org::apache::poi::hssf::record::CellValueRecordInterface* >(npc(iter)->next());
        auto cellstart = ::java::lang::System::currentTimeMillis();
        auto hrow = lastrow;
        if(hrow == nullptr || npc(hrow)->getRowNum() != npc(cval)->getRow()) {
            hrow = java_cast< HSSFRow* >(getRow(npc(cval)->getRow()));
            lastrow = hrow;
            if(hrow == nullptr) {
                auto rowRec = new ::org::apache::poi::hssf::record::RowRecord(npc(cval)->getRow());
                npc(sheet)->addRow(rowRec);
                hrow = createRowFromRecord(rowRec);
            }
        }
        if(npc(log_)->check(::org::apache::poi::util::POILogger::DEBUG)) {
            if(dynamic_cast< ::org::apache::poi::hssf::record::Record* >(cval) != nullptr) {
                npc(log_)->log(DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"record id = "_j)->append(::java::lang::Integer::toHexString(npc((java_cast< ::org::apache::poi::hssf::record::Record* >(cval)))->getSid()))->toString())}));
            } else {
                npc(log_)->log(DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"record = "_j)->append(static_cast< ::java::lang::Object* >(cval))->toString())}));
            }
        }
        npc(hrow)->createCellFromRecord(cval);
        if(npc(log_)->check(::org::apache::poi::util::POILogger::DEBUG)) {
            npc(log_)->log(DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"record took "_j), static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(::java::lang::System::currentTimeMillis() - cellstart))}));
        }
    }
    if(npc(log_)->check(::org::apache::poi::util::POILogger::DEBUG)) {
        npc(log_)->log(DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"total sheet cell creation took "_j), static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(::java::lang::System::currentTimeMillis() - timestart))}));
    }
}

org::apache::poi::ss::usermodel::Row* org::apache::poi::hssf::usermodel::HSSFSheet::createRow(int32_t rownum)
{
    auto row = new HSSFRow(_workbook, this, rownum);
    npc(row)->setHeight(getDefaultRowHeight());
    npc(npc(row)->getRowRecord())->setBadFontHeight(false);
    addRow(row, true);
    return row;
}

org::apache::poi::hssf::usermodel::HSSFRow* org::apache::poi::hssf::usermodel::HSSFSheet::createRowFromRecord(::org::apache::poi::hssf::record::RowRecord* row)
{
    auto hrow = new HSSFRow(_workbook, this, row);
    addRow(hrow, false);
    return hrow;
}

void org::apache::poi::hssf::usermodel::HSSFSheet::removeRow(::org::apache::poi::ss::usermodel::Row* row)
{
    auto hrow = java_cast< HSSFRow* >(row);
    if(npc(row)->getSheet() != static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(this)) {
        throw new ::java::lang::IllegalArgumentException(u"Specified row does not belong to this sheet"_j);
    }
    for (auto _i = npc(row)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ss::usermodel::Cell* cell = java_cast< ::org::apache::poi::ss::usermodel::Cell* >(_i->next());
        {
            auto xcell = java_cast< HSSFCell* >(cell);
            if(npc(xcell)->isPartOfArrayFormulaGroup()) {
                auto msg = ::java::lang::StringBuilder().append(u"Row[rownum="_j)->append(npc(row)->getRowNum())
                    ->append(u"] contains cell(s) included in a multi-cell array formula. You cannot change part of an array."_j)->toString();
                npc(xcell)->notifyArrayFormulaChanging(msg);
            }
        }
    }
    if(npc(_rows)->size() > 0) {
        auto key = ::java::lang::Integer::valueOf(npc(row)->getRowNum());
        auto removedRow = java_cast< HSSFRow* >(npc(_rows)->remove(static_cast< ::java::lang::Object* >(key)));
        if(static_cast< ::java::lang::Object* >(removedRow) != static_cast< ::java::lang::Object* >(row)) {
            throw new ::java::lang::IllegalArgumentException(u"Specified row does not belong to this sheet"_j);
        }
        if(npc(hrow)->getRowNum() == getLastRowNum()) {
            _lastrow = findLastRow(_lastrow);
        }
        if(npc(hrow)->getRowNum() == getFirstRowNum()) {
            _firstrow = findFirstRow(_firstrow);
        }
        npc(_sheet)->removeRow(npc(hrow)->getRowRecord());
    }
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::findLastRow(int32_t lastrow)
{
    if(lastrow < 1) {
        return 0;
    }
    auto rownum = lastrow - int32_t(1);
    auto r = java_cast< HSSFRow* >(getRow(rownum));
    while (r == nullptr && rownum > 0) {
        r = java_cast< HSSFRow* >(getRow(--rownum));
    }
    if(r == nullptr) {
        return 0;
    }
    return rownum;
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::findFirstRow(int32_t firstrow)
{
    auto rownum = firstrow + int32_t(1);
    auto r = java_cast< HSSFRow* >(getRow(rownum));
    while (r == nullptr && rownum <= getLastRowNum()) {
        r = java_cast< HSSFRow* >(getRow(++rownum));
    }
    if(rownum > getLastRowNum())
        return 0;

    return rownum;
}

void org::apache::poi::hssf::usermodel::HSSFSheet::addRow(HSSFRow* row, bool addLow)
{
    npc(_rows)->put(static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(npc(row)->getRowNum())), static_cast< ::java::lang::Object* >(row));
    if(addLow) {
        npc(_sheet)->addRow(npc(row)->getRowRecord());
    }
    auto firstRow = npc(_rows)->size() == 1;
    if(npc(row)->getRowNum() > getLastRowNum() || firstRow) {
        _lastrow = npc(row)->getRowNum();
    }
    if(npc(row)->getRowNum() < getFirstRowNum() || firstRow) {
        _firstrow = npc(row)->getRowNum();
    }
}

org::apache::poi::ss::usermodel::Row* org::apache::poi::hssf::usermodel::HSSFSheet::getRow(int32_t rowIndex)
{
    return java_cast< HSSFRow* >(npc(_rows)->get(static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(rowIndex))));
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::getPhysicalNumberOfRows()
{
    return npc(_rows)->size();
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::getFirstRowNum()
{
    return _firstrow;
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::getLastRowNum()
{
    return _lastrow;
}

java::util::List* org::apache::poi::hssf::usermodel::HSSFSheet::getDataValidations()
{
    auto dvt = npc(_sheet)->getOrCreateDataValidityTable();
    ::java::util::List* const hssfValidations = new ::java::util::ArrayList();
    ::org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordVisitor* visitor = new HSSFSheet_getDataValidations_1(this, hssfValidations);
    npc(dvt)->visitContainedRecords(visitor);
    return hssfValidations;
}

void org::apache::poi::hssf::usermodel::HSSFSheet::addValidationData(::org::apache::poi::ss::usermodel::DataValidation* dataValidation)
{
    if(dataValidation == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"objValidation must not be null"_j);
    }
    auto hssfDataValidation = java_cast< HSSFDataValidation* >(dataValidation);
    auto dvt = npc(_sheet)->getOrCreateDataValidityTable();
    auto dvRecord = npc(hssfDataValidation)->createDVRecord(this);
    npc(dvt)->addDataValidation(dvRecord);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setColumnHidden(int32_t columnIndex, bool hidden)
{
    npc(_sheet)->setColumnHidden(columnIndex, hidden);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isColumnHidden(int32_t columnIndex)
{
    return npc(_sheet)->isColumnHidden(columnIndex);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setColumnWidth(int32_t columnIndex, int32_t width)
{
    npc(_sheet)->setColumnWidth(columnIndex, width);
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::getColumnWidth(int32_t columnIndex)
{
    return npc(_sheet)->getColumnWidth(columnIndex);
}

float org::apache::poi::hssf::usermodel::HSSFSheet::getColumnWidthInPixels(int32_t column)
{
    auto cw = getColumnWidth(column);
    auto def = getDefaultColumnWidth() * int32_t(256);
    auto px = (cw == def ? PX_DEFAULT : PX_MODIFIED);
    return cw / px;
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::getDefaultColumnWidth()
{
    return npc(_sheet)->getDefaultColumnWidth();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setDefaultColumnWidth(int32_t width)
{
    npc(_sheet)->setDefaultColumnWidth(width);
}

int16_t org::apache::poi::hssf::usermodel::HSSFSheet::getDefaultRowHeight()
{
    return npc(_sheet)->getDefaultRowHeight();
}

float org::apache::poi::hssf::usermodel::HSSFSheet::getDefaultRowHeightInPoints()
{
    return (static_cast< float >(npc(_sheet)->getDefaultRowHeight()) / int32_t(20));
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setDefaultRowHeight(int16_t height)
{
    npc(_sheet)->setDefaultRowHeight(height);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setDefaultRowHeightInPoints(float height)
{
    npc(_sheet)->setDefaultRowHeight(static_cast< int16_t >((height * int32_t(20))));
}

org::apache::poi::hssf::usermodel::HSSFCellStyle* org::apache::poi::hssf::usermodel::HSSFSheet::getColumnStyle(int32_t column)
{
    auto styleIndex = npc(_sheet)->getXFIndexForColAt(static_cast< int16_t >(column));
    if(styleIndex == 15) {
        return nullptr;
    }
    auto xf = npc(_book)->getExFormatAt(styleIndex);
    return new HSSFCellStyle(styleIndex, xf, _book);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isGridsPrinted()
{
    return npc(_sheet)->isGridsPrinted();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setGridsPrinted(bool value)
{
    npc(_sheet)->setGridsPrinted(value);
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::addMergedRegion(::org::apache::poi::ss::util::CellRangeAddress* region)
{
    return addMergedRegion(region, true);
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::addMergedRegionUnsafe(::org::apache::poi::ss::util::CellRangeAddress* region)
{
    return addMergedRegion(region, false);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::validateMergedRegions()
{
    checkForMergedRegionsIntersectingArrayFormulas();
    checkForIntersectingMergedRegions();
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::addMergedRegion(::org::apache::poi::ss::util::CellRangeAddress* region, bool validate)
{
    if(npc(region)->getNumberOfCells() < 2) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Merged region "_j)->append(npc(region)->formatAsString())
            ->append(u" must contain 2 or more cells"_j)->toString());
    }
    npc(region)->validate(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97);
    if(validate) {
        validateArrayFormulas(region);
        validateMergedRegions(region);
    }
    return npc(_sheet)->addMergedRegion(npc(region)->getFirstRow(), npc(region)->getFirstColumn(), npc(region)->getLastRow(), npc(region)->getLastColumn());
}

void org::apache::poi::hssf::usermodel::HSSFSheet::validateArrayFormulas(::org::apache::poi::ss::util::CellRangeAddress* region)
{
    auto firstRow = npc(region)->getFirstRow();
    auto firstColumn = npc(region)->getFirstColumn();
    auto lastRow = npc(region)->getLastRow();
    auto lastColumn = npc(region)->getLastColumn();
    for (auto rowIn = firstRow; rowIn <= lastRow; rowIn++) {
        auto row = java_cast< HSSFRow* >(getRow(rowIn));
        if(row == nullptr)
            continue;

        for (auto colIn = firstColumn; colIn <= lastColumn; colIn++) {
            auto cell = java_cast< HSSFCell* >(npc(row)->getCell(colIn));
            if(cell == nullptr)
                continue;

            if(npc(cell)->isPartOfArrayFormulaGroup()) {
                auto arrayRange = npc(cell)->getArrayFormulaRange();
                if(npc(arrayRange)->getNumberOfCells() > 1 && npc(region)->intersects(arrayRange)) {
                    auto msg = ::java::lang::StringBuilder().append(u"The range "_j)->append(npc(region)->formatAsString())
                        ->append(u" intersects with a multi-cell array formula. "_j)
                        ->append(u"You cannot merge cells of an array."_j)->toString();
                    throw new ::java::lang::IllegalStateException(msg);
                }
            }
        }
    }
}

void org::apache::poi::hssf::usermodel::HSSFSheet::checkForMergedRegionsIntersectingArrayFormulas()
{
    for (auto _i = npc(getMergedRegions())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ss::util::CellRangeAddress* region = java_cast< ::org::apache::poi::ss::util::CellRangeAddress* >(_i->next());
        {
            validateArrayFormulas(region);
        }
    }
}

void org::apache::poi::hssf::usermodel::HSSFSheet::validateMergedRegions(::org::apache::poi::ss::util::CellRangeAddress* candidateRegion)
{
    for (auto _i = npc(getMergedRegions())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ss::util::CellRangeAddress* existingRegion = java_cast< ::org::apache::poi::ss::util::CellRangeAddress* >(_i->next());
        {
            if(npc(existingRegion)->intersects(candidateRegion)) {
                throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Cannot add merged region "_j)->append(npc(candidateRegion)->formatAsString())
                    ->append(u" to sheet because it overlaps with an existing merged region ("_j)
                    ->append(npc(existingRegion)->formatAsString())
                    ->append(u")."_j)->toString());
            }
        }
    }
}

void org::apache::poi::hssf::usermodel::HSSFSheet::checkForIntersectingMergedRegions()
{
    auto const regions = getMergedRegions();
    auto const size = npc(regions)->size();
    for (auto i = int32_t(0); i < size; i++) {
        auto const region = java_cast< ::org::apache::poi::ss::util::CellRangeAddress* >(npc(regions)->get(i));
        for (auto _i = npc(npc(regions)->subList(i + int32_t(1), npc(regions)->size()))->iterator(); _i->hasNext(); ) {
            ::org::apache::poi::ss::util::CellRangeAddress* other = java_cast< ::org::apache::poi::ss::util::CellRangeAddress* >(_i->next());
            {
                if(npc(region)->intersects(other)) {
                    auto msg = ::java::lang::StringBuilder().append(u"The range "_j)->append(npc(region)->formatAsString())
                        ->append(u" intersects with another merged region "_j)
                        ->append(npc(other)->formatAsString())
                        ->append(u" in this sheet"_j)->toString();
                    throw new ::java::lang::IllegalStateException(msg);
                }
            }
        }
    }
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setForceFormulaRecalculation(bool value)
{
    npc(_sheet)->setUncalced(value);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getForceFormulaRecalculation()
{
    return npc(_sheet)->getUncalced();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setVerticallyCenter(bool value)
{
    npc(npc(npc(_sheet)->getPageSettings())->getVCenter())->setVCenter(value);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getVerticallyCenter()
{
    return npc(npc(npc(_sheet)->getPageSettings())->getVCenter())->getVCenter();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setHorizontallyCenter(bool value)
{
    npc(npc(npc(_sheet)->getPageSettings())->getHCenter())->setHCenter(value);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getHorizontallyCenter()
{
    return npc(npc(npc(_sheet)->getPageSettings())->getHCenter())->getHCenter();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setRightToLeft(bool value)
{
    npc(npc(_sheet)->getWindowTwo())->setArabic(value);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isRightToLeft()
{
    return npc(npc(_sheet)->getWindowTwo())->getArabic();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::removeMergedRegion(int32_t index)
{
    npc(_sheet)->removeMergedRegion(index);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::removeMergedRegions(::java::util::Collection* indices)
{
    for (auto _i = npc((new ::java::util::TreeSet(static_cast< ::java::util::Collection* >(indices)))->descendingSet())->iterator(); _i->hasNext(); ) {
        int32_t i = npc(java_cast< ::java::lang::Integer* >(_i->next()))->intValue();
        {
            npc(_sheet)->removeMergedRegion(i);
        }
    }
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::getNumMergedRegions()
{
    return npc(_sheet)->getNumMergedRegions();
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::hssf::usermodel::HSSFSheet::getMergedRegion(int32_t index)
{
    return npc(_sheet)->getMergedRegionAt(index);
}

java::util::List* org::apache::poi::hssf::usermodel::HSSFSheet::getMergedRegions()
{
    ::java::util::List* addresses = new ::java::util::ArrayList();
    auto count = npc(_sheet)->getNumMergedRegions();
    for (auto i = int32_t(0); i < count; i++) {
        npc(addresses)->add(static_cast< ::java::lang::Object* >(npc(_sheet)->getMergedRegionAt(i)));
    }
    return addresses;
}

java::util::Iterator* org::apache::poi::hssf::usermodel::HSSFSheet::rowIterator()
{
    auto result = java_cast< ::java::util::Iterator* >(java_cast< ::java::util::Iterator* >(npc(npc(_rows)->values())->iterator()));
    return result;
}

java::util::Iterator* org::apache::poi::hssf::usermodel::HSSFSheet::iterator()
{
    return rowIterator();
}

org::apache::poi::hssf::model::InternalSheet* org::apache::poi::hssf::usermodel::HSSFSheet::getSheet()
{
    return _sheet;
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setAlternativeExpression(bool b)
{
    auto record = java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid));
    npc(record)->setAlternateExpression(b);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setAlternativeFormula(bool b)
{
    auto record = java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid));
    npc(record)->setAlternateFormula(b);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setAutobreaks(bool b)
{
    auto record = java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid));
    npc(record)->setAutobreaks(b);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setDialog(bool b)
{
    auto record = java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid));
    npc(record)->setDialog(b);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setDisplayGuts(bool b)
{
    auto record = java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid));
    npc(record)->setDisplayGuts(b);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setFitToPage(bool b)
{
    auto record = java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid));
    npc(record)->setFitToPage(b);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setRowSumsBelow(bool b)
{
    auto record = java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid));
    npc(record)->setRowSumsBelow(b);
    npc(record)->setAlternateExpression(b);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setRowSumsRight(bool b)
{
    auto record = java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid));
    npc(record)->setRowSumsRight(b);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getAlternateExpression()
{
    return npc((java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid))))->getAlternateExpression();
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getAlternateFormula()
{
    return npc((java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid))))->getAlternateFormula();
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getAutobreaks()
{
    return npc((java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid))))->getAutobreaks();
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getDialog()
{
    return npc((java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid))))->getDialog();
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getDisplayGuts()
{
    return npc((java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid))))->getDisplayGuts();
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isDisplayZeros()
{
    return npc(npc(_sheet)->getWindowTwo())->getDisplayZeros();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setDisplayZeros(bool value)
{
    npc(npc(_sheet)->getWindowTwo())->setDisplayZeros(value);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getFitToPage()
{
    return npc((java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid))))->getFitToPage();
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getRowSumsBelow()
{
    return npc((java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid))))->getRowSumsBelow();
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getRowSumsRight()
{
    return npc((java_cast< ::org::apache::poi::hssf::record::WSBoolRecord* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::WSBoolRecord::sid))))->getRowSumsRight();
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isPrintGridlines()
{
    return npc(npc(getSheet())->getPrintGridlines())->getPrintGridlines();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setPrintGridlines(bool show)
{
    npc(npc(getSheet())->getPrintGridlines())->setPrintGridlines(show);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isPrintRowAndColumnHeadings()
{
    return npc(npc(getSheet())->getPrintHeaders())->getPrintHeaders();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setPrintRowAndColumnHeadings(bool show)
{
    npc(npc(getSheet())->getPrintHeaders())->setPrintHeaders(show);
}

org::apache::poi::hssf::usermodel::HSSFPrintSetup* org::apache::poi::hssf::usermodel::HSSFSheet::getPrintSetup()
{
    return new HSSFPrintSetup(npc(npc(_sheet)->getPageSettings())->getPrintSetup());
}

org::apache::poi::hssf::usermodel::HSSFHeader* org::apache::poi::hssf::usermodel::HSSFSheet::getHeader()
{
    return new HSSFHeader(npc(_sheet)->getPageSettings());
}

org::apache::poi::hssf::usermodel::HSSFFooter* org::apache::poi::hssf::usermodel::HSSFSheet::getFooter()
{
    return new HSSFFooter(npc(_sheet)->getPageSettings());
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isSelected()
{
    return npc(npc(getSheet())->getWindowTwo())->getSelected();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setSelected(bool sel)
{
    npc(npc(getSheet())->getWindowTwo())->setSelected(sel);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isActive()
{
    return npc(npc(getSheet())->getWindowTwo())->isActive();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setActive(bool sel)
{
    npc(npc(getSheet())->getWindowTwo())->setActive(sel);
}

double org::apache::poi::hssf::usermodel::HSSFSheet::getMargin(int16_t margin)
{
    switch (margin) {
    case FooterMargin:
        return npc(npc(npc(_sheet)->getPageSettings())->getPrintSetup())->getFooterMargin();
    case HeaderMargin:
        return npc(npc(npc(_sheet)->getPageSettings())->getPrintSetup())->getHeaderMargin();
    default:
        return npc(npc(_sheet)->getPageSettings())->getMargin(margin);
    }

}

void org::apache::poi::hssf::usermodel::HSSFSheet::setMargin(int16_t margin, double size)
{
    switch (margin) {
    case FooterMargin:
        npc(npc(npc(_sheet)->getPageSettings())->getPrintSetup())->setFooterMargin(size);
        break;
    case HeaderMargin:
        npc(npc(npc(_sheet)->getPageSettings())->getPrintSetup())->setHeaderMargin(size);
        break;
    default:
        npc(npc(_sheet)->getPageSettings())->setMargin(margin, size);
    }

}

org::apache::poi::hssf::record::aggregates::WorksheetProtectionBlock* org::apache::poi::hssf::usermodel::HSSFSheet::getProtectionBlock()
{
    return npc(_sheet)->getProtectionBlock();
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getProtect()
{
    return npc(getProtectionBlock())->isSheetProtected();
}

int16_t org::apache::poi::hssf::usermodel::HSSFSheet::getPassword()
{
    return static_cast< int16_t >(npc(getProtectionBlock())->getPasswordHash());
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getObjectProtect()
{
    return npc(getProtectionBlock())->isObjectProtected();
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::getScenarioProtect()
{
    return npc(getProtectionBlock())->isScenarioProtected();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::protectSheet(::java::lang::String* password)
{
    npc(getProtectionBlock())->protectSheet(password, true, true);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setZoom(int32_t numerator, int32_t denominator)
{
    if(numerator < 1 || numerator > 65535)
        throw new ::java::lang::IllegalArgumentException(u"Numerator must be greater than 0 and less than 65536"_j);

    if(denominator < 1 || denominator > 65535)
        throw new ::java::lang::IllegalArgumentException(u"Denominator must be greater than 0 and less than 65536"_j);

    auto sclRecord = new ::org::apache::poi::hssf::record::SCLRecord();
    npc(sclRecord)->setNumerator(static_cast< int16_t >(numerator));
    npc(sclRecord)->setDenominator(static_cast< int16_t >(denominator));
    npc(getSheet())->setSCLRecord(sclRecord);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setZoom(int32_t scale)
{
    setZoom(scale, 100);
}

int16_t org::apache::poi::hssf::usermodel::HSSFSheet::getTopRow()
{
    return npc(_sheet)->getTopRow();
}

int16_t org::apache::poi::hssf::usermodel::HSSFSheet::getLeftCol()
{
    return npc(_sheet)->getLeftCol();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::showInPane(int32_t toprow, int32_t leftcol)
{
    auto maxrow = npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastRowIndex();
    if(toprow > maxrow)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Maximum row number is "_j)->append(maxrow)->toString());

    showInPane(static_cast< int16_t >(toprow), static_cast< int16_t >(leftcol));
}

void org::apache::poi::hssf::usermodel::HSSFSheet::showInPane(int16_t toprow, int16_t leftcol)
{
    npc(_sheet)->setTopRow(toprow);
    npc(_sheet)->setLeftCol(leftcol);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::shiftMerged(int32_t startRow, int32_t endRow, int32_t n, bool isRow)
{
    ::org::apache::poi::ss::usermodel::helpers::RowShifter* rowShifter = new ::org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter(this);
    npc(rowShifter)->shiftMergedRegions(startRow, endRow, n);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::shiftRows(int32_t startRow, int32_t endRow, int32_t n)
{
    shiftRows(startRow, endRow, n, false, false);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::shiftRows(int32_t startRow, int32_t endRow, int32_t n, bool copyRowHeight, bool resetOriginalRowHeight)
{
    shiftRows(startRow, endRow, n, copyRowHeight, resetOriginalRowHeight, true);
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::clip(int32_t row)
{
    clinit();
    return ::java::lang::Math::min(::java::lang::Math::max(int32_t(0), row), npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastRowIndex());
}

void org::apache::poi::hssf::usermodel::HSSFSheet::shiftRows(int32_t startRow, int32_t endRow, int32_t n, bool copyRowHeight, bool resetOriginalRowHeight, bool moveComments)
{
    int32_t s, inc;
    if(endRow < startRow) {
        throw new ::java::lang::IllegalArgumentException(u"startRow must be less than or equal to endRow. To shift rows up, use n<0."_j);
    }
    if(n < 0) {
        s = startRow;
        inc = 1;
    } else if(n > 0) {
        s = endRow;
        inc = -int32_t(1);
    } else {
        return;
    }
    ::org::apache::poi::ss::usermodel::helpers::RowShifter* const rowShifter = new ::org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter(this);
    if(moveComments) {
        auto const patriarch = java_cast< HSSFPatriarch* >(createDrawingPatriarch());
        for (auto _i = npc(npc(patriarch)->getChildren())->iterator(); _i->hasNext(); ) {
            HSSFShape* shape = java_cast< HSSFShape* >(_i->next());
            {
                if(!(dynamic_cast< HSSFComment* >(shape) != nullptr)) {
                    continue;
                }
                auto const comment = java_cast< HSSFComment* >(shape);
                auto const r = npc(comment)->getRow();
                if(startRow <= r && r <= endRow) {
                    npc(comment)->setRow(clip(r + n));
                }
            }
        }
    }
    npc(rowShifter)->shiftMergedRegions(startRow, endRow, n);
    npc(npc(_sheet)->getPageSettings())->shiftRowBreaks(startRow, endRow, n);
    auto const firstOverwrittenRow = startRow + n;
    auto const lastOverwrittenRow = endRow + n;
    for (auto _i = npc(getHyperlinkList())->iterator(); _i->hasNext(); ) {
        HSSFHyperlink* link = java_cast< HSSFHyperlink* >(_i->next());
        {
            auto const firstRow = npc(link)->getFirstRow();
            auto const lastRow = npc(link)->getLastRow();
            if(firstOverwrittenRow <= firstRow && firstRow <= lastOverwrittenRow && lastOverwrittenRow <= lastRow && lastRow <= lastOverwrittenRow) {
                removeHyperlink(link);
            }
        }
    }
    for (auto rowNum = s; rowNum >= startRow && rowNum <= endRow && rowNum >= 0 && rowNum < 65536; rowNum += inc) {
        auto row = java_cast< HSSFRow* >(getRow(rowNum));
        if(row != nullptr)
            notifyRowShifting(row);

        auto row2Replace = java_cast< HSSFRow* >(getRow(rowNum + n));
        if(row2Replace == nullptr)
            row2Replace = java_cast< HSSFRow* >(createRow(rowNum + n));

        npc(row2Replace)->removeAllCells();
        if(row == nullptr)
            continue;

        if(copyRowHeight) {
            npc(row2Replace)->setHeight(npc(row)->getHeight());
        }
        if(resetOriginalRowHeight) {
            npc(row)->setHeight(static_cast< int16_t >(int32_t(255)));
        }
        for (auto *cells = npc(row)->cellIterator(); npc(cells)->hasNext(); ) {
            auto cell = java_cast< HSSFCell* >(java_cast< ::org::apache::poi::ss::usermodel::Cell* >(npc(cells)->next()));
            auto link = npc(cell)->getHyperlink();
            npc(row)->removeCell(static_cast< ::org::apache::poi::ss::usermodel::Cell* >(cell));
            auto cellRecord = npc(cell)->getCellValueRecord();
            npc(cellRecord)->setRow(rowNum + n);
            npc(row2Replace)->createCellFromRecord(cellRecord);
            npc(_sheet)->addValueRecord(rowNum + n, cellRecord);
            if(link != nullptr) {
                npc(link)->setFirstRow(npc(link)->getFirstRow() + n);
                npc(link)->setLastRow(npc(link)->getLastRow() + n);
            }
        }
        npc(row)->removeAllCells();
    }
    if(n > 0) {
        if(startRow == _firstrow) {
            _firstrow = ::java::lang::Math::max(startRow + n, int32_t(0));
            for (auto i = startRow + int32_t(1); i < startRow + n; i++) {
                if(java_cast< HSSFRow* >(getRow(i)) != nullptr) {
                    _firstrow = i;
                    break;
                }
            }
        }
        if(endRow + n > _lastrow) {
            _lastrow = ::java::lang::Math::min(endRow + n, npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastRowIndex());
        }
    } else {
        if(startRow + n < _firstrow) {
            _firstrow = ::java::lang::Math::max(startRow + n, int32_t(0));
        }
        if(endRow == _lastrow) {
            _lastrow = ::java::lang::Math::min(endRow + n, npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastRowIndex());
            for (auto i = endRow - int32_t(1); i > endRow + n; i--) {
                if(java_cast< HSSFRow* >(getRow(i)) != nullptr) {
                    _lastrow = i;
                    break;
                }
            }
        }
    }
    auto sheetIndex = npc(_workbook)->getSheetIndex(static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(this));
    auto sheetName = npc(_workbook)->getSheetName(sheetIndex);
    auto externSheetIndex = npc(_book)->checkExternSheet(sheetIndex);
    auto shifter = ::org::apache::poi::ss::formula::FormulaShifter::createForRowShift(externSheetIndex, sheetName, startRow, endRow, n, ::org::apache::poi::ss::SpreadsheetVersion::EXCEL97);
    npc(_sheet)->updateFormulasAfterCellShift(shifter, externSheetIndex);
    auto nSheets = npc(_workbook)->getNumberOfSheets();
    for (auto i = int32_t(0); i < nSheets; i++) {
        auto otherSheet = npc(java_cast< HSSFSheet* >(npc(_workbook)->getSheetAt(i)))->getSheet();
        if(otherSheet == this->_sheet) {
            continue;
        }
        auto otherExtSheetIx = npc(_book)->checkExternSheet(i);
        npc(otherSheet)->updateFormulasAfterCellShift(shifter, otherExtSheetIx);
    }
    npc(npc(_workbook)->getWorkbook())->updateNamesAfterCellShift(shifter);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::insertChartRecords(::java::util::List* records)
{
    auto window2Loc = npc(_sheet)->findFirstRecordLocBySid(::org::apache::poi::hssf::record::WindowTwoRecord::sid);
    npc(npc(_sheet)->getRecords())->addAll(window2Loc, records);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::notifyRowShifting(HSSFRow* row)
{
    auto msg = ::java::lang::StringBuilder().append(u"Row[rownum="_j)->append(npc(row)->getRowNum())
        ->append(u"] contains cell(s) included in a multi-cell array formula. "_j)
        ->append(u"You cannot change part of an array."_j)->toString();
    for (auto _i = npc(row)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ss::usermodel::Cell* cell = java_cast< ::org::apache::poi::ss::usermodel::Cell* >(_i->next());
        {
            auto hcell = java_cast< HSSFCell* >(cell);
            if(npc(hcell)->isPartOfArrayFormulaGroup()) {
                npc(hcell)->notifyArrayFormulaChanging(msg);
            }
        }
    }
}

void org::apache::poi::hssf::usermodel::HSSFSheet::createFreezePane(int32_t colSplit, int32_t rowSplit, int32_t leftmostColumn, int32_t topRow)
{
    validateColumn(colSplit);
    validateRow(rowSplit);
    if(leftmostColumn < colSplit)
        throw new ::java::lang::IllegalArgumentException(u"leftmostColumn parameter must not be less than colSplit parameter"_j);

    if(topRow < rowSplit)
        throw new ::java::lang::IllegalArgumentException(u"topRow parameter must not be less than leftmostColumn parameter"_j);

    npc(getSheet())->createFreezePane(colSplit, rowSplit, topRow, leftmostColumn);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::createFreezePane(int32_t colSplit, int32_t rowSplit)
{
    createFreezePane(colSplit, rowSplit, colSplit, rowSplit);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::createSplitPane(int32_t xSplitPos, int32_t ySplitPos, int32_t leftmostColumn, int32_t topRow, int32_t activePane)
{
    npc(getSheet())->createSplitPane(xSplitPos, ySplitPos, topRow, leftmostColumn, activePane);
}

org::apache::poi::ss::util::PaneInformation* org::apache::poi::hssf::usermodel::HSSFSheet::getPaneInformation()
{
    return npc(getSheet())->getPaneInformation();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setDisplayGridlines(bool show)
{
    npc(_sheet)->setDisplayGridlines(show);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isDisplayGridlines()
{
    return npc(_sheet)->isDisplayGridlines();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setDisplayFormulas(bool show)
{
    npc(_sheet)->setDisplayFormulas(show);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isDisplayFormulas()
{
    return npc(_sheet)->isDisplayFormulas();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setDisplayRowColHeadings(bool show)
{
    npc(_sheet)->setDisplayRowColHeadings(show);
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isDisplayRowColHeadings()
{
    return npc(_sheet)->isDisplayRowColHeadings();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setRowBreak(int32_t row)
{
    validateRow(row);
    npc(npc(_sheet)->getPageSettings())->setRowBreak(row, static_cast< int16_t >(int32_t(0)), static_cast< int16_t >(int32_t(255)));
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isRowBroken(int32_t row)
{
    return npc(npc(_sheet)->getPageSettings())->isRowBroken(row);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::removeRowBreak(int32_t row)
{
    npc(npc(_sheet)->getPageSettings())->removeRowBreak(row);
}

int32_tArray* org::apache::poi::hssf::usermodel::HSSFSheet::getRowBreaks()
{
    return npc(npc(_sheet)->getPageSettings())->getRowBreaks();
}

int32_tArray* org::apache::poi::hssf::usermodel::HSSFSheet::getColumnBreaks()
{
    return npc(npc(_sheet)->getPageSettings())->getColumnBreaks();
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setColumnBreak(int32_t column)
{
    validateColumn(static_cast< int16_t >(column));
    npc(npc(_sheet)->getPageSettings())->setColumnBreak(static_cast< int16_t >(column), static_cast< int16_t >(int32_t(0)), static_cast< int16_t >(npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastRowIndex()));
}

bool org::apache::poi::hssf::usermodel::HSSFSheet::isColumnBroken(int32_t column)
{
    return npc(npc(_sheet)->getPageSettings())->isColumnBroken(column);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::removeColumnBreak(int32_t column)
{
    npc(npc(_sheet)->getPageSettings())->removeColumnBreak(column);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::validateRow(int32_t row)
{
    auto maxrow = npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastRowIndex();
    if(row > maxrow)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Maximum row number is "_j)->append(maxrow)->toString());

    if(row < 0)
        throw new ::java::lang::IllegalArgumentException(u"Minumum row number is 0"_j);

}

void org::apache::poi::hssf::usermodel::HSSFSheet::validateColumn(int32_t column)
{
    auto maxcol = npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastColumnIndex();
    if(column > maxcol)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Maximum column number is "_j)->append(maxcol)->toString());

    if(column < 0)
        throw new ::java::lang::IllegalArgumentException(u"Minimum column number is 0"_j);

}

void org::apache::poi::hssf::usermodel::HSSFSheet::dumpDrawingRecords(bool fat, ::java::io::PrintWriter* pw)
{
    npc(_sheet)->aggregateDrawingRecords(npc(_book)->getDrawingManager(), false);
    auto r = java_cast< ::org::apache::poi::hssf::record::EscherAggregate* >(npc(getSheet())->findFirstRecordBySid(::org::apache::poi::hssf::record::EscherAggregate::sid_));
    auto escherRecords = npc(r)->getEscherRecords();
    for (auto _i = npc(escherRecords)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ddf::EscherRecord* escherRecord = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
        {
            if(fat) {
                npc(pw)->println(static_cast< ::java::lang::Object* >(escherRecord));
            } else {
                npc(escherRecord)->display(pw, 0);
            }
        }
    }
    npc(pw)->flush();
}

org::apache::poi::hssf::record::EscherAggregate* org::apache::poi::hssf::usermodel::HSSFSheet::getDrawingEscherAggregate()
{
    npc(_book)->findDrawingGroup();
    if(npc(_book)->getDrawingManager() == nullptr) {
        return nullptr;
    }
    auto found = npc(_sheet)->aggregateDrawingRecords(npc(_book)->getDrawingManager(), false);
    if(found == -int32_t(1)) {
        return nullptr;
    }
    return java_cast< ::org::apache::poi::hssf::record::EscherAggregate* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::EscherAggregate::sid_));
}

org::apache::poi::ss::usermodel::Drawing* org::apache::poi::hssf::usermodel::HSSFSheet::getDrawingPatriarch()
{
    _patriarch = getPatriarch(false);
    return _patriarch;
}

org::apache::poi::ss::usermodel::Drawing* org::apache::poi::hssf::usermodel::HSSFSheet::createDrawingPatriarch()
{
    _patriarch = getPatriarch(true);
    return _patriarch;
}

org::apache::poi::hssf::usermodel::HSSFPatriarch* org::apache::poi::hssf::usermodel::HSSFSheet::getPatriarch(bool createIfMissing)
{
    if(_patriarch != nullptr) {
        return _patriarch;
    }
    auto dm = npc(_book)->findDrawingGroup();
    if(nullptr == dm) {
        if(!createIfMissing) {
            return nullptr;
        } else {
            npc(_book)->createDrawingGroup();
            dm = npc(_book)->getDrawingManager();
        }
    }
    auto agg = java_cast< ::org::apache::poi::hssf::record::EscherAggregate* >(npc(_sheet)->findFirstRecordBySid(::org::apache::poi::hssf::record::EscherAggregate::sid_));
    if(nullptr == agg) {
        auto pos = npc(_sheet)->aggregateDrawingRecords(dm, false);
        if(-int32_t(1) == pos) {
            if(createIfMissing) {
                pos = npc(_sheet)->aggregateDrawingRecords(dm, true);
                agg = java_cast< ::org::apache::poi::hssf::record::EscherAggregate* >(java_cast< ::org::apache::poi::hssf::record::RecordBase* >(npc(npc(_sheet)->getRecords())->get(pos)));
                auto patriarch = new HSSFPatriarch(this, agg);
                npc(patriarch)->afterCreate();
                return patriarch;
            } else {
                return nullptr;
            }
        }
        agg = java_cast< ::org::apache::poi::hssf::record::EscherAggregate* >(java_cast< ::org::apache::poi::hssf::record::RecordBase* >(npc(npc(_sheet)->getRecords())->get(pos)));
    }
    return new HSSFPatriarch(this, agg);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setColumnGroupCollapsed(int32_t columnNumber, bool collapsed)
{
    npc(_sheet)->setColumnGroupCollapsed(columnNumber, collapsed);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::groupColumn(int32_t fromColumn, int32_t toColumn)
{
    npc(_sheet)->groupColumnRange(fromColumn, toColumn, true);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::ungroupColumn(int32_t fromColumn, int32_t toColumn)
{
    npc(_sheet)->groupColumnRange(fromColumn, toColumn, false);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::groupRow(int32_t fromRow, int32_t toRow)
{
    npc(_sheet)->groupRowRange(fromRow, toRow, true);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::ungroupRow(int32_t fromRow, int32_t toRow)
{
    npc(_sheet)->groupRowRange(fromRow, toRow, false);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setRowGroupCollapsed(int32_t rowIndex, bool collapse)
{
    if(collapse) {
        npc(npc(_sheet)->getRowsAggregate())->collapseRow(rowIndex);
    } else {
        npc(npc(_sheet)->getRowsAggregate())->expandRow(rowIndex);
    }
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setDefaultColumnStyle(int32_t column, ::org::apache::poi::ss::usermodel::CellStyle* style)
{
    npc(_sheet)->setDefaultColumnStyle(column, npc((java_cast< HSSFCellStyle* >(style)))->getIndex());
}

void org::apache::poi::hssf::usermodel::HSSFSheet::autoSizeColumn(int32_t column)
{
    autoSizeColumn(column, false);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::autoSizeColumn(int32_t column, bool useMergedCells)
{
    auto width = ::org::apache::poi::ss::util::SheetUtil::getColumnWidth(this, column, useMergedCells);
    if(width != -int32_t(1)) {
        width *= 256;
        auto maxColumnWidth = int32_t(255) * int32_t(256);
        if(width > maxColumnWidth) {
            width = maxColumnWidth;
        }
        setColumnWidth(column, static_cast< int32_t >((width)));
    }
}

org::apache::poi::hssf::usermodel::HSSFComment* org::apache::poi::hssf::usermodel::HSSFSheet::getCellComment(::org::apache::poi::ss::util::CellAddress* ref)
{
    return findCellComment(npc(ref)->getRow(), npc(ref)->getColumn());
}

org::apache::poi::hssf::usermodel::HSSFHyperlink* org::apache::poi::hssf::usermodel::HSSFSheet::getHyperlink(int32_t row, int32_t column)
{
    for (auto _i = npc(npc(_sheet)->getRecords())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::RecordBase* rec = java_cast< ::org::apache::poi::hssf::record::RecordBase* >(_i->next());
        {
            if(dynamic_cast< ::org::apache::poi::hssf::record::HyperlinkRecord* >(rec) != nullptr) {
                auto link = java_cast< ::org::apache::poi::hssf::record::HyperlinkRecord* >(rec);
                if(npc(link)->getFirstColumn() == column && npc(link)->getFirstRow() == row) {
                    return new HSSFHyperlink(link);
                }
            }
        }
    }
    return nullptr;
}

org::apache::poi::hssf::usermodel::HSSFHyperlink* org::apache::poi::hssf::usermodel::HSSFSheet::getHyperlink(::org::apache::poi::ss::util::CellAddress* addr)
{
    return getHyperlink(npc(addr)->getRow(), npc(addr)->getColumn());
}

java::util::List* org::apache::poi::hssf::usermodel::HSSFSheet::getHyperlinkList()
{
    ::java::util::List* const hyperlinkList = new ::java::util::ArrayList();
    for (auto _i = npc(npc(_sheet)->getRecords())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::RecordBase* rec = java_cast< ::org::apache::poi::hssf::record::RecordBase* >(_i->next());
        {
            if(dynamic_cast< ::org::apache::poi::hssf::record::HyperlinkRecord* >(rec) != nullptr) {
                auto link = java_cast< ::org::apache::poi::hssf::record::HyperlinkRecord* >(rec);
                npc(hyperlinkList)->add(static_cast< ::java::lang::Object* >(new HSSFHyperlink(link)));
            }
        }
    }
    return hyperlinkList;
}

void org::apache::poi::hssf::usermodel::HSSFSheet::removeHyperlink(HSSFHyperlink* link)
{
    removeHyperlink(npc(link)->record);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::removeHyperlink(::org::apache::poi::hssf::record::HyperlinkRecord* link)
{
    for (auto *it = npc(npc(_sheet)->getRecords())->iterator(); npc(it)->hasNext(); ) {
        auto rec = java_cast< ::org::apache::poi::hssf::record::RecordBase* >(npc(it)->next());
        if(dynamic_cast< ::org::apache::poi::hssf::record::HyperlinkRecord* >(rec) != nullptr) {
            auto recLink = java_cast< ::org::apache::poi::hssf::record::HyperlinkRecord* >(rec);
            if(link == recLink) {
                npc(it)->remove();
                return;
            }
        }
    }
}

org::apache::poi::hssf::usermodel::HSSFSheetConditionalFormatting* org::apache::poi::hssf::usermodel::HSSFSheet::getSheetConditionalFormatting()
{
    return new HSSFSheetConditionalFormatting(this);
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFSheet::getSheetName()
{
    auto wb = java_cast< HSSFWorkbook* >(getWorkbook());
    auto idx = npc(wb)->getSheetIndex(static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(this));
    return npc(wb)->getSheetName(idx);
}

org::apache::poi::ss::usermodel::CellRange* org::apache::poi::hssf::usermodel::HSSFSheet::getCellRange(::org::apache::poi::ss::util::CellRangeAddress* range)
{
    auto firstRow = npc(range)->getFirstRow();
    auto firstColumn = npc(range)->getFirstColumn();
    auto lastRow = npc(range)->getLastRow();
    auto lastColumn = npc(range)->getLastColumn();
    auto height = lastRow - firstRow + int32_t(1);
    auto width = lastColumn - firstColumn + int32_t(1);
    ::java::util::List* temp = new ::java::util::ArrayList(height * width);
    for (auto rowIn = firstRow; rowIn <= lastRow; rowIn++) {
        for (auto colIn = firstColumn; colIn <= lastColumn; colIn++) {
            auto row = java_cast< HSSFRow* >(getRow(rowIn));
            if(row == nullptr) {
                row = java_cast< HSSFRow* >(createRow(rowIn));
            }
            auto cell = java_cast< HSSFCell* >(npc(row)->getCell(colIn));
            if(cell == nullptr) {
                cell = java_cast< HSSFCell* >(npc(row)->createCell(colIn));
            }
            npc(temp)->add(static_cast< ::java::lang::Object* >(cell));
        }
    }
    return ::org::apache::poi::ss::util::SSCellRange::create(firstRow, firstColumn, height, width, temp, HSSFCell::class_());
}

org::apache::poi::ss::usermodel::CellRange* org::apache::poi::hssf::usermodel::HSSFSheet::setArrayFormula(::java::lang::String* formula, ::org::apache::poi::ss::util::CellRangeAddress* range)
{
    auto sheetIndex = npc(_workbook)->getSheetIndex(static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(this));
    auto ptgs = ::org::apache::poi::hssf::model::HSSFFormulaParser::parse(formula, _workbook, ::org::apache::poi::ss::formula::FormulaType::ARRAY, sheetIndex);
    auto cells = getCellRange(range);
    for (auto _i = npc(cells)->iterator(); _i->hasNext(); ) {
        HSSFCell* c = java_cast< HSSFCell* >(_i->next());
        {
            npc(c)->setCellArrayFormula(range);
        }
    }
    auto mainArrayFormulaCell = java_cast< HSSFCell* >(npc(cells)->getTopLeftCell());
    auto agg = java_cast< ::org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate* >(npc(mainArrayFormulaCell)->getCellValueRecord());
    npc(agg)->setArrayFormula(range, ptgs);
    return cells;
}

org::apache::poi::ss::usermodel::CellRange* org::apache::poi::hssf::usermodel::HSSFSheet::removeArrayFormula(::org::apache::poi::ss::usermodel::Cell* cell)
{
    if(npc(cell)->getSheet() != static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(this)) {
        throw new ::java::lang::IllegalArgumentException(u"Specified cell does not belong to this sheet."_j);
    }
    auto rec = npc((java_cast< HSSFCell* >(cell)))->getCellValueRecord();
    if(!(dynamic_cast< ::org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate* >(rec) != nullptr)) {
        auto ref = (new ::org::apache::poi::ss::util::CellReference(cell))->formatAsString();
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Cell "_j)->append(ref)
            ->append(u" is not part of an array formula."_j)->toString());
    }
    auto fra = java_cast< ::org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate* >(rec);
    auto range = npc(fra)->removeArrayFormula(npc(cell)->getRowIndex(), npc(cell)->getColumnIndex());
    auto result = getCellRange(range);
    for (auto _i = npc(result)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ss::usermodel::Cell* c = java_cast< ::org::apache::poi::ss::usermodel::Cell* >(_i->next());
        {
            npc(c)->setCellType(::org::apache::poi::ss::usermodel::CellType::BLANK);
        }
    }
    return result;
}

org::apache::poi::ss::usermodel::DataValidationHelper* org::apache::poi::hssf::usermodel::HSSFSheet::getDataValidationHelper()
{
    return new HSSFDataValidationHelper(this);
}

org::apache::poi::hssf::usermodel::HSSFAutoFilter* org::apache::poi::hssf::usermodel::HSSFSheet::setAutoFilter(::org::apache::poi::ss::util::CellRangeAddress* range)
{
    auto workbook = npc(_workbook)->getWorkbook();
    auto sheetIndex = npc(_workbook)->getSheetIndex(static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(this));
    auto name = npc(workbook)->getSpecificBuiltinRecord(::org::apache::poi::hssf::record::NameRecord::BUILTIN_FILTER_DB, sheetIndex + int32_t(1));
    if(name == nullptr) {
        name = npc(workbook)->createBuiltInName(::org::apache::poi::hssf::record::NameRecord::BUILTIN_FILTER_DB, sheetIndex + int32_t(1));
    }
    auto firstRow = npc(range)->getFirstRow();
    if(firstRow == -int32_t(1)) {
        firstRow = 0;
    }
    auto ptg = new ::org::apache::poi::ss::formula::ptg::Area3DPtg(firstRow, npc(range)->getLastRow(), npc(range)->getFirstColumn(), npc(range)->getLastColumn(), false, false, false, false, sheetIndex);
    npc(name)->setNameDefinition(new ::org::apache::poi::ss::formula::ptg::PtgArray({static_cast< ::org::apache::poi::ss::formula::ptg::Ptg* >(ptg)}));
    auto r = new ::org::apache::poi::hssf::record::AutoFilterInfoRecord();
    auto numcols = int32_t(1) + npc(range)->getLastColumn() - npc(range)->getFirstColumn();
    npc(r)->setNumEntries(static_cast< int16_t >(numcols));
    auto idx = npc(_sheet)->findFirstRecordLocBySid(::org::apache::poi::hssf::record::DimensionsRecord::sid);
    npc(npc(_sheet)->getRecords())->add(idx, r);
    auto p = java_cast< HSSFPatriarch* >(createDrawingPatriarch());
    auto const firstColumn = npc(range)->getFirstColumn();
    auto const lastColumn = npc(range)->getLastColumn();
    for (auto col = firstColumn; col <= lastColumn; col++) {
        npc(p)->createComboBox(new HSSFClientAnchor(int32_t(0), int32_t(0), int32_t(0), int32_t(0), static_cast< int16_t >(col), firstRow, static_cast< int16_t >((col + int32_t(1))), firstRow + int32_t(1)));
    }
    return new HSSFAutoFilter(this);
}

org::apache::poi::hssf::usermodel::HSSFComment* org::apache::poi::hssf::usermodel::HSSFSheet::findCellComment(int32_t row, int32_t column)
{
    auto patriarch = java_cast< HSSFPatriarch* >(getDrawingPatriarch());
    if(nullptr == patriarch) {
        patriarch = java_cast< HSSFPatriarch* >(createDrawingPatriarch());
    }
    return lookForComment(patriarch, row, column);
}

org::apache::poi::hssf::usermodel::HSSFComment* org::apache::poi::hssf::usermodel::HSSFSheet::lookForComment(HSSFShapeContainer* container, int32_t row, int32_t column)
{
    for (auto _i = npc(npc(container)->getChildren())->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* object = java_cast< ::java::lang::Object* >(_i->next());
        {
            auto shape = java_cast< HSSFShape* >(object);
            if(dynamic_cast< HSSFShapeGroup* >(shape) != nullptr) {
                HSSFShape* res = lookForComment(java_cast< HSSFShapeContainer* >(shape), row, column);
                if(nullptr != res) {
                    return java_cast< HSSFComment* >(res);
                }
                continue;
            }
            if(dynamic_cast< HSSFComment* >(shape) != nullptr) {
                auto comment = java_cast< HSSFComment* >(shape);
                if(npc(comment)->hasPosition() && npc(comment)->getColumn() == column && npc(comment)->getRow() == row) {
                    return comment;
                }
            }
        }
    }
    return nullptr;
}

java::util::Map* org::apache::poi::hssf::usermodel::HSSFSheet::getCellComments()
{
    auto patriarch = java_cast< HSSFPatriarch* >(getDrawingPatriarch());
    if(nullptr == patriarch) {
        patriarch = java_cast< HSSFPatriarch* >(createDrawingPatriarch());
    }
    ::java::util::Map* locations = new ::java::util::TreeMap();
    findCellCommentLocations(patriarch, locations);
    return locations;
}

void org::apache::poi::hssf::usermodel::HSSFSheet::findCellCommentLocations(HSSFShapeContainer* container, ::java::util::Map* locations)
{
    for (auto _i = npc(npc(container)->getChildren())->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* object = java_cast< ::java::lang::Object* >(_i->next());
        {
            auto shape = java_cast< HSSFShape* >(object);
            if(dynamic_cast< HSSFShapeGroup* >(shape) != nullptr) {
                findCellCommentLocations(java_cast< HSSFShapeGroup* >(shape), locations);
                continue;
            }
            if(dynamic_cast< HSSFComment* >(shape) != nullptr) {
                auto comment = java_cast< HSSFComment* >(shape);
                if(npc(comment)->hasPosition()) {
                    npc(locations)->put(new ::org::apache::poi::ss::util::CellAddress(npc(comment)->getRow(), npc(comment)->getColumn()), comment);
                }
            }
        }
    }
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::hssf::usermodel::HSSFSheet::getRepeatingRows()
{
    return getRepeatingRowsOrColums(true);
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::hssf::usermodel::HSSFSheet::getRepeatingColumns()
{
    return getRepeatingRowsOrColums(false);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setRepeatingRows(::org::apache::poi::ss::util::CellRangeAddress* rowRangeRef)
{
    auto columnRangeRef = getRepeatingColumns();
    setRepeatingRowsAndColumns(rowRangeRef, columnRangeRef);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setRepeatingColumns(::org::apache::poi::ss::util::CellRangeAddress* columnRangeRef)
{
    auto rowRangeRef = getRepeatingRows();
    setRepeatingRowsAndColumns(rowRangeRef, columnRangeRef);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setRepeatingRowsAndColumns(::org::apache::poi::ss::util::CellRangeAddress* rowDef, ::org::apache::poi::ss::util::CellRangeAddress* colDef)
{
    auto sheetIndex = npc(_workbook)->getSheetIndex(static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(this));
    auto maxRowIndex = npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastRowIndex();
    auto maxColIndex = npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastColumnIndex();
    auto col1 = -int32_t(1);
    auto col2 = -int32_t(1);
    auto row1 = -int32_t(1);
    auto row2 = -int32_t(1);
    if(rowDef != nullptr) {
        row1 = npc(rowDef)->getFirstRow();
        row2 = npc(rowDef)->getLastRow();
        if((row1 == -int32_t(1) && row2 != -int32_t(1)) || (row1 > row2) || (row1 < 0 || row1 > maxRowIndex)|| (row2 < 0 || row2 > maxRowIndex)) {
            throw new ::java::lang::IllegalArgumentException(u"Invalid row range specification"_j);
        }
    }
    if(colDef != nullptr) {
        col1 = npc(colDef)->getFirstColumn();
        col2 = npc(colDef)->getLastColumn();
        if((col1 == -int32_t(1) && col2 != -int32_t(1)) || (col1 > col2) || (col1 < 0 || col1 > maxColIndex)|| (col2 < 0 || col2 > maxColIndex)) {
            throw new ::java::lang::IllegalArgumentException(u"Invalid column range specification"_j);
        }
    }
    auto externSheetIndex = npc(npc(_workbook)->getWorkbook())->checkExternSheet(sheetIndex);
    auto setBoth = rowDef != nullptr && colDef != nullptr;
    auto removeAll = rowDef == nullptr && colDef == nullptr;
    auto name = npc(_workbook)->getBuiltInName(::org::apache::poi::hssf::record::NameRecord::BUILTIN_PRINT_TITLE, sheetIndex);
    if(removeAll) {
        if(name != nullptr) {
            npc(_workbook)->removeName(static_cast< ::org::apache::poi::ss::usermodel::Name* >(name));
        }
        return;
    }
    if(name == nullptr) {
        name = npc(_workbook)->createBuiltInName(::org::apache::poi::hssf::record::NameRecord::BUILTIN_PRINT_TITLE, sheetIndex);
    }
    ::java::util::List* ptgList = new ::java::util::ArrayList();
    if(setBoth) {
        auto const exprsSize = int32_t(2) * int32_t(11) + int32_t(1);
        npc(ptgList)->add(static_cast< ::java::lang::Object* >(new ::org::apache::poi::ss::formula::ptg::MemFuncPtg(exprsSize)));
    }
    if(colDef != nullptr) {
        auto colArea = new ::org::apache::poi::ss::formula::ptg::Area3DPtg(int32_t(0), maxRowIndex, col1, col2, false, false, false, false, externSheetIndex);
        npc(ptgList)->add(static_cast< ::java::lang::Object* >(colArea));
    }
    if(rowDef != nullptr) {
        auto rowArea = new ::org::apache::poi::ss::formula::ptg::Area3DPtg(row1, row2, int32_t(0), maxColIndex, false, false, false, false, externSheetIndex);
        npc(ptgList)->add(static_cast< ::java::lang::Object* >(rowArea));
    }
    if(setBoth) {
        npc(ptgList)->add(static_cast< ::java::lang::Object* >(::org::apache::poi::ss::formula::ptg::UnionPtg::instance()));
    }
    auto ptgs = new ::org::apache::poi::ss::formula::ptg::PtgArray(npc(ptgList)->size());
    npc(ptgList)->toArray_(static_cast< ::java::lang::ObjectArray* >(ptgs));
    npc(name)->setNameDefinition(ptgs);
    auto printSetup = getPrintSetup();
    npc(printSetup)->setValidSettings(false);
    setActive(true);
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::hssf::usermodel::HSSFSheet::getRepeatingRowsOrColums(bool rows)
{
    auto rec = getBuiltinNameRecord(::org::apache::poi::hssf::record::NameRecord::BUILTIN_PRINT_TITLE);
    if(rec == nullptr) {
        return nullptr;
    }
    auto nameDefinition = npc(rec)->getNameDefinition();
    if(nameDefinition == nullptr) {
        return nullptr;
    }
    auto maxRowIndex = npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastRowIndex();
    auto maxColIndex = npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)->getLastColumnIndex();
    for(auto ptg : *npc(nameDefinition)) {
        if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Area3DPtg* >(ptg) != nullptr) {
            auto areaPtg = java_cast< ::org::apache::poi::ss::formula::ptg::Area3DPtg* >(ptg);
            if(npc(areaPtg)->getFirstColumn() == 0 && npc(areaPtg)->getLastColumn() == maxColIndex) {
                if(rows) {
                    return new ::org::apache::poi::ss::util::CellRangeAddress(npc(areaPtg)->getFirstRow(), npc(areaPtg)->getLastRow(), -int32_t(1), -int32_t(1));
                }
            } else if(npc(areaPtg)->getFirstRow() == 0 && npc(areaPtg)->getLastRow() == maxRowIndex) {
                if(!rows) {
                    return new ::org::apache::poi::ss::util::CellRangeAddress(-int32_t(1), -int32_t(1), npc(areaPtg)->getFirstColumn(), npc(areaPtg)->getLastColumn());
                }
            }
        }
    }
    return nullptr;
}

org::apache::poi::hssf::record::NameRecord* org::apache::poi::hssf::usermodel::HSSFSheet::getBuiltinNameRecord(int8_t builtinCode)
{
    auto sheetIndex = npc(_workbook)->getSheetIndex(static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(this));
    auto recIndex = npc(_workbook)->findExistingBuiltinNameRecordIdx(sheetIndex, builtinCode);
    if(recIndex == -int32_t(1)) {
        return nullptr;
    }
    return npc(_workbook)->getNameRecord(recIndex);
}

int32_t org::apache::poi::hssf::usermodel::HSSFSheet::getColumnOutlineLevel(int32_t columnIndex)
{
    return npc(_sheet)->getColumnOutlineLevel(columnIndex);
}

org::apache::poi::ss::util::CellAddress* org::apache::poi::hssf::usermodel::HSSFSheet::getActiveCell()
{
    auto row = npc(_sheet)->getActiveCellRow();
    int32_t col = npc(_sheet)->getActiveCellCol();
    return new ::org::apache::poi::ss::util::CellAddress(row, col);
}

void org::apache::poi::hssf::usermodel::HSSFSheet::setActiveCell(::org::apache::poi::ss::util::CellAddress* address)
{
    auto row = npc(address)->getRow();
    auto col = static_cast< int16_t >(npc(address)->getColumn());
    npc(_sheet)->setActiveCellRow(row);
    npc(_sheet)->setActiveCellCol(col);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFSheet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFSheet", 39);
    return c;
}

void org::apache::poi::hssf::usermodel::HSSFSheet::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(HSSFSheet::class_()));
        INITIAL_CAPACITY_ = ::org::apache::poi::util::Configurator::getIntValue(u"HSSFSheet.RowInitialCapacity"_j, 20);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFSheet::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFCell.java
#include <org/apache/poi/hssf/usermodel/HSSFCell.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/text/SimpleDateFormat.hpp>
#include <java/util/Date.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/common/usermodel/HyperlinkType.hpp>
#include <org/apache/poi/hssf/model/HSSFFormulaParser.hpp>
#include <org/apache/poi/hssf/model/InternalSheet.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/BlankRecord.hpp>
#include <org/apache/poi/hssf/record/BoolErrRecord.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/ExtendedFormatRecord.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/HyperlinkRecord.hpp>
#include <org/apache/poi/hssf/record/LabelSSTRecord.hpp>
#include <org/apache/poi/hssf/record/NumberRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/aggregates/FormulaRecordAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/RowRecordsAggregate.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCellStyle.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFComment.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDateUtil.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFHyperlink.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRow.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/FormulaType.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/ptg/ExpPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellStyle.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/Comment.hpp>
#include <org/apache/poi/ss/usermodel/Drawing.hpp>
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>
#include <org/apache/poi/ss/usermodel/Hyperlink.hpp>
#include <org/apache/poi/ss/usermodel/RichTextString.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/util/CellAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <org/apache/poi/ss/util/NumberToTextConverter.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

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

poi::hssf::usermodel::HSSFCell::HSSFCell(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFCell::HSSFCell(HSSFWorkbook* book, HSSFSheet* sheet, int32_t row, int16_t col) 
    : HSSFCell(*static_cast< ::default_init_tag* >(0))
{
    ctor(book,sheet,row,col);
}

poi::hssf::usermodel::HSSFCell::HSSFCell(HSSFWorkbook* book, HSSFSheet* sheet, int32_t row, int16_t col, ::poi::ss::usermodel::CellType* type) 
    : HSSFCell(*static_cast< ::default_init_tag* >(0))
{
    ctor(book,sheet,row,col,type);
}

poi::hssf::usermodel::HSSFCell::HSSFCell(HSSFWorkbook* book, HSSFSheet* sheet, ::poi::hssf::record::CellValueRecordInterface* cval) 
    : HSSFCell(*static_cast< ::default_init_tag* >(0))
{
    ctor(book,sheet,cval);
}

java::lang::String*& poi::hssf::usermodel::HSSFCell::FILE_FORMAT_NAME()
{
    clinit();
    return FILE_FORMAT_NAME_;
}
java::lang::String* poi::hssf::usermodel::HSSFCell::FILE_FORMAT_NAME_;

int32_t& poi::hssf::usermodel::HSSFCell::LAST_COLUMN_NUMBER()
{
    clinit();
    return LAST_COLUMN_NUMBER_;
}
int32_t poi::hssf::usermodel::HSSFCell::LAST_COLUMN_NUMBER_;

java::lang::String*& poi::hssf::usermodel::HSSFCell::LAST_COLUMN_NAME()
{
    clinit();
    return LAST_COLUMN_NAME_;
}
java::lang::String* poi::hssf::usermodel::HSSFCell::LAST_COLUMN_NAME_;

constexpr int16_t poi::hssf::usermodel::HSSFCell::ENCODING_UNCHANGED;

constexpr int16_t poi::hssf::usermodel::HSSFCell::ENCODING_COMPRESSED_UNICODE;

constexpr int16_t poi::hssf::usermodel::HSSFCell::ENCODING_UTF_16;

void poi::hssf::usermodel::HSSFCell::ctor(HSSFWorkbook* book, HSSFSheet* sheet, int32_t row, int16_t col)
{
    super::ctor();
    checkBounds(col);
    _stringValue = nullptr;
    _book = book;
    _sheet = sheet;
    auto xfindex = npc(npc(sheet)->getSheet())->getXFIndexForColAt(col);
    setCellType(::poi::ss::usermodel::CellType::BLANK, false, row, col, xfindex);
}

poi::ss::usermodel::Sheet* poi::hssf::usermodel::HSSFCell::getSheet()
{
    return _sheet;
}

poi::ss::usermodel::Row* poi::hssf::usermodel::HSSFCell::getRow()
{
    auto rowIndex = getRowIndex();
    return java_cast< HSSFRow* >(npc(_sheet)->getRow(rowIndex));
}

void poi::hssf::usermodel::HSSFCell::ctor(HSSFWorkbook* book, HSSFSheet* sheet, int32_t row, int16_t col, ::poi::ss::usermodel::CellType* type)
{
    super::ctor();
    checkBounds(col);
    _cellType = ::poi::ss::usermodel::CellType::_NONE;
    _stringValue = nullptr;
    _book = book;
    _sheet = sheet;
    auto xfindex = npc(npc(sheet)->getSheet())->getXFIndexForColAt(col);
    setCellType(type, false, row, col, xfindex);
}

void poi::hssf::usermodel::HSSFCell::ctor(HSSFWorkbook* book, HSSFSheet* sheet, ::poi::hssf::record::CellValueRecordInterface* cval)
{
    super::ctor();
    _record = cval;
    _cellType = determineType(cval);
    _stringValue = nullptr;
    _book = book;
    _sheet = sheet;
    {
        auto v = _cellType;
        if((v == ::poi::ss::usermodel::CellType::STRING)) {
            _stringValue = new HSSFRichTextString(npc(book)->getWorkbook(), java_cast< ::poi::hssf::record::LabelSSTRecord* >(cval));
            goto end_switch0;;
        }
        if((v == ::poi::ss::usermodel::CellType::BLANK)) {
            goto end_switch0;;
        }
        if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
            _stringValue = new HSSFRichTextString(npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(cval)))->getStringValue());
            goto end_switch0;;
        }
        if((((v != ::poi::ss::usermodel::CellType::STRING) && (v != ::poi::ss::usermodel::CellType::BLANK) && (v != ::poi::ss::usermodel::CellType::FORMULA)))) {
            goto end_switch0;;
        }
end_switch0:;
    }

}

poi::ss::usermodel::CellType* poi::hssf::usermodel::HSSFCell::determineType(::poi::hssf::record::CellValueRecordInterface* cval)
{
    clinit();
    if(dynamic_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(cval) != nullptr) {
        return ::poi::ss::usermodel::CellType::FORMULA;
    }
    auto record = java_cast< ::poi::hssf::record::Record* >(cval);
    {
        ::poi::hssf::record::BoolErrRecord* boolErrRecord;
        switch (npc(record)->getSid()) {
        case ::poi::hssf::record::NumberRecord::sid:
            return ::poi::ss::usermodel::CellType::NUMERIC;
        case ::poi::hssf::record::BlankRecord::sid:
            return ::poi::ss::usermodel::CellType::BLANK;
        case ::poi::hssf::record::LabelSSTRecord::sid:
            return ::poi::ss::usermodel::CellType::STRING;
        case ::poi::hssf::record::BoolErrRecord::sid:
            boolErrRecord = java_cast< ::poi::hssf::record::BoolErrRecord* >(record);
            return npc(boolErrRecord)->isBoolean() ? ::poi::ss::usermodel::CellType::BOOLEAN : ::poi::ss::usermodel::CellType::ERROR;
        }
    }

    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Bad cell value rec ("_j)->append(npc(npc(cval)->getClass())->getName())
        ->append(u")"_j)->toString());
}

poi::hssf::model::InternalWorkbook* poi::hssf::usermodel::HSSFCell::getBoundWorkbook()
{
    return npc(_book)->getWorkbook();
}

int32_t poi::hssf::usermodel::HSSFCell::getRowIndex()
{
    return npc(_record)->getRow();
}

void poi::hssf::usermodel::HSSFCell::updateCellNum(int16_t num)
{
    npc(_record)->setColumn(num);
}

int32_t poi::hssf::usermodel::HSSFCell::getColumnIndex()
{
    return npc(_record)->getColumn() & int32_t(65535);
}

poi::ss::util::CellAddress* poi::hssf::usermodel::HSSFCell::getAddress()
{
    return new ::poi::ss::util::CellAddress(static_cast< ::poi::ss::usermodel::Cell* >(this));
}

void poi::hssf::usermodel::HSSFCell::setCellType(int32_t cellType)
{
    setCellType(::poi::ss::usermodel::CellType::forInt(cellType));
}

void poi::hssf::usermodel::HSSFCell::setCellType(::poi::ss::usermodel::CellType* cellType)
{
    notifyFormulaChanging();
    if(isPartOfArrayFormulaGroup()) {
        notifyArrayFormulaChanging();
    }
    auto row = npc(_record)->getRow();
    auto col = npc(_record)->getColumn();
    auto styleIndex = npc(_record)->getXFIndex();
    setCellType(cellType, true, row, col, styleIndex);
}

void poi::hssf::usermodel::HSSFCell::setCellType(::poi::ss::usermodel::CellType* cellType, bool setValue, int32_t row, int16_t col, int16_t styleIndex)
{
    {
        ::poi::hssf::record::aggregates::FormulaRecordAggregate* frec;
        ::poi::hssf::record::NumberRecord* nrec;
        ::poi::hssf::record::LabelSSTRecord* lrec;
        ::poi::hssf::record::BlankRecord* brec;
        ::poi::hssf::record::BoolErrRecord* boolRec;
        ::poi::hssf::record::BoolErrRecord* errRec;
        {
            auto v = cellType;
            if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
                ::poi::hssf::record::aggregates::FormulaRecordAggregate* frec;
                if(cellType != _cellType) {
                    frec = npc(npc(npc(_sheet)->getSheet())->getRowsAggregate())->createFormula(row, col);
                } else {
                    frec = java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record);
                    npc(frec)->setRow(row);
                    npc(frec)->setColumn(col);
                }
                if(setValue) {
                    npc(npc(frec)->getFormulaRecord())->setValue(getNumericCellValue());
                }
                npc(frec)->setXFIndex(styleIndex);
                _record = frec;
                goto end_switch1;;
            }
            if((v == ::poi::ss::usermodel::CellType::NUMERIC)) {
                ::poi::hssf::record::NumberRecord* nrec = nullptr;
                if(cellType != _cellType) {
                    nrec = new ::poi::hssf::record::NumberRecord();
                } else {
                    nrec = java_cast< ::poi::hssf::record::NumberRecord* >(_record);
                }
                npc(nrec)->setColumn(col);
                if(setValue) {
                    npc(nrec)->setValue(getNumericCellValue());
                }
                npc(nrec)->setXFIndex(styleIndex);
                npc(nrec)->setRow(row);
                _record = nrec;
                goto end_switch1;;
            }
            if((v == ::poi::ss::usermodel::CellType::STRING)) {
                ::poi::hssf::record::LabelSSTRecord* lrec;
                if(cellType == _cellType) {
                    lrec = java_cast< ::poi::hssf::record::LabelSSTRecord* >(_record);
                } else {
                    lrec = new ::poi::hssf::record::LabelSSTRecord();
                    npc(lrec)->setColumn(col);
                    npc(lrec)->setRow(row);
                    npc(lrec)->setXFIndex(styleIndex);
                }
                if(setValue) {
                    auto str = convertCellValueToString();
                    if(str == nullptr) {
                        setCellType(::poi::ss::usermodel::CellType::BLANK, false, row, col, styleIndex);
                        return;
                    } else {
                        auto sstIndex = npc(npc(_book)->getWorkbook())->addSSTString(new ::poi::hssf::record::common::UnicodeString(str));
                        npc(lrec)->setSSTIndex(sstIndex);
                        auto us = npc(npc(_book)->getWorkbook())->getSSTString(sstIndex);
                        _stringValue = new HSSFRichTextString();
                        npc(_stringValue)->setUnicodeString(us);
                    }
                }
                _record = lrec;
                goto end_switch1;;
            }
            if((v == ::poi::ss::usermodel::CellType::BLANK)) {
                ::poi::hssf::record::BlankRecord* brec = nullptr;
                if(cellType != _cellType) {
                    brec = new ::poi::hssf::record::BlankRecord();
                } else {
                    brec = java_cast< ::poi::hssf::record::BlankRecord* >(_record);
                }
                npc(brec)->setColumn(col);
                npc(brec)->setXFIndex(styleIndex);
                npc(brec)->setRow(row);
                _record = brec;
                goto end_switch1;;
            }
            if((v == ::poi::ss::usermodel::CellType::BOOLEAN)) {
                ::poi::hssf::record::BoolErrRecord* boolRec = nullptr;
                if(cellType != _cellType) {
                    boolRec = new ::poi::hssf::record::BoolErrRecord();
                } else {
                    boolRec = java_cast< ::poi::hssf::record::BoolErrRecord* >(_record);
                }
                npc(boolRec)->setColumn(col);
                if(setValue) {
                    npc(boolRec)->setValue(convertCellValueToBoolean());
                }
                npc(boolRec)->setXFIndex(styleIndex);
                npc(boolRec)->setRow(row);
                _record = boolRec;
                goto end_switch1;;
            }
            if((v == ::poi::ss::usermodel::CellType::ERROR)) {
                ::poi::hssf::record::BoolErrRecord* errRec = nullptr;
                if(cellType != _cellType) {
                    errRec = new ::poi::hssf::record::BoolErrRecord();
                } else {
                    errRec = java_cast< ::poi::hssf::record::BoolErrRecord* >(_record);
                }
                npc(errRec)->setColumn(col);
                if(setValue) {
                    npc(errRec)->setValue(npc(::poi::ss::usermodel::FormulaError::VALUE)->getCode());
                }
                npc(errRec)->setXFIndex(styleIndex);
                npc(errRec)->setRow(row);
                _record = errRec;
                goto end_switch1;;
            }
            if((((v != ::poi::ss::usermodel::CellType::FORMULA) && (v != ::poi::ss::usermodel::CellType::NUMERIC) && (v != ::poi::ss::usermodel::CellType::STRING) && (v != ::poi::ss::usermodel::CellType::BLANK) && (v != ::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::poi::ss::usermodel::CellType::ERROR)))) {
                throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Invalid cell type: "_j)->append(static_cast< ::java::lang::Object* >(cellType))->toString());
            }
end_switch1:;
        }
    }

    if(cellType != _cellType && _cellType != ::poi::ss::usermodel::CellType::_NONE) {
        npc(npc(_sheet)->getSheet())->replaceValueRecord(_record);
    }
    _cellType = cellType;
}

int32_t poi::hssf::usermodel::HSSFCell::getCellType()
{
    return npc(getCellTypeEnum())->getCode();
}

poi::ss::usermodel::CellType* poi::hssf::usermodel::HSSFCell::getCellTypeEnum()
{
    return _cellType;
}

void poi::hssf::usermodel::HSSFCell::setCellValue(double value)
{
    if(::java::lang::Double::isInfinite(value)) {
        setCellErrorValue(npc(::poi::ss::usermodel::FormulaError::DIV0)->getCode());
    } else if(::java::lang::Double::isNaN(value)) {
        setCellErrorValue(npc(::poi::ss::usermodel::FormulaError::NUM)->getCode());
    } else {
        auto row = npc(_record)->getRow();
        auto col = npc(_record)->getColumn();
        auto styleIndex = npc(_record)->getXFIndex();
        {
            auto v = _cellType;
            if((v != ::poi::ss::usermodel::CellType::NUMERIC) && 
                (v != ::poi::ss::usermodel::CellType::FORMULA)) {
                setCellType(::poi::ss::usermodel::CellType::NUMERIC, false, row, col, styleIndex);
            }
            if((v == ::poi::ss::usermodel::CellType::NUMERIC)) {
                npc((java_cast< ::poi::hssf::record::NumberRecord* >(_record)))->setValue(value);
                goto end_switch2;;
            }
            if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
                npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record)))->setCachedDoubleResult(value);
                goto end_switch2;;
            }
end_switch2:;
        }

    }
}

void poi::hssf::usermodel::HSSFCell::setCellValue(::java::util::Date* value)
{
    setCellValue(HSSFDateUtil::getExcelDate(value, npc(npc(_book)->getWorkbook())->isUsing1904DateWindowing()));
}

void poi::hssf::usermodel::HSSFCell::setCellValue(::java::util::Calendar* value)
{
    setCellValue(HSSFDateUtil::getExcelDate(value, npc(npc(_book)->getWorkbook())->isUsing1904DateWindowing()));
}

void poi::hssf::usermodel::HSSFCell::setCellValue(::java::lang::String* value)
{
    auto str = value == nullptr ? static_cast< HSSFRichTextString* >(nullptr) : new HSSFRichTextString(value);
    setCellValue(static_cast< ::poi::ss::usermodel::RichTextString* >(str));
}

void poi::hssf::usermodel::HSSFCell::setCellValue(::poi::ss::usermodel::RichTextString* value)
{
    auto row = npc(_record)->getRow();
    auto col = npc(_record)->getColumn();
    auto styleIndex = npc(_record)->getXFIndex();
    if(value == nullptr) {
        notifyFormulaChanging();
        setCellType(::poi::ss::usermodel::CellType::BLANK, false, row, col, styleIndex);
        return;
    }
    if(npc(value)->length() > npc(::poi::ss::SpreadsheetVersion::EXCEL97)->getMaxTextLength()) {
        throw new ::java::lang::IllegalArgumentException(u"The maximum length of cell contents (text) is 32,767 characters"_j);
    }
    if(_cellType == ::poi::ss::usermodel::CellType::FORMULA) {
        auto fr = java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record);
        npc(fr)->setCachedStringResult(npc(value)->getString());
        _stringValue = new HSSFRichTextString(npc(value)->getString());
        return;
    }
    if(_cellType != ::poi::ss::usermodel::CellType::STRING) {
        setCellType(::poi::ss::usermodel::CellType::STRING, false, row, col, styleIndex);
    }
    auto index = int32_t(0);
    auto hvalue = java_cast< HSSFRichTextString* >(value);
    auto str = npc(hvalue)->getUnicodeString();
    index = npc(npc(_book)->getWorkbook())->addSSTString(str);
    npc((java_cast< ::poi::hssf::record::LabelSSTRecord* >(_record)))->setSSTIndex(index);
    _stringValue = hvalue;
    npc(_stringValue)->setWorkbookReferences(npc(_book)->getWorkbook(), (java_cast< ::poi::hssf::record::LabelSSTRecord* >(_record)));
    npc(_stringValue)->setUnicodeString(npc(npc(_book)->getWorkbook())->getSSTString(index));
}

void poi::hssf::usermodel::HSSFCell::setCellFormula(::java::lang::String* formula)
{
    if(isPartOfArrayFormulaGroup()) {
        notifyArrayFormulaChanging();
    }
    auto row = npc(_record)->getRow();
    auto col = npc(_record)->getColumn();
    auto styleIndex = npc(_record)->getXFIndex();
    if(formula == nullptr) {
        notifyFormulaChanging();
        setCellType(::poi::ss::usermodel::CellType::BLANK, false, row, col, styleIndex);
        return;
    }
    auto sheetIndex = npc(_book)->getSheetIndex(static_cast< ::poi::ss::usermodel::Sheet* >(_sheet));
    auto ptgs = ::poi::hssf::model::HSSFFormulaParser::parse(formula, _book, ::poi::ss::formula::FormulaType::CELL, sheetIndex);
    setCellType(::poi::ss::usermodel::CellType::FORMULA, false, row, col, styleIndex);
    auto agg = java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record);
    auto frec = npc(agg)->getFormulaRecord();
    npc(frec)->setOptions(static_cast< int16_t >(int32_t(2)));
    npc(frec)->setValue(0);
    if(npc(agg)->getXFIndex() == static_cast< int16_t >(int32_t(0))) {
        npc(agg)->setXFIndex(static_cast< int16_t >(int32_t(15)));
    }
    npc(agg)->setParsedExpression(ptgs);
}

void poi::hssf::usermodel::HSSFCell::notifyFormulaChanging()
{
    if(dynamic_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record) != nullptr) {
        npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record)))->notifyFormulaChanging();
    }
}

java::lang::String* poi::hssf::usermodel::HSSFCell::getCellFormula()
{
    if(!(dynamic_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record) != nullptr)) {
        throw typeMismatch(::poi::ss::usermodel::CellType::FORMULA, _cellType, true);
    }
    return ::poi::hssf::model::HSSFFormulaParser::toFormulaString(_book, npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record)))->getFormulaTokens());
}

java::lang::RuntimeException* poi::hssf::usermodel::HSSFCell::typeMismatch(::poi::ss::usermodel::CellType* expectedTypeCode, ::poi::ss::usermodel::CellType* actualTypeCode, bool isFormulaCell)
{
    clinit();
    auto msg = ::java::lang::StringBuilder().append(u"Cannot get a "_j)->append(static_cast< ::java::lang::Object* >(expectedTypeCode))
        ->append(u" value from a "_j)
        ->append(static_cast< ::java::lang::Object* >(actualTypeCode))
        ->append(u" "_j)
        ->append((isFormulaCell ? u"formula "_j : u""_j))
        ->append(u"cell"_j)->toString();
    return new ::java::lang::IllegalStateException(msg);
}

void poi::hssf::usermodel::HSSFCell::checkFormulaCachedValueType(::poi::ss::usermodel::CellType* expectedTypeCode, ::poi::hssf::record::FormulaRecord* fr)
{
    clinit();
    auto cachedValueType = ::poi::ss::usermodel::CellType::forInt(npc(fr)->getCachedResultType());
    if(cachedValueType != expectedTypeCode) {
        throw typeMismatch(expectedTypeCode, cachedValueType, true);
    }
}

double poi::hssf::usermodel::HSSFCell::getNumericCellValue()
{
    {
        auto v = _cellType;
        if((v == ::poi::ss::usermodel::CellType::BLANK)) {
            return 0.0;
        }
        if((v == ::poi::ss::usermodel::CellType::NUMERIC)) {
            return npc((java_cast< ::poi::hssf::record::NumberRecord* >(_record)))->getValue();
        }
        if((((v != ::poi::ss::usermodel::CellType::BLANK) && (v != ::poi::ss::usermodel::CellType::NUMERIC)))) {
            throw typeMismatch(::poi::ss::usermodel::CellType::NUMERIC, _cellType, false);
        }
        if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
            goto end_switch3;;
        }
end_switch3:;
    }

    auto fr = npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record)))->getFormulaRecord();
    checkFormulaCachedValueType(::poi::ss::usermodel::CellType::NUMERIC, fr);
    return npc(fr)->getValue();
}

java::util::Date* poi::hssf::usermodel::HSSFCell::getDateCellValue()
{
    if(_cellType == ::poi::ss::usermodel::CellType::BLANK) {
        return nullptr;
    }
    auto value = getNumericCellValue();
    if(npc(npc(_book)->getWorkbook())->isUsing1904DateWindowing()) {
        return HSSFDateUtil::getJavaDate(value, true);
    }
    return HSSFDateUtil::getJavaDate(value, false);
}

java::lang::String* poi::hssf::usermodel::HSSFCell::getStringCellValue()
{
    auto str = getRichStringCellValue();
    return npc(str)->getString();
}

poi::hssf::usermodel::HSSFRichTextString* poi::hssf::usermodel::HSSFCell::getRichStringCellValue()
{
    {
        auto v = _cellType;
        if((v == ::poi::ss::usermodel::CellType::BLANK)) {
            return new HSSFRichTextString(u""_j);
        }
        if((v == ::poi::ss::usermodel::CellType::STRING)) {
            return _stringValue;
        }
        if((((v != ::poi::ss::usermodel::CellType::BLANK) && (v != ::poi::ss::usermodel::CellType::STRING)))) {
            throw typeMismatch(::poi::ss::usermodel::CellType::STRING, _cellType, false);
        }
        if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
            goto end_switch4;;
        }
end_switch4:;
    }

    auto fra = (java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record));
    checkFormulaCachedValueType(::poi::ss::usermodel::CellType::STRING, npc(fra)->getFormulaRecord());
    auto strVal = npc(fra)->getStringValue();
    return new HSSFRichTextString(strVal == nullptr ? u""_j : strVal);
}

void poi::hssf::usermodel::HSSFCell::setCellValue(bool value)
{
    auto row = npc(_record)->getRow();
    auto col = npc(_record)->getColumn();
    auto styleIndex = npc(_record)->getXFIndex();
    {
        auto v = _cellType;
        if((v != ::poi::ss::usermodel::CellType::BOOLEAN) && 
            (v != ::poi::ss::usermodel::CellType::FORMULA)) {
            setCellType(::poi::ss::usermodel::CellType::BOOLEAN, false, row, col, styleIndex);
        }
        if((v == ::poi::ss::usermodel::CellType::BOOLEAN)) {
            npc((java_cast< ::poi::hssf::record::BoolErrRecord* >(_record)))->setValue(value);
            goto end_switch5;;
        }
        if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
            npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record)))->setCachedBooleanResult(value);
            goto end_switch5;;
        }
end_switch5:;
    }

}

void poi::hssf::usermodel::HSSFCell::setCellErrorValue(int8_t errorCode)
{
    auto error = ::poi::ss::usermodel::FormulaError::forInt(errorCode);
    setCellErrorValue(error);
}

void poi::hssf::usermodel::HSSFCell::setCellErrorValue(::poi::ss::usermodel::FormulaError* error)
{
    auto row = npc(_record)->getRow();
    auto col = npc(_record)->getColumn();
    auto styleIndex = npc(_record)->getXFIndex();
    {
        auto v = _cellType;
        if((v != ::poi::ss::usermodel::CellType::ERROR) && 
            (v != ::poi::ss::usermodel::CellType::FORMULA)) {
            setCellType(::poi::ss::usermodel::CellType::ERROR, false, row, col, styleIndex);
        }
        if((v == ::poi::ss::usermodel::CellType::ERROR)) {
            npc((java_cast< ::poi::hssf::record::BoolErrRecord* >(_record)))->setValue(error);
            goto end_switch6;;
        }
        if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
            npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record)))->setCachedErrorResult(static_cast< int32_t >(npc(error)->getCode()));
            goto end_switch6;;
        }
end_switch6:;
    }

}

bool poi::hssf::usermodel::HSSFCell::convertCellValueToBoolean()
{
    {
        int32_t sstIndex;
        ::java::lang::String* text;
        ::poi::hssf::record::FormulaRecord* fr;
        {
            auto v = _cellType;
            if((v == ::poi::ss::usermodel::CellType::BOOLEAN)) {
                return npc((java_cast< ::poi::hssf::record::BoolErrRecord* >(_record)))->getBooleanValue();
            }
            if((v == ::poi::ss::usermodel::CellType::STRING)) {
                auto sstIndex = npc((java_cast< ::poi::hssf::record::LabelSSTRecord* >(_record)))->getSSTIndex();
                auto text = npc(npc(npc(_book)->getWorkbook())->getSSTString(sstIndex))->getString();
                return npc(::java::lang::Boolean::valueOf(text))->booleanValue();
            }
            if((v == ::poi::ss::usermodel::CellType::NUMERIC)) {
                return npc((java_cast< ::poi::hssf::record::NumberRecord* >(_record)))->getValue() != 0;
            }
            if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
                auto fr = npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record)))->getFormulaRecord();
                checkFormulaCachedValueType(::poi::ss::usermodel::CellType::BOOLEAN, fr);
                return npc(fr)->getCachedBooleanValue();
            }
            if((v == ::poi::ss::usermodel::CellType::ERROR) || (v == ::poi::ss::usermodel::CellType::BLANK)) {
                return false;
            }
end_switch7:;
        }
    }

    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected cell type ("_j)->append(static_cast< ::java::lang::Object* >(_cellType))
        ->append(u")"_j)->toString());
}

java::lang::String* poi::hssf::usermodel::HSSFCell::convertCellValueToString()
{
    {
        int32_t sstIndex;
        {
            auto v = _cellType;
            if((v == ::poi::ss::usermodel::CellType::BLANK)) {
                return u""_j;
            }
            if((v == ::poi::ss::usermodel::CellType::BOOLEAN)) {
                return npc((java_cast< ::poi::hssf::record::BoolErrRecord* >(_record)))->getBooleanValue() ? u"TRUE"_j : u"FALSE"_j;
            }
            if((v == ::poi::ss::usermodel::CellType::STRING)) {
                auto sstIndex = npc((java_cast< ::poi::hssf::record::LabelSSTRecord* >(_record)))->getSSTIndex();
                return npc(npc(npc(_book)->getWorkbook())->getSSTString(sstIndex))->getString();
            }
            if((v == ::poi::ss::usermodel::CellType::NUMERIC)) {
                return ::poi::ss::util::NumberToTextConverter::toText(npc((java_cast< ::poi::hssf::record::NumberRecord* >(_record)))->getValue());
            }
            if((v == ::poi::ss::usermodel::CellType::ERROR)) {
                return npc(::poi::ss::usermodel::FormulaError::forInt(npc((java_cast< ::poi::hssf::record::BoolErrRecord* >(_record)))->getErrorValue()))->getString();
            }
            if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
                goto end_switch8;;
            }
            if((((v != ::poi::ss::usermodel::CellType::BLANK) && (v != ::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::poi::ss::usermodel::CellType::STRING) && (v != ::poi::ss::usermodel::CellType::NUMERIC) && (v != ::poi::ss::usermodel::CellType::ERROR) && (v != ::poi::ss::usermodel::CellType::FORMULA)))) {
                throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected cell type ("_j)->append(static_cast< ::java::lang::Object* >(_cellType))
                    ->append(u")"_j)->toString());
            }
end_switch8:;
        }
    }

    auto fra = (java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record));
    auto fr = npc(fra)->getFormulaRecord();
    {
        auto v = ::poi::ss::usermodel::CellType::forInt(npc(fr)->getCachedResultType());
        if((v == ::poi::ss::usermodel::CellType::BOOLEAN)) {
            return npc(fr)->getCachedBooleanValue() ? u"TRUE"_j : u"FALSE"_j;
        }
        if((v == ::poi::ss::usermodel::CellType::STRING)) {
            return npc(fra)->getStringValue();
        }
        if((v == ::poi::ss::usermodel::CellType::NUMERIC)) {
            return ::poi::ss::util::NumberToTextConverter::toText(npc(fr)->getValue());
        }
        if((v == ::poi::ss::usermodel::CellType::ERROR)) {
            return npc(::poi::ss::usermodel::FormulaError::forInt(npc(fr)->getCachedErrorValue()))->getString();
        }
        if((((v != ::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::poi::ss::usermodel::CellType::STRING) && (v != ::poi::ss::usermodel::CellType::NUMERIC) && (v != ::poi::ss::usermodel::CellType::ERROR)))) {
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected formula result type ("_j)->append(static_cast< ::java::lang::Object* >(_cellType))
                ->append(u")"_j)->toString());
        }
end_switch9:;
    }

}

bool poi::hssf::usermodel::HSSFCell::getBooleanCellValue()
{
    {
        auto v = _cellType;
        if((v == ::poi::ss::usermodel::CellType::BLANK)) {
            return false;
        }
        if((v == ::poi::ss::usermodel::CellType::BOOLEAN)) {
            return npc((java_cast< ::poi::hssf::record::BoolErrRecord* >(_record)))->getBooleanValue();
        }
        if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
            goto end_switch10;;
        }
        if((((v != ::poi::ss::usermodel::CellType::BLANK) && (v != ::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::poi::ss::usermodel::CellType::FORMULA)))) {
            throw typeMismatch(::poi::ss::usermodel::CellType::BOOLEAN, _cellType, false);
        }
end_switch10:;
    }

    auto fr = npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record)))->getFormulaRecord();
    checkFormulaCachedValueType(::poi::ss::usermodel::CellType::BOOLEAN, fr);
    return npc(fr)->getCachedBooleanValue();
}

int8_t poi::hssf::usermodel::HSSFCell::getErrorCellValue()
{
    {
        ::poi::hssf::record::FormulaRecord* fr;
        {
            auto v = _cellType;
            if((v == ::poi::ss::usermodel::CellType::ERROR)) {
                return npc((java_cast< ::poi::hssf::record::BoolErrRecord* >(_record)))->getErrorValue();
            }
            if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
                auto fr = npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record)))->getFormulaRecord();
                checkFormulaCachedValueType(::poi::ss::usermodel::CellType::ERROR, fr);
                return static_cast< int8_t >(npc(fr)->getCachedErrorValue());
            }
            if((((v != ::poi::ss::usermodel::CellType::ERROR) && (v != ::poi::ss::usermodel::CellType::FORMULA)))) {
                throw typeMismatch(::poi::ss::usermodel::CellType::ERROR, _cellType, false);
            }
end_switch11:;
        }
    }

}

void poi::hssf::usermodel::HSSFCell::setCellStyle(::poi::ss::usermodel::CellStyle* style)
{
    setCellStyle(java_cast< HSSFCellStyle* >(style));
}

void poi::hssf::usermodel::HSSFCell::setCellStyle(HSSFCellStyle* style)
{
    if(style == nullptr) {
        npc(_record)->setXFIndex(static_cast< int16_t >(int32_t(15)));
        return;
    }
    npc(style)->verifyBelongsToWorkbook(_book);
    int16_t styleIndex;
    if(npc(style)->getUserStyleName() != nullptr) {
        styleIndex = applyUserCellStyle(style);
    } else {
        styleIndex = npc(style)->getIndex();
    }
    npc(_record)->setXFIndex(styleIndex);
}

poi::hssf::usermodel::HSSFCellStyle* poi::hssf::usermodel::HSSFCell::getCellStyle()
{
    auto styleIndex = npc(_record)->getXFIndex();
    auto xf = npc(npc(_book)->getWorkbook())->getExFormatAt(styleIndex);
    return new HSSFCellStyle(styleIndex, xf, _book);
}

poi::hssf::record::CellValueRecordInterface* poi::hssf::usermodel::HSSFCell::getCellValueRecord()
{
    return _record;
}

void poi::hssf::usermodel::HSSFCell::checkBounds(int32_t cellIndex)
{
    clinit();
    if(cellIndex < 0 || cellIndex > LAST_COLUMN_NUMBER_) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid column index ("_j)->append(cellIndex)
            ->append(u").  Allowable column range for "_j)
            ->append(FILE_FORMAT_NAME_)
            ->append(u" is (0.."_j)
            ->append(LAST_COLUMN_NUMBER_)
            ->append(u") or ('A'..'"_j)
            ->append(LAST_COLUMN_NAME_)
            ->append(u"')"_j)->toString());
    }
}

void poi::hssf::usermodel::HSSFCell::setAsActiveCell()
{
    auto row = npc(_record)->getRow();
    auto col = npc(_record)->getColumn();
    npc(npc(_sheet)->getSheet())->setActiveCellRow(row);
    npc(npc(_sheet)->getSheet())->setActiveCellCol(col);
}

java::lang::String* poi::hssf::usermodel::HSSFCell::toString()
{
    {
        auto v = getCellTypeEnum();
        if((v == ::poi::ss::usermodel::CellType::BLANK)) {
            return u""_j;
        }
        if((v == ::poi::ss::usermodel::CellType::BOOLEAN)) {
            return getBooleanCellValue() ? u"TRUE"_j : u"FALSE"_j;
        }
        if((v == ::poi::ss::usermodel::CellType::ERROR)) {
            return ::poi::ss::formula::eval::ErrorEval::getText(npc((java_cast< ::poi::hssf::record::BoolErrRecord* >(_record)))->getErrorValue());
        }
        if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
            return getCellFormula();
        }
        if((v == ::poi::ss::usermodel::CellType::NUMERIC)) {
            if(HSSFDateUtil::isCellDateFormatted(this)) {
                auto sdf = new ::java::text::SimpleDateFormat(u"dd-MMM-yyyy"_j, ::poi::util::LocaleUtil::getUserLocale());
                npc(sdf)->setTimeZone(::poi::util::LocaleUtil::getUserTimeZone());
                return npc(sdf)->format(getDateCellValue());
            }
            return ::java::lang::String::valueOf(getNumericCellValue());
        }
        if((v == ::poi::ss::usermodel::CellType::STRING)) {
            return getStringCellValue();
        }
        if((((v != ::poi::ss::usermodel::CellType::BLANK) && (v != ::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::poi::ss::usermodel::CellType::ERROR) && (v != ::poi::ss::usermodel::CellType::FORMULA) && (v != ::poi::ss::usermodel::CellType::NUMERIC) && (v != ::poi::ss::usermodel::CellType::STRING)))) {
            return ::java::lang::StringBuilder().append(u"Unknown Cell Type: "_j)->append(static_cast< ::java::lang::Object* >(getCellTypeEnum()))->toString();
        }
end_switch12:;
    }

}

void poi::hssf::usermodel::HSSFCell::setCellComment(::poi::ss::usermodel::Comment* comment)
{
    if(comment == nullptr) {
        removeCellComment();
        return;
    }
    npc(comment)->setRow(npc(_record)->getRow());
    npc(comment)->setColumn(npc(_record)->getColumn());
    _comment = java_cast< HSSFComment* >(comment);
}

poi::hssf::usermodel::HSSFComment* poi::hssf::usermodel::HSSFCell::getCellComment()
{
    if(_comment == nullptr) {
        _comment = npc(_sheet)->findCellComment(npc(_record)->getRow(), npc(_record)->getColumn());
    }
    return _comment;
}

void poi::hssf::usermodel::HSSFCell::removeCellComment()
{
    auto comment = npc(_sheet)->findCellComment(npc(_record)->getRow(), npc(_record)->getColumn());
    _comment = nullptr;
    if(nullptr == comment) {
        return;
    }
    npc(java_cast< HSSFPatriarch* >(npc(_sheet)->getDrawingPatriarch()))->removeShape(static_cast< HSSFShape* >(comment));
}

poi::hssf::usermodel::HSSFHyperlink* poi::hssf::usermodel::HSSFCell::getHyperlink()
{
    return npc(_sheet)->getHyperlink(npc(_record)->getRow(), static_cast< int32_t >(npc(_record)->getColumn()));
}

void poi::hssf::usermodel::HSSFCell::setHyperlink(::poi::ss::usermodel::Hyperlink* hyperlink)
{
    if(hyperlink == nullptr) {
        removeHyperlink();
        return;
    }
    auto link = java_cast< HSSFHyperlink* >(hyperlink);
    npc(link)->setFirstRow(npc(_record)->getRow());
    npc(link)->setLastRow(npc(_record)->getRow());
    npc(link)->setFirstColumn(static_cast< int32_t >(npc(_record)->getColumn()));
    npc(link)->setLastColumn(static_cast< int32_t >(npc(_record)->getColumn()));
    {
        auto v = npc(link)->getTypeEnum();
        if((v == ::poi::common::usermodel::HyperlinkType::EMAIL) || (v == ::poi::common::usermodel::HyperlinkType::URL)) {
            npc(link)->setLabel(u"url"_j);
            goto end_switch13;;
        }
        if((v == ::poi::common::usermodel::HyperlinkType::FILE)) {
            npc(link)->setLabel(u"file"_j);
            goto end_switch13;;
        }
        if((v == ::poi::common::usermodel::HyperlinkType::DOCUMENT)) {
            npc(link)->setLabel(u"place"_j);
            goto end_switch13;;
        }
        if((((v != ::poi::common::usermodel::HyperlinkType::EMAIL) && (v != ::poi::common::usermodel::HyperlinkType::URL) && (v != ::poi::common::usermodel::HyperlinkType::FILE) && (v != ::poi::common::usermodel::HyperlinkType::DOCUMENT)))) {
            goto end_switch13;;
        }
end_switch13:;
    }

    auto records = npc(npc(_sheet)->getSheet())->getRecords();
    auto eofLoc = npc(records)->size() - int32_t(1);
    npc(records)->add(eofLoc, npc(link)->record);
}

void poi::hssf::usermodel::HSSFCell::removeHyperlink()
{
    for (auto *it = npc(npc(npc(_sheet)->getSheet())->getRecords())->iterator(); npc(it)->hasNext(); ) {
        auto rec = java_cast< ::poi::hssf::record::RecordBase* >(npc(it)->next());
        if(dynamic_cast< ::poi::hssf::record::HyperlinkRecord* >(rec) != nullptr) {
            auto link = java_cast< ::poi::hssf::record::HyperlinkRecord* >(rec);
            if(npc(link)->getFirstColumn() == npc(_record)->getColumn() && npc(link)->getFirstRow() == npc(_record)->getRow()) {
                npc(it)->remove();
                return;
            }
        }
    }
}

int32_t poi::hssf::usermodel::HSSFCell::getCachedFormulaResultType()
{
    return npc(getCachedFormulaResultTypeEnum())->getCode();
}

poi::ss::usermodel::CellType* poi::hssf::usermodel::HSSFCell::getCachedFormulaResultTypeEnum()
{
    if(_cellType != ::poi::ss::usermodel::CellType::FORMULA) {
        throw new ::java::lang::IllegalStateException(u"Only formula cells have cached results"_j);
    }
    auto code = npc(npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record)))->getFormulaRecord())->getCachedResultType();
    return ::poi::ss::usermodel::CellType::forInt(code);
}

void poi::hssf::usermodel::HSSFCell::setCellArrayFormula(::poi::ss::util::CellRangeAddress* range)
{
    auto row = npc(_record)->getRow();
    auto col = npc(_record)->getColumn();
    auto styleIndex = npc(_record)->getXFIndex();
    setCellType(::poi::ss::usermodel::CellType::FORMULA, false, row, col, styleIndex);
    auto ptgsForCell = (new ::poi::ss::formula::ptg::PtgArray({static_cast< ::poi::ss::formula::ptg::Ptg* >(new ::poi::ss::formula::ptg::ExpPtg(npc(range)->getFirstRow(), npc(range)->getFirstColumn()))}));
    auto agg = java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record);
    npc(agg)->setParsedExpression(ptgsForCell);
}

poi::ss::util::CellRangeAddress* poi::hssf::usermodel::HSSFCell::getArrayFormulaRange()
{
    if(_cellType != ::poi::ss::usermodel::CellType::FORMULA) {
        auto ref = (new ::poi::ss::util::CellReference(static_cast< ::poi::ss::usermodel::Cell* >(this)))->formatAsString();
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Cell "_j)->append(ref)
            ->append(u" is not part of an array formula."_j)->toString());
    }
    return npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record)))->getArrayFormulaRange();
}

bool poi::hssf::usermodel::HSSFCell::isPartOfArrayFormulaGroup()
{
    if(_cellType != ::poi::ss::usermodel::CellType::FORMULA) {
        return false;
    }
    return npc((java_cast< ::poi::hssf::record::aggregates::FormulaRecordAggregate* >(_record)))->isPartOfArrayFormula();
}

void poi::hssf::usermodel::HSSFCell::notifyArrayFormulaChanging(::java::lang::String* msg)
{
    auto cra = getArrayFormulaRange();
    if(npc(cra)->getNumberOfCells() > 1) {
        throw new ::java::lang::IllegalStateException(msg);
    }
    npc(java_cast< HSSFSheet* >(npc(java_cast< HSSFRow* >(getRow()))->getSheet()))->removeArrayFormula(static_cast< ::poi::ss::usermodel::Cell* >(this));
}

void poi::hssf::usermodel::HSSFCell::notifyArrayFormulaChanging()
{
    auto ref = new ::poi::ss::util::CellReference(static_cast< ::poi::ss::usermodel::Cell* >(this));
    auto msg = ::java::lang::StringBuilder().append(u"Cell "_j)->append(npc(ref)->formatAsString())
        ->append(u" is part of a multi-cell array formula. "_j)
        ->append(u"You cannot change part of an array."_j)->toString();
    notifyArrayFormulaChanging(msg);
}

int16_t poi::hssf::usermodel::HSSFCell::applyUserCellStyle(HSSFCellStyle* style)
{
    if(npc(style)->getUserStyleName() == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"Expected user-defined style"_j);
    }
    auto iwb = npc(_book)->getWorkbook();
    int16_t userXf = -int32_t(1);
    auto numfmt = npc(iwb)->getNumExFormats();
    for (int16_t i = int32_t(0); i < numfmt; i++) {
        auto xf = npc(iwb)->getExFormatAt(i);
        if(npc(xf)->getXFType() == ::poi::hssf::record::ExtendedFormatRecord::XF_CELL && npc(xf)->getParentIndex() == npc(style)->getIndex()) {
            userXf = i;
            break;
        }
    }
    int16_t styleIndex;
    if(userXf == -int32_t(1)) {
        auto xfr = npc(iwb)->createCellXF();
        npc(xfr)->cloneStyleFrom(npc(iwb)->getExFormatAt(npc(style)->getIndex()));
        npc(xfr)->setIndentionOptions(static_cast< int16_t >(int32_t(0)));
        npc(xfr)->setXFType(::poi::hssf::record::ExtendedFormatRecord::XF_CELL);
        npc(xfr)->setParentIndex(npc(style)->getIndex());
        styleIndex = static_cast< int16_t >(numfmt);
    } else {
        styleIndex = userXf;
    }
    return styleIndex;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFCell::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFCell", 38);
    return c;
}

void poi::hssf::usermodel::HSSFCell::clinit()
{
struct string_init_ {
    string_init_() {
    FILE_FORMAT_NAME_ = u"BIFF8"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LAST_COLUMN_NUMBER_ = npc(::poi::ss::SpreadsheetVersion::EXCEL97)->getLastColumnIndex();
        LAST_COLUMN_NAME_ = npc(::poi::ss::SpreadsheetVersion::EXCEL97)->getLastColumnName();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::usermodel::HSSFCell::getClass0()
{
    return class_();
}


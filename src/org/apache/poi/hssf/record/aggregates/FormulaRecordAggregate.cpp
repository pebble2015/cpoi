// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/FormulaRecordAggregate.java
#include <org/apache/poi/hssf/record/aggregates/FormulaRecordAggregate.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/ArrayRecord.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/SharedFormulaRecord.hpp>
#include <org/apache/poi/hssf/record/SharedValueRecordBase.hpp>
#include <org/apache/poi/hssf/record/StringRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>
#include <org/apache/poi/hssf/record/aggregates/SharedValueManager.hpp>
#include <org/apache/poi/hssf/util/CellRangeAddress8Bit.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/ptg/ExpPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::FormulaRecordAggregate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::FormulaRecordAggregate(::org::apache::poi::hssf::record::FormulaRecord* formulaRec, ::org::apache::poi::hssf::record::StringRecord* stringRec, SharedValueManager* svm) 
    : FormulaRecordAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor(formulaRec,stringRec,svm);
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::ctor(::org::apache::poi::hssf::record::FormulaRecord* formulaRec, ::org::apache::poi::hssf::record::StringRecord* stringRec, SharedValueManager* svm)
{
    super::ctor();
    if(svm == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"sfm must not be null"_j);
    }
    if(npc(formulaRec)->hasCachedResultString()) {
        if(stringRec == nullptr) {
            throw new ::org::apache::poi::util::RecordFormatException(u"Formula record flag is set but String record was not found"_j);
        }
        _stringRecord = stringRec;
    } else {
        _stringRecord = nullptr;
    }
    _formulaRecord = formulaRec;
    _sharedValueManager = svm;
    if(npc(formulaRec)->isSharedFormula()) {
        auto firstCell = npc(npc(formulaRec)->getFormula())->getExpReference();
        if(firstCell == nullptr) {
            handleMissingSharedFormulaRecord(formulaRec);
        } else {
            _sharedFormulaRecord = npc(svm)->linkSharedFormulaRecord(firstCell, this);
        }
    }
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::handleMissingSharedFormulaRecord(::org::apache::poi::hssf::record::FormulaRecord* formula)
{
    clinit();
    auto firstToken = (*npc(formula)->getParsedExpression())[int32_t(0)];
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::ExpPtg* >(firstToken) != nullptr) {
        throw new ::org::apache::poi::util::RecordFormatException(u"SharedFormulaRecord not found for FormulaRecord with (isSharedFormula=true)"_j);
    }
    npc(formula)->setSharedFormula(false);
}

org::apache::poi::hssf::record::FormulaRecord* org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::getFormulaRecord()
{
    return _formulaRecord;
}

org::apache::poi::hssf::record::StringRecord* org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::getStringRecord()
{
    return _stringRecord;
}

int16_t org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::getXFIndex()
{
    return npc(_formulaRecord)->getXFIndex();
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::setXFIndex(int16_t xf)
{
    npc(_formulaRecord)->setXFIndex(xf);
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::setColumn(int16_t col)
{
    npc(_formulaRecord)->setColumn(col);
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::setRow(int32_t row)
{
    npc(_formulaRecord)->setRow(row);
}

int16_t org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::getColumn()
{
    return npc(_formulaRecord)->getColumn();
}

int32_t org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::getRow()
{
    return npc(_formulaRecord)->getRow();
}

java::lang::String* org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::toString()
{
    return npc(_formulaRecord)->toString();
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::visitContainedRecords(RecordAggregate_RecordVisitor* rv)
{
    npc(rv)->visitRecord(_formulaRecord);
    ::org::apache::poi::hssf::record::Record* sharedFormulaRecord = npc(_sharedValueManager)->getRecordForFirstCell(this);
    if(sharedFormulaRecord != nullptr) {
        npc(rv)->visitRecord(sharedFormulaRecord);
    }
    if(npc(_formulaRecord)->hasCachedResultString() && _stringRecord != nullptr) {
        npc(rv)->visitRecord(_stringRecord);
    }
}

java::lang::String* org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::getStringValue()
{
    if(_stringRecord == nullptr) {
        return nullptr;
    }
    return npc(_stringRecord)->getString();
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::setCachedStringResult(::java::lang::String* value)
{
    if(_stringRecord == nullptr) {
        _stringRecord = new ::org::apache::poi::hssf::record::StringRecord();
    }
    npc(_stringRecord)->setString(value);
    if(npc(value)->length() < 1) {
        npc(_formulaRecord)->setCachedResultTypeEmptyString();
    } else {
        npc(_formulaRecord)->setCachedResultTypeString();
    }
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::setCachedBooleanResult(bool value)
{
    _stringRecord = nullptr;
    npc(_formulaRecord)->setCachedResultBoolean(value);
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::setCachedErrorResult(int32_t errorCode)
{
    _stringRecord = nullptr;
    npc(_formulaRecord)->setCachedResultErrorCode(errorCode);
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::setCachedErrorResult(::org::apache::poi::ss::usermodel::FormulaError* error)
{
    setCachedErrorResult(static_cast< int32_t >(npc(error)->getCode()));
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::setCachedDoubleResult(double value)
{
    _stringRecord = nullptr;
    npc(_formulaRecord)->setValue(value);
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::getFormulaTokens()
{
    if(_sharedFormulaRecord != nullptr) {
        return npc(_sharedFormulaRecord)->getFormulaTokens(_formulaRecord);
    }
    auto expRef = npc(npc(_formulaRecord)->getFormula())->getExpReference();
    if(expRef != nullptr) {
        auto arec = npc(_sharedValueManager)->getArrayRecord(npc(expRef)->getRow(), npc(expRef)->getCol());
        return npc(arec)->getFormulaTokens();
    }
    return npc(_formulaRecord)->getParsedExpression();
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::setParsedExpression(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs)
{
    notifyFormulaChanging();
    npc(_formulaRecord)->setParsedExpression(ptgs);
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::unlinkSharedFormula()
{
    auto sfr = _sharedFormulaRecord;
    if(sfr == nullptr) {
        throw new ::java::lang::IllegalStateException(u"Formula not linked to shared formula"_j);
    }
    auto ptgs = npc(sfr)->getFormulaTokens(_formulaRecord);
    npc(_formulaRecord)->setParsedExpression(ptgs);
    npc(_formulaRecord)->setSharedFormula(false);
    _sharedFormulaRecord = nullptr;
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::notifyFormulaChanging()
{
    if(_sharedFormulaRecord != nullptr) {
        npc(_sharedValueManager)->unlink(_sharedFormulaRecord);
    }
}

bool org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::isPartOfArrayFormula()
{
    if(_sharedFormulaRecord != nullptr) {
        return false;
    }
    auto expRef = npc(npc(_formulaRecord)->getFormula())->getExpReference();
    auto arec = expRef == nullptr ? static_cast< ::org::apache::poi::hssf::record::ArrayRecord* >(nullptr) : npc(_sharedValueManager)->getArrayRecord(npc(expRef)->getRow(), npc(expRef)->getCol());
    return arec != nullptr;
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::getArrayFormulaRange()
{
    if(_sharedFormulaRecord != nullptr) {
        throw new ::java::lang::IllegalStateException(u"not an array formula cell."_j);
    }
    auto expRef = npc(npc(_formulaRecord)->getFormula())->getExpReference();
    if(expRef == nullptr) {
        throw new ::java::lang::IllegalStateException(u"not an array formula cell."_j);
    }
    auto arec = npc(_sharedValueManager)->getArrayRecord(npc(expRef)->getRow(), npc(expRef)->getCol());
    if(arec == nullptr) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"ArrayRecord was not found for the locator "_j)->append(npc(expRef)->formatAsString())->toString());
    }
    auto a = npc(arec)->getRange();
    return new ::org::apache::poi::ss::util::CellRangeAddress(npc(a)->getFirstRow(), npc(a)->getLastRow(), npc(a)->getFirstColumn(), npc(a)->getLastColumn());
}

void org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::setArrayFormula(::org::apache::poi::ss::util::CellRangeAddress* r, ::org::apache::poi::ss::formula::ptg::PtgArray* ptgs)
{
    auto arr = new ::org::apache::poi::hssf::record::ArrayRecord(::org::apache::poi::ss::formula::Formula::create(ptgs), new ::org::apache::poi::hssf::util::CellRangeAddress8Bit(npc(r)->getFirstRow(), npc(r)->getLastRow(), npc(r)->getFirstColumn(), npc(r)->getLastColumn()));
    npc(_sharedValueManager)->addArrayRecord(arr);
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::removeArrayFormula(int32_t rowIndex, int32_t columnIndex)
{
    auto a = npc(_sharedValueManager)->removeArrayFormula(rowIndex, columnIndex);
    npc(_formulaRecord)->setParsedExpression(nullptr);
    return new ::org::apache::poi::ss::util::CellRangeAddress(npc(a)->getFirstRow(), npc(a)->getLastRow(), npc(a)->getFirstColumn(), npc(a)->getLastColumn());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.FormulaRecordAggregate", 60);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/hssf/usermodel/DVConstraint.java
#include <org/apache/poi/hssf/usermodel/DVConstraint.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/text/ParseException.hpp>
#include <java/text/SimpleDateFormat.hpp>
#include <java/util/Date.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/hssf/model/HSSFFormulaParser.hpp>
#include <org/apache/poi/hssf/record/DVRecord.hpp>
#include <org/apache/poi/hssf/usermodel/DVConstraint_FormulaPair.hpp>
#include <org/apache/poi/hssf/usermodel/DVConstraint_FormulaValuePair.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDateUtil.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/formula/FormulaRenderer.hpp>
#include <org/apache/poi/ss/formula/FormulaType.hpp>
#include <org/apache/poi/ss/formula/ptg/NumberPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/StringPtg.hpp>
#include <org/apache/poi/ss/usermodel/DataValidationConstraint_OperatorType.hpp>
#include <org/apache/poi/ss/usermodel/DataValidationConstraint_ValidationType.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

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

org::apache::poi::hssf::usermodel::DVConstraint::DVConstraint(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::DVConstraint::DVConstraint(int32_t validationType, int32_t comparisonOperator, ::java::lang::String* formulaA, ::java::lang::String* formulaB, ::java::lang::Double* value1, ::java::lang::Double* value2, ::java::lang::StringArray* excplicitListValues) 
    : DVConstraint(*static_cast< ::default_init_tag* >(0))
{
    ctor(validationType,comparisonOperator,formulaA,formulaB,value1,value2,excplicitListValues);
}

org::apache::poi::hssf::usermodel::DVConstraint::DVConstraint(::java::lang::String* listFormula, ::java::lang::StringArray* excplicitListValues) 
    : DVConstraint(*static_cast< ::default_init_tag* >(0))
{
    ctor(listFormula,excplicitListValues);
}

void org::apache::poi::hssf::usermodel::DVConstraint::ctor(int32_t validationType, int32_t comparisonOperator, ::java::lang::String* formulaA, ::java::lang::String* formulaB, ::java::lang::Double* value1, ::java::lang::Double* value2, ::java::lang::StringArray* excplicitListValues)
{
    super::ctor();
    _validationType = validationType;
    _operator = comparisonOperator;
    _formula1 = formulaA;
    _formula2 = formulaB;
    _value1 = value1;
    _value2 = value2;
    _explicitListValues = (excplicitListValues == nullptr) ? static_cast< ::java::lang::StringArray* >(nullptr) : npc(excplicitListValues)->clone();
}

void org::apache::poi::hssf::usermodel::DVConstraint::ctor(::java::lang::String* listFormula, ::java::lang::StringArray* excplicitListValues)
{
    ctor(::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::LIST, ::org::apache::poi::ss::usermodel::DataValidationConstraint_OperatorType::IGNORED, listFormula, nullptr, nullptr, nullptr, excplicitListValues);
}

org::apache::poi::hssf::usermodel::DVConstraint* org::apache::poi::hssf::usermodel::DVConstraint::createNumericConstraint(int32_t validationType, int32_t comparisonOperator, ::java::lang::String* expr1, ::java::lang::String* expr2)
{
    clinit();
    switch (validationType) {
    case ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::ANY:
        if(expr1 != nullptr || expr2 != nullptr) {
            throw new ::java::lang::IllegalArgumentException(u"expr1 and expr2 must be null for validation type 'any'"_j);
        }
        break;
    case ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::DECIMAL:
    case ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::INTEGER:
    case ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::TEXT_LENGTH:
        if(expr1 == nullptr) {
            throw new ::java::lang::IllegalArgumentException(u"expr1 must be supplied"_j);
        }
        ::org::apache::poi::ss::usermodel::DataValidationConstraint_OperatorType::validateSecondArg(comparisonOperator, expr2);
        break;
    default:
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Validation Type ("_j)->append(validationType)
            ->append(u") not supported with this method"_j)->toString());
    }

    auto formula1 = getFormulaFromTextExpression(expr1);
    auto value1 = formula1 == nullptr ? convertNumber(expr1) : static_cast< ::java::lang::Double* >(nullptr);
    auto formula2 = getFormulaFromTextExpression(expr2);
    auto value2 = formula2 == nullptr ? convertNumber(expr2) : static_cast< ::java::lang::Double* >(nullptr);
    return new DVConstraint(validationType, comparisonOperator, formula1, formula2, value1, value2, nullptr);
}

org::apache::poi::hssf::usermodel::DVConstraint* org::apache::poi::hssf::usermodel::DVConstraint::createFormulaListConstraint(::java::lang::String* listFormula)
{
    clinit();
    return new DVConstraint(listFormula, nullptr);
}

org::apache::poi::hssf::usermodel::DVConstraint* org::apache::poi::hssf::usermodel::DVConstraint::createExplicitListConstraint(::java::lang::StringArray* explicitListValues)
{
    clinit();
    return new DVConstraint(nullptr, explicitListValues);
}

org::apache::poi::hssf::usermodel::DVConstraint* org::apache::poi::hssf::usermodel::DVConstraint::createTimeConstraint(int32_t comparisonOperator, ::java::lang::String* expr1, ::java::lang::String* expr2)
{
    clinit();
    if(expr1 == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"expr1 must be supplied"_j);
    }
    ::org::apache::poi::ss::usermodel::DataValidationConstraint_OperatorType::validateSecondArg(comparisonOperator, expr1);
    auto formula1 = getFormulaFromTextExpression(expr1);
    auto value1 = formula1 == nullptr ? convertTime(expr1) : static_cast< ::java::lang::Double* >(nullptr);
    auto formula2 = getFormulaFromTextExpression(expr2);
    auto value2 = formula2 == nullptr ? convertTime(expr2) : static_cast< ::java::lang::Double* >(nullptr);
    return new DVConstraint(::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::TIME, comparisonOperator, formula1, formula2, value1, value2, nullptr);
}

org::apache::poi::hssf::usermodel::DVConstraint* org::apache::poi::hssf::usermodel::DVConstraint::createDateConstraint(int32_t comparisonOperator, ::java::lang::String* expr1, ::java::lang::String* expr2, ::java::lang::String* dateFormat)
{
    clinit();
    if(expr1 == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"expr1 must be supplied"_j);
    }
    ::org::apache::poi::ss::usermodel::DataValidationConstraint_OperatorType::validateSecondArg(comparisonOperator, expr2);
    ::java::text::SimpleDateFormat* df = nullptr;
    if(dateFormat != nullptr) {
        df = new ::java::text::SimpleDateFormat(dateFormat, ::org::apache::poi::util::LocaleUtil::getUserLocale());
        npc(df)->setTimeZone(::org::apache::poi::util::LocaleUtil::getUserTimeZone());
    }
    auto formula1 = getFormulaFromTextExpression(expr1);
    auto value1 = formula1 == nullptr ? convertDate(expr1, df) : static_cast< ::java::lang::Double* >(nullptr);
    auto formula2 = getFormulaFromTextExpression(expr2);
    auto value2 = formula2 == nullptr ? convertDate(expr2, df) : static_cast< ::java::lang::Double* >(nullptr);
    return new DVConstraint(::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::DATE, comparisonOperator, formula1, formula2, value1, value2, nullptr);
}

java::lang::String* org::apache::poi::hssf::usermodel::DVConstraint::getFormulaFromTextExpression(::java::lang::String* textExpr)
{
    clinit();
    if(textExpr == nullptr) {
        return nullptr;
    }
    if(npc(textExpr)->length() < 1) {
        throw new ::java::lang::IllegalArgumentException(u"Empty string is not a valid formula/value expression"_j);
    }
    if(npc(textExpr)->charAt(int32_t(0)) == u'=') {
        return npc(textExpr)->substring(1);
    }
    return nullptr;
}

java::lang::Double* org::apache::poi::hssf::usermodel::DVConstraint::convertNumber(::java::lang::String* numberStr)
{
    clinit();
    if(numberStr == nullptr) {
        return nullptr;
    }
    try {
        return new ::java::lang::Double(numberStr);
    } catch (::java::lang::NumberFormatException* e) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"The supplied text '"_j)->append(numberStr)
            ->append(u"' could not be parsed as a number"_j)->toString());
    }
}

java::lang::Double* org::apache::poi::hssf::usermodel::DVConstraint::convertTime(::java::lang::String* timeStr)
{
    clinit();
    if(timeStr == nullptr) {
        return nullptr;
    }
    return new ::java::lang::Double(HSSFDateUtil::convertTime(timeStr));
}

java::lang::Double* org::apache::poi::hssf::usermodel::DVConstraint::convertDate(::java::lang::String* dateStr, ::java::text::SimpleDateFormat* dateFormat)
{
    clinit();
    if(dateStr == nullptr) {
        return nullptr;
    }
    ::java::util::Date* dateVal;
    if(dateFormat == nullptr) {
        dateVal = HSSFDateUtil::parseYYYYMMDDDate(dateStr);
    } else {
        try {
            dateVal = npc(dateFormat)->parse(dateStr);
        } catch (::java::text::ParseException* e) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Failed to parse date '"_j)->append(dateStr)
                ->append(u"' using specified format '"_j)
                ->append(static_cast< ::java::lang::Object* >(dateFormat))
                ->append(u"'"_j)->toString(), e);
        }
    }
    return new ::java::lang::Double(HSSFDateUtil::getExcelDate(dateVal));
}

org::apache::poi::hssf::usermodel::DVConstraint* org::apache::poi::hssf::usermodel::DVConstraint::createCustomFormulaConstraint(::java::lang::String* formula)
{
    clinit();
    if(formula == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"formula must be supplied"_j);
    }
    return new DVConstraint(::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::FORMULA, ::org::apache::poi::ss::usermodel::DataValidationConstraint_OperatorType::IGNORED, formula, nullptr, nullptr, nullptr, nullptr);
}

int32_t org::apache::poi::hssf::usermodel::DVConstraint::getValidationType()
{
    return _validationType;
}

bool org::apache::poi::hssf::usermodel::DVConstraint::isListValidationType()
{
    return _validationType == ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::LIST;
}

bool org::apache::poi::hssf::usermodel::DVConstraint::isExplicitList()
{
    return _validationType == ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::LIST && _explicitListValues != nullptr;
}

int32_t org::apache::poi::hssf::usermodel::DVConstraint::getOperator()
{
    return _operator;
}

void org::apache::poi::hssf::usermodel::DVConstraint::setOperator(int32_t operator_)
{
    _operator = operator_;
}

java::lang::StringArray* org::apache::poi::hssf::usermodel::DVConstraint::getExplicitListValues()
{
    return _explicitListValues;
}

void org::apache::poi::hssf::usermodel::DVConstraint::setExplicitListValues(::java::lang::StringArray* explicitListValues)
{
    if(_validationType != ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::LIST) {
        throw new ::java::lang::RuntimeException(u"Cannot setExplicitListValues on non-list constraint"_j);
    }
    _formula1 = nullptr;
    _explicitListValues = explicitListValues;
}

java::lang::String* org::apache::poi::hssf::usermodel::DVConstraint::getFormula1()
{
    return _formula1;
}

void org::apache::poi::hssf::usermodel::DVConstraint::setFormula1(::java::lang::String* formula1)
{
    _value1 = nullptr;
    _explicitListValues = nullptr;
    _formula1 = formula1;
}

java::lang::String* org::apache::poi::hssf::usermodel::DVConstraint::getFormula2()
{
    return _formula2;
}

void org::apache::poi::hssf::usermodel::DVConstraint::setFormula2(::java::lang::String* formula2)
{
    _value2 = nullptr;
    _formula2 = formula2;
}

java::lang::Double* org::apache::poi::hssf::usermodel::DVConstraint::getValue1()
{
    return _value1;
}

void org::apache::poi::hssf::usermodel::DVConstraint::setValue1(double value1)
{
    _formula1 = nullptr;
    _value1 = new ::java::lang::Double(value1);
}

java::lang::Double* org::apache::poi::hssf::usermodel::DVConstraint::getValue2()
{
    return _value2;
}

void org::apache::poi::hssf::usermodel::DVConstraint::setValue2(double value2)
{
    _formula2 = nullptr;
    _value2 = new ::java::lang::Double(value2);
}

org::apache::poi::hssf::usermodel::DVConstraint_FormulaPair* org::apache::poi::hssf::usermodel::DVConstraint::createFormulas(HSSFSheet* sheet)
{
    ::org::apache::poi::ss::formula::ptg::PtgArray* formula1;
    ::org::apache::poi::ss::formula::ptg::PtgArray* formula2;
    if(isListValidationType()) {
        formula1 = createListFormula(sheet);
        formula2 = ::org::apache::poi::ss::formula::ptg::Ptg::EMPTY_PTG_ARRAY();
    } else {
        formula1 = convertDoubleFormula(_formula1, _value1, sheet);
        formula2 = convertDoubleFormula(_formula2, _value2, sheet);
    }
    return new DVConstraint_FormulaPair(formula1, formula2);
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::usermodel::DVConstraint::createListFormula(HSSFSheet* sheet)
{
    if(_explicitListValues == nullptr) {
        auto wb = java_cast< HSSFWorkbook* >(npc(sheet)->getWorkbook());
        return ::org::apache::poi::hssf::model::HSSFFormulaParser::parse(_formula1, wb, ::org::apache::poi::ss::formula::FormulaType::DATAVALIDATION_LIST, npc(wb)->getSheetIndex(static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(sheet)));
    }
    auto sb = new ::java::lang::StringBuffer(npc(_explicitListValues)->length * int32_t(16));
    for (auto i = int32_t(0); i < npc(_explicitListValues)->length; i++) {
        if(i > 0) {
            npc(sb)->append(char16_t(0x0000));
        }
        npc(sb)->append((*_explicitListValues)[i]);
    }
    return new ::org::apache::poi::ss::formula::ptg::PtgArray({static_cast< ::org::apache::poi::ss::formula::ptg::Ptg* >(new ::org::apache::poi::ss::formula::ptg::StringPtg(npc(sb)->toString()))});
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::usermodel::DVConstraint::convertDoubleFormula(::java::lang::String* formula, ::java::lang::Double* value, HSSFSheet* sheet)
{
    clinit();
    if(formula == nullptr) {
        if(value == nullptr) {
            return ::org::apache::poi::ss::formula::ptg::Ptg::EMPTY_PTG_ARRAY();
        }
        return new ::org::apache::poi::ss::formula::ptg::PtgArray({static_cast< ::org::apache::poi::ss::formula::ptg::Ptg* >(new ::org::apache::poi::ss::formula::ptg::NumberPtg(npc(value)->doubleValue()))});
    }
    if(value != nullptr) {
        throw new ::java::lang::IllegalStateException(u"Both formula and value cannot be present"_j);
    }
    auto wb = java_cast< HSSFWorkbook* >(npc(sheet)->getWorkbook());
    return ::org::apache::poi::hssf::model::HSSFFormulaParser::parse(formula, wb, ::org::apache::poi::ss::formula::FormulaType::CELL, npc(wb)->getSheetIndex(static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(sheet)));
}

org::apache::poi::hssf::usermodel::DVConstraint* org::apache::poi::hssf::usermodel::DVConstraint::createDVConstraint(::org::apache::poi::hssf::record::DVRecord* dvRecord, ::org::apache::poi::ss::formula::FormulaRenderingWorkbook* book)
{
    clinit();
    {
        DVConstraint_FormulaValuePair* pair1;
        DVConstraint_FormulaValuePair* pair2;
        switch (npc(dvRecord)->getDataType()) {
        case ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::ANY:
            return new DVConstraint(::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::ANY, npc(dvRecord)->getConditionOperator(), nullptr, nullptr, nullptr, nullptr, nullptr);
        case ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::INTEGER:
        case ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::DECIMAL:
        case ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::DATE:
        case ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::TIME:
        case ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::TEXT_LENGTH:
            pair1 = toFormulaString(npc(dvRecord)->getFormula1(), book);
            pair2 = toFormulaString(npc(dvRecord)->getFormula2(), book);
            return new DVConstraint(npc(dvRecord)->getDataType(), npc(dvRecord)->getConditionOperator(), npc(pair1)->formula(), npc(pair2)->formula(), npc(pair1)->value(), npc(pair2)->value(), nullptr);
        case ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::LIST:
            if(npc(dvRecord)->getListExplicitFormula()) {
                auto values = npc(toFormulaString(npc(dvRecord)->getFormula1(), book))->string();
                if(npc(values)->startsWith(u"\""_j)) {
                    values = npc(values)->substring(1);
                }
                if(npc(values)->endsWith(u"\""_j)) {
                    values = npc(values)->substring(0, npc(values)->length() - int32_t(1));
                }
                auto explicitListValues = npc(values)->split(::java::util::regex::Pattern::quote(u"\0"_j));
                return createExplicitListConstraint(explicitListValues);
            } else {
                auto listFormula = npc(toFormulaString(npc(dvRecord)->getFormula1(), book))->string();
                return createFormulaListConstraint(listFormula);
            }
        case ::org::apache::poi::ss::usermodel::DataValidationConstraint_ValidationType::FORMULA:
            return createCustomFormulaConstraint(npc(toFormulaString(npc(dvRecord)->getFormula1(), book))->string());
        default:
            throw new ::java::lang::UnsupportedOperationException(::java::lang::StringBuilder().append(u"validationType="_j)->append(npc(dvRecord)->getDataType())->toString());
        }
    }

}

org::apache::poi::hssf::usermodel::DVConstraint_FormulaValuePair* org::apache::poi::hssf::usermodel::DVConstraint::toFormulaString(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs, ::org::apache::poi::ss::formula::FormulaRenderingWorkbook* book)
{
    clinit();
    auto pair = new DVConstraint_FormulaValuePair();
    if(ptgs != nullptr && npc(ptgs)->length > 0) {
        auto string = ::org::apache::poi::ss::formula::FormulaRenderer::toFormulaString(book, ptgs);
        if(npc(ptgs)->length == 1 && static_cast< ::java::lang::Object* >(npc((*ptgs)[int32_t(0)])->getClass()) == static_cast< ::java::lang::Object* >(::org::apache::poi::ss::formula::ptg::NumberPtg::class_())) {
            npc(pair)->_value = string;
        } else {
            npc(pair)->_formula = string;
        }
    }
    return pair;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::DVConstraint::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.DVConstraint", 42);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::DVConstraint::getClass0()
{
    return class_();
}


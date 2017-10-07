// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/formula/ConditionalFormattingEvaluator.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_checkFilter_1.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_checkFilter_2.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_checkFilter_3.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_checkFilter_4.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_ValueAndFormat.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_ValueFunction.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellStyle.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/ConditionFilterData.hpp>
#include <org/apache/poi/ss/usermodel/ConditionFilterType.hpp>
#include <org/apache/poi/ss/usermodel/ConditionType.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormatting.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingRule.hpp>
#include <org/apache/poi/ss/usermodel/ExcelNumberFormat.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
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
typedef ::SubArray< ::org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum, ::java::lang::EnumArray > EvaluationConditionalFormatRule_OperatorEnumArray;
                } // formula

                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
                } // util
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

org::apache::poi::ss::formula::EvaluationConditionalFormatRule::EvaluationConditionalFormatRule(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::EvaluationConditionalFormatRule::EvaluationConditionalFormatRule(WorkbookEvaluator* workbookEvaluator, ::org::apache::poi::ss::usermodel::Sheet* sheet, ::org::apache::poi::ss::usermodel::ConditionalFormatting* formatting, int32_t formattingIndex, ::org::apache::poi::ss::usermodel::ConditionalFormattingRule* rule, int32_t ruleIndex, ::org::apache::poi::ss::util::CellRangeAddressArray* regions) 
    : EvaluationConditionalFormatRule(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbookEvaluator,sheet,formatting,formattingIndex,rule,ruleIndex,regions);
}

void org::apache::poi::ss::formula::EvaluationConditionalFormatRule::init()
{
    meaningfulRegionValues = new ::java::util::HashMap();
}

void org::apache::poi::ss::formula::EvaluationConditionalFormatRule::ctor(WorkbookEvaluator* workbookEvaluator, ::org::apache::poi::ss::usermodel::Sheet* sheet, ::org::apache::poi::ss::usermodel::ConditionalFormatting* formatting, int32_t formattingIndex, ::org::apache::poi::ss::usermodel::ConditionalFormattingRule* rule, int32_t ruleIndex, ::org::apache::poi::ss::util::CellRangeAddressArray* regions)
{
    super::ctor();
    init();
    this->workbookEvaluator = workbookEvaluator;
    this->sheet = sheet;
    this->formatting = formatting;
    this->rule = rule;
    this->formattingIndex = formattingIndex;
    this->ruleIndex = ruleIndex;
    this->priority = npc(rule)->getPriority();
    this->regions = regions;
    formula1 = npc(rule)->getFormula1();
    formula2 = npc(rule)->getFormula2();
    numberFormat = npc(rule)->getNumberFormat();
    operator_ = (*EvaluationConditionalFormatRule_OperatorEnum::values())[npc(rule)->getComparisonOperation()];
    type = npc(rule)->getConditionType();
}

org::apache::poi::ss::usermodel::Sheet* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getSheet()
{
    return sheet;
}

org::apache::poi::ss::usermodel::ConditionalFormatting* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getFormatting()
{
    return formatting;
}

int32_t org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getFormattingIndex()
{
    return formattingIndex;
}

org::apache::poi::ss::usermodel::ExcelNumberFormat* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getNumberFormat()
{
    return numberFormat;
}

org::apache::poi::ss::usermodel::ConditionalFormattingRule* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getRule()
{
    return rule;
}

int32_t org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getRuleIndex()
{
    return ruleIndex;
}

org::apache::poi::ss::util::CellRangeAddressArray* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getRegions()
{
    return regions;
}

int32_t org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getPriority()
{
    return priority;
}

java::lang::String* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getFormula1()
{
    return formula1;
}

java::lang::String* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getFormula2()
{
    return formula2;
}

org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getOperator()
{
    return operator_;
}

org::apache::poi::ss::usermodel::ConditionType* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getType()
{
    return type;
}

bool org::apache::poi::ss::formula::EvaluationConditionalFormatRule::equals(::java::lang::Object* obj)
{
    if(obj == nullptr) {
        return false;
    }
    if(!npc(npc(obj)->getClass())->equals(this->getClass())) {
        return false;
    }
    auto const r = java_cast< EvaluationConditionalFormatRule* >(obj);
    return npc(npc(getSheet())->getSheetName())->equalsIgnoreCase(npc(npc(r)->getSheet())->getSheetName()) && getFormattingIndex() == npc(r)->getFormattingIndex() && getRuleIndex() == npc(r)->getRuleIndex();
}

int32_t org::apache::poi::ss::formula::EvaluationConditionalFormatRule::compareTo(EvaluationConditionalFormatRule* o)
{
    auto cmp = npc(npc(getSheet())->getSheetName())->compareToIgnoreCase(npc(npc(o)->getSheet())->getSheetName());
    if(cmp != 0) {
        return cmp;
    }
    auto const x = getPriority();
    auto const y = npc(o)->getPriority();
    cmp = (x < y) ? -int32_t(1) : ((x == y) ? int32_t(0) : int32_t(1));
    if(cmp != 0) {
        return cmp;
    }
    cmp = (new ::java::lang::Integer(getFormattingIndex()))->compareTo(new ::java::lang::Integer(npc(o)->getFormattingIndex()));
    if(cmp != 0) {
        return cmp;
    }
    return (new ::java::lang::Integer(getRuleIndex()))->compareTo(new ::java::lang::Integer(npc(o)->getRuleIndex()));
}

int32_t org::apache::poi::ss::formula::EvaluationConditionalFormatRule::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< EvaluationConditionalFormatRule* >(o));
}

int32_t org::apache::poi::ss::formula::EvaluationConditionalFormatRule::hashCode()
{
    auto hash = npc(npc(sheet)->getSheetName())->hashCode();
    hash = int32_t(31) * hash + formattingIndex;
    hash = int32_t(31) * hash + ruleIndex;
    return hash;
}

bool org::apache::poi::ss::formula::EvaluationConditionalFormatRule::matches(::org::apache::poi::ss::util::CellReference* ref)
{
    ::org::apache::poi::ss::util::CellRangeAddress* region = nullptr;
    for(auto r : *npc(regions)) {
        if(npc(r)->isInRange(ref)) {
            region = r;
            break;
        }
    }
    if(region == nullptr) {
        return false;
    }
    auto const ruleType = npc(getRule())->getConditionType();
    if(npc(ruleType)->equals(::org::apache::poi::ss::usermodel::ConditionType::COLOR_SCALE()) || npc(ruleType)->equals(::org::apache::poi::ss::usermodel::ConditionType::DATA_BAR()) || npc(ruleType)->equals(::org::apache::poi::ss::usermodel::ConditionType::ICON_SET())) {
        return true;
    }
    ::org::apache::poi::ss::usermodel::Cell* cell = nullptr;
    auto const row = npc(sheet)->getRow(npc(ref)->getRow());
    if(row != nullptr) {
        cell = npc(row)->getCell(npc(ref)->getCol());
    }
    if(npc(ruleType)->equals(::org::apache::poi::ss::usermodel::ConditionType::CELL_VALUE_IS())) {
        if(cell == nullptr)
            return false;

        return checkValue(cell, region);
    }
    if(npc(ruleType)->equals(::org::apache::poi::ss::usermodel::ConditionType::FORMULA())) {
        return checkFormula(ref, region);
    }
    if(npc(ruleType)->equals(::org::apache::poi::ss::usermodel::ConditionType::FILTER())) {
        return checkFilter(cell, ref, region);
    }
    return false;
}

bool org::apache::poi::ss::formula::EvaluationConditionalFormatRule::checkValue(::org::apache::poi::ss::usermodel::Cell* cell, ::org::apache::poi::ss::util::CellRangeAddress* region)
{
    if(cell == nullptr || DataValidationEvaluator::isType(cell, ::org::apache::poi::ss::usermodel::CellType::BLANK) || DataValidationEvaluator::isType(cell, ::org::apache::poi::ss::usermodel::CellType::ERROR) || (DataValidationEvaluator::isType(cell, ::org::apache::poi::ss::usermodel::CellType::STRING) && (npc(cell)->getStringCellValue() == nullptr || npc(npc(cell)->getStringCellValue())->isEmpty()))) {
        return false;
    }
    auto eval = unwrapEval(npc(workbookEvaluator)->evaluate(npc(rule)->getFormula1(), ConditionalFormattingEvaluator::getRef(cell), region));
    auto f2 = npc(rule)->getFormula2();
    ::org::apache::poi::ss::formula::eval::ValueEval* eval2 = nullptr;
    if(f2 != nullptr && npc(f2)->length() > 0) {
        eval2 = unwrapEval(npc(workbookEvaluator)->evaluate(f2, ConditionalFormattingEvaluator::getRef(cell), region));
    }
    if(DataValidationEvaluator::isType(cell, ::org::apache::poi::ss::usermodel::CellType::BOOLEAN)) {
        if(dynamic_cast< ::org::apache::poi::ss::formula::eval::BoolEval* >(eval) != nullptr && (eval2 == nullptr || dynamic_cast< ::org::apache::poi::ss::formula::eval::BoolEval* >(eval2) != nullptr)) {
            return npc(operator_)->isValid(::java::lang::Boolean::valueOf(npc(cell)->getBooleanCellValue()), ::java::lang::Boolean::valueOf(npc((java_cast< ::org::apache::poi::ss::formula::eval::BoolEval* >(eval)))->getBooleanValue()), eval2 == nullptr ? static_cast< ::java::lang::Boolean* >(nullptr) : ::java::lang::Boolean::valueOf(npc((java_cast< ::org::apache::poi::ss::formula::eval::BoolEval* >(eval2)))->getBooleanValue()));
        }
        return false;
    }
    if(DataValidationEvaluator::isType(cell, ::org::apache::poi::ss::usermodel::CellType::NUMERIC)) {
        if(dynamic_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(eval) != nullptr && (eval2 == nullptr || dynamic_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(eval2) != nullptr)) {
            return npc(operator_)->isValid(::java::lang::Double::valueOf(npc(cell)->getNumericCellValue()), ::java::lang::Double::valueOf(npc((java_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(eval)))->getNumberValue()), eval2 == nullptr ? static_cast< ::java::lang::Double* >(nullptr) : ::java::lang::Double::valueOf(npc((java_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(eval2)))->getNumberValue()));
        }
        return false;
    }
    if(DataValidationEvaluator::isType(cell, ::org::apache::poi::ss::usermodel::CellType::STRING)) {
        if(dynamic_cast< ::org::apache::poi::ss::formula::eval::StringEval* >(eval) != nullptr && (eval2 == nullptr || dynamic_cast< ::org::apache::poi::ss::formula::eval::StringEval* >(eval2) != nullptr)) {
            return npc(operator_)->isValid(npc(cell)->getStringCellValue(), npc((java_cast< ::org::apache::poi::ss::formula::eval::StringEval* >(eval)))->getStringValue(), eval2 == nullptr ? static_cast< ::java::lang::String* >(nullptr) : npc((java_cast< ::org::apache::poi::ss::formula::eval::StringEval* >(eval2)))->getStringValue());
        }
        return false;
    }
    return false;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::unwrapEval(::org::apache::poi::ss::formula::eval::ValueEval* eval)
{
    auto comp = eval;
    while (dynamic_cast< ::org::apache::poi::ss::formula::eval::RefEval* >(comp) != nullptr) {
        auto ref = java_cast< ::org::apache::poi::ss::formula::eval::RefEval* >(comp);
        comp = npc(ref)->getInnerValueEval(npc(ref)->getFirstSheetIndex());
    }
    return comp;
}

bool org::apache::poi::ss::formula::EvaluationConditionalFormatRule::checkFormula(::org::apache::poi::ss::util::CellReference* ref, ::org::apache::poi::ss::util::CellRangeAddress* region)
{
    auto comp = unwrapEval(npc(workbookEvaluator)->evaluate(npc(rule)->getFormula1(), ref, region));
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::BlankEval* >(comp) != nullptr) {
        return true;
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::ErrorEval* >(comp) != nullptr) {
        return false;
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::BoolEval* >(comp) != nullptr) {
        return npc((java_cast< ::org::apache::poi::ss::formula::eval::BoolEval* >(comp)))->getBooleanValue();
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(comp) != nullptr) {
        return npc((java_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(comp)))->getNumberValue() != 0;
    }
    return false;
}

bool org::apache::poi::ss::formula::EvaluationConditionalFormatRule::checkFilter(::org::apache::poi::ss::usermodel::Cell* cell, ::org::apache::poi::ss::util::CellReference* ref, ::org::apache::poi::ss::util::CellRangeAddress* region)
{
    auto const filterType = npc(rule)->getConditionFilterType();
    if(filterType == nullptr) {
        return false;
    }
    auto const cv = getCellValue(cell);
    {
        ::org::apache::poi::ss::usermodel::ConditionFilterData* conf;
        ::java::util::List* values;
        ::java::lang::Double* val;
        double avg;
        double stdDev;
        ::java::lang::Double* comp;
        EvaluationConditionalFormatRule_OperatorEnum* op;
        {
            auto v = filterType;
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::FILTER)) {
                return false;
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::TOP_10)) {
                if(!npc(cv)->isNumber()) {
                    return false;
                }
                return npc(getMeaningfulValues(region, false, new EvaluationConditionalFormatRule_checkFilter_1(this)))->contains(static_cast< ::java::lang::Object* >(cv));
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::UNIQUE_VALUES)) {
                return npc(getMeaningfulValues(region, true, new EvaluationConditionalFormatRule_checkFilter_2(this)))->contains(static_cast< ::java::lang::Object* >(cv));
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::DUPLICATE_VALUES)) {
                return npc(getMeaningfulValues(region, true, new EvaluationConditionalFormatRule_checkFilter_3(this)))->contains(static_cast< ::java::lang::Object* >(cv));
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::ABOVE_AVERAGE)) {
                auto const conf = npc(rule)->getFilterConfiguration();
                ::java::util::List* values = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(getMeaningfulValues(region, false, new EvaluationConditionalFormatRule_checkFilter_4(this))));
                auto val = npc(cv)->isNumber() ? npc(cv)->getValue() : static_cast< ::java::lang::Double* >(nullptr);
                if(val == nullptr) {
                    return false;
                }
                auto avg = npc(npc(java_cast< EvaluationConditionalFormatRule_ValueAndFormat* >(npc(values)->get(0)))->value)->doubleValue();
                auto stdDev = npc(npc(java_cast< EvaluationConditionalFormatRule_ValueAndFormat* >(npc(values)->get(1)))->value)->doubleValue();
                auto comp = new ::java::lang::Double(npc(conf)->getStdDev() > 0 ? (avg + (npc(conf)->getAboveAverage() ? int32_t(1) : -int32_t(1)) * stdDev * npc(conf)->getStdDev()) : avg);
                EvaluationConditionalFormatRule_OperatorEnum* op = nullptr;
                if(npc(conf)->getAboveAverage()) {
                    if(npc(conf)->getEqualAverage()) {
                        op = EvaluationConditionalFormatRule_OperatorEnum::GREATER_OR_EQUAL;
                    } else {
                        op = EvaluationConditionalFormatRule_OperatorEnum::GREATER_THAN;
                    }
                } else {
                    if(npc(conf)->getEqualAverage()) {
                        op = EvaluationConditionalFormatRule_OperatorEnum::LESS_OR_EQUAL;
                    } else {
                        op = EvaluationConditionalFormatRule_OperatorEnum::LESS_THAN;
                    }
                }
                return op != nullptr && npc(op)->isValid(val, comp, nullptr);
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::CONTAINS_TEXT)) {
                return checkFormula(ref, region);
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::NOT_CONTAINS_TEXT)) {
                return checkFormula(ref, region);
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::BEGINS_WITH)) {
                return checkFormula(ref, region);
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::ENDS_WITH)) {
                return checkFormula(ref, region);
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::CONTAINS_BLANKS)) {
                try {
                    auto v = npc(cv)->getString();
                    return v == nullptr || npc(npc(v)->trim())->length() == 0;
                } catch (::java::lang::Exception* e) {
                    return false;
                }
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::CONTAINS_BLANKS) || (v == ::org::apache::poi::ss::usermodel::ConditionFilterType::NOT_CONTAINS_BLANKS)) {
                try {
                    auto v = npc(cv)->getString();
                    return v != nullptr && npc(npc(v)->trim())->length() > 0;
                } catch (::java::lang::Exception* e) {
                    return true;
                }
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::CONTAINS_BLANKS) || (v == ::org::apache::poi::ss::usermodel::ConditionFilterType::NOT_CONTAINS_BLANKS) || (v == ::org::apache::poi::ss::usermodel::ConditionFilterType::CONTAINS_ERRORS)) {
                return cell != nullptr && DataValidationEvaluator::isType(cell, ::org::apache::poi::ss::usermodel::CellType::ERROR);
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::NOT_CONTAINS_ERRORS)) {
                return cell == nullptr || !DataValidationEvaluator::isType(cell, ::org::apache::poi::ss::usermodel::CellType::ERROR);
            }
            if((v == ::org::apache::poi::ss::usermodel::ConditionFilterType::TIME_PERIOD)) {
                return checkFormula(ref, region);
            }
            if((((v != ::org::apache::poi::ss::usermodel::ConditionFilterType::FILTER) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::TOP_10) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::UNIQUE_VALUES) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::DUPLICATE_VALUES) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::ABOVE_AVERAGE) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::CONTAINS_TEXT) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::NOT_CONTAINS_TEXT) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::BEGINS_WITH) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::ENDS_WITH) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::CONTAINS_BLANKS) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::NOT_CONTAINS_BLANKS) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::CONTAINS_ERRORS) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::NOT_CONTAINS_ERRORS) && (v != ::org::apache::poi::ss::usermodel::ConditionFilterType::TIME_PERIOD)))) {
                return false;
            }
end_switch0:;
        }
    }

}

java::util::Set* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getMeaningfulValues(::org::apache::poi::ss::util::CellRangeAddress* region, bool withText, EvaluationConditionalFormatRule_ValueFunction* func)
{
    auto values = java_cast< ::java::util::Set* >(npc(meaningfulRegionValues)->get(region));
    if(values != nullptr) {
        return values;
    }
    ::java::util::List* allValues = new ::java::util::ArrayList((npc(region)->getLastColumn() - npc(region)->getFirstColumn() + int32_t(1)) * (npc(region)->getLastRow() - npc(region)->getFirstRow() + int32_t(1)));
    for (auto r = npc(region)->getFirstRow(); r <= npc(region)->getLastRow(); r++) {
        auto const row = npc(sheet)->getRow(r);
        if(row == nullptr) {
            continue;
        }
        for (auto c = npc(region)->getFirstColumn(); c <= npc(region)->getLastColumn(); c++) {
            auto cell = npc(row)->getCell(c);
            auto const cv = getCellValue(cell);
            if(cv != nullptr && (withText || npc(cv)->isNumber())) {
                npc(allValues)->add(static_cast< ::java::lang::Object* >(cv));
            }
        }
    }
    values = npc(func)->evaluate(allValues);
    npc(meaningfulRegionValues)->put(region, values);
    return values;
}

org::apache::poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getCellValue(::org::apache::poi::ss::usermodel::Cell* cell)
{
    if(cell != nullptr) {
        auto const type = npc(cell)->getCellTypeEnum();
        if(type == ::org::apache::poi::ss::usermodel::CellType::NUMERIC || (type == ::org::apache::poi::ss::usermodel::CellType::FORMULA && npc(cell)->getCachedFormulaResultTypeEnum() == ::org::apache::poi::ss::usermodel::CellType::NUMERIC)) {
            return new EvaluationConditionalFormatRule_ValueAndFormat(new ::java::lang::Double(npc(cell)->getNumericCellValue()), npc(npc(cell)->getCellStyle())->getDataFormatString());
        } else if(type == ::org::apache::poi::ss::usermodel::CellType::STRING || (type == ::org::apache::poi::ss::usermodel::CellType::FORMULA && npc(cell)->getCachedFormulaResultTypeEnum() == ::org::apache::poi::ss::usermodel::CellType::STRING)) {
            return new EvaluationConditionalFormatRule_ValueAndFormat(npc(cell)->getStringCellValue(), npc(npc(cell)->getCellStyle())->getDataFormatString());
        } else if(type == ::org::apache::poi::ss::usermodel::CellType::BOOLEAN || (type == ::org::apache::poi::ss::usermodel::CellType::FORMULA && npc(cell)->getCachedFormulaResultTypeEnum() == ::org::apache::poi::ss::usermodel::CellType::BOOLEAN)) {
            return new EvaluationConditionalFormatRule_ValueAndFormat(npc(cell)->getStringCellValue(), npc(npc(cell)->getCellStyle())->getDataFormatString());
        }
    }
    return new EvaluationConditionalFormatRule_ValueAndFormat(u""_j, u""_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.EvaluationConditionalFormatRule", 57);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::EvaluationConditionalFormatRule::getClass0()
{
    return class_();
}


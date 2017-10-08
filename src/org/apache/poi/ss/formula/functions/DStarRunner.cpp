// Generated from /POI/java/org/apache/poi/ss/formula/functions/DStarRunner.java
#include <org/apache/poi/ss/formula/functions/DStarRunner.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NotImplementedException.hpp>
#include <org/apache/poi/ss/formula/eval/NumericValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/DGet.hpp>
#include <org/apache/poi/ss/formula/functions/DMin.hpp>
#include <org/apache/poi/ss/formula/functions/DStarRunner_DStarAlgorithmEnum.hpp>
#include <org/apache/poi/ss/formula/functions/DStarRunner_operator.hpp>
#include <org/apache/poi/ss/formula/functions/IDStarAlgorithm.hpp>
#include <org/apache/poi/ss/util/NumberComparer.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
            } // eval
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

poi::ss::formula::functions::DStarRunner::DStarRunner(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::DStarRunner::DStarRunner(DStarRunner_DStarAlgorithmEnum* algorithm) 
    : DStarRunner(*static_cast< ::default_init_tag* >(0))
{
    ctor(algorithm);
}

void poi::ss::formula::functions::DStarRunner::ctor(DStarRunner_DStarAlgorithmEnum* algorithm)
{
    super::ctor();
    this->algoType = algorithm;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::DStarRunner::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    if(npc(args)->length == 3) {
        return evaluate(srcRowIndex, srcColumnIndex, (*args)[int32_t(0)], (*args)[int32_t(1)], (*args)[int32_t(2)]);
    } else {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::DStarRunner::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* database, ::poi::ss::formula::eval::ValueEval* filterColumn, ::poi::ss::formula::eval::ValueEval* conditionDatabase)
{
    if(!(dynamic_cast< ::poi::ss::formula::eval::AreaEval* >(database) != nullptr) || !(dynamic_cast< ::poi::ss::formula::eval::AreaEval* >(conditionDatabase) != nullptr)) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto db = java_cast< ::poi::ss::formula::eval::AreaEval* >(database);
    auto cdb = java_cast< ::poi::ss::formula::eval::AreaEval* >(conditionDatabase);
    try {
        filterColumn = ::poi::ss::formula::eval::OperandResolver::getSingleValue(filterColumn, srcRowIndex, srcColumnIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    int32_t fc;
    try {
        fc = getColumnForName(filterColumn, db);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(fc == -int32_t(1)) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    IDStarAlgorithm* algorithm = nullptr;
    {
        auto v = algoType;
        if((v == DStarRunner_DStarAlgorithmEnum::DGET)) {
            algorithm = new DGet();
            goto end_switch0;;
        }
        if((v == DStarRunner_DStarAlgorithmEnum::DMIN)) {
            algorithm = new DMin();
            goto end_switch0;;
        }
        if((((v != DStarRunner_DStarAlgorithmEnum::DGET) && (v != DStarRunner_DStarAlgorithmEnum::DMIN)))) {
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected algorithm type "_j)->append(static_cast< ::java::lang::Object* >(algoType))
                ->append(u" encountered."_j)->toString());
        }
end_switch0:;
    }

    auto const height = npc(db)->getHeight();
    for (auto row = int32_t(1); row < height; ++row) {
        auto matches = true;
        try {
            matches = fullfillsConditions(db, row, cdb);
        } catch (::poi::ss::formula::eval::EvaluationException* e) {
            return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
        }
        if(matches) {
            auto currentValueEval = resolveReference(db, row, fc);
            auto shouldContinue = npc(algorithm)->processMatch(currentValueEval);
            if(!shouldContinue) {
                break;
            }
        }
    }
    return npc(algorithm)->getResult();
}

int32_t poi::ss::formula::functions::DStarRunner::getColumnForName(::poi::ss::formula::eval::ValueEval* nameValueEval, ::poi::ss::formula::eval::AreaEval* db) /* throws(EvaluationException) */
{
    clinit();
    auto name = ::poi::ss::formula::eval::OperandResolver::coerceValueToString(nameValueEval);
    return getColumnForString(db, name);
}

int32_t poi::ss::formula::functions::DStarRunner::getColumnForString(::poi::ss::formula::eval::AreaEval* db, ::java::lang::String* name) /* throws(EvaluationException) */
{
    clinit();
    auto resultColumn = -int32_t(1);
    auto const width = npc(db)->getWidth();
    for (auto column = int32_t(0); column < width; ++column) {
        auto columnNameValueEval = resolveReference(db, 0, column);
        if(dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(columnNameValueEval) != nullptr) {
            continue;
        }
        if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(columnNameValueEval) != nullptr) {
            continue;
        }
        auto columnName = ::poi::ss::formula::eval::OperandResolver::coerceValueToString(columnNameValueEval);
        if(npc(name)->equals(static_cast< ::java::lang::Object* >(columnName))) {
            resultColumn = column;
            break;
        }
    }
    return resultColumn;
}

bool poi::ss::formula::functions::DStarRunner::fullfillsConditions(::poi::ss::formula::eval::AreaEval* db, int32_t row, ::poi::ss::formula::eval::AreaEval* cdb) /* throws(EvaluationException) */
{
    clinit();
    auto const height = npc(cdb)->getHeight();
    for (auto conditionRow = int32_t(1); conditionRow < height; ++conditionRow) {
        auto matches = true;
        auto const width = npc(cdb)->getWidth();
        for (auto column = int32_t(0); column < width; ++column) {
            auto columnCondition = true;
            ::poi::ss::formula::eval::ValueEval* condition = nullptr;
            condition = resolveReference(cdb, conditionRow, column);
            if(dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(condition) != nullptr)
                continue;

            auto targetHeader = resolveReference(cdb, 0, column);
            if(!(dynamic_cast< ::poi::ss::formula::eval::StringValueEval* >(targetHeader) != nullptr)) {
                throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
            }
            if(getColumnForName(targetHeader, db) == -int32_t(1))
                columnCondition = false;

            if(columnCondition == true) {
                auto value = resolveReference(db, row, getColumnForName(targetHeader, db));
                if(!testNormalCondition(value, condition)) {
                    matches = false;
                    break;
                }
            } else {
                if(npc(::poi::ss::formula::eval::OperandResolver::coerceValueToString(condition))->isEmpty()) {
                    throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
                }
                throw new ::poi::ss::formula::eval::NotImplementedException(u"D* function with formula conditions"_j);
            }
        }
        if(matches == true) {
            return true;
        }
    }
    return false;
}

bool poi::ss::formula::functions::DStarRunner::testNormalCondition(::poi::ss::formula::eval::ValueEval* value, ::poi::ss::formula::eval::ValueEval* condition) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(condition) != nullptr) {
        auto conditionString = npc((java_cast< ::poi::ss::formula::eval::StringEval* >(condition)))->getStringValue();
        if(npc(conditionString)->startsWith(u"<"_j)) {
            auto number = npc(conditionString)->substring(1);
            if(npc(number)->startsWith(u"="_j)) {
                number = npc(number)->substring(1);
                return testNumericCondition(value, DStarRunner_operator::smallerEqualThan, number);
            } else {
                return testNumericCondition(value, DStarRunner_operator::smallerThan, number);
            }
        } else if(npc(conditionString)->startsWith(u">"_j)) {
            auto number = npc(conditionString)->substring(1);
            if(npc(number)->startsWith(u"="_j)) {
                number = npc(number)->substring(1);
                return testNumericCondition(value, DStarRunner_operator::largerEqualThan, number);
            } else {
                return testNumericCondition(value, DStarRunner_operator::largerThan, number);
            }
        } else if(npc(conditionString)->startsWith(u"="_j)) {
            auto stringOrNumber = npc(conditionString)->substring(1);
            if(npc(stringOrNumber)->isEmpty()) {
                return dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(value) != nullptr;
            }
            auto itsANumber = false;
            try {
                ::java::lang::Integer::parseInt(stringOrNumber);
                itsANumber = true;
            } catch (::java::lang::NumberFormatException* e) {
                try {
                    ::java::lang::Double::parseDouble(stringOrNumber);
                    itsANumber = true;
                } catch (::java::lang::NumberFormatException* e2) {
                    itsANumber = false;
                }
            }
            if(itsANumber) {
                return testNumericCondition(value, DStarRunner_operator::equal, stringOrNumber);
            } else {
                auto valueString = dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(value) != nullptr ? u""_j : ::poi::ss::formula::eval::OperandResolver::coerceValueToString(value);
                return npc(stringOrNumber)->equals(static_cast< ::java::lang::Object* >(valueString));
            }
        } else {
            if(npc(conditionString)->isEmpty()) {
                return dynamic_cast< ::poi::ss::formula::eval::StringEval* >(value) != nullptr;
            } else {
                auto valueString = dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(value) != nullptr ? u""_j : ::poi::ss::formula::eval::OperandResolver::coerceValueToString(value);
                return npc(valueString)->startsWith(conditionString);
            }
        }
    } else if(dynamic_cast< ::poi::ss::formula::eval::NumericValueEval* >(condition) != nullptr) {
        auto conditionNumber = npc((java_cast< ::poi::ss::formula::eval::NumericValueEval* >(condition)))->getNumberValue();
        auto valueNumber = getNumberFromValueEval(value);
        if(valueNumber == nullptr) {
            return false;
        }
        return conditionNumber == (npc(valueNumber))->doubleValue();
    } else if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(condition) != nullptr) {
        if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(value) != nullptr) {
            return npc((java_cast< ::poi::ss::formula::eval::ErrorEval* >(condition)))->getErrorCode() == npc((java_cast< ::poi::ss::formula::eval::ErrorEval* >(value)))->getErrorCode();
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool poi::ss::formula::functions::DStarRunner::testNumericCondition(::poi::ss::formula::eval::ValueEval* valueEval, DStarRunner_operator* op, ::java::lang::String* condition) /* throws(EvaluationException) */
{
    clinit();
    if(!(dynamic_cast< ::poi::ss::formula::eval::NumericValueEval* >(valueEval) != nullptr))
        return false;

    auto value = npc((java_cast< ::poi::ss::formula::eval::NumericValueEval* >(valueEval)))->getNumberValue();
    auto conditionValue = 0.0;
    try {
        auto intValue = ::java::lang::Integer::parseInt(condition);
        conditionValue = intValue;
    } catch (::java::lang::NumberFormatException* e) {
        try {
            conditionValue = ::java::lang::Double::parseDouble(condition);
        } catch (::java::lang::NumberFormatException* e2) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
        }
    }
    auto result = ::poi::ss::util::NumberComparer::compare(value, conditionValue);
    {
        auto v = op;
        if((v == DStarRunner_operator::largerThan)) {
            return result > 0;
        }
        if((v == DStarRunner_operator::largerEqualThan)) {
            return result >= 0;
        }
        if((v == DStarRunner_operator::smallerThan)) {
            return result < 0;
        }
        if((v == DStarRunner_operator::smallerEqualThan)) {
            return result <= 0;
        }
        if((v == DStarRunner_operator::equal)) {
            return result == 0;
        }
end_switch1:;
    }

    return false;
}

java::lang::Double* poi::ss::formula::functions::DStarRunner::getNumberFromValueEval(::poi::ss::formula::eval::ValueEval* value)
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::eval::NumericValueEval* >(value) != nullptr) {
        return ::java::lang::Double::valueOf(npc((java_cast< ::poi::ss::formula::eval::NumericValueEval* >(value)))->getNumberValue());
    } else if(dynamic_cast< ::poi::ss::formula::eval::StringValueEval* >(value) != nullptr) {
        auto stringValue = npc((java_cast< ::poi::ss::formula::eval::StringValueEval* >(value)))->getStringValue();
        try {
            return ::java::lang::Double::valueOf(::java::lang::Double::parseDouble(stringValue));
        } catch (::java::lang::NumberFormatException* e2) {
            return nullptr;
        }
    } else {
        return nullptr;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::DStarRunner::resolveReference(::poi::ss::formula::eval::AreaEval* db, int32_t dbRow, int32_t dbCol)
{
    clinit();
    try {
        return ::poi::ss::formula::eval::OperandResolver::getSingleValue(npc(db)->getValue(dbRow, dbCol), npc(db)->getFirstRow() + dbRow, npc(db)->getFirstColumn() + dbCol);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::DStarRunner::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.DStarRunner", 47);
    return c;
}

java::lang::Class* poi::ss::formula::functions::DStarRunner::getClass0()
{
    return class_();
}


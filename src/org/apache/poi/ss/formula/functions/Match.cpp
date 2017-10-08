// Generated from /POI/java/org/apache/poi/ss/formula/functions/Match.java
#include <org/apache/poi/ss/formula/functions/Match.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumericValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_CompareResult.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_LookupValueComparer.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_ValueVector.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils.hpp>
#include <org/apache/poi/ss/formula/functions/Match_SingleValueVector.hpp>

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

poi::ss::formula::functions::Match::Match(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Match::Match()
    : Match(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Match::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    return eval(srcRowIndex, srcColumnIndex, arg0, arg1, 1.0);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Match::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    double match_type;
    try {
        match_type = evaluateMatchTypeArg(arg2, srcRowIndex, srcColumnIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
    }
    return eval(srcRowIndex, srcColumnIndex, arg0, arg1, match_type);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Match::eval(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, double match_type)
{
    clinit();
    auto matchExact = match_type == 0;
    auto findLargestLessThanOrEqual = match_type > 0;
    try {
        auto lookupValue = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
        auto lookupRange = evaluateLookupRange(arg1);
        auto index = findIndexOfValue(lookupValue, lookupRange, matchExact, findLargestLessThanOrEqual);
        return new ::poi::ss::formula::eval::NumberEval(static_cast< double >(index + int32_t(1)));
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

poi::ss::formula::functions::LookupUtils_ValueVector* poi::ss::formula::functions::Match::evaluateLookupRange(::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(eval) != nullptr) {
        auto re = java_cast< ::poi::ss::formula::eval::RefEval* >(eval);
        if(npc(re)->getNumberOfSheets() == 1) {
            return new Match_SingleValueVector(npc(re)->getInnerValueEval(npc(re)->getFirstSheetIndex()));
        } else {
            return LookupUtils::createVector(re);
        }
    }
    if(dynamic_cast< ::poi::ss::formula::TwoDEval* >(eval) != nullptr) {
        auto result = LookupUtils::createVector(java_cast< ::poi::ss::formula::TwoDEval* >(eval));
        if(result == nullptr) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NA());
        }
        return result;
    }
    if(dynamic_cast< ::poi::ss::formula::eval::NumericValueEval* >(eval) != nullptr) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NA());
    }
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(eval) != nullptr) {
        auto se = java_cast< ::poi::ss::formula::eval::StringEval* >(eval);
        auto d = ::poi::ss::formula::eval::OperandResolver::parseDouble(npc(se)->getStringValue());
        if(d == nullptr) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
        }
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NA());
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected eval type ("_j)->append(static_cast< ::java::lang::Object* >(eval))
        ->append(u")"_j)->toString());
}

double poi::ss::formula::functions::Match::evaluateMatchTypeArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    auto match_type = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcCellRow, srcCellCol);
    if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(match_type) != nullptr) {
        throw new ::poi::ss::formula::eval::EvaluationException(java_cast< ::poi::ss::formula::eval::ErrorEval* >(match_type));
    }
    if(dynamic_cast< ::poi::ss::formula::eval::NumericValueEval* >(match_type) != nullptr) {
        auto ne = java_cast< ::poi::ss::formula::eval::NumericValueEval* >(match_type);
        return npc(ne)->getNumberValue();
    }
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(match_type) != nullptr) {
        auto se = java_cast< ::poi::ss::formula::eval::StringEval* >(match_type);
        auto d = ::poi::ss::formula::eval::OperandResolver::parseDouble(npc(se)->getStringValue());
        if(d == nullptr) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
        }
        return npc(d)->doubleValue();
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected match_type type ("_j)->append(npc(npc(match_type)->getClass())->getName())
        ->append(u")"_j)->toString());
}

int32_t poi::ss::formula::functions::Match::findIndexOfValue(::poi::ss::formula::eval::ValueEval* lookupValue, LookupUtils_ValueVector* lookupRange, bool matchExact, bool findLargestLessThanOrEqual) /* throws(EvaluationException) */
{
    clinit();
    auto lookupComparer = createLookupComparer(lookupValue, matchExact);
    auto size = npc(lookupRange)->getSize();
    if(matchExact) {
        for (auto i = int32_t(0); i < size; i++) {
            if(npc(npc(lookupComparer)->compareTo(npc(lookupRange)->getItem(i)))->isEqual()) {
                return i;
            }
        }
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NA());
    }
    if(findLargestLessThanOrEqual) {
        for (auto i = size - int32_t(1); i >= 0; i--) {
            auto cmp = npc(lookupComparer)->compareTo(npc(lookupRange)->getItem(i));
            if(npc(cmp)->isTypeMismatch()) {
                continue;
            }
            if(!npc(cmp)->isLessThan()) {
                return i;
            }
        }
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NA());
    }
    for (auto i = int32_t(0); i < size; i++) {
        auto cmp = npc(lookupComparer)->compareTo(npc(lookupRange)->getItem(i));
        if(npc(cmp)->isEqual()) {
            return i;
        }
        if(npc(cmp)->isGreaterThan()) {
            if(i < 1) {
                throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NA());
            }
            return i - int32_t(1);
        }
    }
    return size - int32_t(1);
}

poi::ss::formula::functions::LookupUtils_LookupValueComparer* poi::ss::formula::functions::Match::createLookupComparer(::poi::ss::formula::eval::ValueEval* lookupValue, bool matchExact)
{
    clinit();
    return LookupUtils::createLookupComparer(lookupValue, matchExact, true);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Match::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Match", 41);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Match::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Match::getClass0()
{
    return class_();
}


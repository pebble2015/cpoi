// Generated from /POI/java/org/apache/poi/ss/formula/functions/Baseifs.java
#include <org/apache/poi/ss/formula/functions/Baseifs.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/SheetRange.hpp>
#include <org/apache/poi/ss/formula/ThreeDEval.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils_I_MatchPredicate.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_ErrorMatcher.hpp>
#include <org/apache/poi/ss/formula/functions/Countif.hpp>
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
typedef ::SubArray< ::org::apache::poi::ss::formula::SheetRange, ::java::lang::ObjectArray > SheetRangeArray;

                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval
typedef ::SubArray< ::org::apache::poi::ss::formula::TwoDEval, ::java::lang::ObjectArray, ::org::apache::poi::ss::formula::eval::ValueEvalArray > TwoDEvalArray;
typedef ::SubArray< ::org::apache::poi::ss::formula::ThreeDEval, ::java::lang::ObjectArray, TwoDEvalArray, SheetRangeArray > ThreeDEvalArray;

                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::AreaEval, ::java::lang::ObjectArray, ::org::apache::poi::ss::formula::TwoDEvalArray, ::org::apache::poi::ss::formula::ThreeDEvalArray > AreaEvalArray;
                    } // eval

                    namespace functions
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::functions::CountUtils_I_MatchPredicate, ::java::lang::ObjectArray > CountUtils_I_MatchPredicateArray;
                    } // functions
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

org::apache::poi::ss::formula::functions::Baseifs::Baseifs(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Baseifs::Baseifs()
    : Baseifs(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Baseifs::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    auto const hasInitialRange = this->hasInitialRange();
    auto const firstCriteria = hasInitialRange ? int32_t(1) : int32_t(0);
    if(npc(args)->length < (int32_t(2) + firstCriteria) || npc(args)->length % int32_t(2) != firstCriteria) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    try {
        ::org::apache::poi::ss::formula::eval::AreaEval* sumRange = nullptr;
        if(hasInitialRange) {
            sumRange = convertRangeArg((*args)[int32_t(0)]);
        }
        auto ae = new ::org::apache::poi::ss::formula::eval::AreaEvalArray((npc(args)->length - firstCriteria) / int32_t(2));
        auto mp = new CountUtils_I_MatchPredicateArray(npc(ae)->length);
        for (int32_t i = firstCriteria, k = int32_t(0); i < npc(args)->length; i += 2, k++) {
            ae->set(k, convertRangeArg((*args)[i]));
            mp->set(k, Countif::createCriteriaPredicate((*args)[i + int32_t(1)], npc(ec)->getRowIndex(), npc(ec)->getColumnIndex()));
        }
        validateCriteriaRanges(sumRange, ae);
        validateCriteria(mp);
        auto result = aggregateMatchingCells(sumRange, ae, mp);
        return new ::org::apache::poi::ss::formula::eval::NumberEval(result);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

void org::apache::poi::ss::formula::functions::Baseifs::validateCriteriaRanges(::org::apache::poi::ss::formula::eval::AreaEval* sumRange, ::org::apache::poi::ss::formula::eval::AreaEvalArray* criteriaRanges) /* throws(EvaluationException) */
{
    clinit();
    auto h = npc((*criteriaRanges)[int32_t(0)])->getHeight();
    auto w = npc((*criteriaRanges)[int32_t(0)])->getWidth();
    if(sumRange != nullptr && (npc(sumRange)->getHeight() != h || npc(sumRange)->getWidth() != w)) {
        throw ::org::apache::poi::ss::formula::eval::EvaluationException::invalidValue();
    }
    for(auto r : *npc(criteriaRanges)) {
        if(npc(r)->getHeight() != h || npc(r)->getWidth() != w) {
            throw ::org::apache::poi::ss::formula::eval::EvaluationException::invalidValue();
        }
    }
}

void org::apache::poi::ss::formula::functions::Baseifs::validateCriteria(CountUtils_I_MatchPredicateArray* criteria) /* throws(EvaluationException) */
{
    clinit();
    for(auto predicate : *npc(criteria)) {
        if(dynamic_cast< Countif_ErrorMatcher* >(predicate) != nullptr) {
            throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::valueOf(npc((java_cast< Countif_ErrorMatcher* >(predicate)))->getValue()));
        }
    }
}

double org::apache::poi::ss::formula::functions::Baseifs::aggregateMatchingCells(::org::apache::poi::ss::formula::eval::AreaEval* sumRange, ::org::apache::poi::ss::formula::eval::AreaEvalArray* ranges, CountUtils_I_MatchPredicateArray* predicates)
{
    clinit();
    auto height = npc((*ranges)[int32_t(0)])->getHeight();
    auto width = npc((*ranges)[int32_t(0)])->getWidth();
    auto result = 0.0;
    for (auto r = int32_t(0); r < height; r++) {
        for (auto c = int32_t(0); c < width; c++) {
            auto matches = true;
            for (auto i = int32_t(0); i < npc(ranges)->length; i++) {
                auto aeRange = (*ranges)[i];
                auto mp = (*predicates)[i];
                if(mp == nullptr || !npc(mp)->matches(npc(aeRange)->getRelativeValue(r, c))) {
                    matches = false;
                    break;
                }
            }
            if(matches) {
                result += accumulate(sumRange, r, c);
            }
        }
    }
    return result;
}

double org::apache::poi::ss::formula::functions::Baseifs::accumulate(::org::apache::poi::ss::formula::eval::AreaEval* sumRange, int32_t relRowIndex, int32_t relColIndex)
{
    clinit();
    if(sumRange == nullptr)
        return 1.0;

    auto addend = npc(sumRange)->getRelativeValue(relRowIndex, relColIndex);
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(addend) != nullptr) {
        return npc((java_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(addend)))->getNumberValue();
    }
    return 0.0;
}

org::apache::poi::ss::formula::eval::AreaEval* org::apache::poi::ss::formula::functions::Baseifs::convertRangeArg(::org::apache::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::AreaEval* >(eval) != nullptr) {
        return java_cast< ::org::apache::poi::ss::formula::eval::AreaEval* >(eval);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::RefEval* >(eval) != nullptr) {
        return npc((java_cast< ::org::apache::poi::ss::formula::eval::RefEval* >(eval)))->offset(0, 0, 0, 0);
    }
    throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Baseifs::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Baseifs", 43);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Baseifs::getClass0()
{
    return class_();
}


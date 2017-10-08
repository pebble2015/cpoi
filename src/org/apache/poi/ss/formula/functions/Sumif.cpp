// Generated from /POI/java/org/apache/poi/ss/formula/functions/Sumif.java
#include <org/apache/poi/ss/formula/functions/Sumif.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils_I_MatchPredicate.hpp>
#include <org/apache/poi/ss/formula/functions/Countif.hpp>

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

poi::ss::formula::functions::Sumif::Sumif(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Sumif::Sumif()
    : Sumif(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Sumif::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    ::poi::ss::formula::eval::AreaEval* aeRange;
    try {
        aeRange = convertRangeArg(arg0);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return eval(srcRowIndex, srcColumnIndex, arg1, aeRange, aeRange);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Sumif::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    ::poi::ss::formula::eval::AreaEval* aeRange;
    ::poi::ss::formula::eval::AreaEval* aeSum;
    try {
        aeRange = convertRangeArg(arg0);
        aeSum = createSumRange(arg2, aeRange);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return eval(srcRowIndex, srcColumnIndex, arg1, aeRange, aeSum);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Sumif::eval(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::AreaEval* aeRange, ::poi::ss::formula::eval::AreaEval* aeSum)
{
    clinit();
    auto mp = Countif::createCriteriaPredicate(arg1, srcRowIndex, srcColumnIndex);
    if(mp == nullptr) {
        return ::poi::ss::formula::eval::NumberEval::ZERO();
    }
    auto result = sumMatchingCells(aeRange, mp, aeSum);
    return new ::poi::ss::formula::eval::NumberEval(result);
}

double poi::ss::formula::functions::Sumif::sumMatchingCells(::poi::ss::formula::eval::AreaEval* aeRange, CountUtils_I_MatchPredicate* mp, ::poi::ss::formula::eval::AreaEval* aeSum)
{
    clinit();
    auto height = npc(aeRange)->getHeight();
    auto width = npc(aeRange)->getWidth();
    auto result = 0.0;
    for (auto r = int32_t(0); r < height; r++) {
        for (auto c = int32_t(0); c < width; c++) {
            result += accumulate(aeRange, mp, aeSum, r, c);
        }
    }
    return result;
}

double poi::ss::formula::functions::Sumif::accumulate(::poi::ss::formula::eval::AreaEval* aeRange, CountUtils_I_MatchPredicate* mp, ::poi::ss::formula::eval::AreaEval* aeSum, int32_t relRowIndex, int32_t relColIndex)
{
    clinit();
    if(!npc(mp)->matches(npc(aeRange)->getRelativeValue(relRowIndex, relColIndex))) {
        return 0.0;
    }
    auto addend = npc(aeSum)->getRelativeValue(relRowIndex, relColIndex);
    if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(addend) != nullptr) {
        return npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(addend)))->getNumberValue();
    }
    return 0.0;
}

poi::ss::formula::eval::AreaEval* poi::ss::formula::functions::Sumif::createSumRange(::poi::ss::formula::eval::ValueEval* eval, ::poi::ss::formula::eval::AreaEval* aeRange) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::eval::AreaEval* >(eval) != nullptr) {
        return npc((java_cast< ::poi::ss::formula::eval::AreaEval* >(eval)))->offset(0, npc(aeRange)->getHeight() - int32_t(1), 0, npc(aeRange)->getWidth() - int32_t(1));
    }
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(eval) != nullptr) {
        return npc((java_cast< ::poi::ss::formula::eval::RefEval* >(eval)))->offset(0, npc(aeRange)->getHeight() - int32_t(1), 0, npc(aeRange)->getWidth() - int32_t(1));
    }
    throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
}

poi::ss::formula::eval::AreaEval* poi::ss::formula::functions::Sumif::convertRangeArg(::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::eval::AreaEval* >(eval) != nullptr) {
        return java_cast< ::poi::ss::formula::eval::AreaEval* >(eval);
    }
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(eval) != nullptr) {
        return npc((java_cast< ::poi::ss::formula::eval::RefEval* >(eval)))->offset(0, 0, 0, 0);
    }
    throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Sumif::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Sumif", 41);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Sumif::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Sumif::getClass0()
{
    return class_();
}


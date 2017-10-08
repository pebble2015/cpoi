// Generated from /POI/java/org/apache/poi/ss/formula/functions/TimeFunc.java
#include <org/apache/poi/ss/formula/functions/TimeFunc.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::TimeFunc::TimeFunc(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::TimeFunc::TimeFunc()
    : TimeFunc(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t poi::ss::formula::functions::TimeFunc::SECONDS_PER_MINUTE;

constexpr int32_t poi::ss::formula::functions::TimeFunc::SECONDS_PER_HOUR;

constexpr int32_t poi::ss::formula::functions::TimeFunc::HOURS_PER_DAY;

constexpr int32_t poi::ss::formula::functions::TimeFunc::SECONDS_PER_DAY;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::TimeFunc::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    double result;
    try {
        result = evaluate(evalArg(arg0, srcRowIndex, srcColumnIndex), evalArg(arg1, srcRowIndex, srcColumnIndex), evalArg(arg2, srcRowIndex, srcColumnIndex));
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::poi::ss::formula::eval::NumberEval(result);
}

int32_t poi::ss::formula::functions::TimeFunc::evalArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcRowIndex, int32_t srcColumnIndex) /* throws(EvaluationException) */
{
    clinit();
    if(arg == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::MissingArgEval::instance())) {
        return 0;
    }
    auto ev = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcRowIndex, srcColumnIndex);
    return ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(ev);
}

double poi::ss::formula::functions::TimeFunc::evaluate(int32_t hours, int32_t minutes, int32_t seconds) /* throws(EvaluationException) */
{
    clinit();
    if(hours > 32767 || minutes > 32767 || seconds > 32767) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
    }
    auto totalSeconds = hours * SECONDS_PER_HOUR + minutes * SECONDS_PER_MINUTE + seconds;
    if(totalSeconds < 0) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
    }
    return (totalSeconds % SECONDS_PER_DAY) / static_cast< double >(SECONDS_PER_DAY);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::TimeFunc::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.TimeFunc", 44);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::TimeFunc::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::TimeFunc::getClass0()
{
    return class_();
}


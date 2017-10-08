// Generated from /POI/java/org/apache/poi/ss/formula/functions/Choose.java
#include <org/apache/poi/ss/formula/functions/Choose.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::Choose::Choose(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Choose::Choose()
    : Choose(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Choose::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    if(npc(args)->length < 2) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    try {
        auto ix = evaluateFirstArg((*args)[int32_t(0)], srcRowIndex, srcColumnIndex);
        if(ix < 1 || ix >= npc(args)->length) {
            return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
        }
        auto result = ::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[ix], srcRowIndex, srcColumnIndex);
        if(result == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::MissingArgEval::instance())) {
            return ::poi::ss::formula::eval::BlankEval::instance();
        }
        return result;
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

int32_t poi::ss::formula::functions::Choose::evaluateFirstArg(::poi::ss::formula::eval::ValueEval* arg0, int32_t srcRowIndex, int32_t srcColumnIndex) /* throws(EvaluationException) */
{
    clinit();
    auto ev = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
    return ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(ev);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Choose::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Choose", 42);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Choose::getClass0()
{
    return class_();
}


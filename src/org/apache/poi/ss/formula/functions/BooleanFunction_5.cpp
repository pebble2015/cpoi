// Generated from /POI/java/org/apache/poi/ss/formula/functions/BooleanFunction.java
#include <org/apache/poi/ss/formula/functions/BooleanFunction_5.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
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

poi::ss::formula::functions::BooleanFunction_5::BooleanFunction_5()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::BooleanFunction_5::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0)
{
    bool boolArgVal;
    try {
        auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
        auto b = ::poi::ss::formula::eval::OperandResolver::coerceValueToBoolean(ve, false);
        boolArgVal = b == nullptr ? false : npc(b)->booleanValue();
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return ::poi::ss::formula::eval::BoolEval::valueOf(!boolArgVal);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::BooleanFunction_5::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::BooleanFunction_5::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::BooleanFunction_5::getClass0()
{
    return class_();
}


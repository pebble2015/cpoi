// Generated from /POI/java/org/apache/poi/ss/formula/functions/NumericFunction.java
#include <org/apache/poi/ss/formula/functions/NumericFunction_11.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>

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
                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval
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

org::apache::poi::ss::formula::functions::NumericFunction_11::NumericFunction_11()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::NumericFunction_11::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0)
{
    return evaluate(srcRowIndex, srcColumnIndex, arg0, static_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(NumericFunction::DOLLAR_ARG2_DEFAULT()));
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::NumericFunction_11::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1)
{
    double val;
    double d1;
    try {
        val = NumericFunction::singleOperandEvaluate(arg0, srcRowIndex, srcColumnIndex);
        d1 = NumericFunction::singleOperandEvaluate(arg1, srcRowIndex, srcColumnIndex);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    auto nPlaces = static_cast< int32_t >(d1);
    if(nPlaces > 127) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return new ::org::apache::poi::ss::formula::eval::NumberEval(val);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::NumericFunction_11::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::NumericFunction_11::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::NumericFunction_11::getClass0()
{
    return class_();
}


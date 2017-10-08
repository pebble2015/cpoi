// Generated from /POI/java/org/apache/poi/ss/formula/functions/NumericFunction.java
#include <org/apache/poi/ss/formula/functions/NumericFunction_27.hpp>

#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/MathX.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>

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

poi::ss::formula::functions::NumericFunction_27::NumericFunction_27()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

double poi::ss::formula::functions::NumericFunction_27::evaluate(double d0, double d1) /* throws(EvaluationException) */
{
    if(d1 == NumericFunction::ZERO) {
        if(d0 == NumericFunction::ZERO) {
            return NumericFunction::ZERO;
        }
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::DIV_ZERO());
    }
    return MathX::floor(d0, d1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::NumericFunction_27::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NumericFunction_27::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0, arg1);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NumericFunction_27::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::NumericFunction_27::getClass0()
{
    return class_();
}


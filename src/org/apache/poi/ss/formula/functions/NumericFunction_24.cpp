// Generated from /POI/java/org/apache/poi/ss/formula/functions/NumericFunction.java
#include <org/apache/poi/ss/formula/functions/NumericFunction_24.hpp>

#include <java/lang/Math.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
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

poi::ss::formula::functions::NumericFunction_24::NumericFunction_24()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

double poi::ss::formula::functions::NumericFunction_24::evaluate(double d0, double d1) /* throws(EvaluationException) */
{
    if(d0 == NumericFunction::ZERO && d1 == NumericFunction::ZERO) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::DIV_ZERO());
    }
    return ::java::lang::Math::atan2(d1, d0);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::NumericFunction_24::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NumericFunction_24::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0, arg1);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NumericFunction_24::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::NumericFunction_24::getClass0()
{
    return class_();
}


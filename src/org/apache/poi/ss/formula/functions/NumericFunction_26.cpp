// Generated from /POI/java/org/apache/poi/ss/formula/functions/NumericFunction.java
#include <org/apache/poi/ss/formula/functions/NumericFunction_26.hpp>

#include <java/lang/Integer.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/MathX.hpp>

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

org::apache::poi::ss::formula::functions::NumericFunction_26::NumericFunction_26()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

double org::apache::poi::ss::formula::functions::NumericFunction_26::evaluate(double d0, double d1) /* throws(EvaluationException) */
{
    if(d0 > ::java::lang::Integer::MAX_VALUE || d1 > ::java::lang::Integer::MAX_VALUE) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR());
    }
    return MathX::nChooseK(static_cast< int32_t >(d0), static_cast< int32_t >(d1));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::NumericFunction_26::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::NumericFunction_26::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0, arg1);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::NumericFunction_26::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::NumericFunction_26::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/ss/formula/eval/TwoOperandNumericOperation.java
#include <org/apache/poi/ss/formula/eval/TwoOperandNumericOperation_2.hpp>

#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

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

org::apache::poi::ss::formula::eval::TwoOperandNumericOperation_2::TwoOperandNumericOperation_2()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

double org::apache::poi::ss::formula::eval::TwoOperandNumericOperation_2::evaluate(double d0, double d1) /* throws(EvaluationException) */
{
    if(d1 == 0.0) {
        throw new EvaluationException(ErrorEval::DIV_ZERO());
    }
    return d0 / d1;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::TwoOperandNumericOperation_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::eval::TwoOperandNumericOperation_2::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0, ValueEval* arg1)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0, arg1);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::eval::TwoOperandNumericOperation_2::evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::eval::TwoOperandNumericOperation_2::getClass0()
{
    return class_();
}


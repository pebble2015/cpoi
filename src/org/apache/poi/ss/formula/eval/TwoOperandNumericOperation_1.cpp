// Generated from /POI/java/org/apache/poi/ss/formula/eval/TwoOperandNumericOperation.java
#include <org/apache/poi/ss/formula/eval/TwoOperandNumericOperation_1.hpp>

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

poi::ss::formula::eval::TwoOperandNumericOperation_1::TwoOperandNumericOperation_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

double poi::ss::formula::eval::TwoOperandNumericOperation_1::evaluate(double d0, double d1)
{
    return d0 + d1;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::TwoOperandNumericOperation_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::TwoOperandNumericOperation_1::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0, ValueEval* arg1)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0, arg1);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::TwoOperandNumericOperation_1::evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::eval::TwoOperandNumericOperation_1::getClass0()
{
    return class_();
}


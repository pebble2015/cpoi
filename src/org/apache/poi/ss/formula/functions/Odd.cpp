// Generated from /POI/java/org/apache/poi/ss/formula/functions/Odd.java
#include <org/apache/poi/ss/formula/functions/Odd.hpp>

#include <java/lang/Double.hpp>
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

poi::ss::formula::functions::Odd::Odd(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Odd::Odd()
    : Odd(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int64_t poi::ss::formula::functions::Odd::PARITY_MASK;

double poi::ss::formula::functions::Odd::evaluate(double d)
{
    if(d == 0) {
        return 1;
    }
    return (d > 0) ? calcOdd(d) : -calcOdd(-d);
}

int64_t poi::ss::formula::functions::Odd::calcOdd(double d)
{
    clinit();
    auto dpm1 = d + int32_t(1);
    auto x = (static_cast< int64_t >(dpm1)) & PARITY_MASK;
    return (::java::lang::Double::compare(x, dpm1) == 0) ? x - int32_t(1) : x + int32_t(1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Odd::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Odd", 39);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Odd::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Odd::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Odd::getClass0()
{
    return class_();
}


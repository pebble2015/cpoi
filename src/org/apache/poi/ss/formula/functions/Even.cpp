// Generated from /POI/java/org/apache/poi/ss/formula/functions/Even.java
#include <org/apache/poi/ss/formula/functions/Even.hpp>

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

poi::ss::formula::functions::Even::Even(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Even::Even()
    : Even(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int64_t poi::ss::formula::functions::Even::PARITY_MASK;

double poi::ss::formula::functions::Even::evaluate(double d)
{
    if(d == 0) {
        return 0;
    }
    int64_t result;
    if(d > 0) {
        result = calcEven(d);
    } else {
        result = -calcEven(-d);
    }
    return result;
}

int64_t poi::ss::formula::functions::Even::calcEven(double d)
{
    clinit();
    auto x = (static_cast< int64_t >(d)) & PARITY_MASK;
    if(x == d) {
        return x;
    }
    return x + int32_t(2);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Even::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Even", 40);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Even::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Even::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Even::getClass0()
{
    return class_();
}


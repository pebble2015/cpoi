// Generated from /POI/java/org/apache/poi/ss/formula/functions/BooleanFunction.java
#include <org/apache/poi/ss/formula/functions/BooleanFunction_1.hpp>

poi::ss::formula::functions::BooleanFunction_1::BooleanFunction_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

bool poi::ss::formula::functions::BooleanFunction_1::getInitialResultValue()
{
    return true;
}

bool poi::ss::formula::functions::BooleanFunction_1::partialEvaluate(bool cumulativeResult, bool currentValue)
{
    return cumulativeResult && currentValue;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::BooleanFunction_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::functions::BooleanFunction_1::getClass0()
{
    return class_();
}


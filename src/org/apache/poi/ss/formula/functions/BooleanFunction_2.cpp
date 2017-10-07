// Generated from /POI/java/org/apache/poi/ss/formula/functions/BooleanFunction.java
#include <org/apache/poi/ss/formula/functions/BooleanFunction_2.hpp>

org::apache::poi::ss::formula::functions::BooleanFunction_2::BooleanFunction_2()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

bool org::apache::poi::ss::formula::functions::BooleanFunction_2::getInitialResultValue()
{
    return false;
}

bool org::apache::poi::ss::formula::functions::BooleanFunction_2::partialEvaluate(bool cumulativeResult, bool currentValue)
{
    return cumulativeResult || currentValue;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::BooleanFunction_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::BooleanFunction_2::getClass0()
{
    return class_();
}


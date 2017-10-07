// Generated from /POI/java/org/apache/poi/ss/formula/functions/Count.java
#include <org/apache/poi/ss/formula/functions/Count_1.hpp>

#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

org::apache::poi::ss::formula::functions::Count_1::Count_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

bool org::apache::poi::ss::formula::functions::Count_1::matches(::org::apache::poi::ss::formula::eval::ValueEval* valueEval)
{
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(valueEval) != nullptr) {
        return true;
    }
    if(valueEval == static_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(::org::apache::poi::ss::formula::eval::MissingArgEval::instance())) {
        return true;
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Count_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Count_1::getClass0()
{
    return class_();
}


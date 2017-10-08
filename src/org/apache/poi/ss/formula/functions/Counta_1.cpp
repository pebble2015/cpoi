// Generated from /POI/java/org/apache/poi/ss/formula/functions/Counta.java
#include <org/apache/poi/ss/formula/functions/Counta_1.hpp>

#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

poi::ss::formula::functions::Counta_1::Counta_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

bool poi::ss::formula::functions::Counta_1::matches(::poi::ss::formula::eval::ValueEval* valueEval)
{
    if(valueEval == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance())) {
        return false;
    }
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Counta_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Counta_1::getClass0()
{
    return class_();
}


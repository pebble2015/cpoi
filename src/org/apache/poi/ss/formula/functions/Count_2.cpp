// Generated from /POI/java/org/apache/poi/ss/formula/functions/Count.java
#include <org/apache/poi/ss/formula/functions/Count_2.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/functions/Count.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils_I_MatchPredicate.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::Count_2::Count_2()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

bool org::apache::poi::ss::formula::functions::Count_2::matches(::org::apache::poi::ss::formula::eval::ValueEval* valueEval)
{
    return npc(Count::defaultPredicate())->matches(valueEval);
}

bool org::apache::poi::ss::formula::functions::Count_2::matches(::org::apache::poi::ss::formula::TwoDEval* areEval, int32_t rowIndex, int32_t columnIndex)
{
    return !npc(areEval)->isSubTotal(rowIndex, columnIndex);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Count_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Count_2::getClass0()
{
    return class_();
}


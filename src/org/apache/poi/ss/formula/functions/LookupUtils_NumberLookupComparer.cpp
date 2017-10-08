// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java
#include <org/apache/poi/ss/formula/functions/LookupUtils_NumberLookupComparer.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_CompareResult.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::LookupUtils_NumberLookupComparer::LookupUtils_NumberLookupComparer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::LookupUtils_NumberLookupComparer::LookupUtils_NumberLookupComparer(::poi::ss::formula::eval::NumberEval* ne) 
    : LookupUtils_NumberLookupComparer(*static_cast< ::default_init_tag* >(0))
{
    ctor(ne);
}

void poi::ss::formula::functions::LookupUtils_NumberLookupComparer::ctor(::poi::ss::formula::eval::NumberEval* ne)
{
    super::ctor(ne);
    _value = npc(ne)->getNumberValue();
}

poi::ss::formula::functions::LookupUtils_CompareResult* poi::ss::formula::functions::LookupUtils_NumberLookupComparer::compareSameType(::poi::ss::formula::eval::ValueEval* other)
{
    auto ne = java_cast< ::poi::ss::formula::eval::NumberEval* >(other);
    return LookupUtils_CompareResult::valueOf(::java::lang::Double::compare(_value, npc(ne)->getNumberValue()));
}

java::lang::String* poi::ss::formula::functions::LookupUtils_NumberLookupComparer::getValueAsString()
{
    return ::java::lang::String::valueOf(_value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LookupUtils_NumberLookupComparer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LookupUtils.NumberLookupComparer", 68);
    return c;
}

java::lang::Class* poi::ss::formula::functions::LookupUtils_NumberLookupComparer::getClass0()
{
    return class_();
}


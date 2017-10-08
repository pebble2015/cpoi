// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java
#include <org/apache/poi/ss/formula/functions/LookupUtils_BooleanLookupComparer.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
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

poi::ss::formula::functions::LookupUtils_BooleanLookupComparer::LookupUtils_BooleanLookupComparer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::LookupUtils_BooleanLookupComparer::LookupUtils_BooleanLookupComparer(::poi::ss::formula::eval::BoolEval* be) 
    : LookupUtils_BooleanLookupComparer(*static_cast< ::default_init_tag* >(0))
{
    ctor(be);
}

void poi::ss::formula::functions::LookupUtils_BooleanLookupComparer::ctor(::poi::ss::formula::eval::BoolEval* be)
{
    super::ctor(be);
    _value = npc(be)->getBooleanValue();
}

poi::ss::formula::functions::LookupUtils_CompareResult* poi::ss::formula::functions::LookupUtils_BooleanLookupComparer::compareSameType(::poi::ss::formula::eval::ValueEval* other)
{
    auto be = java_cast< ::poi::ss::formula::eval::BoolEval* >(other);
    auto otherVal = npc(be)->getBooleanValue();
    if(_value == otherVal) {
        return LookupUtils_CompareResult::EQUAL();
    }
    if(_value) {
        return LookupUtils_CompareResult::GREATER_THAN();
    }
    return LookupUtils_CompareResult::LESS_THAN();
}

java::lang::String* poi::ss::formula::functions::LookupUtils_BooleanLookupComparer::getValueAsString()
{
    return ::java::lang::String::valueOf(_value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LookupUtils_BooleanLookupComparer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LookupUtils.BooleanLookupComparer", 69);
    return c;
}

java::lang::Class* poi::ss::formula::functions::LookupUtils_BooleanLookupComparer::getClass0()
{
    return class_();
}


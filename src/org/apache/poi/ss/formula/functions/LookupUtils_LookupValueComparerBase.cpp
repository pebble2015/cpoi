// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java
#include <org/apache/poi/ss/formula/functions/LookupUtils_LookupValueComparerBase.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_CompareResult.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::LookupUtils_LookupValueComparerBase::LookupUtils_LookupValueComparerBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::LookupUtils_LookupValueComparerBase::LookupUtils_LookupValueComparerBase(::org::apache::poi::ss::formula::eval::ValueEval* targetValue) 
    : LookupUtils_LookupValueComparerBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(targetValue);
}

void org::apache::poi::ss::formula::functions::LookupUtils_LookupValueComparerBase::ctor(::org::apache::poi::ss::formula::eval::ValueEval* targetValue)
{
    super::ctor();
    if(targetValue == nullptr) {
        throw new ::java::lang::RuntimeException(u"targetValue cannot be null"_j);
    }
    _targetClass = npc(targetValue)->getClass();
}

org::apache::poi::ss::formula::functions::LookupUtils_CompareResult* org::apache::poi::ss::formula::functions::LookupUtils_LookupValueComparerBase::compareTo(::org::apache::poi::ss::formula::eval::ValueEval* other)
{
    if(other == nullptr) {
        throw new ::java::lang::RuntimeException(u"compare to value cannot be null"_j);
    }
    if(static_cast< ::java::lang::Object* >(_targetClass) != static_cast< ::java::lang::Object* >(npc(other)->getClass())) {
        return LookupUtils_CompareResult::TYPE_MISMATCH();
    }
    return compareSameType(other);
}

java::lang::String* org::apache::poi::ss::formula::functions::LookupUtils_LookupValueComparerBase::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u" ["_j)
        ->append(getValueAsString())
        ->append(u"]"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::LookupUtils_LookupValueComparerBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LookupUtils.LookupValueComparerBase", 71);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::LookupUtils_LookupValueComparerBase::getClass0()
{
    return class_();
}


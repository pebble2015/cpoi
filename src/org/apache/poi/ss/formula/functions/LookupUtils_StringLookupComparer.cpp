// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java
#include <org/apache/poi/ss/formula/functions/LookupUtils_StringLookupComparer.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_StringMatcher.hpp>
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

poi::ss::formula::functions::LookupUtils_StringLookupComparer::LookupUtils_StringLookupComparer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::LookupUtils_StringLookupComparer::LookupUtils_StringLookupComparer(::poi::ss::formula::eval::StringEval* se, bool matchExact, bool isMatchFunction) 
    : LookupUtils_StringLookupComparer(*static_cast< ::default_init_tag* >(0))
{
    ctor(se,matchExact,isMatchFunction);
}

void poi::ss::formula::functions::LookupUtils_StringLookupComparer::ctor(::poi::ss::formula::eval::StringEval* se, bool matchExact, bool isMatchFunction)
{
    super::ctor(se);
    _value = npc(se)->getStringValue();
    _wildCardPattern = Countif_StringMatcher::getWildCardPattern(_value);
    _matchExact = matchExact;
    _isMatchFunction = isMatchFunction;
}

poi::ss::formula::functions::LookupUtils_CompareResult* poi::ss::formula::functions::LookupUtils_StringLookupComparer::compareSameType(::poi::ss::formula::eval::ValueEval* other)
{
    auto se = java_cast< ::poi::ss::formula::eval::StringEval* >(other);
    auto stringValue = npc(se)->getStringValue();
    if(_wildCardPattern != nullptr) {
        auto matcher = npc(_wildCardPattern)->matcher(stringValue);
        auto matches = npc(matcher)->matches();
        if(_isMatchFunction || !_matchExact) {
            return LookupUtils_CompareResult::valueOf(matches);
        }
    }
    return LookupUtils_CompareResult::valueOf(npc(_value)->compareToIgnoreCase(stringValue));
}

java::lang::String* poi::ss::formula::functions::LookupUtils_StringLookupComparer::getValueAsString()
{
    return _value;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LookupUtils_StringLookupComparer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LookupUtils.StringLookupComparer", 68);
    return c;
}

java::lang::Class* poi::ss::formula::functions::LookupUtils_StringLookupComparer::getClass0()
{
    return class_();
}


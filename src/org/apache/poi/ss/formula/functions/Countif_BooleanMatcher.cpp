// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java
#include <org/apache/poi/ss/formula/functions/Countif_BooleanMatcher.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_CmpOp.hpp>

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

poi::ss::formula::functions::Countif_BooleanMatcher::Countif_BooleanMatcher(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Countif_BooleanMatcher::Countif_BooleanMatcher(bool value, Countif_CmpOp* operator_) 
    : Countif_BooleanMatcher(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,operator_);
}

void poi::ss::formula::functions::Countif_BooleanMatcher::ctor(bool value, Countif_CmpOp* operator_)
{
    super::ctor(operator_);
    _value = boolToInt(value);
}

java::lang::String* poi::ss::formula::functions::Countif_BooleanMatcher::getValueText()
{
    return _value == 1 ? u"TRUE"_j : u"FALSE"_j;
}

int32_t poi::ss::formula::functions::Countif_BooleanMatcher::boolToInt(bool value)
{
    clinit();
    return value ? int32_t(1) : int32_t(0);
}

bool poi::ss::formula::functions::Countif_BooleanMatcher::matches(::poi::ss::formula::eval::ValueEval* x)
{
    int32_t testValue;
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(x) != nullptr) {
        return false;
    } else if((dynamic_cast< ::poi::ss::formula::eval::BoolEval* >(x) != nullptr)) {
        auto be = java_cast< ::poi::ss::formula::eval::BoolEval* >(x);
        testValue = boolToInt(npc(be)->getBooleanValue());
    } else if((dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(x) != nullptr)) {
        switch (getCode()) {
        case Countif_CmpOp::NE:
            return true;
        default:
            return false;
        }

    } else if((dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(x) != nullptr)) {
        switch (getCode()) {
        case Countif_CmpOp::NE:
            return true;
        default:
            return false;
        }

    } else {
        return false;
    }
    return evaluate(testValue - _value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Countif_BooleanMatcher::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Countif.BooleanMatcher", 58);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Countif_BooleanMatcher::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java
#include <org/apache/poi/ss/formula/functions/Countif_ErrorMatcher.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>

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

org::apache::poi::ss::formula::functions::Countif_ErrorMatcher::Countif_ErrorMatcher(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Countif_ErrorMatcher::Countif_ErrorMatcher(int32_t errorCode, Countif_CmpOp* operator_) 
    : Countif_ErrorMatcher(*static_cast< ::default_init_tag* >(0))
{
    ctor(errorCode,operator_);
}

void org::apache::poi::ss::formula::functions::Countif_ErrorMatcher::ctor(int32_t errorCode, Countif_CmpOp* operator_)
{
    super::ctor(operator_);
    _value = errorCode;
}

java::lang::String* org::apache::poi::ss::formula::functions::Countif_ErrorMatcher::getValueText()
{
    return npc(::org::apache::poi::ss::usermodel::FormulaError::forInt(_value))->getString();
}

bool org::apache::poi::ss::formula::functions::Countif_ErrorMatcher::matches(::org::apache::poi::ss::formula::eval::ValueEval* x)
{
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::ErrorEval* >(x) != nullptr) {
        auto testValue = npc((java_cast< ::org::apache::poi::ss::formula::eval::ErrorEval* >(x)))->getErrorCode();
        return evaluate(testValue - _value);
    }
    return false;
}

int32_t org::apache::poi::ss::formula::functions::Countif_ErrorMatcher::getValue()
{
    return _value;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Countif_ErrorMatcher::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Countif.ErrorMatcher", 56);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Countif_ErrorMatcher::getClass0()
{
    return class_();
}


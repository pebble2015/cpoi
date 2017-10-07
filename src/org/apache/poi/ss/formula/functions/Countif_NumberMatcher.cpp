// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java
#include <org/apache/poi/ss/formula/functions/Countif_NumberMatcher.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
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

org::apache::poi::ss::formula::functions::Countif_NumberMatcher::Countif_NumberMatcher(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Countif_NumberMatcher::Countif_NumberMatcher(double value, Countif_CmpOp* operator_) 
    : Countif_NumberMatcher(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,operator_);
}

void org::apache::poi::ss::formula::functions::Countif_NumberMatcher::ctor(double value, Countif_CmpOp* operator_)
{
    super::ctor(operator_);
    _value = value;
}

java::lang::String* org::apache::poi::ss::formula::functions::Countif_NumberMatcher::getValueText()
{
    return ::java::lang::String::valueOf(_value);
}

bool org::apache::poi::ss::formula::functions::Countif_NumberMatcher::matches(::org::apache::poi::ss::formula::eval::ValueEval* x)
{
    double testValue;
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::StringEval* >(x) != nullptr) {
        switch (getCode()) {
        case Countif_CmpOp::EQ:
        case Countif_CmpOp::NONE:
            break;
        case Countif_CmpOp::NE:
            return true;
        default:
            return false;
        }

        auto se = java_cast< ::org::apache::poi::ss::formula::eval::StringEval* >(x);
        auto val = ::org::apache::poi::ss::formula::eval::OperandResolver::parseDouble(npc(se)->getStringValue());
        if(val == nullptr) {
            return false;
        }
        return _value == npc(val)->doubleValue();
    } else if((dynamic_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(x) != nullptr)) {
        auto ne = java_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(x);
        testValue = npc(ne)->getNumberValue();
    } else if((dynamic_cast< ::org::apache::poi::ss::formula::eval::BlankEval* >(x) != nullptr)) {
        switch (getCode()) {
        case Countif_CmpOp::NE:
            return true;
        default:
            return false;
        }

    } else {
        return false;
    }
    return evaluate(::java::lang::Double::compare(testValue, _value));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Countif_NumberMatcher::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Countif.NumberMatcher", 57);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Countif_NumberMatcher::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/ss/formula/functions/DMin.java
#include <org/apache/poi/ss/formula/functions/DMin.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumericValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

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

poi::ss::formula::functions::DMin::DMin(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::DMin::DMin()
    : DMin(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool poi::ss::formula::functions::DMin::processMatch(::poi::ss::formula::eval::ValueEval* eval)
{
    if(dynamic_cast< ::poi::ss::formula::eval::NumericValueEval* >(eval) != nullptr) {
        if(minimumValue == nullptr) {
            minimumValue = eval;
        } else {
            auto currentValue = npc((java_cast< ::poi::ss::formula::eval::NumericValueEval* >(eval)))->getNumberValue();
            auto oldValue = npc((java_cast< ::poi::ss::formula::eval::NumericValueEval* >(minimumValue)))->getNumberValue();
            if(currentValue < oldValue) {
                minimumValue = eval;
            }
        }
    }
    return true;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::DMin::getResult()
{
    if(minimumValue == nullptr) {
        return ::poi::ss::formula::eval::NumberEval::ZERO();
    } else {
        return minimumValue;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::DMin::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.DMin", 40);
    return c;
}

java::lang::Class* poi::ss::formula::functions::DMin::getClass0()
{
    return class_();
}


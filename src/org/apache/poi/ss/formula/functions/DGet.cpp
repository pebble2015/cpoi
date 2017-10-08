// Generated from /POI/java/org/apache/poi/ss/formula/functions/DGet.java
#include <org/apache/poi/ss/formula/functions/DGet.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::DGet::DGet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::DGet::DGet()
    : DGet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool poi::ss::formula::functions::DGet::processMatch(::poi::ss::formula::eval::ValueEval* eval)
{
    if(result == nullptr) {
        result = eval;
    } else {
        if(dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(result) != nullptr) {
            result = eval;
        } else {
            if(!(dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(eval) != nullptr)) {
                result = ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
                return false;
            }
        }
    }
    return true;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::DGet::getResult()
{
    if(result == nullptr) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    } else if(dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(result) != nullptr) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    } else
        try {
            if(npc(::poi::ss::formula::eval::OperandResolver::coerceValueToString(::poi::ss::formula::eval::OperandResolver::getSingleValue(result, 0, 0)))->equals(static_cast< ::java::lang::Object* >(u""_j))) {
                return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
            } else {
                return result;
            }
        } catch (::poi::ss::formula::eval::EvaluationException* e) {
            return npc(e)->getErrorEval();
        }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::DGet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.DGet", 40);
    return c;
}

java::lang::Class* poi::ss::formula::functions::DGet::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/ss/formula/functions/Rept.java
#include <org/apache/poi/ss/formula/functions/Rept.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::Rept::Rept(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Rept::Rept()
    : Rept(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Rept::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* text, ::org::apache::poi::ss::formula::eval::ValueEval* number_times)
{
    ::org::apache::poi::ss::formula::eval::ValueEval* veText1;
    try {
        veText1 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(text, srcRowIndex, srcColumnIndex);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    auto strText1 = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToString(veText1);
    double numberOfTime = int32_t(0);
    try {
        numberOfTime = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(number_times);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto numberOfTimeInt = static_cast< int32_t >(numberOfTime);
    auto strb = new ::java::lang::StringBuffer(npc(strText1)->length() * numberOfTimeInt);
    for (auto i = int32_t(0); i < numberOfTimeInt; i++) {
        npc(strb)->append(strText1);
    }
    if(npc(npc(strb)->toString())->length() > 32767) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return new ::org::apache::poi::ss::formula::eval::StringEval(npc(strb)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Rept::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Rept", 40);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Rept::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::Rept::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/ss/formula/functions/Delta.java
#include <org/apache/poi/ss/formula/functions/Delta.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigDecimal.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

org::apache::poi::ss::formula::functions::Delta::Delta(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Delta::Delta()
    : Delta(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::functions::Delta::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::functions::Delta::instance_;

org::apache::poi::ss::formula::eval::NumberEval*& org::apache::poi::ss::formula::functions::Delta::ONE()
{
    clinit();
    return ONE_;
}
org::apache::poi::ss::formula::eval::NumberEval* org::apache::poi::ss::formula::functions::Delta::ONE_;

org::apache::poi::ss::formula::eval::NumberEval*& org::apache::poi::ss::formula::functions::Delta::ZERO()
{
    clinit();
    return ZERO_;
}
org::apache::poi::ss::formula::eval::NumberEval* org::apache::poi::ss::formula::functions::Delta::ZERO_;

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Delta::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2)
{
    ::org::apache::poi::ss::formula::eval::ValueEval* veText1;
    try {
        veText1 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(arg1, srcRowIndex, srcColumnIndex);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    auto strText1 = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToString(veText1);
    auto number1 = ::org::apache::poi::ss::formula::eval::OperandResolver::parseDouble(strText1);
    if(number1 == nullptr) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    ::org::apache::poi::ss::formula::eval::ValueEval* veText2;
    try {
        veText2 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(arg2, srcRowIndex, srcColumnIndex);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    auto strText2 = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToString(veText2);
    auto number2 = ::org::apache::poi::ss::formula::eval::OperandResolver::parseDouble(strText2);
    if(number2 == nullptr) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto result = (new ::java::math::BigDecimal(npc(number1)->doubleValue()))->compareTo(new ::java::math::BigDecimal(npc(number2)->doubleValue()));
    return result == 0 ? static_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(ONE_) : static_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(ZERO_);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Delta::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length == 2) {
        return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)], (*args)[int32_t(1)]);
    }
    return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Delta::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Delta", 41);
    return c;
}

void org::apache::poi::ss::formula::functions::Delta::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new Delta();
        ONE_ = new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(int32_t(1)));
        ZERO_ = new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(int32_t(0)));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Delta::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::Delta::getClass0()
{
    return class_();
}


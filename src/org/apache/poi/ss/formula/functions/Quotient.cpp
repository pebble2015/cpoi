// Generated from /POI/java/org/apache/poi/ss/formula/functions/Quotient.java
#include <org/apache/poi/ss/formula/functions/Quotient.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
            } // eval
        } // formula
    } // ss
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::Quotient::Quotient(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Quotient::Quotient()
    : Quotient(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::functions::Quotient::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::functions::Quotient::instance_;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Quotient::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* venumerator, ::poi::ss::formula::eval::ValueEval* vedenominator)
{
    double enumerator = int32_t(0);
    try {
        enumerator = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(venumerator);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    double denominator = int32_t(0);
    try {
        denominator = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(vedenominator);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(denominator == 0) {
        return ::poi::ss::formula::eval::ErrorEval::DIV_ZERO();
    }
    return new ::poi::ss::formula::eval::NumberEval(static_cast< double >(static_cast< int32_t >((enumerator / denominator))));
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Quotient::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length != 2) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)], (*args)[int32_t(1)]);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Quotient::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Quotient", 44);
    return c;
}

void poi::ss::formula::functions::Quotient::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new Quotient();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Quotient::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Quotient::getClass0()
{
    return class_();
}


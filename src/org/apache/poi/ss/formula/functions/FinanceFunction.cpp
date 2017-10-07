// Generated from /POI/java/org/apache/poi/ss/formula/functions/FinanceFunction.java
#include <org/apache/poi/ss/formula/functions/FinanceFunction.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/FinanceFunction_1.hpp>
#include <org/apache/poi/ss/formula/functions/FinanceFunction_2.hpp>
#include <org/apache/poi/ss/formula/functions/FinanceFunction_3.hpp>
#include <org/apache/poi/ss/formula/functions/FinanceFunction_4.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>
#include <Array.hpp>
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

org::apache::poi::ss::formula::functions::FinanceFunction::FinanceFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::FinanceFunction::FinanceFunction() 
    : FinanceFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval*& org::apache::poi::ss::formula::functions::FinanceFunction::DEFAULT_ARG3()
{
    clinit();
    return DEFAULT_ARG3_;
}
org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::FinanceFunction::DEFAULT_ARG3_;

org::apache::poi::ss::formula::eval::ValueEval*& org::apache::poi::ss::formula::functions::FinanceFunction::DEFAULT_ARG4()
{
    clinit();
    return DEFAULT_ARG4_;
}
org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::FinanceFunction::DEFAULT_ARG4_;

void org::apache::poi::ss::formula::functions::FinanceFunction::ctor()
{
    super::ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::FinanceFunction::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2)
{
    return evaluate(srcRowIndex, srcColumnIndex, arg0, arg1, arg2, DEFAULT_ARG3_);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::FinanceFunction::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2, ::org::apache::poi::ss::formula::eval::ValueEval* arg3)
{
    return evaluate(srcRowIndex, srcColumnIndex, arg0, arg1, arg2, arg3, DEFAULT_ARG4_);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::FinanceFunction::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2, ::org::apache::poi::ss::formula::eval::ValueEval* arg3, ::org::apache::poi::ss::formula::eval::ValueEval* arg4)
{
    double result;
    try {
        auto d0 = NumericFunction::singleOperandEvaluate(arg0, srcRowIndex, srcColumnIndex);
        auto d1 = NumericFunction::singleOperandEvaluate(arg1, srcRowIndex, srcColumnIndex);
        auto d2 = NumericFunction::singleOperandEvaluate(arg2, srcRowIndex, srcColumnIndex);
        auto d3 = NumericFunction::singleOperandEvaluate(arg3, srcRowIndex, srcColumnIndex);
        auto d4 = NumericFunction::singleOperandEvaluate(arg4, srcRowIndex, srcColumnIndex);
        result = evaluate(d0, d1, d2, d3, d4 != 0.0);
        NumericFunction::checkValue(result);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::org::apache::poi::ss::formula::eval::NumberEval(result);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::FinanceFunction::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    switch (npc(args)->length) {
    case int32_t(3):
        return evaluate(srcRowIndex, srcColumnIndex, (*args)[int32_t(0)], (*args)[int32_t(1)], (*args)[int32_t(2)], DEFAULT_ARG3_, DEFAULT_ARG4_);
    case int32_t(4): {
            auto arg3 = (*args)[int32_t(3)];
            if(arg3 == static_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(::org::apache::poi::ss::formula::eval::MissingArgEval::instance())) {
                arg3 = DEFAULT_ARG3_;
            }
            return evaluate(srcRowIndex, srcColumnIndex, (*args)[int32_t(0)], (*args)[int32_t(1)], (*args)[int32_t(2)], arg3, DEFAULT_ARG4_);
        }
    case int32_t(5): {
            auto arg3 = (*args)[int32_t(3)];
            if(arg3 == static_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(::org::apache::poi::ss::formula::eval::MissingArgEval::instance())) {
                arg3 = DEFAULT_ARG3_;
            }
            auto arg4 = (*args)[int32_t(4)];
            if(arg4 == static_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(::org::apache::poi::ss::formula::eval::MissingArgEval::instance())) {
                arg4 = DEFAULT_ARG4_;
            }
            return evaluate(srcRowIndex, srcColumnIndex, (*args)[int32_t(0)], (*args)[int32_t(1)], (*args)[int32_t(2)], arg3, arg4);
        }
    default:
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }

}

double org::apache::poi::ss::formula::functions::FinanceFunction::evaluate(::doubleArray* ds) /* throws(EvaluationException) */
{
    auto arg3 = 0.0;
    auto arg4 = 0.0;
    switch (npc(ds)->length) {
    case int32_t(5):
        arg4 = (*ds)[int32_t(4)];
    case int32_t(4):
        arg3 = (*ds)[int32_t(3)];
    case int32_t(3):
        break;
    default:
        throw new ::java::lang::IllegalStateException(u"Wrong number of arguments"_j);
    }

    return evaluate((*ds)[int32_t(0)], (*ds)[int32_t(1)], (*ds)[int32_t(2)], arg3, arg4 != 0.0);
}

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::FinanceFunction::FV()
{
    clinit();
    return FV_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::FinanceFunction::FV_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::FinanceFunction::NPER()
{
    clinit();
    return NPER_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::FinanceFunction::NPER_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::FinanceFunction::PMT()
{
    clinit();
    return PMT_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::FinanceFunction::PMT_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::FinanceFunction::PV()
{
    clinit();
    return PV_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::FinanceFunction::PV_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::FinanceFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.FinanceFunction", 51);
    return c;
}

void org::apache::poi::ss::formula::functions::FinanceFunction::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DEFAULT_ARG3_ = ::org::apache::poi::ss::formula::eval::NumberEval::ZERO();
        DEFAULT_ARG4_ = ::org::apache::poi::ss::formula::eval::BoolEval::FALSE();
        FV_ = new FinanceFunction_1();
        NPER_ = new FinanceFunction_2();
        PMT_ = new FinanceFunction_3();
        PV_ = new FinanceFunction_4();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::functions::FinanceFunction::getClass0()
{
    return class_();
}


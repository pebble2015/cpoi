// Generated from /POI/java/org/apache/poi/ss/formula/functions/NumericFunction.java
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_33.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_34.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_35.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_36.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_1.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_2.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_3.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_4.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_5.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_6.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_7.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_8.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_9.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_10.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_11.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_12.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_13.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_14.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_15.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_16.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_17.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_18.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_19.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_20.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_21.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_22.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_23.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_24.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_25.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_26.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_27.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_28.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_29.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_30.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_31.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_32.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_Log.hpp>

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

org::apache::poi::ss::formula::functions::NumericFunction::NumericFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::NumericFunction::NumericFunction()
    : NumericFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr double org::apache::poi::ss::formula::functions::NumericFunction::ZERO;

constexpr double org::apache::poi::ss::formula::functions::NumericFunction::TEN;

double& org::apache::poi::ss::formula::functions::NumericFunction::LOG_10_TO_BASE_e()
{
    clinit();
    return LOG_10_TO_BASE_e_;
}
double org::apache::poi::ss::formula::functions::NumericFunction::LOG_10_TO_BASE_e_;

double org::apache::poi::ss::formula::functions::NumericFunction::singleOperandEvaluate(::org::apache::poi::ss::formula::eval::ValueEval* arg, int32_t srcRowIndex, int32_t srcColumnIndex) /* throws(EvaluationException) */
{
    clinit();
    if(arg == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"arg must not be null"_j);
    }
    auto ve = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcRowIndex, srcColumnIndex);
    auto result = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(ve);
    checkValue(result);
    return result;
}

void org::apache::poi::ss::formula::functions::NumericFunction::checkValue(double result) /* throws(EvaluationException) */
{
    clinit();
    if(::java::lang::Double::isNaN(result) || ::java::lang::Double::isInfinite(result)) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR());
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::NumericFunction::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    double result;
    try {
        result = eval(args, srcCellRow, srcCellCol);
        checkValue(result);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::org::apache::poi::ss::formula::eval::NumberEval(result);
}

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::ABS()
{
    clinit();
    return ABS_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::ABS_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::ACOS()
{
    clinit();
    return ACOS_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::ACOS_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::ACOSH()
{
    clinit();
    return ACOSH_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::ACOSH_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::ASIN()
{
    clinit();
    return ASIN_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::ASIN_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::ASINH()
{
    clinit();
    return ASINH_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::ASINH_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::ATAN()
{
    clinit();
    return ATAN_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::ATAN_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::ATANH()
{
    clinit();
    return ATANH_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::ATANH_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::COS()
{
    clinit();
    return COS_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::COS_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::COSH()
{
    clinit();
    return COSH_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::COSH_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::DEGREES()
{
    clinit();
    return DEGREES_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::DEGREES_;

org::apache::poi::ss::formula::eval::NumberEval*& org::apache::poi::ss::formula::functions::NumericFunction::DOLLAR_ARG2_DEFAULT()
{
    clinit();
    return DOLLAR_ARG2_DEFAULT_;
}
org::apache::poi::ss::formula::eval::NumberEval* org::apache::poi::ss::formula::functions::NumericFunction::DOLLAR_ARG2_DEFAULT_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::DOLLAR()
{
    clinit();
    return DOLLAR_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::DOLLAR_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::EXP()
{
    clinit();
    return EXP_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::EXP_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::FACT()
{
    clinit();
    return FACT_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::FACT_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::INT()
{
    clinit();
    return INT_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::INT_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::LN()
{
    clinit();
    return LN_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::LN_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::LOG10()
{
    clinit();
    return LOG10_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::LOG10_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::RADIANS()
{
    clinit();
    return RADIANS_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::RADIANS_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::SIGN()
{
    clinit();
    return SIGN_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::SIGN_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::SIN()
{
    clinit();
    return SIN_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::SIN_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::SINH()
{
    clinit();
    return SINH_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::SINH_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::SQRT()
{
    clinit();
    return SQRT_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::SQRT_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::TAN()
{
    clinit();
    return TAN_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::TAN_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::TANH()
{
    clinit();
    return TANH_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::TANH_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::ATAN2()
{
    clinit();
    return ATAN2_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::ATAN2_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::CEILING()
{
    clinit();
    return CEILING_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::CEILING_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::COMBIN()
{
    clinit();
    return COMBIN_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::COMBIN_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::FLOOR()
{
    clinit();
    return FLOOR_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::FLOOR_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::MOD()
{
    clinit();
    return MOD_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::MOD_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::POWER()
{
    clinit();
    return POWER_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::POWER_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::ROUND()
{
    clinit();
    return ROUND_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::ROUND_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::ROUNDDOWN()
{
    clinit();
    return ROUNDDOWN_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::ROUNDDOWN_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::ROUNDUP()
{
    clinit();
    return ROUNDUP_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::ROUNDUP_;

org::apache::poi::ss::formula::eval::NumberEval*& org::apache::poi::ss::formula::functions::NumericFunction::TRUNC_ARG2_DEFAULT()
{
    clinit();
    return TRUNC_ARG2_DEFAULT_;
}
org::apache::poi::ss::formula::eval::NumberEval* org::apache::poi::ss::formula::functions::NumericFunction::TRUNC_ARG2_DEFAULT_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::TRUNC()
{
    clinit();
    return TRUNC_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::TRUNC_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::LOG()
{
    clinit();
    return LOG_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::LOG_;

org::apache::poi::ss::formula::eval::NumberEval*& org::apache::poi::ss::formula::functions::NumericFunction::PI_EVAL()
{
    clinit();
    return PI_EVAL_;
}
org::apache::poi::ss::formula::eval::NumberEval* org::apache::poi::ss::formula::functions::NumericFunction::PI_EVAL_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::PI()
{
    clinit();
    return PI_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::PI_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::RAND()
{
    clinit();
    return RAND_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::RAND_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::NumericFunction::POISSON()
{
    clinit();
    return POISSON_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::NumericFunction::POISSON_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::NumericFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.NumericFunction", 51);
    return c;
}

void org::apache::poi::ss::formula::functions::NumericFunction::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_10_TO_BASE_e_ = ::java::lang::Math::log(TEN);
        ABS_ = new NumericFunction_1();
        ACOS_ = new NumericFunction_2();
        ACOSH_ = new NumericFunction_3();
        ASIN_ = new NumericFunction_4();
        ASINH_ = new NumericFunction_5();
        ATAN_ = new NumericFunction_6();
        ATANH_ = new NumericFunction_7();
        COS_ = new NumericFunction_8();
        COSH_ = new NumericFunction_9();
        DEGREES_ = new NumericFunction_10();
        DOLLAR_ARG2_DEFAULT_ = new ::org::apache::poi::ss::formula::eval::NumberEval(2.0);
        DOLLAR_ = new NumericFunction_11();
        EXP_ = new NumericFunction_12();
        FACT_ = new NumericFunction_13();
        INT_ = new NumericFunction_14();
        LN_ = new NumericFunction_15();
        LOG10_ = new NumericFunction_16();
        RADIANS_ = new NumericFunction_17();
        SIGN_ = new NumericFunction_18();
        SIN_ = new NumericFunction_19();
        SINH_ = new NumericFunction_20();
        SQRT_ = new NumericFunction_21();
        TAN_ = new NumericFunction_22();
        TANH_ = new NumericFunction_23();
        ATAN2_ = new NumericFunction_24();
        CEILING_ = new NumericFunction_25();
        COMBIN_ = new NumericFunction_26();
        FLOOR_ = new NumericFunction_27();
        MOD_ = new NumericFunction_28();
        POWER_ = new NumericFunction_29();
        ROUND_ = new NumericFunction_30();
        ROUNDDOWN_ = new NumericFunction_31();
        ROUNDUP_ = new NumericFunction_32();
        TRUNC_ARG2_DEFAULT_ = new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(int32_t(0)));
        TRUNC_ = new NumericFunction_33();
        LOG_ = new NumericFunction_Log();
        PI_EVAL_ = new ::org::apache::poi::ss::formula::eval::NumberEval(::java::lang::Math::PI);
        PI_ = new NumericFunction_34();
        RAND_ = new NumericFunction_35();
        POISSON_ = new NumericFunction_36();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::functions::NumericFunction::getClass0()
{
    return class_();
}


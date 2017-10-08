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

poi::ss::formula::functions::NumericFunction::NumericFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::NumericFunction::NumericFunction()
    : NumericFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr double poi::ss::formula::functions::NumericFunction::ZERO;

constexpr double poi::ss::formula::functions::NumericFunction::TEN;

double& poi::ss::formula::functions::NumericFunction::LOG_10_TO_BASE_e()
{
    clinit();
    return LOG_10_TO_BASE_e_;
}
double poi::ss::formula::functions::NumericFunction::LOG_10_TO_BASE_e_;

double poi::ss::formula::functions::NumericFunction::singleOperandEvaluate(::poi::ss::formula::eval::ValueEval* arg, int32_t srcRowIndex, int32_t srcColumnIndex) /* throws(EvaluationException) */
{
    clinit();
    if(arg == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"arg must not be null"_j);
    }
    auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcRowIndex, srcColumnIndex);
    auto result = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(ve);
    checkValue(result);
    return result;
}

void poi::ss::formula::functions::NumericFunction::checkValue(double result) /* throws(EvaluationException) */
{
    clinit();
    if(::java::lang::Double::isNaN(result) || ::java::lang::Double::isInfinite(result)) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NUM_ERROR());
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NumericFunction::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    double result;
    try {
        result = eval(args, srcCellRow, srcCellCol);
        checkValue(result);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::poi::ss::formula::eval::NumberEval(result);
}

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::ABS()
{
    clinit();
    return ABS_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::ABS_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::ACOS()
{
    clinit();
    return ACOS_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::ACOS_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::ACOSH()
{
    clinit();
    return ACOSH_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::ACOSH_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::ASIN()
{
    clinit();
    return ASIN_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::ASIN_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::ASINH()
{
    clinit();
    return ASINH_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::ASINH_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::ATAN()
{
    clinit();
    return ATAN_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::ATAN_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::ATANH()
{
    clinit();
    return ATANH_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::ATANH_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::COS()
{
    clinit();
    return COS_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::COS_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::COSH()
{
    clinit();
    return COSH_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::COSH_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::DEGREES()
{
    clinit();
    return DEGREES_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::DEGREES_;

poi::ss::formula::eval::NumberEval*& poi::ss::formula::functions::NumericFunction::DOLLAR_ARG2_DEFAULT()
{
    clinit();
    return DOLLAR_ARG2_DEFAULT_;
}
poi::ss::formula::eval::NumberEval* poi::ss::formula::functions::NumericFunction::DOLLAR_ARG2_DEFAULT_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::DOLLAR()
{
    clinit();
    return DOLLAR_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::DOLLAR_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::EXP()
{
    clinit();
    return EXP_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::EXP_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::FACT()
{
    clinit();
    return FACT_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::FACT_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::INT()
{
    clinit();
    return INT_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::INT_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::LN()
{
    clinit();
    return LN_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::LN_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::LOG10()
{
    clinit();
    return LOG10_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::LOG10_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::RADIANS()
{
    clinit();
    return RADIANS_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::RADIANS_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::SIGN()
{
    clinit();
    return SIGN_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::SIGN_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::SIN()
{
    clinit();
    return SIN_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::SIN_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::SINH()
{
    clinit();
    return SINH_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::SINH_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::SQRT()
{
    clinit();
    return SQRT_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::SQRT_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::TAN()
{
    clinit();
    return TAN_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::TAN_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::TANH()
{
    clinit();
    return TANH_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::TANH_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::ATAN2()
{
    clinit();
    return ATAN2_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::ATAN2_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::CEILING()
{
    clinit();
    return CEILING_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::CEILING_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::COMBIN()
{
    clinit();
    return COMBIN_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::COMBIN_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::FLOOR()
{
    clinit();
    return FLOOR_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::FLOOR_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::MOD()
{
    clinit();
    return MOD_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::MOD_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::POWER()
{
    clinit();
    return POWER_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::POWER_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::ROUND()
{
    clinit();
    return ROUND_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::ROUND_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::ROUNDDOWN()
{
    clinit();
    return ROUNDDOWN_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::ROUNDDOWN_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::ROUNDUP()
{
    clinit();
    return ROUNDUP_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::ROUNDUP_;

poi::ss::formula::eval::NumberEval*& poi::ss::formula::functions::NumericFunction::TRUNC_ARG2_DEFAULT()
{
    clinit();
    return TRUNC_ARG2_DEFAULT_;
}
poi::ss::formula::eval::NumberEval* poi::ss::formula::functions::NumericFunction::TRUNC_ARG2_DEFAULT_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::TRUNC()
{
    clinit();
    return TRUNC_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::TRUNC_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::LOG()
{
    clinit();
    return LOG_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::LOG_;

poi::ss::formula::eval::NumberEval*& poi::ss::formula::functions::NumericFunction::PI_EVAL()
{
    clinit();
    return PI_EVAL_;
}
poi::ss::formula::eval::NumberEval* poi::ss::formula::functions::NumericFunction::PI_EVAL_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::PI()
{
    clinit();
    return PI_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::PI_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::RAND()
{
    clinit();
    return RAND_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::RAND_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::NumericFunction::POISSON()
{
    clinit();
    return POISSON_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::NumericFunction::POISSON_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::NumericFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.NumericFunction", 51);
    return c;
}

void poi::ss::formula::functions::NumericFunction::clinit()
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
        DOLLAR_ARG2_DEFAULT_ = new ::poi::ss::formula::eval::NumberEval(2.0);
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
        TRUNC_ARG2_DEFAULT_ = new ::poi::ss::formula::eval::NumberEval(static_cast< double >(int32_t(0)));
        TRUNC_ = new NumericFunction_33();
        LOG_ = new NumericFunction_Log();
        PI_EVAL_ = new ::poi::ss::formula::eval::NumberEval(::java::lang::Math::PI);
        PI_ = new NumericFunction_34();
        RAND_ = new NumericFunction_35();
        POISSON_ = new NumericFunction_36();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::NumericFunction::getClass0()
{
    return class_();
}


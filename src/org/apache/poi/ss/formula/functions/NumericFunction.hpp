// Generated from /POI/java/org/apache/poi/ss/formula/functions/NumericFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function.hpp>

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

struct default_init_tag;

class org::apache::poi::ss::formula::functions::NumericFunction
    : public virtual ::java::lang::Object
    , public virtual Function
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static constexpr double ZERO { 0.0 };
    static constexpr double TEN { 10.0 };

private:
    static double LOG_10_TO_BASE_e_;

public: /* protected */
    static double singleOperandEvaluate(::org::apache::poi::ss::formula::eval::ValueEval* arg, int32_t srcRowIndex, int32_t srcColumnIndex) /* throws(EvaluationException) */;

public:
    static void checkValue(double result) /* throws(EvaluationException) */;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) override;

public: /* protected */
    virtual double eval(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */ = 0;

private:
    static Function* ABS_;
    static Function* ACOS_;
    static Function* ACOSH_;
    static Function* ASIN_;
    static Function* ASINH_;
    static Function* ATAN_;
    static Function* ATANH_;
    static Function* COS_;
    static Function* COSH_;
    static Function* DEGREES_;
    static ::org::apache::poi::ss::formula::eval::NumberEval* DOLLAR_ARG2_DEFAULT_;
    static Function* DOLLAR_;
    static Function* EXP_;
    static Function* FACT_;
    static Function* INT_;
    static Function* LN_;
    static Function* LOG10_;
    static Function* RADIANS_;
    static Function* SIGN_;
    static Function* SIN_;
    static Function* SINH_;
    static Function* SQRT_;
    static Function* TAN_;
    static Function* TANH_;
    static Function* ATAN2_;
    static Function* CEILING_;
    static Function* COMBIN_;
    static Function* FLOOR_;
    static Function* MOD_;
    static Function* POWER_;
    static Function* ROUND_;
    static Function* ROUNDDOWN_;
    static Function* ROUNDUP_;
    static ::org::apache::poi::ss::formula::eval::NumberEval* TRUNC_ARG2_DEFAULT_;
    static Function* TRUNC_;
    static Function* LOG_;
    static ::org::apache::poi::ss::formula::eval::NumberEval* PI_EVAL_;
    static Function* PI_;
    static Function* RAND_;
    static Function* POISSON_;

    // Generated

public:
    NumericFunction();
protected:
    NumericFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* package */
    static double& LOG_10_TO_BASE_e();

public:
    static Function*& ABS();
    static Function*& ACOS();
    static Function*& ACOSH();
    static Function*& ASIN();
    static Function*& ASINH();
    static Function*& ATAN();
    static Function*& ATANH();
    static Function*& COS();
    static Function*& COSH();
    static Function*& DEGREES();

public: /* package */
    static ::org::apache::poi::ss::formula::eval::NumberEval*& DOLLAR_ARG2_DEFAULT();

public:
    static Function*& DOLLAR();
    static Function*& EXP();
    static Function*& FACT();
    static Function*& INT();
    static Function*& LN();
    static Function*& LOG10();
    static Function*& RADIANS();
    static Function*& SIGN();
    static Function*& SIN();
    static Function*& SINH();
    static Function*& SQRT();
    static Function*& TAN();
    static Function*& TANH();
    static Function*& ATAN2();
    static Function*& CEILING();
    static Function*& COMBIN();
    static Function*& FLOOR();
    static Function*& MOD();
    static Function*& POWER();
    static Function*& ROUND();
    static Function*& ROUNDDOWN();
    static Function*& ROUNDUP();

public: /* package */
    static ::org::apache::poi::ss::formula::eval::NumberEval*& TRUNC_ARG2_DEFAULT();

public:
    static Function*& TRUNC();
    static Function*& LOG();

public: /* package */
    static ::org::apache::poi::ss::formula::eval::NumberEval*& PI_EVAL();

public:
    static Function*& PI();
    static Function*& RAND();
    static Function*& POISSON();

private:
    virtual ::java::lang::Class* getClass0();
    friend class NumericFunction_OneArg;
    friend class NumericFunction_TwoArg;
    friend class NumericFunction_1;
    friend class NumericFunction_2;
    friend class NumericFunction_3;
    friend class NumericFunction_4;
    friend class NumericFunction_5;
    friend class NumericFunction_6;
    friend class NumericFunction_7;
    friend class NumericFunction_8;
    friend class NumericFunction_9;
    friend class NumericFunction_10;
    friend class NumericFunction_11;
    friend class NumericFunction_12;
    friend class NumericFunction_13;
    friend class NumericFunction_14;
    friend class NumericFunction_15;
    friend class NumericFunction_16;
    friend class NumericFunction_17;
    friend class NumericFunction_18;
    friend class NumericFunction_19;
    friend class NumericFunction_20;
    friend class NumericFunction_21;
    friend class NumericFunction_22;
    friend class NumericFunction_23;
    friend class NumericFunction_24;
    friend class NumericFunction_25;
    friend class NumericFunction_26;
    friend class NumericFunction_27;
    friend class NumericFunction_28;
    friend class NumericFunction_29;
    friend class NumericFunction_30;
    friend class NumericFunction_31;
    friend class NumericFunction_32;
    friend class NumericFunction_33;
    friend class NumericFunction_Log;
    friend class NumericFunction_34;
    friend class NumericFunction_35;
    friend class NumericFunction_36;
};

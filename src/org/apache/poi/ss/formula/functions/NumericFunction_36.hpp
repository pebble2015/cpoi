// Generated from /POI/java/org/apache/poi/ss/formula/functions/NumericFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed3ArgFunction.hpp>

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

class org::apache::poi::ss::formula::functions::NumericFunction_36
    : public Fixed3ArgFunction
{

public:
    typedef Fixed3ArgFunction super;

private:
    static constexpr double DEFAULT_RETURN_RESULT { 1.0 };
    bool isDefaultResult(double x, double mean);
    bool checkArgument(double aDouble) /* throws(EvaluationException) */;
    double probability(int32_t k, double lambda);
    double cumulativeProbability(int32_t x, double lambda);
    ::int64_tArray* FACTORIALS {  };

public:
    virtual int64_t factorial(int32_t n);
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2) override;

    // Generated
    NumericFunction_36();
    static ::java::lang::Class *class_();

private:
    void init();

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
    friend class NumericFunction;
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
};

// Generated from /POI/java/org/apache/poi/ss/formula/functions/NumericFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction_OneArg.hpp>

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

struct default_init_tag;

class poi::ss::formula::functions::NumericFunction_9
    : public NumericFunction_OneArg
{

public:
    typedef NumericFunction_OneArg super;

public: /* protected */
    double evaluate(double d) override;

    // Generated
    NumericFunction_9();

public:
    static ::java::lang::Class *class_();
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0);
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

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

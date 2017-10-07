// Generated from /POI/java/org/apache/poi/ss/formula/functions/FinanceFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function3Arg.hpp>
#include <org/apache/poi/ss/formula/functions/Function4Arg.hpp>

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

class org::apache::poi::ss::formula::functions::FinanceFunction
    : public virtual ::java::lang::Object
    , public virtual Function3Arg
    , public virtual Function4Arg
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::ss::formula::eval::ValueEval* DEFAULT_ARG3_;
    static ::org::apache::poi::ss::formula::eval::ValueEval* DEFAULT_ARG4_;
protected:
    void ctor();

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2) override;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2, ::org::apache::poi::ss::formula::eval::ValueEval* arg3) override;
    virtual ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2, ::org::apache::poi::ss::formula::eval::ValueEval* arg3, ::org::apache::poi::ss::formula::eval::ValueEval* arg4);
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex) override;

public: /* protected */
    virtual double evaluate(::doubleArray* ds) /* throws(EvaluationException) */;
    virtual double evaluate(double rate, double arg1, double arg2, double arg3, bool type) /* throws(EvaluationException) */ = 0;

private:
    static Function* FV_;
    static Function* NPER_;
    static Function* PMT_;
    static Function* PV_;

    // Generated

public: /* protected */
    FinanceFunction();
protected:
    FinanceFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::ss::formula::eval::ValueEval*& DEFAULT_ARG3();
    static ::org::apache::poi::ss::formula::eval::ValueEval*& DEFAULT_ARG4();

public:
    static Function*& FV();
    static Function*& NPER();
    static Function*& PMT();
    static Function*& PV();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FinanceFunction_1;
    friend class FinanceFunction_2;
    friend class FinanceFunction_3;
    friend class FinanceFunction_4;
};

// Generated from /POI/java/org/apache/poi/ss/formula/eval/TwoOperandNumericOperation.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed2ArgFunction.hpp>

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

class org::apache::poi::ss::formula::eval::TwoOperandNumericOperation
    : public ::org::apache::poi::ss::formula::functions::Fixed2ArgFunction
{

public:
    typedef ::org::apache::poi::ss::formula::functions::Fixed2ArgFunction super;

public: /* protected */
    double singleOperandEvaluate(ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;

public:
    ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0, ValueEval* arg1) override;

public: /* protected */
    virtual double evaluate(double d0, double d1) /* throws(EvaluationException) */ = 0;

private:
    static ::org::apache::poi::ss::formula::functions::Function* AddEval_;
    static ::org::apache::poi::ss::formula::functions::Function* DivideEval_;
    static ::org::apache::poi::ss::formula::functions::Function* MultiplyEval_;
    static ::org::apache::poi::ss::formula::functions::Function* PowerEval_;
    static ::org::apache::poi::ss::formula::functions::Function* SubtractEval_;

    // Generated

public:
    TwoOperandNumericOperation();
protected:
    TwoOperandNumericOperation(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ValueEval* evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);
    static ::org::apache::poi::ss::formula::functions::Function*& AddEval();
    static ::org::apache::poi::ss::formula::functions::Function*& DivideEval();
    static ::org::apache::poi::ss::formula::functions::Function*& MultiplyEval();
    static ::org::apache::poi::ss::formula::functions::Function*& PowerEval();
    static ::org::apache::poi::ss::formula::functions::Function*& SubtractEval();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TwoOperandNumericOperation_1;
    friend class TwoOperandNumericOperation_2;
    friend class TwoOperandNumericOperation_3;
    friend class TwoOperandNumericOperation_4;
    friend class TwoOperandNumericOperation_SubtractEvalClass;
};

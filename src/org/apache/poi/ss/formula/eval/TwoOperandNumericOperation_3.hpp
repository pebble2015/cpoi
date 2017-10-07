// Generated from /POI/java/org/apache/poi/ss/formula/eval/TwoOperandNumericOperation.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/TwoOperandNumericOperation.hpp>

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

class org::apache::poi::ss::formula::eval::TwoOperandNumericOperation_3
    : public TwoOperandNumericOperation
{

public:
    typedef TwoOperandNumericOperation super;

public: /* protected */
    double evaluate(double d0, double d1) override;

    // Generated

public:
    TwoOperandNumericOperation_3();
    static ::java::lang::Class *class_();
    ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0, ValueEval* arg1);
    ValueEval* evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
    friend class TwoOperandNumericOperation;
    friend class TwoOperandNumericOperation_1;
    friend class TwoOperandNumericOperation_2;
    friend class TwoOperandNumericOperation_4;
    friend class TwoOperandNumericOperation_SubtractEvalClass;
};

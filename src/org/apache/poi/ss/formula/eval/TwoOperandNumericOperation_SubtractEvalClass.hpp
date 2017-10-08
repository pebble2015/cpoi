// Generated from /POI/java/org/apache/poi/ss/formula/eval/TwoOperandNumericOperation.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/TwoOperandNumericOperation.hpp>

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

class poi::ss::formula::eval::TwoOperandNumericOperation_SubtractEvalClass final
    : public TwoOperandNumericOperation
{

public:
    typedef TwoOperandNumericOperation super;
protected:
    void ctor();

public: /* protected */
    double evaluate(double d0, double d1) override;

    // Generated

public:
    TwoOperandNumericOperation_SubtractEvalClass();
protected:
    TwoOperandNumericOperation_SubtractEvalClass(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0, ValueEval* arg1);
    ValueEval* evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
    friend class TwoOperandNumericOperation;
    friend class TwoOperandNumericOperation_1;
    friend class TwoOperandNumericOperation_2;
    friend class TwoOperandNumericOperation_3;
    friend class TwoOperandNumericOperation_4;
};

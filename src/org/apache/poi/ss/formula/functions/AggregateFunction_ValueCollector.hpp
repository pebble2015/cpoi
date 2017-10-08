// Generated from /POI/java/org/apache/poi/ss/formula/functions/AggregateFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/MultiOperandNumericFunction.hpp>

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

class poi::ss::formula::functions::AggregateFunction_ValueCollector final
    : public MultiOperandNumericFunction
{

public:
    typedef MultiOperandNumericFunction super;

private:
    static AggregateFunction_ValueCollector* instance_;
protected:
    void ctor();

public:
    static ::doubleArray* collectValues(::poi::ss::formula::eval::ValueEvalArray*/*...*/ operands) /* throws(EvaluationException) */;

public: /* protected */
    double evaluate(::doubleArray* values) override;

    // Generated

public:
    AggregateFunction_ValueCollector();
protected:
    AggregateFunction_ValueCollector(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol);

private:
    static AggregateFunction_ValueCollector*& instance();
    virtual ::java::lang::Class* getClass0();
    friend class AggregateFunction;
    friend class AggregateFunction_LargeSmall;
    friend class AggregateFunction_Percentile;
    friend class AggregateFunction_subtotalInstance_13;
    friend class AggregateFunction_1;
    friend class AggregateFunction_2;
    friend class AggregateFunction_3;
    friend class AggregateFunction_4;
    friend class AggregateFunction_5;
    friend class AggregateFunction_6;
    friend class AggregateFunction_7;
    friend class AggregateFunction_8;
    friend class AggregateFunction_9;
    friend class AggregateFunction_10;
    friend class AggregateFunction_11;
    friend class AggregateFunction_12;
};

// Generated from /POI/java/org/apache/poi/ss/formula/functions/Mirr.java

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

class poi::ss::formula::functions::Mirr
    : public MultiOperandNumericFunction
{

public:
    typedef MultiOperandNumericFunction super;
protected:
    void ctor();

public: /* protected */
    int32_t getMaxNumOperands() override;
    double evaluate(::doubleArray* values) /* throws(EvaluationException) */ override;

private:
    static double mirr(::doubleArray* in, double financeRate, double reinvestRate);

    // Generated

public:
    Mirr();
protected:
    Mirr(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol);

private:
    virtual ::java::lang::Class* getClass0();
};

// Generated from /POI/java/org/apache/poi/ss/formula/functions/Sumproduct.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function.hpp>

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
typedef ::SubArray< ::poi::ss::formula::TwoDEval, ::java::lang::ObjectArray, ::poi::ss::formula::eval::ValueEvalArray > TwoDEvalArray;
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::functions::Sumproduct final
    : public virtual ::java::lang::Object
    , public Function
{

public:
    typedef ::java::lang::Object super;
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) override;

private:
    static ::poi::ss::formula::eval::ValueEval* evaluateSingleProduct(::poi::ss::formula::eval::ValueEvalArray* evalArgs) /* throws(EvaluationException) */;
    static double getScalarValue(::poi::ss::formula::eval::ValueEval* arg) /* throws(EvaluationException) */;
    static ::poi::ss::formula::eval::ValueEval* evaluateAreaSumProduct(::poi::ss::formula::eval::ValueEvalArray* evalArgs) /* throws(EvaluationException) */;
    static void throwFirstError(::poi::ss::formula::TwoDEval* areaEval) /* throws(EvaluationException) */;
    static bool areasAllSameSize(::poi::ss::formula::TwoDEvalArray* args, int32_t height, int32_t width);
    static double getProductTerm(::poi::ss::formula::eval::ValueEval* ve, bool isScalarProduct) /* throws(EvaluationException) */;

    // Generated

public:
    Sumproduct();
protected:
    Sumproduct(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

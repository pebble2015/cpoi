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
typedef ::SubArray< ::org::apache::poi::ss::formula::TwoDEval, ::java::lang::ObjectArray, ::org::apache::poi::ss::formula::eval::ValueEvalArray > TwoDEvalArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::functions::Sumproduct final
    : public virtual ::java::lang::Object
    , public Function
{

public:
    typedef ::java::lang::Object super;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) override;

private:
    static ::org::apache::poi::ss::formula::eval::ValueEval* evaluateSingleProduct(::org::apache::poi::ss::formula::eval::ValueEvalArray* evalArgs) /* throws(EvaluationException) */;
    static double getScalarValue(::org::apache::poi::ss::formula::eval::ValueEval* arg) /* throws(EvaluationException) */;
    static ::org::apache::poi::ss::formula::eval::ValueEval* evaluateAreaSumProduct(::org::apache::poi::ss::formula::eval::ValueEvalArray* evalArgs) /* throws(EvaluationException) */;
    static void throwFirstError(::org::apache::poi::ss::formula::TwoDEval* areaEval) /* throws(EvaluationException) */;
    static bool areasAllSameSize(::org::apache::poi::ss::formula::TwoDEvalArray* args, int32_t height, int32_t width);
    static double getProductTerm(::org::apache::poi::ss::formula::eval::ValueEval* ve, bool isScalarProduct) /* throws(EvaluationException) */;

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

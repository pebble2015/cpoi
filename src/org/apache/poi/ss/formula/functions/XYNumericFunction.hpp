// Generated from /POI/java/org/apache/poi/ss/formula/functions/XYNumericFunction.java

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

class org::apache::poi::ss::formula::functions::XYNumericFunction
    : public Fixed2ArgFunction
{

public:
    typedef Fixed2ArgFunction super;

public: /* protected */
    virtual XYNumericFunction_Accumulator* createAccumulator() = 0;

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1) override;

private:
    double evaluateInternal(LookupUtils_ValueVector* x, LookupUtils_ValueVector* y, int32_t size) /* throws(EvaluationException) */;
    static LookupUtils_ValueVector* createValueVector(::org::apache::poi::ss::formula::eval::ValueEval* arg) /* throws(EvaluationException) */;

    // Generated

public:
    XYNumericFunction();
protected:
    XYNumericFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
    friend class XYNumericFunction_ValueArray;
    friend class XYNumericFunction_SingleCellValueArray;
    friend class XYNumericFunction_RefValueArray;
    friend class XYNumericFunction_AreaValueArray;
    friend class XYNumericFunction_Accumulator;
};

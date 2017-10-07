// Generated from /POI/java/org/apache/poi/ss/formula/functions/BooleanFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
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
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::functions::BooleanFunction
    : public virtual ::java::lang::Object
    , public virtual Function
{

public:
    typedef ::java::lang::Object super;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRow, int32_t srcCol) override;

private:
    bool calculate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args) /* throws(EvaluationException) */;

public: /* protected */
    virtual bool getInitialResultValue() = 0;
    virtual bool partialEvaluate(bool cumulativeResult, bool currentValue) = 0;

private:
    static Function* AND_;
    static Function* OR_;
    static Function* FALSE_;
    static Function* TRUE_;
    static Function* NOT_;

    // Generated

public:
    BooleanFunction();
protected:
    BooleanFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static Function*& AND();
    static Function*& OR();
    static Function*& FALSE();
    static Function*& TRUE();
    static Function*& NOT();

private:
    virtual ::java::lang::Class* getClass0();
    friend class BooleanFunction_1;
    friend class BooleanFunction_2;
    friend class BooleanFunction_3;
    friend class BooleanFunction_4;
    friend class BooleanFunction_5;
};

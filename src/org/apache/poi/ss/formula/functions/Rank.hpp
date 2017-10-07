// Generated from /POI/java/org/apache/poi/ss/formula/functions/Rank.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Var2or3ArgFunction.hpp>

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

class org::apache::poi::ss::formula::functions::Rank
    : public Var2or3ArgFunction
{

public:
    typedef Var2or3ArgFunction super;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1) override;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2) override;

private:
    static ::org::apache::poi::ss::formula::eval::ValueEval* eval(double arg0, ::org::apache::poi::ss::formula::eval::AreaEval* aeRange, bool descending_order);
    static ::org::apache::poi::ss::formula::eval::ValueEval* eval(double arg0, ::org::apache::poi::ss::formula::eval::RefListEval* aeRange, bool descending_order);
    static ::java::lang::Double* getValue(::org::apache::poi::ss::formula::eval::AreaEval* aeRange, int32_t relRowIndex, int32_t relColIndex);
    static ::org::apache::poi::ss::formula::eval::AreaEval* convertRangeArg(::org::apache::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */;

    // Generated

public:
    Rank();
protected:
    Rank(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
};

// Generated from /POI/java/org/apache/poi/ss/formula/functions/Rank.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Var2or3ArgFunction.hpp>

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

class poi::ss::formula::functions::Rank
    : public Var2or3ArgFunction
{

public:
    typedef Var2or3ArgFunction super;
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1) override;
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2) override;

private:
    static ::poi::ss::formula::eval::ValueEval* eval(double arg0, ::poi::ss::formula::eval::AreaEval* aeRange, bool descending_order);
    static ::poi::ss::formula::eval::ValueEval* eval(double arg0, ::poi::ss::formula::eval::RefListEval* aeRange, bool descending_order);
    static ::java::lang::Double* getValue(::poi::ss::formula::eval::AreaEval* aeRange, int32_t relRowIndex, int32_t relColIndex);
    static ::poi::ss::formula::eval::AreaEval* convertRangeArg(::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */;

    // Generated

public:
    Rank();
protected:
    Rank(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
};

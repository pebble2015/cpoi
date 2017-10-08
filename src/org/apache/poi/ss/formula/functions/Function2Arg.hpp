// Generated from /POI/java/org/apache/poi/ss/formula/functions/Function2Arg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
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
        } // formula
    } // ss
} // poi

struct poi::ss::formula::functions::Function2Arg
    : public virtual Function
{
    virtual ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1) = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex) = 0;
};

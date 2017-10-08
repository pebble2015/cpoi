// Generated from /POI/java/org/apache/poi/ss/formula/functions/LogicalFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed1ArgFunction.hpp>

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

class poi::ss::formula::functions::LogicalFunction_9
    : public Fixed1ArgFunction
{

public:
    typedef Fixed1ArgFunction super;
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0) override;

    // Generated
    LogicalFunction_9();
    static ::java::lang::Class *class_();
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
    friend class LogicalFunction;
    friend class LogicalFunction_1;
    friend class LogicalFunction_2;
    friend class LogicalFunction_3;
    friend class LogicalFunction_4;
    friend class LogicalFunction_5;
    friend class LogicalFunction_6;
    friend class LogicalFunction_7;
    friend class LogicalFunction_8;
};

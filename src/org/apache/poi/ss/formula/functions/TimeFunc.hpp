// Generated from /POI/java/org/apache/poi/ss/formula/functions/TimeFunc.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed3ArgFunction.hpp>

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

class poi::ss::formula::functions::TimeFunc final
    : public Fixed3ArgFunction
{

public:
    typedef Fixed3ArgFunction super;

private:
    static constexpr int32_t SECONDS_PER_MINUTE { int32_t(60) };
    static constexpr int32_t SECONDS_PER_HOUR { int32_t(3600) };
    static constexpr int32_t HOURS_PER_DAY { int32_t(24) };
    static constexpr int32_t SECONDS_PER_DAY { int32_t(86400) };

public:
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2) override;

private:
    static int32_t evalArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcRowIndex, int32_t srcColumnIndex) /* throws(EvaluationException) */;
    static double evaluate(int32_t hours, int32_t minutes, int32_t seconds) /* throws(EvaluationException) */;

    // Generated

public:
    TimeFunc();
protected:
    TimeFunc(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
};

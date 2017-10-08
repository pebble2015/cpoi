// Generated from /POI/java/org/apache/poi/ss/formula/functions/Quotient.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed2ArgFunction.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>

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

class poi::ss::formula::functions::Quotient
    : public Fixed2ArgFunction
    , public virtual FreeRefFunction
{

public:
    typedef Fixed2ArgFunction super;

private:
    static FreeRefFunction* instance_;

public:
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* venumerator, ::poi::ss::formula::eval::ValueEval* vedenominator) override;
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec) override;

    // Generated
    Quotient();
protected:
    Quotient(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);
    static FreeRefFunction*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};

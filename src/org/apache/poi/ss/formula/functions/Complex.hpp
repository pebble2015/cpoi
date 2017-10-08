// Generated from /POI/java/org/apache/poi/ss/formula/functions/Complex.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Var2or3ArgFunction.hpp>
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

class poi::ss::formula::functions::Complex
    : public Var2or3ArgFunction
    , public virtual FreeRefFunction
{

public:
    typedef Var2or3ArgFunction super;

private:
    static FreeRefFunction* instance_;
    static ::java::lang::String* DEFAULT_SUFFIX_;
    static ::java::lang::String* SUPPORTED_SUFFIX_;

public:
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* real_num, ::poi::ss::formula::eval::ValueEval* i_num) override;
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* real_num, ::poi::ss::formula::eval::ValueEval* i_num, ::poi::ss::formula::eval::ValueEval* suffix) override;

private:
    bool isDoubleAnInt(double number);

public:
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec) override;

    // Generated
    Complex();
protected:
    Complex(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);
    static FreeRefFunction*& instance();
    static ::java::lang::String*& DEFAULT_SUFFIX();
    static ::java::lang::String*& SUPPORTED_SUFFIX();

private:
    virtual ::java::lang::Class* getClass0();
};

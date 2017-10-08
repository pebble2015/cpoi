// Generated from /POI/java/org/apache/poi/ss/formula/functions/Index.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function2Arg.hpp>
#include <org/apache/poi/ss/formula/functions/Function3Arg.hpp>
#include <org/apache/poi/ss/formula/functions/Function4Arg.hpp>

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

class poi::ss::formula::functions::Index final
    : public virtual ::java::lang::Object
    , public Function2Arg
    , public Function3Arg
    , public Function4Arg
{

public:
    typedef ::java::lang::Object super;
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1) override;
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2) override;
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2, ::poi::ss::formula::eval::ValueEval* arg3) override;

private:
    static ::poi::ss::formula::TwoDEval* convertFirstArg(::poi::ss::formula::eval::ValueEval* arg0);

public:
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex) override;

private:
    static ::poi::ss::formula::eval::ValueEval* getValueFromArea(::poi::ss::formula::TwoDEval* ae, int32_t pRowIx, int32_t pColumnIx) /* throws(EvaluationException) */;
    static int32_t resolveIndexArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;

    // Generated

public:
    Index();
protected:
    Index(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

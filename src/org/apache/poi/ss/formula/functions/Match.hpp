// Generated from /POI/java/org/apache/poi/ss/formula/functions/Match.java

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

class poi::ss::formula::functions::Match final
    : public Var2or3ArgFunction
{

public:
    typedef Var2or3ArgFunction super;
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1) override;
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2) override;

private:
    static ::poi::ss::formula::eval::ValueEval* eval(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, double match_type);
    static LookupUtils_ValueVector* evaluateLookupRange(::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */;
    static double evaluateMatchTypeArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;
    static int32_t findIndexOfValue(::poi::ss::formula::eval::ValueEval* lookupValue, LookupUtils_ValueVector* lookupRange, bool matchExact, bool findLargestLessThanOrEqual) /* throws(EvaluationException) */;
    static LookupUtils_LookupValueComparer* createLookupComparer(::poi::ss::formula::eval::ValueEval* lookupValue, bool matchExact);

    // Generated

public:
    Match();
protected:
    Match(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
    friend class Match_SingleValueVector;
};

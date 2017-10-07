// Generated from /POI/java/org/apache/poi/ss/formula/functions/Match.java

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

class org::apache::poi::ss::formula::functions::Match final
    : public Var2or3ArgFunction
{

public:
    typedef Var2or3ArgFunction super;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1) override;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2) override;

private:
    static ::org::apache::poi::ss::formula::eval::ValueEval* eval(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, double match_type);
    static LookupUtils_ValueVector* evaluateLookupRange(::org::apache::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */;
    static double evaluateMatchTypeArg(::org::apache::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;
    static int32_t findIndexOfValue(::org::apache::poi::ss::formula::eval::ValueEval* lookupValue, LookupUtils_ValueVector* lookupRange, bool matchExact, bool findLargestLessThanOrEqual) /* throws(EvaluationException) */;
    static LookupUtils_LookupValueComparer* createLookupComparer(::org::apache::poi::ss::formula::eval::ValueEval* lookupValue, bool matchExact);

    // Generated

public:
    Match();
protected:
    Match(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
    friend class Match_SingleValueVector;
};

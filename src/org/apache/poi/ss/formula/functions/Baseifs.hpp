// Generated from /POI/java/org/apache/poi/ss/formula/functions/Baseifs.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::SheetRange, ::java::lang::ObjectArray > SheetRangeArray;

            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
            } // eval
typedef ::SubArray< ::poi::ss::formula::TwoDEval, ::java::lang::ObjectArray, ::poi::ss::formula::eval::ValueEvalArray > TwoDEvalArray;
typedef ::SubArray< ::poi::ss::formula::ThreeDEval, ::java::lang::ObjectArray, TwoDEvalArray, SheetRangeArray > ThreeDEvalArray;

            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::AreaEval, ::java::lang::ObjectArray, ::poi::ss::formula::TwoDEvalArray, ::poi::ss::formula::ThreeDEvalArray > AreaEvalArray;
            } // eval

            namespace functions
            {
typedef ::SubArray< ::poi::ss::formula::functions::CountUtils_I_MatchPredicate, ::java::lang::ObjectArray > CountUtils_I_MatchPredicateArray;
            } // functions
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::functions::Baseifs
    : public virtual ::java::lang::Object
    , public virtual FreeRefFunction
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    virtual bool hasInitialRange() = 0;

public:
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec) override;

private:
    static void validateCriteriaRanges(::poi::ss::formula::eval::AreaEval* sumRange, ::poi::ss::formula::eval::AreaEvalArray* criteriaRanges) /* throws(EvaluationException) */;
    static void validateCriteria(CountUtils_I_MatchPredicateArray* criteria) /* throws(EvaluationException) */;
    static double aggregateMatchingCells(::poi::ss::formula::eval::AreaEval* sumRange, ::poi::ss::formula::eval::AreaEvalArray* ranges, CountUtils_I_MatchPredicateArray* predicates);
    static double accumulate(::poi::ss::formula::eval::AreaEval* sumRange, int32_t relRowIndex, int32_t relColIndex);

public: /* protected */
    static ::poi::ss::formula::eval::AreaEval* convertRangeArg(::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */;

    // Generated

public:
    Baseifs();
protected:
    Baseifs(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

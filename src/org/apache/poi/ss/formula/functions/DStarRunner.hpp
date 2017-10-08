// Generated from /POI/java/org/apache/poi/ss/formula/functions/DStarRunner.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function3Arg.hpp>

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

class poi::ss::formula::functions::DStarRunner final
    : public virtual ::java::lang::Object
    , public Function3Arg
{

public:
    typedef ::java::lang::Object super;

private:
    DStarRunner_DStarAlgorithmEnum* algoType {  };
protected:
    void ctor(DStarRunner_DStarAlgorithmEnum* algorithm);

public:
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex) override;
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* database, ::poi::ss::formula::eval::ValueEval* filterColumn, ::poi::ss::formula::eval::ValueEval* conditionDatabase) override;

private:
    static int32_t getColumnForName(::poi::ss::formula::eval::ValueEval* nameValueEval, ::poi::ss::formula::eval::AreaEval* db) /* throws(EvaluationException) */;
    static int32_t getColumnForString(::poi::ss::formula::eval::AreaEval* db, ::java::lang::String* name) /* throws(EvaluationException) */;
    static bool fullfillsConditions(::poi::ss::formula::eval::AreaEval* db, int32_t row, ::poi::ss::formula::eval::AreaEval* cdb) /* throws(EvaluationException) */;
    static bool testNormalCondition(::poi::ss::formula::eval::ValueEval* value, ::poi::ss::formula::eval::ValueEval* condition) /* throws(EvaluationException) */;
    static bool testNumericCondition(::poi::ss::formula::eval::ValueEval* valueEval, DStarRunner_operator* op, ::java::lang::String* condition) /* throws(EvaluationException) */;
    static ::java::lang::Double* getNumberFromValueEval(::poi::ss::formula::eval::ValueEval* value);
    static ::poi::ss::formula::eval::ValueEval* resolveReference(::poi::ss::formula::eval::AreaEval* db, int32_t dbRow, int32_t dbCol);

    // Generated

public:
    DStarRunner(DStarRunner_DStarAlgorithmEnum* algorithm);
protected:
    DStarRunner(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DStarRunner_DStarAlgorithmEnum;
    friend class DStarRunner_operator;
};

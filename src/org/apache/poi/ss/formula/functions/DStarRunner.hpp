// Generated from /POI/java/org/apache/poi/ss/formula/functions/DStarRunner.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function3Arg.hpp>

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

class org::apache::poi::ss::formula::functions::DStarRunner final
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
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex) override;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* database, ::org::apache::poi::ss::formula::eval::ValueEval* filterColumn, ::org::apache::poi::ss::formula::eval::ValueEval* conditionDatabase) override;

private:
    static int32_t getColumnForName(::org::apache::poi::ss::formula::eval::ValueEval* nameValueEval, ::org::apache::poi::ss::formula::eval::AreaEval* db) /* throws(EvaluationException) */;
    static int32_t getColumnForString(::org::apache::poi::ss::formula::eval::AreaEval* db, ::java::lang::String* name) /* throws(EvaluationException) */;
    static bool fullfillsConditions(::org::apache::poi::ss::formula::eval::AreaEval* db, int32_t row, ::org::apache::poi::ss::formula::eval::AreaEval* cdb) /* throws(EvaluationException) */;
    static bool testNormalCondition(::org::apache::poi::ss::formula::eval::ValueEval* value, ::org::apache::poi::ss::formula::eval::ValueEval* condition) /* throws(EvaluationException) */;
    static bool testNumericCondition(::org::apache::poi::ss::formula::eval::ValueEval* valueEval, DStarRunner_operator* op, ::java::lang::String* condition) /* throws(EvaluationException) */;
    static ::java::lang::Double* getNumberFromValueEval(::org::apache::poi::ss::formula::eval::ValueEval* value);
    static ::org::apache::poi::ss::formula::eval::ValueEval* resolveReference(::org::apache::poi::ss::formula::eval::AreaEval* db, int32_t dbRow, int32_t dbCol);

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

// Generated from /POI/java/org/apache/poi/ss/formula/atp/ArgumentsEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/atp/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::atp::ArgumentsEvaluator final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ArgumentsEvaluator* instance_;
protected:
    void ctor();

public:
    double evaluateDateArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;
    ::doubleArray* evaluateDatesArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;
    double evaluateNumberArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;

    // Generated

private:
    ArgumentsEvaluator();
protected:
    ArgumentsEvaluator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ArgumentsEvaluator*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};

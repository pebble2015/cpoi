// Generated from /POI/java/org/apache/poi/ss/formula/eval/EvaluationException.java

#pragma once

#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class poi::ss::formula::eval::EvaluationException final
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    ErrorEval* _errorEval {  };
protected:
    void ctor(ErrorEval* errorEval);

public:
    static EvaluationException* invalidValue();
    static EvaluationException* invalidRef();
    static EvaluationException* numberError();
    ErrorEval* getErrorEval();

    // Generated
    EvaluationException(ErrorEval* errorEval);
protected:
    EvaluationException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

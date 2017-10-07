// Generated from /POI/java/org/apache/poi/ss/formula/eval/ErrorEval.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::eval::ErrorEval final
    : public virtual ::java::lang::Object
    , public ValueEval
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::Map* evals_;
    static ErrorEval* NULL_INTERSECTION_;
    static ErrorEval* DIV_ZERO_;
    static ErrorEval* VALUE_INVALID_;
    static ErrorEval* REF_INVALID_;
    static ErrorEval* NAME_INVALID_;
    static ErrorEval* NUM_ERROR_;
    static ErrorEval* NA_;
    static ErrorEval* FUNCTION_NOT_IMPLEMENTED_;
    static ErrorEval* CIRCULAR_REF_ERROR_;

public:
    static ErrorEval* valueOf(int32_t errorCode);
    static ::java::lang::String* getText(int32_t errorCode);

private:
    ::org::apache::poi::ss::usermodel::FormulaError* _error {  };
protected:
    void ctor(::org::apache::poi::ss::usermodel::FormulaError* error);

public:
    int32_t getErrorCode();
    ::java::lang::String* getErrorString();
    ::java::lang::String* toString() override;

    // Generated

private:
    ErrorEval(::org::apache::poi::ss::usermodel::FormulaError* error);
protected:
    ErrorEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& evals();

public:
    static ErrorEval*& NULL_INTERSECTION();
    static ErrorEval*& DIV_ZERO();
    static ErrorEval*& VALUE_INVALID();
    static ErrorEval*& REF_INVALID();
    static ErrorEval*& NAME_INVALID();
    static ErrorEval*& NUM_ERROR();
    static ErrorEval*& NA();
    static ErrorEval*& FUNCTION_NOT_IMPLEMENTED();
    static ErrorEval*& CIRCULAR_REF_ERROR();

private:
    virtual ::java::lang::Class* getClass0();
};

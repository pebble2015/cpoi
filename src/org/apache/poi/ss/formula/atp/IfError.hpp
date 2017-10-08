// Generated from /POI/java/org/apache/poi/ss/formula/atp/IfError.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/atp/fwd-POI.hpp>
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
            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
            } // eval
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::atp::IfError final
    : public virtual ::java::lang::Object
    , public ::poi::ss::formula::functions::FreeRefFunction
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::ss::formula::functions::FreeRefFunction* instance_;
protected:
    void ctor();

public:
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec) override;

private:
    static ::poi::ss::formula::eval::ValueEval* evaluateInternal(::poi::ss::formula::eval::ValueEval* arg, ::poi::ss::formula::eval::ValueEval* iferror, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;

    // Generated
    IfError();
protected:
    IfError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::poi::ss::formula::functions::FreeRefFunction*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};

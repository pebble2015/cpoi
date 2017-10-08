// Generated from /POI/java/org/apache/poi/ss/formula/atp/ParityFunction.java

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

class poi::ss::formula::atp::ParityFunction final
    : public virtual ::java::lang::Object
    , public ::poi::ss::formula::functions::FreeRefFunction
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::ss::formula::functions::FreeRefFunction* IS_EVEN_;
    static ::poi::ss::formula::functions::FreeRefFunction* IS_ODD_;
    int32_t _desiredParity {  };
protected:
    void ctor(int32_t desiredParity);

public:
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec) override;

private:
    static int32_t evaluateArgParity(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;

    // Generated
    ParityFunction(int32_t desiredParity);
protected:
    ParityFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::poi::ss::formula::functions::FreeRefFunction*& IS_EVEN();
    static ::poi::ss::formula::functions::FreeRefFunction*& IS_ODD();

private:
    virtual ::java::lang::Class* getClass0();
};

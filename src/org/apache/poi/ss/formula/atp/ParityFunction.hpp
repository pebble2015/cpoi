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

class org::apache::poi::ss::formula::atp::ParityFunction final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::formula::functions::FreeRefFunction
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::ss::formula::functions::FreeRefFunction* IS_EVEN_;
    static ::org::apache::poi::ss::formula::functions::FreeRefFunction* IS_ODD_;
    int32_t _desiredParity {  };
protected:
    void ctor(int32_t desiredParity);

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec) override;

private:
    static int32_t evaluateArgParity(::org::apache::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;

    // Generated
    ParityFunction(int32_t desiredParity);
protected:
    ParityFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::org::apache::poi::ss::formula::functions::FreeRefFunction*& IS_EVEN();
    static ::org::apache::poi::ss::formula::functions::FreeRefFunction*& IS_ODD();

private:
    virtual ::java::lang::Class* getClass0();
};

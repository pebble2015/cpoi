// Generated from /POI/java/org/apache/poi/ss/formula/functions/Mode.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function.hpp>

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

class org::apache::poi::ss::formula::functions::Mode final
    : public virtual ::java::lang::Object
    , public Function
{

public:
    typedef ::java::lang::Object super;
    static double evaluate(::doubleArray* v) /* throws(EvaluationException) */;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) override;

private:
    static void collectValues(::org::apache::poi::ss::formula::eval::ValueEval* arg, ::java::util::List* temp) /* throws(EvaluationException) */;
    static void collectValue(::org::apache::poi::ss::formula::eval::ValueEval* arg, ::java::util::List* temp, bool mustBeNumber) /* throws(EvaluationException) */;

    // Generated

public:
    Mode();
protected:
    Mode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

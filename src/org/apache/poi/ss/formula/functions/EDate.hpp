// Generated from /POI/java/org/apache/poi/ss/formula/functions/EDate.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
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

class org::apache::poi::ss::formula::functions::EDate
    : public virtual ::java::lang::Object
    , public virtual FreeRefFunction
{

public:
    typedef ::java::lang::Object super;

private:
    static FreeRefFunction* instance_;

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec) override;

private:
    double getValue(::org::apache::poi::ss::formula::eval::ValueEval* arg) /* throws(EvaluationException) */;

    // Generated

public:
    EDate();
protected:
    EDate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static FreeRefFunction*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};

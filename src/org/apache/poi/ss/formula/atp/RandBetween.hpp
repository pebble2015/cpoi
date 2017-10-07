// Generated from /POI/java/org/apache/poi/ss/formula/atp/RandBetween.java

#pragma once

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

class org::apache::poi::ss::formula::atp::RandBetween final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::formula::functions::FreeRefFunction
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::ss::formula::functions::FreeRefFunction* instance_;
protected:
    void ctor();

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec) override;

    // Generated

private:
    RandBetween();
protected:
    RandBetween(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::org::apache::poi::ss::formula::functions::FreeRefFunction*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};

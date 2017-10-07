// Generated from /POI/java/org/apache/poi/ss/formula/functions/Fixed0ArgFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function0Arg.hpp>

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

class org::apache::poi::ss::formula::functions::Fixed0ArgFunction
    : public virtual ::java::lang::Object
    , public virtual Function0Arg
{

public:
    typedef ::java::lang::Object super;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex) override;

    // Generated
    Fixed0ArgFunction();
protected:
    Fixed0ArgFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex) = 0;

private:
    virtual ::java::lang::Class* getClass0();
};

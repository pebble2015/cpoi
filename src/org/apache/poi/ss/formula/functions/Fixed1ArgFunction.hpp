// Generated from /POI/java/org/apache/poi/ss/formula/functions/Fixed1ArgFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function1Arg.hpp>

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

class poi::ss::formula::functions::Fixed1ArgFunction
    : public virtual ::java::lang::Object
    , public virtual Function1Arg
{

public:
    typedef ::java::lang::Object super;
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex) override;

    // Generated
    Fixed1ArgFunction();
protected:
    Fixed1ArgFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0) = 0;

private:
    virtual ::java::lang::Class* getClass0();
};

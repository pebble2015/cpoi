// Generated from /POI/java/org/apache/poi/ss/formula/functions/BooleanFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed0ArgFunction.hpp>

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

class poi::ss::formula::functions::BooleanFunction_3
    : public Fixed0ArgFunction
{

public:
    typedef Fixed0ArgFunction super;
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex) override;

    // Generated
    BooleanFunction_3();
    static ::java::lang::Class *class_();
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
    friend class BooleanFunction;
    friend class BooleanFunction_1;
    friend class BooleanFunction_2;
    friend class BooleanFunction_4;
    friend class BooleanFunction_5;
};

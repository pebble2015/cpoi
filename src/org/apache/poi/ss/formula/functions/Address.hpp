// Generated from /POI/java/org/apache/poi/ss/formula/functions/Address.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function.hpp>

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

class poi::ss::formula::functions::Address
    : public virtual ::java::lang::Object
    , public virtual Function
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t REF_ABSOLUTE { int32_t(1) };
    static constexpr int32_t REF_ROW_ABSOLUTE_COLUMN_RELATIVE { int32_t(2) };
    static constexpr int32_t REF_ROW_RELATIVE_RELATIVE_ABSOLUTE { int32_t(3) };
    static constexpr int32_t REF_RELATIVE { int32_t(4) };
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex) override;

    // Generated
    Address();
protected:
    Address(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

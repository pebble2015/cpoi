// Generated from /POI/java/org/apache/poi/ss/formula/UserDefinedFunction.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
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

class poi::ss::formula::UserDefinedFunction final
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
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, OperationEvaluationContext* ec) override;

    // Generated

private:
    UserDefinedFunction();
protected:
    UserDefinedFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::poi::ss::formula::functions::FreeRefFunction*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};

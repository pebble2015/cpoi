// Generated from /POI/java/org/apache/poi/ss/formula/eval/FunctionEval.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace functions
            {
typedef ::SubArray< ::poi::ss::formula::functions::Function, ::java::lang::ObjectArray > FunctionArray;
            } // functions
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::eval::FunctionEval final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

private:
    static ::poi::ss::formula::functions::FunctionArray* functions_;
    static ::poi::ss::formula::functions::FunctionArray* produceFunctions();

public:
    static ::poi::ss::formula::functions::Function* getBasicFunction(int32_t functionIndex);
    static void registerFunction(::java::lang::String* name, ::poi::ss::formula::functions::Function* func);
    static ::java::util::Collection* getSupportedFunctionNames();
    static ::java::util::Collection* getNotSupportedFunctionNames();

    // Generated

private:
    FunctionEval();
protected:
    FunctionEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* protected */
    static ::poi::ss::formula::functions::FunctionArray*& functions();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FunctionEval_FunctionID;
};

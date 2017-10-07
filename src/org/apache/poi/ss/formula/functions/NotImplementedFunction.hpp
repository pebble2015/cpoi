// Generated from /POI/java/org/apache/poi/ss/formula/functions/NotImplementedFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
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

class org::apache::poi::ss::formula::functions::NotImplementedFunction final
    : public virtual ::java::lang::Object
    , public Function
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* _functionName {  };
protected:
    void ctor();
    void ctor(::java::lang::String* name);

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* operands, int32_t srcRow, int32_t srcCol) override;
    ::java::lang::String* getFunctionName();

    // Generated

public: /* protected */
    NotImplementedFunction();

public:
    NotImplementedFunction(::java::lang::String* name);
protected:
    NotImplementedFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

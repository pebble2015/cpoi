// Generated from /POI/java/org/apache/poi/ss/formula/eval/FunctionNameEval.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::eval::FunctionNameEval final
    : public virtual ::java::lang::Object
    , public ValueEval
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* _functionName {  };
protected:
    void ctor(::java::lang::String* functionName);

public:
    ::java::lang::String* getFunctionName();
    ::java::lang::String* toString() override;

    // Generated
    FunctionNameEval(::java::lang::String* functionName);
protected:
    FunctionNameEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

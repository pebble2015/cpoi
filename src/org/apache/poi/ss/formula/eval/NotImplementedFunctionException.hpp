// Generated from /POI/java/org/apache/poi/ss/formula/eval/NotImplementedFunctionException.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/NotImplementedException.hpp>

struct default_init_tag;

class poi::ss::formula::eval::NotImplementedFunctionException final
    : public NotImplementedException
{

public:
    typedef NotImplementedException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1208119411557559057LL) };
    ::java::lang::String* functionName {  };
protected:
    void ctor(::java::lang::String* functionName);
    void ctor(::java::lang::String* functionName, NotImplementedException* cause);

public:
    ::java::lang::String* getFunctionName();

    // Generated
    NotImplementedFunctionException(::java::lang::String* functionName);
    NotImplementedFunctionException(::java::lang::String* functionName, NotImplementedException* cause);
protected:
    NotImplementedFunctionException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

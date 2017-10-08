// Generated from /POI/java/org/apache/poi/ss/formula/eval/NotImplementedException.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class poi::ss::formula::eval::NotImplementedException
    : public ::java::lang::RuntimeException
{

public:
    typedef ::java::lang::RuntimeException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-5840703336495141301LL) };
protected:
    void ctor(::java::lang::String* message);
    void ctor(::java::lang::String* message, NotImplementedException* cause);

    // Generated

public:
    NotImplementedException(::java::lang::String* message);
    NotImplementedException(::java::lang::String* message, NotImplementedException* cause);
protected:
    NotImplementedException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

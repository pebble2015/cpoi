// Generated from /POI/java/org/apache/poi/hpsf/UnexpectedPropertySetTypeException.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/HPSFException.hpp>

struct default_init_tag;

class poi::hpsf::UnexpectedPropertySetTypeException
    : public HPSFException
{

public:
    typedef HPSFException super;
protected:
    void ctor();
    void ctor(::java::lang::String* msg);
    void ctor(::java::lang::Throwable* reason);
    void ctor(::java::lang::String* msg, ::java::lang::Throwable* reason);

    // Generated

public:
    UnexpectedPropertySetTypeException();
    UnexpectedPropertySetTypeException(::java::lang::String* msg);
    UnexpectedPropertySetTypeException(::java::lang::Throwable* reason);
    UnexpectedPropertySetTypeException(::java::lang::String* msg, ::java::lang::Throwable* reason);
protected:
    UnexpectedPropertySetTypeException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

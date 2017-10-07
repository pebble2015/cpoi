// Generated from /POI/java/org/apache/poi/hpsf/NoSingleSectionException.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/HPSFRuntimeException.hpp>

struct default_init_tag;

class org::apache::poi::hpsf::NoSingleSectionException
    : public HPSFRuntimeException
{

public:
    typedef HPSFRuntimeException super;
protected:
    void ctor();
    void ctor(::java::lang::String* msg);
    void ctor(::java::lang::Throwable* reason);
    void ctor(::java::lang::String* msg, ::java::lang::Throwable* reason);

    // Generated

public:
    NoSingleSectionException();
    NoSingleSectionException(::java::lang::String* msg);
    NoSingleSectionException(::java::lang::Throwable* reason);
    NoSingleSectionException(::java::lang::String* msg, ::java::lang::Throwable* reason);
protected:
    NoSingleSectionException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

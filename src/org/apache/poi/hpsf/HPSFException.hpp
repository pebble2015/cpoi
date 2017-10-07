// Generated from /POI/java/org/apache/poi/hpsf/HPSFException.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class org::apache::poi::hpsf::HPSFException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    ::java::lang::Throwable* reason {  };
protected:
    void ctor();
    void ctor(::java::lang::String* msg);
    void ctor(::java::lang::Throwable* reason);
    void ctor(::java::lang::String* msg, ::java::lang::Throwable* reason);

public:
    virtual ::java::lang::Throwable* getReason();

    // Generated
    HPSFException();
    HPSFException(::java::lang::String* msg);
    HPSFException(::java::lang::Throwable* reason);
    HPSFException(::java::lang::String* msg, ::java::lang::Throwable* reason);
protected:
    HPSFException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

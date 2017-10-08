// Generated from /POI/java/org/apache/poi/hpsf/MarkUnsupportedException.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/HPSFException.hpp>

struct default_init_tag;

class poi::hpsf::MarkUnsupportedException
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
    MarkUnsupportedException();
    MarkUnsupportedException(::java::lang::String* msg);
    MarkUnsupportedException(::java::lang::Throwable* reason);
    MarkUnsupportedException(::java::lang::String* msg, ::java::lang::Throwable* reason);
protected:
    MarkUnsupportedException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

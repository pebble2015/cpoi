// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/HSSFUserException.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class poi::hssf::eventusermodel::HSSFUserException
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
    HSSFUserException();
    HSSFUserException(::java::lang::String* msg);
    HSSFUserException(::java::lang::Throwable* reason);
    HSSFUserException(::java::lang::String* msg, ::java::lang::Throwable* reason);
protected:
    HSSFUserException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

// Generated from /POI/java/org/apache/poi/hpsf/HPSFRuntimeException.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class org::apache::poi::hpsf::HPSFRuntimeException
    : public ::java::lang::RuntimeException
{

public:
    typedef ::java::lang::RuntimeException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-7804271670232727159LL) };
    ::java::lang::Throwable* reason {  };
protected:
    void ctor();
    void ctor(::java::lang::String* msg);
    void ctor(::java::lang::Throwable* reason);
    void ctor(::java::lang::String* msg, ::java::lang::Throwable* reason);

public:
    virtual ::java::lang::Throwable* getReason();

    // Generated
    HPSFRuntimeException();
    HPSFRuntimeException(::java::lang::String* msg);
    HPSFRuntimeException(::java::lang::Throwable* reason);
    HPSFRuntimeException(::java::lang::String* msg, ::java::lang::Throwable* reason);
protected:
    HPSFRuntimeException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

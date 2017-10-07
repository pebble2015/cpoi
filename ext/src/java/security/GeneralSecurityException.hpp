// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::security::GeneralSecurityException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    static constexpr int64_t serialVersionUID { int64_t(894798122053539237LL) };

protected:
    void ctor();
    void ctor(::java::lang::String* msg);
    void ctor(::java::lang::Throwable* cause);
    void ctor(::java::lang::String* message, ::java::lang::Throwable* cause);

    // Generated

public:
    GeneralSecurityException();
    GeneralSecurityException(::java::lang::String* msg);
    GeneralSecurityException(::java::lang::Throwable* cause);
    GeneralSecurityException(::java::lang::String* message, ::java::lang::Throwable* cause);
protected:
    GeneralSecurityException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

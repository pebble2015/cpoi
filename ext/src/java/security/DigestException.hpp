// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/security/GeneralSecurityException.hpp>

struct default_init_tag;

class java::security::DigestException
    : public GeneralSecurityException
{

public:
    typedef GeneralSecurityException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(5821450303093652515LL) };

protected:
    void ctor();
    void ctor(::java::lang::String* msg);
    void ctor(::java::lang::Throwable* cause);
    void ctor(::java::lang::String* message, ::java::lang::Throwable* cause);

    // Generated

public:
    DigestException();
    DigestException(::java::lang::String* msg);
    DigestException(::java::lang::Throwable* cause);
    DigestException(::java::lang::String* message, ::java::lang::Throwable* cause);
protected:
    DigestException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

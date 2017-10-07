// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::lang::ReflectiveOperationException
    : public Exception
{

public:
    typedef Exception super;

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(123456789LL) };

protected:
    void ctor();
    void ctor(String* message);
    void ctor(Throwable* cause);
    void ctor(String* message, Throwable* cause);

    // Generated

public:
    ReflectiveOperationException();
    ReflectiveOperationException(String* message);
    ReflectiveOperationException(Throwable* cause);
    ReflectiveOperationException(String* message, Throwable* cause);
protected:
    ReflectiveOperationException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::IllegalStateException
    : public RuntimeException
{

public:
    typedef RuntimeException super;

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(-1848914673093119416LL) };

protected:
    void ctor();
    void ctor(String* s);
    void ctor(Throwable* cause);
    void ctor(String* message, Throwable* cause);

    // Generated

public:
    IllegalStateException();
    IllegalStateException(String* s);
    IllegalStateException(Throwable* cause);
    IllegalStateException(String* message, Throwable* cause);
protected:
    IllegalStateException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

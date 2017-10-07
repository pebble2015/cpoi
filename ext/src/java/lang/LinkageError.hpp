// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Error.hpp>

struct default_init_tag;

class java::lang::LinkageError
    : public Error
{

public:
    typedef Error super;

private:
    static constexpr int64_t serialVersionUID { int64_t(3579600108157160122LL) };

protected:
    void ctor();
    void ctor(String* s);
    void ctor(String* s, Throwable* cause);

    // Generated

public:
    LinkageError();
    LinkageError(String* s);
    LinkageError(String* s, Throwable* cause);
protected:
    LinkageError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

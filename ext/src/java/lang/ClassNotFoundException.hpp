// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/ReflectiveOperationException.hpp>

struct default_init_tag;

class java::lang::ClassNotFoundException
    : public ReflectiveOperationException
{

public:
    typedef ReflectiveOperationException super;

private:
    Throwable* ex {  };
    static constexpr int64_t serialVersionUID { int64_t(9176873029745254542LL) };

protected:
    void ctor();
    void ctor(String* s);
    void ctor(String* s, Throwable* ex);

public:
    Throwable* getCause() override;
    virtual Throwable* getException();

    // Generated
    ClassNotFoundException();
    ClassNotFoundException(String* s);
    ClassNotFoundException(String* s, Throwable* ex);
protected:
    ClassNotFoundException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

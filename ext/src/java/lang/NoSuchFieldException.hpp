// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/ReflectiveOperationException.hpp>

struct default_init_tag;

class java::lang::NoSuchFieldException
    : public ReflectiveOperationException
{

public:
    typedef ReflectiveOperationException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-6143714805279938260LL) };

protected:
    void ctor();
    void ctor(String* s);

    // Generated

public:
    NoSuchFieldException();
    NoSuchFieldException(String* s);
protected:
    NoSuchFieldException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

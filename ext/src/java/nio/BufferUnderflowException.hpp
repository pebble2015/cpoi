// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::nio::BufferUnderflowException
    : public ::java::lang::RuntimeException
{

public:
    typedef ::java::lang::RuntimeException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-1713313658691622206LL) };

protected:
    void ctor();

    // Generated

public:
    BufferUnderflowException();
protected:
    BufferUnderflowException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/ReflectiveOperationException.hpp>

struct default_init_tag;

class java::lang::NoSuchMethodException
    : public ReflectiveOperationException
{

public:
    typedef ReflectiveOperationException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(5034388446362600923LL) };

protected:
    void ctor();
    void ctor(String* s);

    // Generated

public:
    NoSuchMethodException();
    NoSuchMethodException(String* s);
protected:
    NoSuchMethodException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

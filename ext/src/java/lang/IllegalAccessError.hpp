// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/IncompatibleClassChangeError.hpp>

struct default_init_tag;

class java::lang::IllegalAccessError
    : public IncompatibleClassChangeError
{

public:
    typedef IncompatibleClassChangeError super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-8988904074992417891LL) };

protected:
    void ctor();
    void ctor(String* s);

    // Generated

public:
    IllegalAccessError();
    IllegalAccessError(String* s);
protected:
    IllegalAccessError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

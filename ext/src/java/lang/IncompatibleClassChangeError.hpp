// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/LinkageError.hpp>

struct default_init_tag;

class java::lang::IncompatibleClassChangeError
    : public LinkageError
{

public:
    typedef LinkageError super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-4914975503642802119LL) };

protected:
    void ctor();
    void ctor(String* s);

    // Generated

public:
    IncompatibleClassChangeError();
    IncompatibleClassChangeError(String* s);
protected:
    IncompatibleClassChangeError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::IndexOutOfBoundsException
    : public RuntimeException
{

public:
    typedef RuntimeException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(234122996006267687LL) };

protected:
    void ctor();
    void ctor(String* s);

    // Generated

public:
    IndexOutOfBoundsException();
    IndexOutOfBoundsException(String* s);
protected:
    IndexOutOfBoundsException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

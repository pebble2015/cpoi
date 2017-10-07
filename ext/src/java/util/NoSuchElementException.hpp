// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::util::NoSuchElementException
    : public ::java::lang::RuntimeException
{

public:
    typedef ::java::lang::RuntimeException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(6769829250639411880LL) };

protected:
    void ctor();
    void ctor(::java::lang::String* s);

    // Generated

public:
    NoSuchElementException();
    NoSuchElementException(::java::lang::String* s);
protected:
    NoSuchElementException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

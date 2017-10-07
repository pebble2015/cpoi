// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <java/lang/IllegalArgumentException.hpp>

struct default_init_tag;

class java::nio::charset::UnsupportedCharsetException
    : public ::java::lang::IllegalArgumentException
{

public:
    typedef ::java::lang::IllegalArgumentException super;

private:
    ::java::lang::String* charsetName {  };
    static constexpr int64_t serialVersionUID { int64_t(1490765524727386367LL) };

protected:
    void ctor(::java::lang::String* charsetName);

public:
    virtual ::java::lang::String* getCharsetName();

    // Generated
    UnsupportedCharsetException(::java::lang::String* charsetName);
protected:
    UnsupportedCharsetException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

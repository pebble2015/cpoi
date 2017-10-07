// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/io/IOException.hpp>

struct default_init_tag;

class java::io::UnsupportedEncodingException
    : public IOException
{

public:
    typedef IOException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-4274276298326136670LL) };

protected:
    void ctor();
    void ctor(::java::lang::String* s);

    // Generated

public:
    UnsupportedEncodingException();
    UnsupportedEncodingException(::java::lang::String* s);
protected:
    UnsupportedEncodingException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/io/ObjectStreamException.hpp>

struct default_init_tag;

class java::io::InvalidObjectException
    : public ObjectStreamException
{

public:
    typedef ObjectStreamException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(3233174318281839583LL) };

protected:
    void ctor(::java::lang::String* reason);

    // Generated

public:
    InvalidObjectException(::java::lang::String* reason);
protected:
    InvalidObjectException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

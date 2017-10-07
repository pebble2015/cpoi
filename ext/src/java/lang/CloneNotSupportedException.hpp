// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::lang::CloneNotSupportedException
    : public Exception
{

public:
    typedef Exception super;

private:
    static constexpr int64_t serialVersionUID { int64_t(5195511250079656443LL) };

protected:
    void ctor();
    void ctor(String* s);

    // Generated

public:
    CloneNotSupportedException();
    CloneNotSupportedException(String* s);
protected:
    CloneNotSupportedException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

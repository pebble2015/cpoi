// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>

struct default_init_tag;

class java::lang::ArrayIndexOutOfBoundsException
    : public IndexOutOfBoundsException
{

public:
    typedef IndexOutOfBoundsException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-5116101128118950844LL) };

protected:
    void ctor();
    void ctor(int32_t index);
    void ctor(String* s);

    // Generated

public:
    ArrayIndexOutOfBoundsException();
    ArrayIndexOutOfBoundsException(int32_t index);
    ArrayIndexOutOfBoundsException(String* s);
protected:
    ArrayIndexOutOfBoundsException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

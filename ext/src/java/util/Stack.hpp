// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/Vector.hpp>

struct default_init_tag;

class java::util::Stack
    : public Vector
{

public:
    typedef Vector super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1224463164541339165LL) };

protected:
    void ctor();

public:
    virtual bool empty();
    virtual ::java::lang::Object* peek();
    virtual ::java::lang::Object* pop();
    virtual ::java::lang::Object* push(::java::lang::Object* item);
    virtual int32_t search(::java::lang::Object* o);

    // Generated
    Stack();
protected:
    Stack(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

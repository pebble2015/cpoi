// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/lang/ref/WeakReference.hpp>

struct default_init_tag;

class java::lang::ThreadLocal_ThreadLocalMap_Entry
    : public ::java::lang::ref::WeakReference
{

public:
    typedef ::java::lang::ref::WeakReference super;

public: /* package */
    Object* value {  };

protected:
    void ctor(ThreadLocal* k, Object* v);

    // Generated

public: /* package */
    ThreadLocal_ThreadLocalMap_Entry(ThreadLocal* k, Object* v);
protected:
    ThreadLocal_ThreadLocalMap_Entry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

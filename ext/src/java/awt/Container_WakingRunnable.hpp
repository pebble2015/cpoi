// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>

struct default_init_tag;

class java::awt::Container_WakingRunnable final
    : public virtual ::java::lang::Object
    , public ::java::lang::Runnable
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    void run() override;

    // Generated

public: /* package */
    Container_WakingRunnable();
protected:
    Container_WakingRunnable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

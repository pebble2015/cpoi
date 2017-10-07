// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/lang/ThreadLocal.hpp>

struct default_init_tag;

class java::lang::ThreadLocal_SuppliedThreadLocal final
    : public ThreadLocal
{

public:
    typedef ThreadLocal super;

private:
    ::java::util::function::Supplier* supplier {  };

protected:
    void ctor(::java::util::function::Supplier* supplier);

public: /* protected */
    Object* initialValue() override;

    // Generated

public: /* package */
    ThreadLocal_SuppliedThreadLocal(::java::util::function::Supplier* supplier);
protected:
    ThreadLocal_SuppliedThreadLocal(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

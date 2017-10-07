// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/lang/SecurityException.hpp>

struct default_init_tag;

class java::security::AccessControlException
    : public ::java::lang::SecurityException
{

public:
    typedef ::java::lang::SecurityException super;

private:
    Permission* perm {  };
    static constexpr int64_t serialVersionUID { int64_t(5138225684096988535LL) };

protected:
    void ctor(::java::lang::String* s);
    void ctor(::java::lang::String* s, Permission* p);

public:
    virtual Permission* getPermission();

    // Generated
    AccessControlException(::java::lang::String* s);
    AccessControlException(::java::lang::String* s, Permission* p);
protected:
    AccessControlException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::security::Provider_ServiceKey
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* algorithm {  };
    ::java::lang::String* originalAlgorithm {  };
    ::java::lang::String* type {  };

    /*void ctor(::java::lang::String* type, ::java::lang::String* algorithm, bool intern); (private) */

public:
    bool equals(::java::lang::Object* obj) override;
    int32_t hashCode() override;

public: /* package */
    virtual bool matches(::java::lang::String* type, ::java::lang::String* algorithm);

    // Generated

public:
    Provider_ServiceKey();
protected:
    Provider_ServiceKey(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

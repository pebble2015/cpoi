// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::security::Security_ProviderProperty
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::String* className {  };
    Provider* provider {  };

    /*void ctor(); (private) */

    // Generated

public:
    Security_ProviderProperty();
protected:
    Security_ProviderProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

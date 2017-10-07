// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::security::Provider_EngineDescription
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    std::atomic< ::java::lang::Class* > constructorParameterClass {  };

public: /* package */
    ::java::lang::String* constructorParameterClassName {  };
    ::java::lang::String* name {  };
    bool supportsParameter {  };

protected:
    void ctor(::java::lang::String* name, bool sp, ::java::lang::String* paramName);

public: /* package */
    virtual ::java::lang::Class* getConstructorParameterClass();

    // Generated
    Provider_EngineDescription(::java::lang::String* name, bool sp, ::java::lang::String* paramName);
protected:
    Provider_EngineDescription(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

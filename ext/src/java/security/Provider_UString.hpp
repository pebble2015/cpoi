// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::security::Provider_UString
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::String* lowerString {  };
    ::java::lang::String* string {  };

protected:
    void ctor(::java::lang::String* s);

public:
    bool equals(::java::lang::Object* obj) override;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    Provider_UString(::java::lang::String* s);
protected:
    Provider_UString(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

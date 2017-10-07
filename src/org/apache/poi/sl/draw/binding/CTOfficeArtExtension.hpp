// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTOfficeArtExtension.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTOfficeArtExtension
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::Object* any {  };
    ::java::lang::String* uri {  };

public:
    virtual ::java::lang::Object* getAny();
    virtual void setAny(::java::lang::Object* value);
    virtual bool isSetAny();
    virtual ::java::lang::String* getUri();
    virtual void setUri(::java::lang::String* value);
    virtual bool isSetUri();

    // Generated
    CTOfficeArtExtension();
protected:
    CTOfficeArtExtension(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

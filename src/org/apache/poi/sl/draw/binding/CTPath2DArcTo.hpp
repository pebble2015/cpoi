// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPath2DArcTo.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTPath2DArcTo
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::String* wr {  };
    ::java::lang::String* hr {  };
    ::java::lang::String* stAng {  };
    ::java::lang::String* swAng {  };

public:
    virtual ::java::lang::String* getWR();
    virtual void setWR(::java::lang::String* value);
    virtual bool isSetWR();
    virtual ::java::lang::String* getHR();
    virtual void setHR(::java::lang::String* value);
    virtual bool isSetHR();
    virtual ::java::lang::String* getStAng();
    virtual void setStAng(::java::lang::String* value);
    virtual bool isSetStAng();
    virtual ::java::lang::String* getSwAng();
    virtual void setSwAng(::java::lang::String* value);
    virtual bool isSetSwAng();

    // Generated
    CTPath2DArcTo();
protected:
    CTPath2DArcTo(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

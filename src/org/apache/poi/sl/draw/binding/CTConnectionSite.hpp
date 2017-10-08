// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTConnectionSite.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTConnectionSite
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    CTAdjPoint2D* pos {  };
    ::java::lang::String* ang {  };

public:
    virtual CTAdjPoint2D* getPos();
    virtual void setPos(CTAdjPoint2D* value);
    virtual bool isSetPos();
    virtual ::java::lang::String* getAng();
    virtual void setAng(::java::lang::String* value);
    virtual bool isSetAng();

    // Generated
    CTConnectionSite();
protected:
    CTConnectionSite(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

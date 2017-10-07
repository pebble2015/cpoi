// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTAdjPoint2D.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTAdjPoint2D
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::String* x {  };
    ::java::lang::String* y {  };

public:
    virtual ::java::lang::String* getX();
    virtual void setX(::java::lang::String* value);
    virtual bool isSetX();
    virtual ::java::lang::String* getY();
    virtual void setY(::java::lang::String* value);
    virtual bool isSetY();

    // Generated
    CTAdjPoint2D();
protected:
    CTAdjPoint2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

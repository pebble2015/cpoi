// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPath2DLineTo.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTPath2DLineTo
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    CTAdjPoint2D* pt {  };

public:
    virtual CTAdjPoint2D* getPt();
    virtual void setPt(CTAdjPoint2D* value);
    virtual bool isSetPt();

    // Generated
    CTPath2DLineTo();
protected:
    CTPath2DLineTo(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

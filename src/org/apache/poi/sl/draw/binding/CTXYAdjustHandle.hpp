// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTXYAdjustHandle.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTXYAdjustHandle
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    CTAdjPoint2D* pos {  };
    ::java::lang::String* gdRefX {  };
    ::java::lang::String* minX {  };
    ::java::lang::String* maxX {  };
    ::java::lang::String* gdRefY {  };
    ::java::lang::String* minY {  };
    ::java::lang::String* maxY {  };

public:
    virtual CTAdjPoint2D* getPos();
    virtual void setPos(CTAdjPoint2D* value);
    virtual bool isSetPos();
    virtual ::java::lang::String* getGdRefX();
    virtual void setGdRefX(::java::lang::String* value);
    virtual bool isSetGdRefX();
    virtual ::java::lang::String* getMinX();
    virtual void setMinX(::java::lang::String* value);
    virtual bool isSetMinX();
    virtual ::java::lang::String* getMaxX();
    virtual void setMaxX(::java::lang::String* value);
    virtual bool isSetMaxX();
    virtual ::java::lang::String* getGdRefY();
    virtual void setGdRefY(::java::lang::String* value);
    virtual bool isSetGdRefY();
    virtual ::java::lang::String* getMinY();
    virtual void setMinY(::java::lang::String* value);
    virtual bool isSetMinY();
    virtual ::java::lang::String* getMaxY();
    virtual void setMaxY(::java::lang::String* value);
    virtual bool isSetMaxY();

    // Generated
    CTXYAdjustHandle();
protected:
    CTXYAdjustHandle(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

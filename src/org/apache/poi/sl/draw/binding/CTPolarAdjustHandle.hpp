// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPolarAdjustHandle.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTPolarAdjustHandle
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    CTAdjPoint2D* pos {  };
    ::java::lang::String* gdRefR {  };
    ::java::lang::String* minR {  };
    ::java::lang::String* maxR {  };
    ::java::lang::String* gdRefAng {  };
    ::java::lang::String* minAng {  };
    ::java::lang::String* maxAng {  };

public:
    virtual CTAdjPoint2D* getPos();
    virtual void setPos(CTAdjPoint2D* value);
    virtual bool isSetPos();
    virtual ::java::lang::String* getGdRefR();
    virtual void setGdRefR(::java::lang::String* value);
    virtual bool isSetGdRefR();
    virtual ::java::lang::String* getMinR();
    virtual void setMinR(::java::lang::String* value);
    virtual bool isSetMinR();
    virtual ::java::lang::String* getMaxR();
    virtual void setMaxR(::java::lang::String* value);
    virtual bool isSetMaxR();
    virtual ::java::lang::String* getGdRefAng();
    virtual void setGdRefAng(::java::lang::String* value);
    virtual bool isSetGdRefAng();
    virtual ::java::lang::String* getMinAng();
    virtual void setMinAng(::java::lang::String* value);
    virtual bool isSetMinAng();
    virtual ::java::lang::String* getMaxAng();
    virtual void setMaxAng(::java::lang::String* value);
    virtual bool isSetMaxAng();

    // Generated
    CTPolarAdjustHandle();
protected:
    CTPolarAdjustHandle(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTGeomRect.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTGeomRect
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::String* l {  };
    ::java::lang::String* t {  };
    ::java::lang::String* r {  };
    ::java::lang::String* b {  };

public:
    virtual ::java::lang::String* getL();
    virtual void setL(::java::lang::String* value);
    virtual bool isSetL();
    virtual ::java::lang::String* getT();
    virtual void setT(::java::lang::String* value);
    virtual bool isSetT();
    virtual ::java::lang::String* getR();
    virtual void setR(::java::lang::String* value);
    virtual bool isSetR();
    virtual ::java::lang::String* getB();
    virtual void setB(::java::lang::String* value);
    virtual bool isSetB();

    // Generated
    CTGeomRect();
protected:
    CTGeomRect(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

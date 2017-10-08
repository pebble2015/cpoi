// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTGeomGuide.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTGeomGuide
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::String* name {  };
    ::java::lang::String* fmla {  };

public:
    virtual ::java::lang::String* getName();
    virtual void setName(::java::lang::String* value);
    virtual bool isSetName();
    virtual ::java::lang::String* getFmla();
    virtual void setFmla(::java::lang::String* value);
    virtual bool isSetFmla();

    // Generated
    CTGeomGuide();
protected:
    CTGeomGuide(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

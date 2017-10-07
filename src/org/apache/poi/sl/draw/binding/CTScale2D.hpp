// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTScale2D.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTScale2D
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    CTRatio* sx {  };
    CTRatio* sy {  };

public:
    virtual CTRatio* getSx();
    virtual void setSx(CTRatio* value);
    virtual bool isSetSx();
    virtual CTRatio* getSy();
    virtual void setSy(CTRatio* value);
    virtual bool isSetSy();

    // Generated
    CTScale2D();
protected:
    CTScale2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

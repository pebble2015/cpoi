// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTVector3D.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTVector3D
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    int64_t dx {  };
    int64_t dy {  };
    int64_t dz {  };

public:
    virtual int64_t getDx();
    virtual void setDx(int64_t value);
    virtual bool isSetDx();
    virtual int64_t getDy();
    virtual void setDy(int64_t value);
    virtual bool isSetDy();
    virtual int64_t getDz();
    virtual void setDz(int64_t value);
    virtual bool isSetDz();

    // Generated
    CTVector3D();
protected:
    CTVector3D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

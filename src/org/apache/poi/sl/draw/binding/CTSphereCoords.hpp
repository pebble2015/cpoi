// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTSphereCoords.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTSphereCoords
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    int32_t lat {  };
    int32_t lon {  };
    int32_t rev {  };

public:
    virtual int32_t getLat();
    virtual void setLat(int32_t value);
    virtual bool isSetLat();
    virtual int32_t getLon();
    virtual void setLon(int32_t value);
    virtual bool isSetLon();
    virtual int32_t getRev();
    virtual void setRev(int32_t value);
    virtual bool isSetRev();

    // Generated
    CTSphereCoords();
protected:
    CTSphereCoords(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

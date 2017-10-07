// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPoint3D.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTPoint3D
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    int64_t x {  };
    int64_t y {  };
    int64_t z {  };

public:
    virtual int64_t getX();
    virtual void setX(int64_t value);
    virtual bool isSetX();
    virtual int64_t getY();
    virtual void setY(int64_t value);
    virtual bool isSetY();
    virtual int64_t getZ();
    virtual void setZ(int64_t value);
    virtual bool isSetZ();

    // Generated
    CTPoint3D();
protected:
    CTPoint3D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

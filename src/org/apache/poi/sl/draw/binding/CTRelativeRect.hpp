// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTRelativeRect.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTRelativeRect
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::Integer* l {  };
    ::java::lang::Integer* t {  };
    ::java::lang::Integer* r {  };
    ::java::lang::Integer* b {  };

public:
    virtual int32_t getL();
    virtual void setL(int32_t value);
    virtual bool isSetL();
    virtual void unsetL();
    virtual int32_t getT();
    virtual void setT(int32_t value);
    virtual bool isSetT();
    virtual void unsetT();
    virtual int32_t getR();
    virtual void setR(int32_t value);
    virtual bool isSetR();
    virtual void unsetR();
    virtual int32_t getB();
    virtual void setB(int32_t value);
    virtual bool isSetB();
    virtual void unsetB();

    // Generated
    CTRelativeRect();
protected:
    CTRelativeRect(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

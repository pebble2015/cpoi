// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTAngle.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTAngle
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    int32_t val {  };

public:
    virtual int32_t getVal();
    virtual void setVal(int32_t value);
    virtual bool isSetVal();

    // Generated
    CTAngle();
protected:
    CTAngle(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

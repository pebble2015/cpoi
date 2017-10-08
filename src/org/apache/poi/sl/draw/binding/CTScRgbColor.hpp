// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTScRgbColor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTScRgbColor
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::List* egColorTransform {  };
    int32_t r {  };
    int32_t g {  };
    int32_t b {  };

public:
    virtual ::java::util::List* getEGColorTransform();
    virtual bool isSetEGColorTransform();
    virtual void unsetEGColorTransform();
    virtual int32_t getR();
    virtual void setR(int32_t value);
    virtual bool isSetR();
    virtual int32_t getG();
    virtual void setG(int32_t value);
    virtual bool isSetG();
    virtual int32_t getB();
    virtual void setB(int32_t value);
    virtual bool isSetB();

    // Generated
    CTScRgbColor();
protected:
    CTScRgbColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

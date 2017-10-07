// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTHslColor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTHslColor
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::List* egColorTransform {  };
    int32_t hue {  };
    int32_t sat {  };
    int32_t lum {  };

public:
    virtual ::java::util::List* getEGColorTransform();
    virtual bool isSetEGColorTransform();
    virtual void unsetEGColorTransform();
    virtual int32_t getHue();
    virtual void setHue(int32_t value);
    virtual bool isSetHue();
    virtual int32_t getSat();
    virtual void setSat(int32_t value);
    virtual bool isSetSat();
    virtual int32_t getLum();
    virtual void setLum(int32_t value);
    virtual bool isSetLum();

    // Generated
    CTHslColor();
protected:
    CTHslColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

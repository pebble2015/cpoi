// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTTransform2D.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTTransform2D
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    CTPoint2D* off {  };
    CTPositiveSize2D* ext {  };
    ::java::lang::Integer* rot {  };
    ::java::lang::Boolean* flipH {  };
    ::java::lang::Boolean* flipV {  };

public:
    virtual CTPoint2D* getOff();
    virtual void setOff(CTPoint2D* value);
    virtual bool isSetOff();
    virtual CTPositiveSize2D* getExt();
    virtual void setExt(CTPositiveSize2D* value);
    virtual bool isSetExt();
    virtual int32_t getRot();
    virtual void setRot(int32_t value);
    virtual bool isSetRot();
    virtual void unsetRot();
    virtual bool isFlipH();
    virtual void setFlipH(bool value);
    virtual bool isSetFlipH();
    virtual void unsetFlipH();
    virtual bool isFlipV();
    virtual void setFlipV(bool value);
    virtual bool isSetFlipV();
    virtual void unsetFlipV();

    // Generated
    CTTransform2D();
protected:
    CTTransform2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

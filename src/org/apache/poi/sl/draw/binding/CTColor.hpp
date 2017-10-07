// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTColor.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTColor
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    CTScRgbColor* scrgbClr {  };
    CTSRgbColor* srgbClr {  };
    CTHslColor* hslClr {  };
    CTSystemColor* sysClr {  };
    CTSchemeColor* schemeClr {  };
    CTPresetColor* prstClr {  };

public:
    virtual CTScRgbColor* getScrgbClr();
    virtual void setScrgbClr(CTScRgbColor* value);
    virtual bool isSetScrgbClr();
    virtual CTSRgbColor* getSrgbClr();
    virtual void setSrgbClr(CTSRgbColor* value);
    virtual bool isSetSrgbClr();
    virtual CTHslColor* getHslClr();
    virtual void setHslClr(CTHslColor* value);
    virtual bool isSetHslClr();
    virtual CTSystemColor* getSysClr();
    virtual void setSysClr(CTSystemColor* value);
    virtual bool isSetSysClr();
    virtual CTSchemeColor* getSchemeClr();
    virtual void setSchemeClr(CTSchemeColor* value);
    virtual bool isSetSchemeClr();
    virtual CTPresetColor* getPrstClr();
    virtual void setPrstClr(CTPresetColor* value);
    virtual bool isSetPrstClr();

    // Generated
    CTColor();
protected:
    CTColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

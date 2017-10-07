// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTCustomGeometry2D.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTCustomGeometry2D
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    CTGeomGuideList* avLst {  };
    CTGeomGuideList* gdLst {  };
    CTAdjustHandleList* ahLst {  };
    CTConnectionSiteList* cxnLst {  };
    CTGeomRect* rect {  };
    CTPath2DList* pathLst {  };

public:
    virtual CTGeomGuideList* getAvLst();
    virtual void setAvLst(CTGeomGuideList* value);
    virtual bool isSetAvLst();
    virtual CTGeomGuideList* getGdLst();
    virtual void setGdLst(CTGeomGuideList* value);
    virtual bool isSetGdLst();
    virtual CTAdjustHandleList* getAhLst();
    virtual void setAhLst(CTAdjustHandleList* value);
    virtual bool isSetAhLst();
    virtual CTConnectionSiteList* getCxnLst();
    virtual void setCxnLst(CTConnectionSiteList* value);
    virtual bool isSetCxnLst();
    virtual CTGeomRect* getRect();
    virtual void setRect(CTGeomRect* value);
    virtual bool isSetRect();
    virtual CTPath2DList* getPathLst();
    virtual void setPathLst(CTPath2DList* value);
    virtual bool isSetPathLst();

    // Generated
    CTCustomGeometry2D();
protected:
    CTCustomGeometry2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

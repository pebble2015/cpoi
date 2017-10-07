// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPresetGeometry2D.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTPresetGeometry2D
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    CTGeomGuideList* avLst {  };
    STShapeType* prst {  };

public:
    virtual CTGeomGuideList* getAvLst();
    virtual void setAvLst(CTGeomGuideList* value);
    virtual bool isSetAvLst();
    virtual STShapeType* getPrst();
    virtual void setPrst(STShapeType* value);
    virtual bool isSetPrst();

    // Generated
    CTPresetGeometry2D();
protected:
    CTPresetGeometry2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

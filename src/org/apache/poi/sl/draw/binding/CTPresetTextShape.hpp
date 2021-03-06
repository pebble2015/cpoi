// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPresetTextShape.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTPresetTextShape
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    CTGeomGuideList* avLst {  };
    STTextShapeType* prst {  };

public:
    virtual CTGeomGuideList* getAvLst();
    virtual void setAvLst(CTGeomGuideList* value);
    virtual bool isSetAvLst();
    virtual STTextShapeType* getPrst();
    virtual void setPrst(STTextShapeType* value);
    virtual bool isSetPrst();

    // Generated
    CTPresetTextShape();
protected:
    CTPresetTextShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

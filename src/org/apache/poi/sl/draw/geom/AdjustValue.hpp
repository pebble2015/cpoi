// Generated from /POI/java/org/apache/poi/sl/draw/geom/AdjustValue.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/Guide.hpp>

struct default_init_tag;

class poi::sl::draw::geom::AdjustValue
    : public Guide
{

public:
    typedef Guide super;
protected:
    void ctor(::poi::sl::draw::binding::CTGeomGuide* gd);

public:
    double evaluate(Context* ctx) override;

    // Generated
    AdjustValue(::poi::sl::draw::binding::CTGeomGuide* gd);
protected:
    AdjustValue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

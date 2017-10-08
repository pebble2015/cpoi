// Generated from /POI/java/org/apache/poi/sl/draw/DrawSimpleShape.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawShape.hpp>
#include <org/apache/poi/sl/usermodel/SimpleShape.hpp>

struct default_init_tag;

class poi::sl::draw::DrawSimpleShape
    : public DrawShape
{

public:
    typedef DrawShape super;

private:
    static constexpr double DECO_SIZE_POW { 1.5 };
protected:
    void ctor(::poi::sl::usermodel::SimpleShape* shape);

public:
    void draw(::java::awt::Graphics2D* graphics) override;

public: /* protected */
    virtual void drawDecoration(::java::awt::Graphics2D* graphics, ::java::awt::Paint* line, ::java::awt::BasicStroke* stroke);
    virtual ::poi::sl::draw::geom::Outline* getTailDecoration(::java::awt::Graphics2D* graphics, ::poi::sl::usermodel::LineDecoration* deco, ::java::awt::BasicStroke* stroke);
    virtual ::poi::sl::draw::geom::Outline* getHeadDecoration(::java::awt::Graphics2D* graphics, ::poi::sl::usermodel::LineDecoration* deco, ::java::awt::BasicStroke* stroke);

public:
    virtual ::java::awt::BasicStroke* getStroke();

public: /* protected */
    virtual void drawShadow(::java::awt::Graphics2D* graphics, ::java::util::Collection* outlines, ::java::awt::Paint* fill, ::java::awt::Paint* line);
    static ::poi::sl::draw::geom::CustomGeometry* getCustomGeometry(::java::lang::String* name);
    static ::poi::sl::draw::geom::CustomGeometry* getCustomGeometry(::java::lang::String* name, ::java::awt::Graphics2D* graphics);
    virtual ::java::util::Collection* computeOutlines(::java::awt::Graphics2D* graphics);
    ::poi::sl::usermodel::SimpleShape* getShape() override;

    // Generated

public:
    DrawSimpleShape(::poi::sl::usermodel::SimpleShape* shape);
protected:
    DrawSimpleShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* protected */
    static ::java::awt::BasicStroke* getStroke(::poi::sl::usermodel::StrokeStyle* strokeStyle);

private:
    virtual ::java::lang::Class* getClass0();
    friend class DrawSimpleShape_getCustomGeometry_1;
};

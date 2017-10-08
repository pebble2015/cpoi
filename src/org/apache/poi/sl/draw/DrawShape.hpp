// Generated from /POI/java/org/apache/poi/sl/draw/DrawShape.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>

struct default_init_tag;

class poi::sl::draw::DrawShape
    : public virtual ::java::lang::Object
    , public virtual Drawable
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::poi::sl::usermodel::Shape* shape {  };
protected:
    void ctor(::poi::sl::usermodel::Shape* shape);

public: /* protected */
    static bool isHSLF(::poi::sl::usermodel::Shape* shape);

public:
    void applyTransform(::java::awt::Graphics2D* graphics) override;

private:
    static double safeScale(double dim1, double dim2);

public:
    void draw(::java::awt::Graphics2D* graphics) override;
    void drawContent(::java::awt::Graphics2D* graphics) override;
    static ::java::awt::geom::Rectangle2D* getAnchor(::java::awt::Graphics2D* graphics, ::poi::sl::usermodel::PlaceableShape* shape);
    static ::java::awt::geom::Rectangle2D* getAnchor(::java::awt::Graphics2D* graphics, ::java::awt::geom::Rectangle2D* anchor);

public: /* protected */
    virtual ::poi::sl::usermodel::Shape* getShape();
    static ::java::awt::BasicStroke* getStroke(::poi::sl::usermodel::StrokeStyle* strokeStyle);

    // Generated

public:
    DrawShape(::poi::sl::usermodel::Shape* shape);
protected:
    DrawShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

// Generated from /POI/java/org/apache/poi/sl/draw/DrawBackground.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::DrawBackground_draw_1
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::sl::usermodel::PlaceableShape
{

public:
    typedef ::java::lang::Object super;
    ::org::apache::poi::sl::usermodel::ShapeContainer* getParent() override;
    ::java::awt::geom::Rectangle2D* getAnchor() override;
    void setAnchor(::java::awt::geom::Rectangle2D* newAnchor) override;
    double getRotation() override;
    void setRotation(double theta) override;
    void setFlipHorizontal(bool flip) override;
    void setFlipVertical(bool flip) override;
    bool getFlipHorizontal() override;
    bool getFlipVertical() override;
    ::org::apache::poi::sl::usermodel::Sheet* getSheet() override;

    // Generated
    DrawBackground_draw_1(DrawBackground *DrawBackground_this, ::java::awt::geom::Rectangle2D* anchor);
    static ::java::lang::Class *class_();
    DrawBackground *DrawBackground_this;
    ::java::awt::geom::Rectangle2D* anchor;

private:
    virtual ::java::lang::Class* getClass0();
    friend class DrawBackground;
};

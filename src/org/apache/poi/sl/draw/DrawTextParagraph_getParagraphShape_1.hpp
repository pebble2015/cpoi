// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextParagraph.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::DrawTextParagraph_getParagraphShape_1
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::sl::usermodel::PlaceableShape
{

public:
    typedef ::java::lang::Object super;
    ::org::apache::poi::sl::usermodel::ShapeContainer* getParent() override;
    ::java::awt::geom::Rectangle2D* getAnchor() override;
    void setAnchor(::java::awt::geom::Rectangle2D* anchor) override;
    double getRotation() override;
    void setRotation(double theta) override;
    void setFlipHorizontal(bool flip) override;
    void setFlipVertical(bool flip) override;
    bool getFlipHorizontal() override;
    bool getFlipVertical() override;
    ::org::apache::poi::sl::usermodel::Sheet* getSheet() override;

    // Generated
    DrawTextParagraph_getParagraphShape_1(DrawTextParagraph *DrawTextParagraph_this);
    static ::java::lang::Class *class_();
    DrawTextParagraph *DrawTextParagraph_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class DrawTextParagraph;
    friend class DrawTextParagraph_XlinkAttribute;
    friend class DrawTextParagraph_AttributedStringData;
};

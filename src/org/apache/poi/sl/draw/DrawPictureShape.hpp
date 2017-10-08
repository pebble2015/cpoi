// Generated from /POI/java/org/apache/poi/sl/draw/DrawPictureShape.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawSimpleShape.hpp>
#include <org/apache/poi/sl/usermodel/PictureShape.hpp>

struct default_init_tag;

class poi::sl::draw::DrawPictureShape
    : public DrawSimpleShape
{

public:
    typedef DrawSimpleShape super;

private:
    static ::poi::util::POILogger* LOG_;
    static ::java::lang::String* WMF_IMAGE_RENDERER_;
protected:
    void ctor(::poi::sl::usermodel::PictureShape* shape);

public:
    void drawContent(::java::awt::Graphics2D* graphics) override;
    static ImageRenderer* getImageRenderer(::java::awt::Graphics2D* graphics, ::java::lang::String* contentType);

public: /* protected */
    ::poi::sl::usermodel::PictureShape* getShape() override;

public:
    virtual void resize();
    virtual void resize(::java::awt::geom::Rectangle2D* target);
    virtual void resize(::java::awt::geom::Rectangle2D* target, ::poi::sl::usermodel::RectAlign* align);

    // Generated
    DrawPictureShape(::poi::sl::usermodel::PictureShape* shape);
protected:
    DrawPictureShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& LOG();
    static ::java::lang::String*& WMF_IMAGE_RENDERER();
    virtual ::java::lang::Class* getClass0();
};

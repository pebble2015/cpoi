// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextShape.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawSimpleShape.hpp>
#include <org/apache/poi/sl/usermodel/TextShape.hpp>

struct default_init_tag;

class poi::sl::draw::DrawTextShape
    : public DrawSimpleShape
{

public:
    typedef DrawSimpleShape super;
protected:
    void ctor(::poi::sl::usermodel::TextShape* shape);

public:
    void drawContent(::java::awt::Graphics2D* graphics) override;
    virtual double drawParagraphs(::java::awt::Graphics2D* graphics, double x, double y);
    virtual double getTextHeight();
    virtual double getTextHeight(::java::awt::Graphics2D* oldGraphics);

public: /* protected */
    ::poi::sl::usermodel::TextShape* getShape() override;

    // Generated

public:
    DrawTextShape(::poi::sl::usermodel::TextShape* shape);
protected:
    DrawTextShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

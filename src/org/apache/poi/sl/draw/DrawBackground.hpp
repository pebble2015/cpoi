// Generated from /POI/java/org/apache/poi/sl/draw/DrawBackground.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawShape.hpp>
#include <org/apache/poi/sl/usermodel/Background.hpp>

struct default_init_tag;

class poi::sl::draw::DrawBackground
    : public DrawShape
{

public:
    typedef DrawShape super;
protected:
    void ctor(::poi::sl::usermodel::Background* shape);

public:
    void draw(::java::awt::Graphics2D* graphics) override;

public: /* protected */
    ::poi::sl::usermodel::Background* getShape() override;

    // Generated

public:
    DrawBackground(::poi::sl::usermodel::Background* shape);
protected:
    DrawBackground(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DrawBackground_draw_1;
};

// Generated from /POI/java/org/apache/poi/sl/draw/DrawGraphicalFrame.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawShape.hpp>

struct default_init_tag;

class poi::sl::draw::DrawGraphicalFrame
    : public DrawShape
{

public:
    typedef DrawShape super;
protected:
    void ctor(::poi::sl::usermodel::GraphicalFrame* shape);

public:
    void draw(::java::awt::Graphics2D* context) override;

    // Generated
    DrawGraphicalFrame(::poi::sl::usermodel::GraphicalFrame* shape);
protected:
    DrawGraphicalFrame(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

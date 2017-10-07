// Generated from /POI/java/org/apache/poi/sl/draw/DrawSlide.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawSheet.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::DrawSlide
    : public DrawSheet
{

public:
    typedef DrawSheet super;
protected:
    void ctor(::org::apache::poi::sl::usermodel::Slide* slide);

public:
    void draw(::java::awt::Graphics2D* graphics) override;

    // Generated
    DrawSlide(::org::apache::poi::sl::usermodel::Slide* slide);
protected:
    DrawSlide(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};

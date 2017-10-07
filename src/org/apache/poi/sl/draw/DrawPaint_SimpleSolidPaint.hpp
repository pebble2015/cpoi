// Generated from /POI/java/org/apache/poi/sl/draw/DrawPaint.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle_SolidPaint.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::DrawPaint_SimpleSolidPaint
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::sl::usermodel::PaintStyle_SolidPaint
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::sl::usermodel::ColorStyle* solidColor {  };
protected:
    void ctor(::java::awt::Color* color);
    void ctor(::org::apache::poi::sl::usermodel::ColorStyle* color);

public:
    ::org::apache::poi::sl::usermodel::ColorStyle* getSolidColor() override;

    // Generated

public: /* package */
    DrawPaint_SimpleSolidPaint(::java::awt::Color* color);
    DrawPaint_SimpleSolidPaint(::org::apache::poi::sl::usermodel::ColorStyle* color);
protected:
    DrawPaint_SimpleSolidPaint(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DrawPaint;
    friend class DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1;
    friend class DrawPaint_getSolidPaint_1;
};

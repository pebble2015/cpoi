// Generated from /POI/java/org/apache/poi/sl/draw/DrawPaint.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/usermodel/ColorStyle.hpp>

struct default_init_tag;

class poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1
    : public virtual ::java::lang::Object
    , public virtual ::poi::sl::usermodel::ColorStyle
{

public:
    typedef ::java::lang::Object super;
    ::java::awt::Color* getColor() override;
    int32_t getAlpha() override;
    int32_t getHueOff() override;
    int32_t getHueMod() override;
    int32_t getSatOff() override;
    int32_t getSatMod() override;
    int32_t getLumOff() override;
    int32_t getLumMod() override;
    int32_t getShade() override;
    int32_t getTint() override;

    // Generated
    DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1(DrawPaint_SimpleSolidPaint *DrawPaint_SimpleSolidPaint_this, ::java::awt::Color* color);
    static ::java::lang::Class *class_();
    DrawPaint_SimpleSolidPaint *DrawPaint_SimpleSolidPaint_this;
    ::java::awt::Color* color;

private:
    virtual ::java::lang::Class* getClass0();
    friend class DrawPaint;
    friend class DrawPaint_SimpleSolidPaint;
    friend class DrawPaint_getSolidPaint_1;
};

// Generated from /POI/java/org/apache/poi/sl/draw/Drawable.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::sl::draw::Drawable
    : public virtual ::java::lang::Object
{

private:
    static Drawable_DrawableHint* DRAW_FACTORY_;
    static Drawable_DrawableHint* GROUP_TRANSFORM_;
    static Drawable_DrawableHint* IMAGE_RENDERER_;
    static Drawable_DrawableHint* TEXT_RENDERING_MODE_;
    static Drawable_DrawableHint* GRADIENT_SHAPE_;
    static Drawable_DrawableHint* PRESET_GEOMETRY_CACHE_;

public:
    static constexpr int32_t TEXT_AS_CHARACTERS { int32_t(1) };
    static constexpr int32_t TEXT_AS_SHAPES { int32_t(2) };

private:
    static Drawable_DrawableHint* FONT_HANDLER_;
    static Drawable_DrawableHint* FONT_FALLBACK_;
    static Drawable_DrawableHint* FONT_MAP_;
    static Drawable_DrawableHint* GSAVE_;
    static Drawable_DrawableHint* GRESTORE_;
    static Drawable_DrawableHint* CURRENT_SLIDE_;

public:
    virtual void applyTransform(::java::awt::Graphics2D* graphics) = 0;
    virtual void draw(::java::awt::Graphics2D* graphics) = 0;
    virtual void drawContent(::java::awt::Graphics2D* graphics) = 0;

    // Generated
    static ::java::lang::Class *class_();
    static Drawable_DrawableHint*& DRAW_FACTORY();
    static Drawable_DrawableHint*& GROUP_TRANSFORM();
    static Drawable_DrawableHint*& IMAGE_RENDERER();
    static Drawable_DrawableHint*& TEXT_RENDERING_MODE();
    static Drawable_DrawableHint*& GRADIENT_SHAPE();
    static Drawable_DrawableHint*& PRESET_GEOMETRY_CACHE();
    static Drawable_DrawableHint*& FONT_HANDLER();
    static Drawable_DrawableHint*& FONT_FALLBACK();
    static Drawable_DrawableHint*& FONT_MAP();
    static Drawable_DrawableHint*& GSAVE();
    static Drawable_DrawableHint*& GRESTORE();
    static Drawable_DrawableHint*& CURRENT_SLIDE();
};

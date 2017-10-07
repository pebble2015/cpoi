// Generated from /POI/java/org/apache/poi/sl/draw/DrawPaint.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::DrawPaint
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* LOG_;
    static ::java::awt::Color* TRANSPARENT_;

public: /* protected */
    ::org::apache::poi::sl::usermodel::PlaceableShape* shape {  };
protected:
    void ctor(::org::apache::poi::sl::usermodel::PlaceableShape* shape);

public:
    static ::org::apache::poi::sl::usermodel::PaintStyle_SolidPaint* createSolidPaint(::java::awt::Color* color);
    static ::org::apache::poi::sl::usermodel::PaintStyle_SolidPaint* createSolidPaint(::org::apache::poi::sl::usermodel::ColorStyle* color);
    virtual ::java::awt::Paint* getPaint(::java::awt::Graphics2D* graphics, ::org::apache::poi::sl::usermodel::PaintStyle* paint);
    virtual ::java::awt::Paint* getPaint(::java::awt::Graphics2D* graphics, ::org::apache::poi::sl::usermodel::PaintStyle* paint, ::org::apache::poi::sl::usermodel::PaintStyle_PaintModifier* modifier);

public: /* protected */
    virtual ::java::awt::Paint* getSolidPaint(::org::apache::poi::sl::usermodel::PaintStyle_SolidPaint* fill, ::java::awt::Graphics2D* graphics, ::org::apache::poi::sl::usermodel::PaintStyle_PaintModifier* modifier);
    virtual ::java::awt::Paint* getGradientPaint(::org::apache::poi::sl::usermodel::PaintStyle_GradientPaint* fill, ::java::awt::Graphics2D* graphics);
    virtual ::java::awt::Paint* getTexturePaint(::org::apache::poi::sl::usermodel::PaintStyle_TexturePaint* fill, ::java::awt::Graphics2D* graphics);

public:
    static ::java::awt::Color* applyColorTransform(::org::apache::poi::sl::usermodel::ColorStyle* color);

private:
    static double getAlpha(::java::awt::Color* c, ::org::apache::poi::sl::usermodel::ColorStyle* fc);
    static void applyHslModOff(::doubleArray* hsl, int32_t hslPart, int32_t mod, int32_t off);
    static void applyShade(::doubleArray* hsl, ::org::apache::poi::sl::usermodel::ColorStyle* fc);
    static void applyTint(::doubleArray* hsl, ::org::apache::poi::sl::usermodel::ColorStyle* fc);

public: /* protected */
    virtual ::java::awt::Paint* createLinearGradientPaint(::org::apache::poi::sl::usermodel::PaintStyle_GradientPaint* fill, ::java::awt::Graphics2D* graphics);
    virtual ::java::awt::Paint* createRadialGradientPaint(::org::apache::poi::sl::usermodel::PaintStyle_GradientPaint* fill, ::java::awt::Graphics2D* graphics);
    virtual ::java::awt::Paint* createPathGradientPaint(::org::apache::poi::sl::usermodel::PaintStyle_GradientPaint* fill, ::java::awt::Graphics2D* graphics);
    virtual void snapToAnchor(::java::awt::geom::Point2D* p, ::java::awt::geom::Rectangle2D* anchor);

public:
    static ::java::awt::Color* HSL2RGB(double h, double s, double l, double alpha);

private:
    static double HUE2RGB(double p, double q, double h);
    static ::doubleArray* RGB2HSL(::java::awt::Color* color);

public:
    static int32_t srgb2lin(float sRGB);
    static float lin2srgb(int32_t linRGB);

    // Generated
    DrawPaint(::org::apache::poi::sl::usermodel::PlaceableShape* shape);
protected:
    DrawPaint(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& LOG();
    static ::java::awt::Color*& TRANSPARENT();
    virtual ::java::lang::Class* getClass0();
    friend class DrawPaint_SimpleSolidPaint;
    friend class DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1;
    friend class DrawPaint_getSolidPaint_1;
};

// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/color/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/Paint.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::Color
    : public virtual ::java::lang::Object
    , public virtual Paint
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static Color* BLACK_;
    static Color* BLUE_;
    static Color* CYAN_;
    static Color* DARK_GRAY_;
    static constexpr double FACTOR { 0.7 };
    static Color* GRAY_;
    static Color* GREEN_;
    static Color* LIGHT_GRAY_;
    static Color* MAGENTA_;
    static Color* ORANGE_;
    static Color* PINK_;
    static Color* RED_;
    static Color* WHITE_;
    static Color* YELLOW_;
    static Color* black_;
    static Color* blue_;
    ::java::awt::color::ColorSpace* cs {  };
    static Color* cyan_;
    static Color* darkGray_;
    float falpha {  };
    ::floatArray* frgbvalue {  };
    ::floatArray* fvalue {  };
    static Color* gray_;
    static Color* green_;
    static Color* lightGray_;
    static Color* magenta_;
    static Color* orange_;
    static Color* pink_;
    static Color* red_;
    static constexpr int64_t serialVersionUID { int64_t(118526816881161077LL) };

public: /* package */
    int32_t value {  };

private:
    static Color* white_;
    static Color* yellow_;

protected:
    void ctor(int32_t rgb);
    void ctor(int32_t rgba, bool hasalpha);
    void ctor(int32_t r, int32_t g, int32_t b);
    void ctor(float r, float g, float b);
    void ctor(::java::awt::color::ColorSpace* cspace, ::floatArray* components, float alpha);
    void ctor(int32_t r, int32_t g, int32_t b, int32_t a);
    void ctor(float r, float g, float b, float a);

public:
    static int32_t HSBtoRGB(float hue, float saturation, float brightness);
    static ::floatArray* RGBtoHSB(int32_t r, int32_t g, int32_t b, ::floatArray* hsbvals);
    virtual Color* brighter();
    PaintContext* createContext(::java::awt::image::ColorModel* cm, Rectangle* r, ::java::awt::geom::Rectangle2D* r2d, ::java::awt::geom::AffineTransform* xform, RenderingHints* hints) override;
    virtual Color* darker();
    static Color* decode(::java::lang::String* nm);
    bool equals(::java::lang::Object* obj) override;
    virtual int32_t getAlpha();
    virtual int32_t getBlue();
    static Color* getColor(::java::lang::String* nm);
    static Color* getColor(::java::lang::String* nm, Color* v);
    static Color* getColor(::java::lang::String* nm, int32_t v);
    virtual ::floatArray* getColorComponents(::floatArray* compArray_);
    virtual ::floatArray* getColorComponents(::java::awt::color::ColorSpace* cspace, ::floatArray* compArray_);
    virtual ::java::awt::color::ColorSpace* getColorSpace();
    virtual ::floatArray* getComponents(::floatArray* compArray_);
    virtual ::floatArray* getComponents(::java::awt::color::ColorSpace* cspace, ::floatArray* compArray_);
    virtual int32_t getGreen();
    static Color* getHSBColor(float h, float s, float b);
    virtual int32_t getRGB();
    virtual ::floatArray* getRGBColorComponents(::floatArray* compArray_);
    virtual ::floatArray* getRGBComponents(::floatArray* compArray_);
    virtual int32_t getRed();
    int32_t getTransparency() override;
    int32_t hashCode() override;
    /*static void initIDs(); (private) */
    /*static void testColorValueRange(int32_t r, int32_t g, int32_t b, int32_t a); (private) */
    /*static void testColorValueRange(float r, float g, float b, float a); (private) */
    ::java::lang::String* toString() override;

    // Generated
    Color(int32_t rgb);
    Color(int32_t rgba, bool hasalpha);
    Color(int32_t r, int32_t g, int32_t b);
    Color(float r, float g, float b);
    Color(::java::awt::color::ColorSpace* cspace, ::floatArray* components, float alpha);
    Color(int32_t r, int32_t g, int32_t b, int32_t a);
    Color(float r, float g, float b, float a);
protected:
    Color(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static Color*& BLACK();
    static Color*& BLUE();
    static Color*& CYAN();
    static Color*& DARK_GRAY();
    static Color*& GRAY();
    static Color*& GREEN();
    static Color*& LIGHT_GRAY();
    static Color*& MAGENTA();
    static Color*& ORANGE();
    static Color*& PINK();
    static Color*& RED();
    static Color*& WHITE();
    static Color*& YELLOW();
    static Color*& black();
    static Color*& blue();
    static Color*& cyan();
    static Color*& darkGray();
    static Color*& gray();
    static Color*& green();
    static Color*& lightGray();
    static Color*& magenta();
    static Color*& orange();
    static Color*& pink();
    static Color*& red();
    static Color*& white();
    static Color*& yellow();

private:
    virtual ::java::lang::Class* getClass0();
};

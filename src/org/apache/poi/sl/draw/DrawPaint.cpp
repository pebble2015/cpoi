// Generated from /POI/java/org/apache/poi/sl/draw/DrawPaint.java
#include <org/apache/poi/sl/draw/DrawPaint.hpp>

#include <java/awt/Color.hpp>
#include <java/awt/Dimension.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/awt/LinearGradientPaint.hpp>
#include <java/awt/Paint.hpp>
#include <java/awt/RadialGradientPaint.hpp>
#include <java/awt/TexturePaint.hpp>
#include <java/awt/Transparency.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Point2D_Double.hpp>
#include <java/awt/geom/Point2D.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/awt/image/BufferedImage.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <org/apache/poi/sl/draw/DrawPaint_getSolidPaint_1.hpp>
#include <org/apache/poi/sl/draw/DrawPaint_SimpleSolidPaint.hpp>
#include <org/apache/poi/sl/draw/DrawPictureShape.hpp>
#include <org/apache/poi/sl/draw/DrawShape.hpp>
#include <org/apache/poi/sl/draw/ImageRenderer.hpp>
#include <org/apache/poi/sl/draw/PathGradientPaint.hpp>
#include <org/apache/poi/sl/usermodel/ColorStyle.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle_GradientPaint_GradientType.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle_GradientPaint.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle_PaintModifier.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle_SolidPaint.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle_TexturePaint.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>
#include <cmath>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace awt
    {
typedef ::SubArray< ::java::awt::Transparency, ::java::lang::ObjectArray > TransparencyArray;
typedef ::SubArray< ::java::awt::Paint, ::java::lang::ObjectArray, TransparencyArray > PaintArray;
    } // awt

    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace awt
    {
typedef ::SubArray< ::java::awt::Color, ::java::lang::ObjectArray, PaintArray, ::java::io::SerializableArray > ColorArray;
    } // awt
} // java

namespace poi
{
    namespace sl
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::sl::usermodel::ColorStyle, ::java::lang::ObjectArray > ColorStyleArray;
        } // usermodel
    } // sl
} // poi

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
poi::sl::draw::DrawPaint::DrawPaint(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawPaint::DrawPaint(::poi::sl::usermodel::PlaceableShape* shape) 
    : DrawPaint(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

poi::util::POILogger*& poi::sl::draw::DrawPaint::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::sl::draw::DrawPaint::LOG_;

java::awt::Color*& poi::sl::draw::DrawPaint::TRANSPARENT()
{
    clinit();
    return TRANSPARENT_;
}
java::awt::Color* poi::sl::draw::DrawPaint::TRANSPARENT_;

void poi::sl::draw::DrawPaint::ctor(::poi::sl::usermodel::PlaceableShape* shape)
{
    super::ctor();
    this->shape = shape;
}

poi::sl::usermodel::PaintStyle_SolidPaint* poi::sl::draw::DrawPaint::createSolidPaint(::java::awt::Color* color)
{
    clinit();
    return (color == nullptr) ? static_cast< ::poi::sl::usermodel::PaintStyle_SolidPaint* >(nullptr) : static_cast< ::poi::sl::usermodel::PaintStyle_SolidPaint* >(new DrawPaint_SimpleSolidPaint(color));
}

poi::sl::usermodel::PaintStyle_SolidPaint* poi::sl::draw::DrawPaint::createSolidPaint(::poi::sl::usermodel::ColorStyle* color)
{
    clinit();
    return (color == nullptr) ? static_cast< ::poi::sl::usermodel::PaintStyle_SolidPaint* >(nullptr) : static_cast< ::poi::sl::usermodel::PaintStyle_SolidPaint* >(new DrawPaint_SimpleSolidPaint(color));
}

java::awt::Paint* poi::sl::draw::DrawPaint::getPaint(::java::awt::Graphics2D* graphics, ::poi::sl::usermodel::PaintStyle* paint)
{
    return getPaint(graphics, paint, ::poi::sl::usermodel::PaintStyle_PaintModifier::NORM);
}

java::awt::Paint* poi::sl::draw::DrawPaint::getPaint(::java::awt::Graphics2D* graphics, ::poi::sl::usermodel::PaintStyle* paint, ::poi::sl::usermodel::PaintStyle_PaintModifier* modifier)
{
    if(modifier == ::poi::sl::usermodel::PaintStyle_PaintModifier::NONE) {
        return nullptr;
    }
    if(dynamic_cast< ::poi::sl::usermodel::PaintStyle_SolidPaint* >(paint) != nullptr) {
        return getSolidPaint(java_cast< ::poi::sl::usermodel::PaintStyle_SolidPaint* >(paint), graphics, modifier);
    } else if(dynamic_cast< ::poi::sl::usermodel::PaintStyle_GradientPaint* >(paint) != nullptr) {
        return getGradientPaint(java_cast< ::poi::sl::usermodel::PaintStyle_GradientPaint* >(paint), graphics);
    } else if(dynamic_cast< ::poi::sl::usermodel::PaintStyle_TexturePaint* >(paint) != nullptr) {
        return getTexturePaint(java_cast< ::poi::sl::usermodel::PaintStyle_TexturePaint* >(paint), graphics);
    }
    return nullptr;
}

java::awt::Paint* poi::sl::draw::DrawPaint::getSolidPaint(::poi::sl::usermodel::PaintStyle_SolidPaint* fill, ::java::awt::Graphics2D* graphics, ::poi::sl::usermodel::PaintStyle_PaintModifier* modifier)
{
    auto const orig = npc(fill)->getSolidColor();
    ::poi::sl::usermodel::ColorStyle* cs = new DrawPaint_getSolidPaint_1(this, orig, modifier);
    return applyColorTransform(cs);
}

java::awt::Paint* poi::sl::draw::DrawPaint::getGradientPaint(::poi::sl::usermodel::PaintStyle_GradientPaint* fill, ::java::awt::Graphics2D* graphics)
{
    {
        auto v = npc(fill)->getGradientType();
        if((v == ::poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::linear)) {
            return createLinearGradientPaint(fill, graphics);
        }
        if((v == ::poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::circular)) {
            return createRadialGradientPaint(fill, graphics);
        }
        if((v == ::poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::shape)) {
            return createPathGradientPaint(fill, graphics);
        }
        if((((v != ::poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::linear) && (v != ::poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::circular) && (v != ::poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::shape)))) {
            throw new ::java::lang::UnsupportedOperationException(::java::lang::StringBuilder().append(u"gradient fill of type "_j)->append(static_cast< ::java::lang::Object* >(fill))
                ->append(u" not supported."_j)->toString());
        }
end_switch0:;
    }

}

java::awt::Paint* poi::sl::draw::DrawPaint::getTexturePaint(::poi::sl::usermodel::PaintStyle_TexturePaint* fill, ::java::awt::Graphics2D* graphics)
{
    auto is = npc(fill)->getImageData();
    if(is == nullptr) {
        return nullptr;
    }
    /* assert((graphics != nullptr)) */ ;
    auto renderer = DrawPictureShape::getImageRenderer(graphics, npc(fill)->getContentType());
    try {
        {
            auto finally0 = finally([&] {
                npc(is)->close();
            });
            {
                npc(renderer)->loadImage(is, npc(fill)->getContentType());
            }
        }

    } catch (::java::io::IOException* e) {
        npc(LOG_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Can't load image data - using transparent color"_j), static_cast< ::java::lang::Object* >(e)}));
        return nullptr;
    }
    auto alpha = npc(fill)->getAlpha();
    if(0 <= alpha && alpha < 100000) {
        npc(renderer)->setAlpha(alpha / 100000.0f);
    }
    auto textAnchor = npc(shape)->getAnchor();
    ::java::awt::image::BufferedImage* image;
    if(npc(u"image/x-wmf"_j)->equals(static_cast< ::java::lang::Object* >(npc(fill)->getContentType()))) {
        image = npc(renderer)->getImage(new ::java::awt::Dimension(static_cast< int32_t >(npc(textAnchor)->getWidth()), static_cast< int32_t >(npc(textAnchor)->getHeight())));
    } else {
        image = npc(renderer)->getImage();
    }
    if(image == nullptr) {
        npc(LOG_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Can't load image data"_j)}));
        return nullptr;
    }
    ::java::awt::Paint* paint = new ::java::awt::TexturePaint(image, textAnchor);
    return paint;
}

java::awt::Color* poi::sl::draw::DrawPaint::applyColorTransform(::poi::sl::usermodel::ColorStyle* color)
{
    clinit();
    if(color == nullptr || npc(color)->getColor() == nullptr) {
        return TRANSPARENT_;
    }
    auto result = npc(color)->getColor();
    auto alpha = getAlpha(result, color);
    auto hsl = RGB2HSL(result);
    applyHslModOff(hsl, 0, npc(color)->getHueMod(), npc(color)->getHueOff());
    applyHslModOff(hsl, 1, npc(color)->getSatMod(), npc(color)->getSatOff());
    applyHslModOff(hsl, 2, npc(color)->getLumMod(), npc(color)->getLumOff());
    applyShade(hsl, color);
    applyTint(hsl, color);
    result = HSL2RGB((*hsl)[int32_t(0)], (*hsl)[int32_t(1)], (*hsl)[int32_t(2)], alpha);
    return result;
}

double poi::sl::draw::DrawPaint::getAlpha(::java::awt::Color* c, ::poi::sl::usermodel::ColorStyle* fc)
{
    clinit();
    auto alpha = npc(c)->getAlpha() / 255.0;
    auto fcAlpha = npc(fc)->getAlpha();
    if(fcAlpha != -int32_t(1)) {
        alpha *= fcAlpha / 100000.0;
    }
    return ::java::lang::Math::min(static_cast< double >(int32_t(1)), ::java::lang::Math::max(static_cast< double >(int32_t(0)), alpha));
}

void poi::sl::draw::DrawPaint::applyHslModOff(::doubleArray* hsl, int32_t hslPart, int32_t mod, int32_t off)
{
    clinit();
    if(mod == -int32_t(1)) {
        mod = 100000;
    }
    if(off == -int32_t(1)) {
        off = 0;
    }
    if(!(mod == 100000 && off == 0)) {
        auto fOff = off / 1000.0;
        auto fMod = mod / 100000.0;
        (*hsl)[hslPart] = (*hsl)[hslPart] * fMod + fOff;
    }
}

void poi::sl::draw::DrawPaint::applyShade(::doubleArray* hsl, ::poi::sl::usermodel::ColorStyle* fc)
{
    clinit();
    auto shade = npc(fc)->getShade();
    if(shade == -int32_t(1)) {
        return;
    }
    auto shadePct = shade / 100000.0;
    (*hsl)[int32_t(2)] *= 1.0 - shadePct;
}

void poi::sl::draw::DrawPaint::applyTint(::doubleArray* hsl, ::poi::sl::usermodel::ColorStyle* fc)
{
    clinit();
    auto tint = npc(fc)->getTint();
    if(tint == -int32_t(1)) {
        return;
    }
    auto tintPct = tint / 100000.0;
    (*hsl)[int32_t(2)] = (*hsl)[int32_t(2)] * (1.0 - tintPct) + (100.0 - 100.0 * (1.0 - tintPct));
}

java::awt::Paint* poi::sl::draw::DrawPaint::createLinearGradientPaint(::poi::sl::usermodel::PaintStyle_GradientPaint* fill, ::java::awt::Graphics2D* graphics)
{
    auto angle = npc(fill)->getGradientAngle();
    if(!npc(fill)->isRotatedWithShape()) {
        angle -= npc(shape)->getRotation();
    }
    auto anchor = DrawShape::getAnchor(graphics, static_cast< ::poi::sl::usermodel::PlaceableShape* >(shape));
    auto const h = npc(anchor)->getHeight();
    auto const w = npc(anchor)->getWidth();
    auto const x = npc(anchor)->getX();
    auto const y = npc(anchor)->getY();
    auto at = ::java::awt::geom::AffineTransform::getRotateInstance(::java::lang::Math::toRadians(angle), npc(anchor)->getCenterX(), npc(anchor)->getCenterY());
    auto diagonal = ::java::lang::Math::sqrt(h * h + w * w);
    ::java::awt::geom::Point2D* p1 = new ::java::awt::geom::Point2D_Double(x + w / int32_t(2) - diagonal / int32_t(2), y + h / int32_t(2));
    p1 = npc(at)->transform(p1, nullptr);
    ::java::awt::geom::Point2D* p2 = new ::java::awt::geom::Point2D_Double(x + w, y + h / int32_t(2));
    p2 = npc(at)->transform(p2, nullptr);
    if(npc(p1)->equals(static_cast< ::java::lang::Object* >(p2))) {
        return nullptr;
    }
    auto fractions = npc(fill)->getGradientFractions();
    auto colors = new ::java::awt::ColorArray(npc(fractions)->length);
    auto i = int32_t(0);
    for(auto fc : *npc(npc(fill)->getGradientColors())) {
        colors->set(i++, (fc == nullptr) ? TRANSPARENT_ : applyColorTransform(fc));
    }
    return new ::java::awt::LinearGradientPaint(p1, p2, fractions, colors);
}

java::awt::Paint* poi::sl::draw::DrawPaint::createRadialGradientPaint(::poi::sl::usermodel::PaintStyle_GradientPaint* fill, ::java::awt::Graphics2D* graphics)
{
    auto anchor = DrawShape::getAnchor(graphics, static_cast< ::poi::sl::usermodel::PlaceableShape* >(shape));
    ::java::awt::geom::Point2D* pCenter = new ::java::awt::geom::Point2D_Double(npc(anchor)->getX() + npc(anchor)->getWidth() / int32_t(2), npc(anchor)->getY() + npc(anchor)->getHeight() / int32_t(2));
    auto radius = static_cast< float >(::java::lang::Math::max(npc(anchor)->getWidth(), npc(anchor)->getHeight()));
    auto fractions = npc(fill)->getGradientFractions();
    auto colors = new ::java::awt::ColorArray(npc(fractions)->length);
    auto i = int32_t(0);
    for(auto fc : *npc(npc(fill)->getGradientColors())) {
        colors->set(i++, applyColorTransform(fc));
    }
    return new ::java::awt::RadialGradientPaint(pCenter, radius, fractions, colors);
}

java::awt::Paint* poi::sl::draw::DrawPaint::createPathGradientPaint(::poi::sl::usermodel::PaintStyle_GradientPaint* fill, ::java::awt::Graphics2D* graphics)
{
    auto fractions = npc(fill)->getGradientFractions();
    auto colors = new ::java::awt::ColorArray(npc(fractions)->length);
    auto i = int32_t(0);
    for(auto fc : *npc(npc(fill)->getGradientColors())) {
        colors->set(i++, applyColorTransform(fc));
    }
    return new PathGradientPaint(colors, fractions);
}

void poi::sl::draw::DrawPaint::snapToAnchor(::java::awt::geom::Point2D* p, ::java::awt::geom::Rectangle2D* anchor)
{
    if(npc(p)->getX() < npc(anchor)->getX()) {
        npc(p)->setLocation(npc(anchor)->getX(), npc(p)->getY());
    } else if(npc(p)->getX() > (npc(anchor)->getX() + npc(anchor)->getWidth())) {
        npc(p)->setLocation(npc(anchor)->getX() + npc(anchor)->getWidth(), npc(p)->getY());
    }
    if(npc(p)->getY() < npc(anchor)->getY()) {
        npc(p)->setLocation(npc(p)->getX(), npc(anchor)->getY());
    } else if(npc(p)->getY() > (npc(anchor)->getY() + npc(anchor)->getHeight())) {
        npc(p)->setLocation(npc(p)->getX(), npc(anchor)->getY() + npc(anchor)->getHeight());
    }
}

java::awt::Color* poi::sl::draw::DrawPaint::HSL2RGB(double h, double s, double l, double alpha)
{
    clinit();
    s = ::java::lang::Math::max(static_cast< double >(int32_t(0)), ::java::lang::Math::min(static_cast< double >(int32_t(100)), s));
    l = ::java::lang::Math::max(static_cast< double >(int32_t(0)), ::java::lang::Math::min(static_cast< double >(int32_t(100)), l));
    if(alpha < 0.0f || alpha > 1.0f) {
        auto message = ::java::lang::StringBuilder().append(u"Color parameter outside of expected range - Alpha: "_j)->append(alpha)->toString();
        throw new ::java::lang::IllegalArgumentException(message);
    }
    h = std::fmod(h, static_cast< double >(360.0f));
    h /= 360.0f;
    s /= 100.0f;
    l /= 100.0f;
    auto q = (l < 0.5) ? l * (1.0 + s) : (l + s) - (s * l);
    auto p = 2.0 * l - q;
    auto r = ::java::lang::Math::max(static_cast< double >(int32_t(0)), HUE2RGB(p, q, h + (1.0 / 3.0)));
    auto g = ::java::lang::Math::max(static_cast< double >(int32_t(0)), HUE2RGB(p, q, h));
    auto b = ::java::lang::Math::max(static_cast< double >(int32_t(0)), HUE2RGB(p, q, h - (1.0 / 3.0)));
    r = ::java::lang::Math::min(r, 1.0);
    g = ::java::lang::Math::min(g, 1.0);
    b = ::java::lang::Math::min(b, 1.0);
    return new ::java::awt::Color(static_cast< float >(r), static_cast< float >(g), static_cast< float >(b), static_cast< float >(alpha));
}

double poi::sl::draw::DrawPaint::HUE2RGB(double p, double q, double h)
{
    clinit();
    if(h < 0.0) {
        h += 1.0;
    }
    if(h > 1.0) {
        h -= 1.0;
    }
    if(6.0 * h < 1.0) {
        return p + ((q - p) * 6.0 * h);
    }
    if(2.0 * h < 1.0) {
        return q;
    }
    if(3.0 * h < 2.0) {
        return p + ((q - p) * 6.0 * ((2.0 / 3.0) - h));
    }
    return p;
}

doubleArray* poi::sl::draw::DrawPaint::RGB2HSL(::java::awt::Color* color)
{
    clinit();
    auto rgb = npc(color)->getRGBColorComponents(nullptr);
    double r = (*rgb)[int32_t(0)];
    double g = (*rgb)[int32_t(1)];
    double b = (*rgb)[int32_t(2)];
    auto min = ::java::lang::Math::min(r, ::java::lang::Math::min(g, b));
    auto max = ::java::lang::Math::max(r, ::java::lang::Math::max(g, b));
    double h = int32_t(0);
    if(max == min) {
        h = 0;
    } else if(max == r) {
        h = std::fmod(((60.0 * (g - b) / (max - min)) + 360.0), 360.0);
    } else if(max == g) {
        h = (60.0 * (b - r) / (max - min)) + 120.0;
    } else if(max == b) {
        h = (60.0 * (r - g) / (max - min)) + 240.0;
    }
    auto l = (max + min) / 2.0;
    double s = int32_t(0);
    if(max == min) {
        s = 0;
    } else if(l <= 0.5) {
        s = (max - min) / (max + min);
    } else {
        s = (max - min) / (2.0 - max - min);
    }
    return new ::doubleArray({
        h
        , s * int32_t(100)
        , l * int32_t(100)
    });
}

int32_t poi::sl::draw::DrawPaint::srgb2lin(float sRGB)
{
    clinit();
    if(sRGB <= 0.04045) {
        return static_cast< int32_t >(::java::lang::Math::rint(100000.0 * sRGB / 12.92));
    } else {
        return static_cast< int32_t >(::java::lang::Math::rint(100000.0 * ::java::lang::Math::pow((sRGB + 0.055) / 1.055, 2.4)));
    }
}

float poi::sl::draw::DrawPaint::lin2srgb(int32_t linRGB)
{
    clinit();
    if(linRGB <= 0.0031308) {
        return static_cast< float >((linRGB / 100000.0 * 12.92));
    } else {
        return static_cast< float >((1.055 * ::java::lang::Math::pow(linRGB / 100000.0, 1.0 / 2.4) - 0.055));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawPaint::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawPaint", 32);
    return c;
}

void poi::sl::draw::DrawPaint::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(DrawPaint::class_()));
        TRANSPARENT_ = new ::java::awt::Color(1.0f, 1.0f, 1.0f, 0.0f);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::sl::draw::DrawPaint::getClass0()
{
    return class_();
}


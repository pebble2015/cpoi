// Generated from /POI/java/org/apache/poi/sl/draw/DrawPictureShape.java
#include <org/apache/poi/sl/draw/DrawPictureShape.hpp>

#include <java/awt/Dimension.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/awt/Insets.hpp>
#include <java/awt/geom/Rectangle2D_Double.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Thread.hpp>
#include <org/apache/poi/sl/draw/BitmapImageRenderer.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/draw/ImageRenderer.hpp>
#include <org/apache/poi/sl/usermodel/PictureData_PictureType.hpp>
#include <org/apache/poi/sl/usermodel/PictureData.hpp>
#include <org/apache/poi/sl/usermodel/PictureShape.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>
#include <org/apache/poi/sl/usermodel/RectAlign.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

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

org::apache::poi::sl::draw::DrawPictureShape::DrawPictureShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawPictureShape::DrawPictureShape(::org::apache::poi::sl::usermodel::PictureShape* shape) 
    : DrawPictureShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

org::apache::poi::util::POILogger*& org::apache::poi::sl::draw::DrawPictureShape::LOG()
{
    clinit();
    return LOG_;
}
org::apache::poi::util::POILogger* org::apache::poi::sl::draw::DrawPictureShape::LOG_;

java::lang::String*& org::apache::poi::sl::draw::DrawPictureShape::WMF_IMAGE_RENDERER()
{
    clinit();
    return WMF_IMAGE_RENDERER_;
}
java::lang::String* org::apache::poi::sl::draw::DrawPictureShape::WMF_IMAGE_RENDERER_;

void org::apache::poi::sl::draw::DrawPictureShape::ctor(::org::apache::poi::sl::usermodel::PictureShape* shape)
{
    super::ctor(shape);
}

void org::apache::poi::sl::draw::DrawPictureShape::drawContent(::java::awt::Graphics2D* graphics)
{
    auto data = npc(getShape())->getPictureData();
    if(data == nullptr)
        return;

    auto anchor = getAnchor(graphics, static_cast< ::org::apache::poi::sl::usermodel::PlaceableShape* >(getShape()));
    auto insets = npc(getShape())->getClipping();
    try {
        auto renderer = getImageRenderer(graphics, npc(data)->getContentType());
        npc(renderer)->loadImage(npc(data)->getData(), npc(data)->getContentType());
        npc(renderer)->drawImage(graphics, anchor, insets);
    } catch (::java::io::IOException* e) {
        npc(LOG_)->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"image can't be loaded/rendered."_j), static_cast< ::java::lang::Object* >(e)}));
    }
}

org::apache::poi::sl::draw::ImageRenderer* org::apache::poi::sl::draw::DrawPictureShape::getImageRenderer(::java::awt::Graphics2D* graphics, ::java::lang::String* contentType)
{
    clinit();
    auto renderer = java_cast< ImageRenderer* >(npc(graphics)->getRenderingHint(Drawable::IMAGE_RENDERER()));
    if(renderer != nullptr) {
        return renderer;
    }
    if(npc(npc(::org::apache::poi::sl::usermodel::PictureData_PictureType::WMF)->contentType)->equals(static_cast< ::java::lang::Object* >(contentType))) {
        try {
            auto irc = java_cast< ::java::lang::Class* >(npc(npc(::java::lang::Thread::currentThread())->getContextClassLoader())->loadClass(WMF_IMAGE_RENDERER_));
            return java_cast< ImageRenderer* >(npc(irc)->newInstance());
        } catch (::java::lang::Exception* e) {
            npc(LOG_)->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"WMF image renderer is not on the classpath - include poi-scratchpad jar!"_j), static_cast< ::java::lang::Object* >(e)}));
        }
    }
    return new BitmapImageRenderer();
}

org::apache::poi::sl::usermodel::PictureShape* org::apache::poi::sl::draw::DrawPictureShape::getShape()
{
    return java_cast< ::org::apache::poi::sl::usermodel::PictureShape* >(shape);
}

void org::apache::poi::sl::draw::DrawPictureShape::resize()
{
    auto ps = getShape();
    auto dim = npc(npc(ps)->getPictureData())->getImageDimension();
    auto origRect = npc(ps)->getAnchor();
    auto x = npc(origRect)->getX();
    auto y = npc(origRect)->getY();
    auto w = npc(dim)->getWidth();
    auto h = npc(dim)->getHeight();
    npc(ps)->setAnchor(new ::java::awt::geom::Rectangle2D_Double(x, y, w, h));
}

void org::apache::poi::sl::draw::DrawPictureShape::resize(::java::awt::geom::Rectangle2D* target)
{
    resize(target, ::org::apache::poi::sl::usermodel::RectAlign::CENTER);
}

void org::apache::poi::sl::draw::DrawPictureShape::resize(::java::awt::geom::Rectangle2D* target, ::org::apache::poi::sl::usermodel::RectAlign* align)
{
    auto ps = getShape();
    auto dim = npc(npc(ps)->getPictureData())->getImageDimension();
    if(npc(dim)->width <= 0 || npc(dim)->height <= 0) {
        npc(ps)->setAnchor(target);
        return;
    }
    auto w = npc(target)->getWidth();
    auto h = npc(target)->getHeight();
    auto sx = w / npc(dim)->width;
    auto sy = h / npc(dim)->height;
    double dx = int32_t(0), dy = int32_t(0);
    if(sx > sy) {
        w = sy * npc(dim)->width;
        dx = npc(target)->getWidth() - w;
    } else if(sy > sx) {
        h = sx * npc(dim)->height;
        dy = npc(target)->getHeight() - h;
    } else {
        npc(ps)->setAnchor(target);
        return;
    }
    auto x = npc(target)->getX();
    auto y = npc(target)->getY();
    {
        auto v = align;
        if((v == ::org::apache::poi::sl::usermodel::RectAlign::TOP)) {
            x += dx / int32_t(2);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::sl::usermodel::RectAlign::TOP_RIGHT)) {
            x += dx;
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::sl::usermodel::RectAlign::RIGHT)) {
            x += dx;
            y += dy / int32_t(2);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::sl::usermodel::RectAlign::BOTTOM_RIGHT)) {
            x += dx;
            y += dy;
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::sl::usermodel::RectAlign::BOTTOM)) {
            x += dx / int32_t(2);
            y += dy;
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::sl::usermodel::RectAlign::BOTTOM_LEFT)) {
            y += dy;
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::sl::usermodel::RectAlign::LEFT)) {
            y += dy / int32_t(2);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::sl::usermodel::RectAlign::TOP_LEFT)) {
            goto end_switch0;;
        }
        if((((v != ::org::apache::poi::sl::usermodel::RectAlign::TOP) && (v != ::org::apache::poi::sl::usermodel::RectAlign::TOP_RIGHT) && (v != ::org::apache::poi::sl::usermodel::RectAlign::RIGHT) && (v != ::org::apache::poi::sl::usermodel::RectAlign::BOTTOM_RIGHT) && (v != ::org::apache::poi::sl::usermodel::RectAlign::BOTTOM) && (v != ::org::apache::poi::sl::usermodel::RectAlign::BOTTOM_LEFT) && (v != ::org::apache::poi::sl::usermodel::RectAlign::LEFT) && (v != ::org::apache::poi::sl::usermodel::RectAlign::TOP_LEFT)))) {
            x += dx / int32_t(2);
            y += dy / int32_t(2);
            goto end_switch0;;
        }
end_switch0:;
    }

    npc(ps)->setAnchor(new ::java::awt::geom::Rectangle2D_Double(x, y, w, h));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawPictureShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawPictureShape", 39);
    return c;
}

void org::apache::poi::sl::draw::DrawPictureShape::clinit()
{
struct string_init_ {
    string_init_() {
    WMF_IMAGE_RENDERER_ = u"org.apache.poi.hwmf.draw.HwmfSLImageRenderer"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(DrawPictureShape::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::sl::draw::DrawPictureShape::getClass0()
{
    return class_();
}


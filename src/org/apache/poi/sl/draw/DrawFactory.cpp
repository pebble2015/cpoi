// Generated from /POI/java/org/apache/poi/sl/draw/DrawFactory.java
#include <org/apache/poi/sl/draw/DrawFactory.hpp>

#include <java/awt/Graphics2D.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/ThreadLocal.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/sl/draw/DrawBackground.hpp>
#include <org/apache/poi/sl/draw/DrawConnectorShape.hpp>
#include <org/apache/poi/sl/draw/DrawFontManager.hpp>
#include <org/apache/poi/sl/draw/DrawFontManagerDefault.hpp>
#include <org/apache/poi/sl/draw/DrawFreeformShape.hpp>
#include <org/apache/poi/sl/draw/DrawGraphicalFrame.hpp>
#include <org/apache/poi/sl/draw/DrawGroupShape.hpp>
#include <org/apache/poi/sl/draw/DrawMasterSheet.hpp>
#include <org/apache/poi/sl/draw/DrawNotImplemented.hpp>
#include <org/apache/poi/sl/draw/DrawNothing.hpp>
#include <org/apache/poi/sl/draw/DrawPaint.hpp>
#include <org/apache/poi/sl/draw/DrawPictureShape.hpp>
#include <org/apache/poi/sl/draw/DrawSheet.hpp>
#include <org/apache/poi/sl/draw/DrawSlide.hpp>
#include <org/apache/poi/sl/draw/DrawTableShape.hpp>
#include <org/apache/poi/sl/draw/DrawTextBox.hpp>
#include <org/apache/poi/sl/draw/DrawTextFragment.hpp>
#include <org/apache/poi/sl/draw/DrawTextParagraph.hpp>
#include <org/apache/poi/sl/draw/DrawTextShape.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/usermodel/Background.hpp>
#include <org/apache/poi/sl/usermodel/ConnectorShape.hpp>
#include <org/apache/poi/sl/usermodel/FreeformShape.hpp>
#include <org/apache/poi/sl/usermodel/GraphicalFrame.hpp>
#include <org/apache/poi/sl/usermodel/GroupShape.hpp>
#include <org/apache/poi/sl/usermodel/MasterSheet.hpp>
#include <org/apache/poi/sl/usermodel/PictureShape.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>
#include <org/apache/poi/sl/usermodel/Slide.hpp>
#include <org/apache/poi/sl/usermodel/TableShape.hpp>
#include <org/apache/poi/sl/usermodel/TextBox.hpp>
#include <org/apache/poi/sl/usermodel/TextParagraph.hpp>
#include <org/apache/poi/sl/usermodel/TextShape.hpp>
#include <org/apache/poi/util/JvmBugs.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
typedef ::SubArray< ::java::lang::StringArray, CloneableArray, ::java::io::SerializableArray > StringArrayArray;
    } // lang
} // java

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
org::apache::poi::sl::draw::DrawFactory::DrawFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawFactory::DrawFactory()
    : DrawFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::ThreadLocal*& org::apache::poi::sl::draw::DrawFactory::defaultFactory()
{
    clinit();
    return defaultFactory_;
}
java::lang::ThreadLocal* org::apache::poi::sl::draw::DrawFactory::defaultFactory_;

void org::apache::poi::sl::draw::DrawFactory::setDefaultFactory(DrawFactory* factory)
{
    clinit();
    npc(defaultFactory_)->set(factory);
}

org::apache::poi::sl::draw::DrawFactory* org::apache::poi::sl::draw::DrawFactory::getInstance(::java::awt::Graphics2D* graphics)
{
    clinit();
    DrawFactory* factory = nullptr;
    auto isHint = false;
    if(graphics != nullptr) {
        factory = java_cast< DrawFactory* >(npc(graphics)->getRenderingHint(Drawable::DRAW_FACTORY()));
        isHint = (factory != nullptr);
    }
    if(factory == nullptr) {
        factory = java_cast< DrawFactory* >(npc(defaultFactory_)->get());
    }
    if(factory == nullptr) {
        factory = new DrawFactory();
    }
    if(graphics != nullptr && !isHint) {
        npc(graphics)->setRenderingHint(Drawable::DRAW_FACTORY(), factory);
    }
    return factory;
}

org::apache::poi::sl::draw::Drawable* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::Shape* shape)
{
    if(dynamic_cast< ::org::apache::poi::sl::usermodel::TextBox* >(shape) != nullptr) {
        return getDrawable(static_cast< ::org::apache::poi::sl::usermodel::TextBox* >(java_cast< ::org::apache::poi::sl::usermodel::TextBox* >(shape)));
    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::FreeformShape* >(shape) != nullptr) {
        return getDrawable(static_cast< ::org::apache::poi::sl::usermodel::FreeformShape* >(java_cast< ::org::apache::poi::sl::usermodel::FreeformShape* >(shape)));
    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::TextShape* >(shape) != nullptr) {
        return getDrawable(static_cast< ::org::apache::poi::sl::usermodel::TextShape* >(java_cast< ::org::apache::poi::sl::usermodel::TextShape* >(shape)));
    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::TableShape* >(shape) != nullptr) {
        return getDrawable(static_cast< ::org::apache::poi::sl::usermodel::TableShape* >(java_cast< ::org::apache::poi::sl::usermodel::TableShape* >(shape)));
    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::GroupShape* >(shape) != nullptr) {
        return getDrawable(static_cast< ::org::apache::poi::sl::usermodel::GroupShape* >(java_cast< ::org::apache::poi::sl::usermodel::GroupShape* >(shape)));
    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::PictureShape* >(shape) != nullptr) {
        return getDrawable(static_cast< ::org::apache::poi::sl::usermodel::PictureShape* >(java_cast< ::org::apache::poi::sl::usermodel::PictureShape* >(shape)));
    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::GraphicalFrame* >(shape) != nullptr) {
        return getDrawable(static_cast< ::org::apache::poi::sl::usermodel::GraphicalFrame* >(java_cast< ::org::apache::poi::sl::usermodel::GraphicalFrame* >(shape)));
    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::Background* >(shape) != nullptr) {
        return getDrawable(static_cast< ::org::apache::poi::sl::usermodel::Background* >(java_cast< ::org::apache::poi::sl::usermodel::Background* >(shape)));
    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::ConnectorShape* >(shape) != nullptr) {
        return getDrawable(static_cast< ::org::apache::poi::sl::usermodel::ConnectorShape* >(java_cast< ::org::apache::poi::sl::usermodel::ConnectorShape* >(shape)));
    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::Slide* >(shape) != nullptr) {
        return getDrawable(static_cast< ::org::apache::poi::sl::usermodel::Slide* >(java_cast< ::org::apache::poi::sl::usermodel::Slide* >(shape)));
    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::MasterSheet* >(shape) != nullptr) {
        return getDrawable(static_cast< ::org::apache::poi::sl::usermodel::MasterSheet* >(java_cast< ::org::apache::poi::sl::usermodel::MasterSheet* >(shape)));
    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::Sheet* >(shape) != nullptr) {
        return getDrawable(static_cast< ::org::apache::poi::sl::usermodel::Sheet* >(java_cast< ::org::apache::poi::sl::usermodel::Sheet* >(shape)));
    } else if(npc(npc(shape)->getClass())->isAnnotationPresent(static_cast< ::java::lang::Class* >(DrawNotImplemented::class_()))) {
        return new DrawNothing(shape);
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unsupported shape type: "_j)->append(static_cast< ::java::lang::Object* >(npc(shape)->getClass()))->toString());
}

org::apache::poi::sl::draw::DrawSlide* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::Slide* sheet)
{
    return new DrawSlide(sheet);
}

org::apache::poi::sl::draw::DrawSheet* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::Sheet* sheet)
{
    return new DrawSheet(sheet);
}

org::apache::poi::sl::draw::DrawMasterSheet* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::MasterSheet* sheet)
{
    return new DrawMasterSheet(sheet);
}

org::apache::poi::sl::draw::DrawTextBox* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::TextBox* shape)
{
    return new DrawTextBox(shape);
}

org::apache::poi::sl::draw::DrawFreeformShape* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::FreeformShape* shape)
{
    return new DrawFreeformShape(shape);
}

org::apache::poi::sl::draw::DrawConnectorShape* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::ConnectorShape* shape)
{
    return new DrawConnectorShape(shape);
}

org::apache::poi::sl::draw::DrawTableShape* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::TableShape* shape)
{
    return new DrawTableShape(shape);
}

org::apache::poi::sl::draw::DrawTextShape* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::TextShape* shape)
{
    return new DrawTextShape(shape);
}

org::apache::poi::sl::draw::DrawGroupShape* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::GroupShape* shape)
{
    return new DrawGroupShape(shape);
}

org::apache::poi::sl::draw::DrawPictureShape* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::PictureShape* shape)
{
    return new DrawPictureShape(shape);
}

org::apache::poi::sl::draw::DrawGraphicalFrame* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::GraphicalFrame* shape)
{
    return new DrawGraphicalFrame(shape);
}

org::apache::poi::sl::draw::DrawTextParagraph* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::TextParagraph* paragraph)
{
    return new DrawTextParagraph(paragraph);
}

org::apache::poi::sl::draw::DrawBackground* org::apache::poi::sl::draw::DrawFactory::getDrawable(::org::apache::poi::sl::usermodel::Background* shape)
{
    return new DrawBackground(shape);
}

org::apache::poi::sl::draw::DrawTextFragment* org::apache::poi::sl::draw::DrawFactory::getTextFragment(::java::awt::font::TextLayout* layout, ::java::text::AttributedString* str)
{
    return new DrawTextFragment(layout, str);
}

org::apache::poi::sl::draw::DrawPaint* org::apache::poi::sl::draw::DrawFactory::getPaint(::org::apache::poi::sl::usermodel::PlaceableShape* shape)
{
    return new DrawPaint(shape);
}

void org::apache::poi::sl::draw::DrawFactory::drawShape(::java::awt::Graphics2D* graphics, ::org::apache::poi::sl::usermodel::Shape* shape, ::java::awt::geom::Rectangle2D* bounds)
{
    auto shapeBounds = npc(shape)->getAnchor();
    if(npc(shapeBounds)->isEmpty() || (bounds != nullptr && npc(bounds)->isEmpty())) {
        return;
    }
    auto txg = java_cast< ::java::awt::geom::AffineTransform* >(npc(graphics)->getRenderingHint(Drawable::GROUP_TRANSFORM()));
    auto tx = new ::java::awt::geom::AffineTransform();
    {
        auto finally0 = finally([&] {
            npc(graphics)->setRenderingHint(Drawable::GROUP_TRANSFORM(), txg);
        });
        {
            if(bounds != nullptr) {
                auto scaleX = npc(bounds)->getWidth() / npc(shapeBounds)->getWidth();
                auto scaleY = npc(bounds)->getHeight() / npc(shapeBounds)->getHeight();
                npc(tx)->translate(npc(bounds)->getCenterX(), npc(bounds)->getCenterY());
                npc(tx)->scale(scaleX, scaleY);
                npc(tx)->translate(-npc(shapeBounds)->getCenterX(), -npc(shapeBounds)->getCenterY());
            }
            npc(graphics)->setRenderingHint(Drawable::GROUP_TRANSFORM(), tx);
            auto d = getDrawable(static_cast< ::org::apache::poi::sl::usermodel::Shape* >(shape));
            npc(d)->applyTransform(graphics);
            npc(d)->draw(graphics);
        }
    }

}

void org::apache::poi::sl::draw::DrawFactory::fixFonts(::java::awt::Graphics2D* graphics)
{
    if(!::org::apache::poi::util::JvmBugs::hasLineBreakMeasurerBug())
        return;

    auto fontMap = java_cast< ::java::util::Map* >(npc(graphics)->getRenderingHint(Drawable::FONT_MAP()));
    if(fontMap == nullptr) {
        fontMap = new ::java::util::HashMap();
        npc(graphics)->setRenderingHint(Drawable::FONT_MAP(), fontMap);
    }
    auto fonts = (new ::java::lang::StringArrayArray({
        (new ::java::lang::StringArray({
        u"Calibri"_j
        , u"Lucida Sans"_j
    }))
        , (new ::java::lang::StringArray({
        u"Cambria"_j
        , u"Lucida Bright"_j
    }))
        , (new ::java::lang::StringArray({
        u"Times New Roman"_j
        , u"Lucida Bright"_j
    }))
        , (new ::java::lang::StringArray({
        u"serif"_j
        , u"Lucida Bright"_j
    }))
    }));
    for(auto f : *npc(fonts)) {
        if(!npc(fontMap)->containsKey((*f)[int32_t(0)])) {
            npc(fontMap)->put((*f)[int32_t(0)], (*f)[int32_t(1)]);
        }
    }
}

org::apache::poi::sl::draw::DrawFontManager* org::apache::poi::sl::draw::DrawFactory::getFontManager(::java::awt::Graphics2D* graphics)
{
    auto fontHandler = java_cast< DrawFontManager* >(npc(graphics)->getRenderingHint(Drawable::FONT_HANDLER()));
    return (fontHandler != nullptr) ? fontHandler : static_cast< DrawFontManager* >(new DrawFontManagerDefault());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawFactory", 34);
    return c;
}

void org::apache::poi::sl::draw::DrawFactory::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        defaultFactory_ = new ::java::lang::ThreadLocal();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::sl::draw::DrawFactory::getClass0()
{
    return class_();
}


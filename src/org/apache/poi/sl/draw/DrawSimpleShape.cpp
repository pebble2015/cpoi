// Generated from /POI/java/org/apache/poi/sl/draw/DrawSimpleShape.java
#include <org/apache/poi/sl/draw/DrawSimpleShape.hpp>

#include <java/awt/BasicStroke.hpp>
#include <java/awt/Color.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/awt/Paint.hpp>
#include <java/awt/Shape.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Ellipse2D_Double.hpp>
#include <java/awt/geom/Path2D_Double.hpp>
#include <java/awt/geom/Rectangle2D_Double.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <javax/xml/bind/JAXBContext.hpp>
#include <javax/xml/bind/JAXBElement.hpp>
#include <javax/xml/bind/Unmarshaller.hpp>
#include <javax/xml/namespace_/QName.hpp>
#include <javax/xml/stream/XMLEventReader.hpp>
#include <javax/xml/stream/XMLInputFactory.hpp>
#include <javax/xml/stream/events/StartElement.hpp>
#include <javax/xml/stream/events/XMLEvent.hpp>
#include <org/apache/poi/sl/draw/DrawFactory.hpp>
#include <org/apache/poi/sl/draw/DrawPaint.hpp>
#include <org/apache/poi/sl/draw/DrawSimpleShape_getCustomGeometry_1.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/draw/binding/CTCustomGeometry2D.hpp>
#include <org/apache/poi/sl/draw/geom/Context.hpp>
#include <org/apache/poi/sl/draw/geom/CustomGeometry.hpp>
#include <org/apache/poi/sl/draw/geom/Outline.hpp>
#include <org/apache/poi/sl/draw/geom/Path.hpp>
#include <org/apache/poi/sl/usermodel/FillStyle.hpp>
#include <org/apache/poi/sl/usermodel/LineDecoration_DecorationShape.hpp>
#include <org/apache/poi/sl/usermodel/LineDecoration_DecorationSize.hpp>
#include <org/apache/poi/sl/usermodel/LineDecoration.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle_SolidPaint.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>
#include <org/apache/poi/sl/usermodel/Shadow.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/SimpleShape.hpp>
#include <org/apache/poi/sl/usermodel/StrokeStyle.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/StaxHelper.hpp>
#include <org/apache/poi/util/Units.hpp>

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
org::apache::poi::sl::draw::DrawSimpleShape::DrawSimpleShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawSimpleShape::DrawSimpleShape(::org::apache::poi::sl::usermodel::SimpleShape* shape) 
    : DrawSimpleShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

constexpr double org::apache::poi::sl::draw::DrawSimpleShape::DECO_SIZE_POW;

void org::apache::poi::sl::draw::DrawSimpleShape::ctor(::org::apache::poi::sl::usermodel::SimpleShape* shape)
{
    super::ctor(shape);
}

void org::apache::poi::sl::draw::DrawSimpleShape::draw(::java::awt::Graphics2D* graphics)
{
    auto drawPaint = npc(DrawFactory::getInstance(graphics))->getPaint(getShape());
    auto fill = npc(drawPaint)->getPaint(graphics, npc(npc(getShape())->getFillStyle())->getPaint());
    auto line = npc(drawPaint)->getPaint(graphics, npc(npc(getShape())->getStrokeStyle())->getPaint());
    auto stroke = getStroke();
    npc(graphics)->setStroke(stroke);
    auto elems = computeOutlines(graphics);
    drawShadow(graphics, elems, fill, line);
    if(fill != nullptr) {
        for (auto _i = npc(elems)->iterator(); _i->hasNext(); ) {
            ::org::apache::poi::sl::draw::geom::Outline* o = java_cast< ::org::apache::poi::sl::draw::geom::Outline* >(_i->next());
            {
                if(npc(npc(o)->getPath())->isFilled()) {
                    auto fillMod = npc(drawPaint)->getPaint(graphics, npc(npc(getShape())->getFillStyle())->getPaint(), npc(npc(o)->getPath())->getFill());
                    if(fillMod != nullptr) {
                        npc(graphics)->setPaint(fillMod);
                        auto s = npc(o)->getOutline();
                        npc(graphics)->setRenderingHint(Drawable::GRADIENT_SHAPE(), s);
                        npc(graphics)->fill(s);
                    }
                }
            }
        }
    }
    drawContent(graphics);
    if(line != nullptr) {
        npc(graphics)->setPaint(line);
        npc(graphics)->setStroke(stroke);
        for (auto _i = npc(elems)->iterator(); _i->hasNext(); ) {
            ::org::apache::poi::sl::draw::geom::Outline* o = java_cast< ::org::apache::poi::sl::draw::geom::Outline* >(_i->next());
            {
                if(npc(npc(o)->getPath())->isStroked()) {
                    auto s = npc(o)->getOutline();
                    npc(graphics)->setRenderingHint(Drawable::GRADIENT_SHAPE(), s);
                    npc(graphics)->draw(s);
                }
            }
        }
    }
    drawDecoration(graphics, line, stroke);
}

void org::apache::poi::sl::draw::DrawSimpleShape::drawDecoration(::java::awt::Graphics2D* graphics, ::java::awt::Paint* line, ::java::awt::BasicStroke* stroke)
{
    if(line == nullptr) {
        return;
    }
    npc(graphics)->setPaint(line);
    ::java::util::List* lst = new ::java::util::ArrayList();
    auto deco = npc(getShape())->getLineDecoration();
    auto head = getHeadDecoration(graphics, deco, stroke);
    if(head != nullptr) {
        npc(lst)->add(static_cast< ::java::lang::Object* >(head));
    }
    auto tail = getTailDecoration(graphics, deco, stroke);
    if(tail != nullptr) {
        npc(lst)->add(static_cast< ::java::lang::Object* >(tail));
    }
    for (auto _i = npc(lst)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::sl::draw::geom::Outline* o = java_cast< ::org::apache::poi::sl::draw::geom::Outline* >(_i->next());
        {
            auto s = npc(o)->getOutline();
            auto p = npc(o)->getPath();
            npc(graphics)->setRenderingHint(Drawable::GRADIENT_SHAPE(), s);
            if(npc(p)->isFilled()) {
                npc(graphics)->fill(s);
            }
            if(npc(p)->isStroked()) {
                npc(graphics)->draw(s);
            }
        }
    }
}

org::apache::poi::sl::draw::geom::Outline* org::apache::poi::sl::draw::DrawSimpleShape::getTailDecoration(::java::awt::Graphics2D* graphics, ::org::apache::poi::sl::usermodel::LineDecoration* deco, ::java::awt::BasicStroke* stroke)
{
    if(deco == nullptr || stroke == nullptr) {
        return nullptr;
    }
    auto tailLength = npc(deco)->getTailLength();
    if(tailLength == nullptr) {
        tailLength = ::org::apache::poi::sl::usermodel::LineDecoration_DecorationSize::MEDIUM;
    }
    auto tailWidth = npc(deco)->getTailWidth();
    if(tailWidth == nullptr) {
        tailWidth = ::org::apache::poi::sl::usermodel::LineDecoration_DecorationSize::MEDIUM;
    }
    auto lineWidth = ::java::lang::Math::max(2.5, static_cast< double >(npc(stroke)->getLineWidth()));
    auto anchor = getAnchor(graphics, static_cast< ::org::apache::poi::sl::usermodel::PlaceableShape* >(getShape()));
    double x2 = npc(anchor)->getX() + npc(anchor)->getWidth(), y2 = npc(anchor)->getY() + npc(anchor)->getHeight();
    auto alpha = ::java::lang::Math::atan(npc(anchor)->getHeight() / npc(anchor)->getWidth());
    auto at = new ::java::awt::geom::AffineTransform();
    ::java::awt::Shape* tailShape = nullptr;
    ::org::apache::poi::sl::draw::geom::Path* p = nullptr;
    ::java::awt::geom::Rectangle2D* bounds;
    auto const scaleY = ::java::lang::Math::pow(DECO_SIZE_POW, npc(tailWidth)->ordinal() + 1.0);
    auto const scaleX = ::java::lang::Math::pow(DECO_SIZE_POW, npc(tailLength)->ordinal() + 1.0);
    auto tailShapeEnum = npc(deco)->getTailShape();
    if(tailShapeEnum == nullptr) {
        return nullptr;
    }
    {
        ::java::awt::geom::Path2D_Double* arrow;
        ::java::awt::geom::Path2D_Double* triangle;
        {
            auto v = tailShapeEnum;
            if((v == ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::OVAL)) {
                p = new ::org::apache::poi::sl::draw::geom::Path();
                tailShape = new ::java::awt::geom::Ellipse2D_Double(int32_t(0), int32_t(0), lineWidth * scaleX, lineWidth * scaleY);
                bounds = npc(tailShape)->getBounds2D();
                npc(at)->translate(x2 - npc(bounds)->getWidth() / int32_t(2), y2 - npc(bounds)->getHeight() / int32_t(2));
                npc(at)->rotate(alpha, npc(bounds)->getX() + npc(bounds)->getWidth() / int32_t(2), npc(bounds)->getY() + npc(bounds)->getHeight() / int32_t(2));
                goto end_switch0;;
            }
            if((v == ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::STEALTH) || (v == ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::ARROW)) {
                p = new ::org::apache::poi::sl::draw::geom::Path(false, true);
                auto arrow = new ::java::awt::geom::Path2D_Double();
                npc(arrow)->moveTo((-lineWidth * scaleX), (-lineWidth * scaleY / int32_t(2)));
                npc(arrow)->lineTo(static_cast< double >(int32_t(0)), static_cast< double >(int32_t(0)));
                npc(arrow)->lineTo((-lineWidth * scaleX), (lineWidth * scaleY / int32_t(2)));
                tailShape = arrow;
                npc(at)->translate(x2, y2);
                npc(at)->rotate(alpha);
                goto end_switch0;;
            }
            if((v == ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::TRIANGLE)) {
                p = new ::org::apache::poi::sl::draw::geom::Path();
                auto triangle = new ::java::awt::geom::Path2D_Double();
                npc(triangle)->moveTo((-lineWidth * scaleX), (-lineWidth * scaleY / int32_t(2)));
                npc(triangle)->lineTo(static_cast< double >(int32_t(0)), static_cast< double >(int32_t(0)));
                npc(triangle)->lineTo((-lineWidth * scaleX), (lineWidth * scaleY / int32_t(2)));
                npc(triangle)->closePath();
                tailShape = triangle;
                npc(at)->translate(x2, y2);
                npc(at)->rotate(alpha);
                goto end_switch0;;
            }
            if((((v != ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::OVAL) && (v != ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::STEALTH) && (v != ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::ARROW) && (v != ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::TRIANGLE)))) {
                goto end_switch0;;
            }
end_switch0:;
        }
    }

    if(tailShape != nullptr) {
        tailShape = npc(at)->createTransformedShape(tailShape);
    }
    return tailShape == nullptr ? static_cast< ::org::apache::poi::sl::draw::geom::Outline* >(nullptr) : new ::org::apache::poi::sl::draw::geom::Outline(tailShape, p);
}

org::apache::poi::sl::draw::geom::Outline* org::apache::poi::sl::draw::DrawSimpleShape::getHeadDecoration(::java::awt::Graphics2D* graphics, ::org::apache::poi::sl::usermodel::LineDecoration* deco, ::java::awt::BasicStroke* stroke)
{
    if(deco == nullptr || stroke == nullptr) {
        return nullptr;
    }
    auto headLength = npc(deco)->getHeadLength();
    if(headLength == nullptr) {
        headLength = ::org::apache::poi::sl::usermodel::LineDecoration_DecorationSize::MEDIUM;
    }
    auto headWidth = npc(deco)->getHeadWidth();
    if(headWidth == nullptr) {
        headWidth = ::org::apache::poi::sl::usermodel::LineDecoration_DecorationSize::MEDIUM;
    }
    auto lineWidth = ::java::lang::Math::max(2.5, static_cast< double >(npc(stroke)->getLineWidth()));
    auto anchor = getAnchor(graphics, static_cast< ::org::apache::poi::sl::usermodel::PlaceableShape* >(getShape()));
    double x1 = npc(anchor)->getX(), y1 = npc(anchor)->getY();
    auto alpha = ::java::lang::Math::atan(npc(anchor)->getHeight() / npc(anchor)->getWidth());
    auto at = new ::java::awt::geom::AffineTransform();
    ::java::awt::Shape* headShape = nullptr;
    ::org::apache::poi::sl::draw::geom::Path* p = nullptr;
    ::java::awt::geom::Rectangle2D* bounds;
    auto const scaleY = ::java::lang::Math::pow(DECO_SIZE_POW, npc(headWidth)->ordinal() + 1.0);
    auto const scaleX = ::java::lang::Math::pow(DECO_SIZE_POW, npc(headLength)->ordinal() + 1.0);
    auto headShapeEnum = npc(deco)->getHeadShape();
    if(headShapeEnum == nullptr) {
        return nullptr;
    }
    {
        ::java::awt::geom::Path2D_Double* arrow;
        ::java::awt::geom::Path2D_Double* triangle;
        {
            auto v = headShapeEnum;
            if((v == ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::OVAL)) {
                p = new ::org::apache::poi::sl::draw::geom::Path();
                headShape = new ::java::awt::geom::Ellipse2D_Double(int32_t(0), int32_t(0), lineWidth * scaleX, lineWidth * scaleY);
                bounds = npc(headShape)->getBounds2D();
                npc(at)->translate(x1 - npc(bounds)->getWidth() / int32_t(2), y1 - npc(bounds)->getHeight() / int32_t(2));
                npc(at)->rotate(alpha, npc(bounds)->getX() + npc(bounds)->getWidth() / int32_t(2), npc(bounds)->getY() + npc(bounds)->getHeight() / int32_t(2));
                goto end_switch1;;
            }
            if((v == ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::STEALTH) || (v == ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::ARROW)) {
                p = new ::org::apache::poi::sl::draw::geom::Path(false, true);
                auto arrow = new ::java::awt::geom::Path2D_Double();
                npc(arrow)->moveTo((lineWidth * scaleX), (-lineWidth * scaleY / int32_t(2)));
                npc(arrow)->lineTo(static_cast< double >(int32_t(0)), static_cast< double >(int32_t(0)));
                npc(arrow)->lineTo((lineWidth * scaleX), (lineWidth * scaleY / int32_t(2)));
                headShape = arrow;
                npc(at)->translate(x1, y1);
                npc(at)->rotate(alpha);
                goto end_switch1;;
            }
            if((v == ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::TRIANGLE)) {
                p = new ::org::apache::poi::sl::draw::geom::Path();
                auto triangle = new ::java::awt::geom::Path2D_Double();
                npc(triangle)->moveTo((lineWidth * scaleX), (-lineWidth * scaleY / int32_t(2)));
                npc(triangle)->lineTo(static_cast< double >(int32_t(0)), static_cast< double >(int32_t(0)));
                npc(triangle)->lineTo((lineWidth * scaleX), (lineWidth * scaleY / int32_t(2)));
                npc(triangle)->closePath();
                headShape = triangle;
                npc(at)->translate(x1, y1);
                npc(at)->rotate(alpha);
                goto end_switch1;;
            }
            if((((v != ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::OVAL) && (v != ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::STEALTH) && (v != ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::ARROW) && (v != ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::TRIANGLE)))) {
                goto end_switch1;;
            }
end_switch1:;
        }
    }

    if(headShape != nullptr) {
        headShape = npc(at)->createTransformedShape(headShape);
    }
    return headShape == nullptr ? static_cast< ::org::apache::poi::sl::draw::geom::Outline* >(nullptr) : new ::org::apache::poi::sl::draw::geom::Outline(headShape, p);
}

java::awt::BasicStroke* org::apache::poi::sl::draw::DrawSimpleShape::getStroke()
{
    return getStroke(npc(getShape())->getStrokeStyle());
}

void org::apache::poi::sl::draw::DrawSimpleShape::drawShadow(::java::awt::Graphics2D* graphics, ::java::util::Collection* outlines, ::java::awt::Paint* fill, ::java::awt::Paint* line)
{
    auto shadow = npc(getShape())->getShadow();
    if(shadow == nullptr || (fill == nullptr && line == nullptr)) {
        return;
    }
    auto shadowPaint = npc(shadow)->getFillStyle();
    auto shadowColor = DrawPaint::applyColorTransform(npc(shadowPaint)->getSolidColor());
    auto shapeRotation = npc(getShape())->getRotation();
    if(npc(getShape())->getFlipVertical()) {
        shapeRotation += 180;
    }
    auto angle = npc(shadow)->getAngle() - shapeRotation;
    auto dist = npc(shadow)->getDistance();
    auto dx = dist * ::java::lang::Math::cos(::java::lang::Math::toRadians(angle));
    auto dy = dist * ::java::lang::Math::sin(::java::lang::Math::toRadians(angle));
    npc(graphics)->translate(dx, dy);
    for (auto _i = npc(outlines)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::sl::draw::geom::Outline* o = java_cast< ::org::apache::poi::sl::draw::geom::Outline* >(_i->next());
        {
            auto s = npc(o)->getOutline();
            auto p = npc(o)->getPath();
            npc(graphics)->setRenderingHint(Drawable::GRADIENT_SHAPE(), s);
            npc(graphics)->setPaint(shadowColor);
            if(fill != nullptr && npc(p)->isFilled()) {
                npc(graphics)->fill(s);
            } else if(line != nullptr && npc(p)->isStroked()) {
                npc(graphics)->draw(s);
            }
        }
    }
    npc(graphics)->translate(-dx, -dy);
}

org::apache::poi::sl::draw::geom::CustomGeometry* org::apache::poi::sl::draw::DrawSimpleShape::getCustomGeometry(::java::lang::String* name)
{
    clinit();
    return getCustomGeometry(name, nullptr);
}

org::apache::poi::sl::draw::geom::CustomGeometry* org::apache::poi::sl::draw::DrawSimpleShape::getCustomGeometry(::java::lang::String* name, ::java::awt::Graphics2D* graphics)
{
    clinit();
    auto presets = (graphics == nullptr) ? static_cast< ::java::util::Map* >(nullptr) : java_cast< ::java::util::Map* >(npc(graphics)->getRenderingHint(Drawable::PRESET_GEOMETRY_CACHE()));
    if(presets == nullptr) {
        presets = new ::java::util::HashMap();
        if(graphics != nullptr) {
            npc(graphics)->setRenderingHint(Drawable::PRESET_GEOMETRY_CACHE(), presets);
        }
        auto packageName = u"org.apache.poi.sl.draw.binding"_j;
        auto presetIS = npc(Drawable::class_())->getResourceAsStream(u"presetShapeDefinitions.xml"_j);
        ::javax::xml::stream::EventFilter* startElementFilter = new DrawSimpleShape_getCustomGeometry_1();
        {
            auto finally0 = finally([&] {
                ::org::apache::poi::util::IOUtils::closeQuietly(presetIS);
            });
            try {
                auto staxFactory = ::org::apache::poi::util::StaxHelper::newXMLInputFactory();
                auto staxReader = npc(staxFactory)->createXMLEventReader(presetIS);
                auto staxFiltRd = npc(staxFactory)->createFilteredReader(staxReader, startElementFilter);
                npc(staxFiltRd)->nextEvent();
                auto jaxbContext = ::javax::xml::bind::JAXBContext::newInstance(packageName);
                auto unmarshaller = npc(jaxbContext)->createUnmarshaller();
                while (npc(staxFiltRd)->peek() != nullptr) {
                    auto evRoot = java_cast< ::javax::xml::stream::events::StartElement* >(npc(staxFiltRd)->peek());
                    auto cusName = npc(npc(evRoot)->getName())->getLocalPart();
                    auto el = npc(unmarshaller)->unmarshal(staxReader, static_cast< ::java::lang::Class* >(::org::apache::poi::sl::draw::binding::CTCustomGeometry2D::class_()));
                    auto cusGeom = java_cast< ::org::apache::poi::sl::draw::binding::CTCustomGeometry2D* >(npc(el)->getValue());
                    npc(presets)->put(cusName, new ::org::apache::poi::sl::draw::geom::CustomGeometry(cusGeom));
                }
                npc(staxFiltRd)->close();
                npc(staxReader)->close();
            } catch (::java::lang::Exception* e) {
                throw new ::java::lang::RuntimeException(u"Unable to load preset geometries."_j, e);
            }
        }
    }
    return java_cast< ::org::apache::poi::sl::draw::geom::CustomGeometry* >(npc(presets)->get(name));
}

java::util::Collection* org::apache::poi::sl::draw::DrawSimpleShape::computeOutlines(::java::awt::Graphics2D* graphics)
{
    auto const sh = getShape();
    ::java::util::List* lst = new ::java::util::ArrayList();
    auto geom = npc(sh)->getGeometry();
    if(geom == nullptr) {
        return lst;
    }
    auto anchor = getAnchor(graphics, static_cast< ::org::apache::poi::sl::usermodel::PlaceableShape* >(sh));
    for (auto _i = npc(geom)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::sl::draw::geom::Path* p = java_cast< ::org::apache::poi::sl::draw::geom::Path* >(_i->next());
        {
            double w = npc(p)->getW(), h = npc(p)->getH(), scaleX = ::org::apache::poi::util::Units::toPoints(1), scaleY = scaleX;
            if(w == -int32_t(1)) {
                w = ::org::apache::poi::util::Units::toEMU(npc(anchor)->getWidth());
            } else {
                scaleX = npc(anchor)->getWidth() / w;
            }
            if(h == -int32_t(1)) {
                h = ::org::apache::poi::util::Units::toEMU(npc(anchor)->getHeight());
            } else {
                scaleY = npc(anchor)->getHeight() / h;
            }
            ::java::awt::geom::Rectangle2D* const pathAnchor = new ::java::awt::geom::Rectangle2D_Double(int32_t(0), int32_t(0), w, h);
            auto ctx = new ::org::apache::poi::sl::draw::geom::Context(geom, pathAnchor, sh);
            ::java::awt::Shape* gp = npc(p)->getPath(ctx);
            auto at = new ::java::awt::geom::AffineTransform();
            npc(at)->translate(npc(anchor)->getX(), npc(anchor)->getY());
            npc(at)->scale(scaleX, scaleY);
            auto canvasShape = npc(at)->createTransformedShape(gp);
            npc(lst)->add(static_cast< ::java::lang::Object* >(new ::org::apache::poi::sl::draw::geom::Outline(canvasShape, p)));
        }
    }
    return lst;
}

org::apache::poi::sl::usermodel::SimpleShape* org::apache::poi::sl::draw::DrawSimpleShape::getShape()
{
    return java_cast< ::org::apache::poi::sl::usermodel::SimpleShape* >(shape);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawSimpleShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawSimpleShape", 38);
    return c;
}

java::awt::BasicStroke* org::apache::poi::sl::draw::DrawSimpleShape::getStroke(::org::apache::poi::sl::usermodel::StrokeStyle* strokeStyle)
{
    return super::getStroke(strokeStyle);
}

java::lang::Class* org::apache::poi::sl::draw::DrawSimpleShape::getClass0()
{
    return class_();
}


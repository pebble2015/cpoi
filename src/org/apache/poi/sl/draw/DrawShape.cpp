// Generated from /POI/java/org/apache/poi/sl/draw/DrawShape.java
#include <org/apache/poi/sl/draw/DrawShape.hpp>

#include <java/awt/BasicStroke.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/awt/Shape.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/StrokeStyle_LineCap.hpp>
#include <org/apache/poi/sl/usermodel/StrokeStyle_LineDash.hpp>
#include <org/apache/poi/sl/usermodel/StrokeStyle.hpp>
#include <Array.hpp>
#include <cmath>

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

poi::sl::draw::DrawShape::DrawShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawShape::DrawShape(::poi::sl::usermodel::Shape* shape) 
    : DrawShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

void poi::sl::draw::DrawShape::ctor(::poi::sl::usermodel::Shape* shape)
{
    super::ctor();
    this->shape = shape;
}

bool poi::sl::draw::DrawShape::isHSLF(::poi::sl::usermodel::Shape* shape)
{
    clinit();
    return npc(npc(npc(npc(shape)->getClass())->getCanonicalName())->toLowerCase(::java::util::Locale::ROOT()))->contains(u"hslf"_j);
}

void poi::sl::draw::DrawShape::applyTransform(::java::awt::Graphics2D* graphics)
{
    if(!(dynamic_cast< ::poi::sl::usermodel::PlaceableShape* >(shape) != nullptr)) {
        return;
    }
    auto ps = java_cast< ::poi::sl::usermodel::PlaceableShape* >(shape);
    auto const isHSLF = DrawShape::isHSLF(shape);
    auto tx = java_cast< ::java::awt::geom::AffineTransform* >(npc(graphics)->getRenderingHint(Drawable::GROUP_TRANSFORM()));
    if(tx == nullptr) {
        tx = new ::java::awt::geom::AffineTransform();
    }
    auto const anchor = npc(npc(tx)->createTransformedShape(npc(ps)->getAnchor()))->getBounds2D();
    auto cmds = isHSLF ? new ::char16_tArray({
        u'h'
        , u'v'
        , u'r'
    }) : new ::char16_tArray({
        u'r'
        , u'h'
        , u'v'
    });
    for(auto ch : *npc(cmds)) {
        {
            double rotation;
            switch (ch) {
            case u'h':
                if(npc(ps)->getFlipHorizontal()) {
                    npc(graphics)->translate(npc(anchor)->getX() + npc(anchor)->getWidth(), npc(anchor)->getY());
                    npc(graphics)->scale(-int32_t(1), 1);
                    npc(graphics)->translate(-npc(anchor)->getX(), -npc(anchor)->getY());
                }
                break;
            case u'v':
                if(npc(ps)->getFlipVertical()) {
                    npc(graphics)->translate(npc(anchor)->getX(), npc(anchor)->getY() + npc(anchor)->getHeight());
                    npc(graphics)->scale(1, -int32_t(1));
                    npc(graphics)->translate(-npc(anchor)->getX(), -npc(anchor)->getY());
                }
                break;
            case u'r':
                rotation = npc(ps)->getRotation();
                if(rotation != 0.0) {
                    auto centerX = npc(anchor)->getCenterX();
                    auto centerY = npc(anchor)->getCenterY();
                    rotation = std::fmod(rotation, rotation);
                    if(rotation < 0) {
                        rotation += 360.0;
                    }
                    auto quadrant = ((static_cast< int32_t >(rotation) + int32_t(45)) / int32_t(90)) % int32_t(4);
                    double scaleX = 1.0, scaleY = 1.0;
                    if(quadrant == 1 || quadrant == 3) {
                        ::java::awt::geom::AffineTransform* txs;
                        if(isHSLF) {
                            txs = new ::java::awt::geom::AffineTransform(tx);
                        } else {
                            txs = new ::java::awt::geom::AffineTransform();
                            npc(txs)->translate(centerX, centerY);
                            npc(txs)->rotate(::java::lang::Math::PI / 2.0);
                            npc(txs)->translate(-centerX, -centerY);
                            npc(txs)->concatenate(tx);
                        }
                        npc(txs)->translate(centerX, centerY);
                        npc(txs)->rotate(::java::lang::Math::PI / 2.0);
                        npc(txs)->translate(-centerX, -centerY);
                        auto anchor2 = npc(npc(txs)->createTransformedShape(npc(ps)->getAnchor()))->getBounds2D();
                        scaleX = safeScale(npc(anchor)->getWidth(), npc(anchor2)->getWidth());
                        scaleY = safeScale(npc(anchor)->getHeight(), npc(anchor2)->getHeight());
                    } else {
                        quadrant = 0;
                    }
                    npc(graphics)->translate(centerX, centerY);
                    auto rot = ::java::lang::Math::toRadians(rotation - quadrant * 90.0);
                    if(rot != 0) {
                        npc(graphics)->rotate(rot);
                    }
                    npc(graphics)->scale(scaleX, scaleY);
                    rot = ::java::lang::Math::toRadians(quadrant * 90.0);
                    if(rot != 0) {
                        npc(graphics)->rotate(rot);
                    }
                    npc(graphics)->translate(-centerX, -centerY);
                }
                break;
            default:
                throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"unexpected transform code "_j)->append(ch)->toString());
            }
        }

    }
}

double poi::sl::draw::DrawShape::safeScale(double dim1, double dim2)
{
    clinit();
    if(dim1 == 0.0) {
        return 1;
    }
    return (dim2 == 0.0) ? static_cast< double >(int32_t(1)) : dim1 / dim2;
}

void poi::sl::draw::DrawShape::draw(::java::awt::Graphics2D* graphics)
{
}

void poi::sl::draw::DrawShape::drawContent(::java::awt::Graphics2D* graphics)
{
}

java::awt::geom::Rectangle2D* poi::sl::draw::DrawShape::getAnchor(::java::awt::Graphics2D* graphics, ::poi::sl::usermodel::PlaceableShape* shape)
{
    clinit();
    return getAnchor(graphics, npc(shape)->getAnchor());
}

java::awt::geom::Rectangle2D* poi::sl::draw::DrawShape::getAnchor(::java::awt::Graphics2D* graphics, ::java::awt::geom::Rectangle2D* anchor)
{
    clinit();
    if(graphics == nullptr) {
        return anchor;
    }
    auto tx = java_cast< ::java::awt::geom::AffineTransform* >(npc(graphics)->getRenderingHint(Drawable::GROUP_TRANSFORM()));
    if(tx != nullptr && !npc(tx)->isIdentity()) {
        anchor = npc(npc(tx)->createTransformedShape(anchor))->getBounds2D();
    }
    return anchor;
}

poi::sl::usermodel::Shape* poi::sl::draw::DrawShape::getShape()
{
    return shape;
}

java::awt::BasicStroke* poi::sl::draw::DrawShape::getStroke(::poi::sl::usermodel::StrokeStyle* strokeStyle)
{
    clinit();
    auto lineWidth = static_cast< float >(npc(strokeStyle)->getLineWidth());
    if(lineWidth == 0.0f) {
        lineWidth = 0.25f;
    }
    auto lineDash = npc(strokeStyle)->getLineDash();
    if(lineDash == nullptr) {
        lineDash = ::poi::sl::usermodel::StrokeStyle_LineDash::SOLID;
    }
    auto dashPatI = npc(lineDash)->pattern;
    float const dash_phase = int32_t(0);
    ::floatArray* dashPatF = nullptr;
    if(dashPatI != nullptr) {
        dashPatF = new ::floatArray(npc(dashPatI)->length);
        for (auto i = int32_t(0); i < npc(dashPatI)->length; i++) {
            (*dashPatF)[i] = (*dashPatI)[i] * ::java::lang::Math::max(static_cast< float >(int32_t(1)), lineWidth);
        }
    }
    auto lineCapE = npc(strokeStyle)->getLineCap();
    if(lineCapE == nullptr) {
        lineCapE = ::poi::sl::usermodel::StrokeStyle_LineCap::FLAT;
    }
    int32_t lineCap;
    {
        auto v = lineCapE;
        if((v == ::poi::sl::usermodel::StrokeStyle_LineCap::ROUND)) {
            lineCap = ::java::awt::BasicStroke::CAP_ROUND;
            goto end_switch0;;
        }
        if((v == ::poi::sl::usermodel::StrokeStyle_LineCap::SQUARE)) {
            lineCap = ::java::awt::BasicStroke::CAP_SQUARE;
            goto end_switch0;;
        }
        if((v == ::poi::sl::usermodel::StrokeStyle_LineCap::FLAT)) {
            lineCap = ::java::awt::BasicStroke::CAP_BUTT;
            goto end_switch0;;
        }
end_switch0:;
    }

    auto lineJoin = ::java::awt::BasicStroke::JOIN_ROUND;
    return new ::java::awt::BasicStroke(lineWidth, lineCap, lineJoin, lineWidth, dashPatF, dash_phase);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawShape", 32);
    return c;
}

java::lang::Class* poi::sl::draw::DrawShape::getClass0()
{
    return class_();
}


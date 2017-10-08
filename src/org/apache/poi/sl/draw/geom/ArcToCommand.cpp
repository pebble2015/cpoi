// Generated from /POI/java/org/apache/poi/sl/draw/geom/ArcToCommand.java
#include <org/apache/poi/sl/draw/geom/ArcToCommand.hpp>

#include <java/awt/Shape.hpp>
#include <java/awt/geom/Arc2D_Double.hpp>
#include <java/awt/geom/Arc2D.hpp>
#include <java/awt/geom/Path2D_Double.hpp>
#include <java/awt/geom/Point2D.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DArcTo.hpp>
#include <org/apache/poi/sl/draw/geom/Context.hpp>
#include <org/apache/poi/sl/draw/geom/Formula.hpp>
#include <cmath>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::draw::geom::ArcToCommand::ArcToCommand(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::geom::ArcToCommand::ArcToCommand(::poi::sl::draw::binding::CTPath2DArcTo* arc) 
    : ArcToCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(arc);
}

void poi::sl::draw::geom::ArcToCommand::ctor(::poi::sl::draw::binding::CTPath2DArcTo* arc)
{
    super::ctor();
    hr = npc(arc)->getHR();
    wr = npc(arc)->getWR();
    stAng = npc(arc)->getStAng();
    swAng = npc(arc)->getSwAng();
}

void poi::sl::draw::geom::ArcToCommand::execute(::java::awt::geom::Path2D_Double* path, Context* ctx)
{
    auto rx = npc(ctx)->getValue(wr);
    auto ry = npc(ctx)->getValue(hr);
    auto ooStart = npc(ctx)->getValue(stAng) / Formula::OOXML_DEGREE;
    auto ooExtent = npc(ctx)->getValue(swAng) / Formula::OOXML_DEGREE;
    auto awtStart = convertOoxml2AwtAngle(ooStart, rx, ry);
    auto awtSweep = convertOoxml2AwtAngle(ooStart + ooExtent, rx, ry) - awtStart;
    auto radStart = ::java::lang::Math::toRadians(ooStart);
    auto invStart = ::java::lang::Math::atan2(rx * ::java::lang::Math::sin(radStart), ry * ::java::lang::Math::cos(radStart));
    auto pt = npc(path)->getCurrentPoint();
    auto x0 = npc(pt)->getX() - rx * ::java::lang::Math::cos(invStart) - rx;
    auto y0 = npc(pt)->getY() - ry * ::java::lang::Math::sin(invStart) - ry;
    ::java::awt::geom::Arc2D* arc = new ::java::awt::geom::Arc2D_Double(x0, y0, int32_t(2) * rx, int32_t(2) * ry, awtStart, awtSweep, ::java::awt::geom::Arc2D::OPEN);
    npc(path)->append(static_cast< ::java::awt::Shape* >(arc), true);
}

double poi::sl::draw::geom::ArcToCommand::convertOoxml2AwtAngle(double ooAngle, double width, double height)
{
    auto aspect = (height / width);
    auto awtAngle = -ooAngle;
    auto awtAngle2 = std::fmod(awtAngle, 360.0);
    auto awtAngle3 = awtAngle - awtAngle2;
    switch (static_cast< int32_t >((awtAngle2 / int32_t(90)))) {
    case -int32_t(3):
        awtAngle3 -= 360;
        awtAngle2 += 360;
        break;
    case -int32_t(2):
    case -int32_t(1):
        awtAngle3 -= 180;
        awtAngle2 += 180;
        break;
    default:
    case int32_t(0):
        break;
    case int32_t(2):
    case int32_t(1):
        awtAngle3 += 180;
        awtAngle2 -= 180;
        break;
    case int32_t(3):
        awtAngle3 += 360;
        awtAngle2 -= 360;
        break;
    }

    awtAngle = ::java::lang::Math::toDegrees(::java::lang::Math::atan2(::java::lang::Math::tan(::java::lang::Math::toRadians(awtAngle2)), aspect)) + awtAngle3;
    return awtAngle;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::geom::ArcToCommand::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.ArcToCommand", 40);
    return c;
}

java::lang::Class* poi::sl::draw::geom::ArcToCommand::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/sl/draw/geom/Path.java
#include <org/apache/poi/sl/draw/geom/Path.hpp>

#include <java/awt/geom/Path2D_Double.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/sl/draw/binding/CTAdjPoint2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DArcTo.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DClose.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DCubicBezierTo.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DLineTo.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DMoveTo.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DQuadBezierTo.hpp>
#include <org/apache/poi/sl/draw/binding/STPathFillMode.hpp>
#include <org/apache/poi/sl/draw/geom/ArcToCommand.hpp>
#include <org/apache/poi/sl/draw/geom/ClosePathCommand.hpp>
#include <org/apache/poi/sl/draw/geom/CurveToCommand.hpp>
#include <org/apache/poi/sl/draw/geom/LineToCommand.hpp>
#include <org/apache/poi/sl/draw/geom/MoveToCommand.hpp>
#include <org/apache/poi/sl/draw/geom/PathCommand.hpp>
#include <org/apache/poi/sl/draw/geom/QuadToCommand.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle_PaintModifier.hpp>

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

poi::sl::draw::geom::Path::Path(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::geom::Path::Path() 
    : Path(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::sl::draw::geom::Path::Path(bool fill, bool stroke) 
    : Path(*static_cast< ::default_init_tag* >(0))
{
    ctor(fill,stroke);
}

poi::sl::draw::geom::Path::Path(::poi::sl::draw::binding::CTPath2D* spPath) 
    : Path(*static_cast< ::default_init_tag* >(0))
{
    ctor(spPath);
}

void poi::sl::draw::geom::Path::ctor()
{
    ctor(true, true);
}

void poi::sl::draw::geom::Path::ctor(bool fill, bool stroke)
{
    super::ctor();
    commands = new ::java::util::ArrayList();
    _w = -int32_t(1);
    _h = -int32_t(1);
    _fill = (fill) ? ::poi::sl::usermodel::PaintStyle_PaintModifier::NORM : ::poi::sl::usermodel::PaintStyle_PaintModifier::NONE;
    _stroke = stroke;
}

void poi::sl::draw::geom::Path::ctor(::poi::sl::draw::binding::CTPath2D* spPath)
{
    super::ctor();
    {
        auto v = npc(spPath)->getFill();
        if((v == ::poi::sl::draw::binding::STPathFillMode::NONE)) {
            _fill = ::poi::sl::usermodel::PaintStyle_PaintModifier::NONE;
            goto end_switch0;;
        }
        if((v == ::poi::sl::draw::binding::STPathFillMode::DARKEN)) {
            _fill = ::poi::sl::usermodel::PaintStyle_PaintModifier::DARKEN;
            goto end_switch0;;
        }
        if((v == ::poi::sl::draw::binding::STPathFillMode::DARKEN_LESS)) {
            _fill = ::poi::sl::usermodel::PaintStyle_PaintModifier::DARKEN_LESS;
            goto end_switch0;;
        }
        if((v == ::poi::sl::draw::binding::STPathFillMode::LIGHTEN)) {
            _fill = ::poi::sl::usermodel::PaintStyle_PaintModifier::LIGHTEN;
            goto end_switch0;;
        }
        if((v == ::poi::sl::draw::binding::STPathFillMode::LIGHTEN_LESS)) {
            _fill = ::poi::sl::usermodel::PaintStyle_PaintModifier::LIGHTEN_LESS;
            goto end_switch0;;
        }
        if((v == ::poi::sl::draw::binding::STPathFillMode::NORM)) {
            _fill = ::poi::sl::usermodel::PaintStyle_PaintModifier::NORM;
            goto end_switch0;;
        }
end_switch0:;
    }

    _stroke = npc(spPath)->isStroke();
    _w = npc(spPath)->isSetW() ? npc(spPath)->getW() : static_cast< int64_t >(-int32_t(1));
    _h = npc(spPath)->isSetH() ? npc(spPath)->getH() : static_cast< int64_t >(-int32_t(1));
    commands = new ::java::util::ArrayList();
    for (auto _i = npc(npc(spPath)->getCloseOrMoveToOrLnTo())->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* ch = java_cast< ::java::lang::Object* >(_i->next());
        {
            if(dynamic_cast< ::poi::sl::draw::binding::CTPath2DMoveTo* >(ch) != nullptr) {
                auto pt = npc((java_cast< ::poi::sl::draw::binding::CTPath2DMoveTo* >(ch)))->getPt();
                npc(commands)->add(static_cast< ::java::lang::Object* >(new MoveToCommand(pt)));
            } else if(dynamic_cast< ::poi::sl::draw::binding::CTPath2DLineTo* >(ch) != nullptr) {
                auto pt = npc((java_cast< ::poi::sl::draw::binding::CTPath2DLineTo* >(ch)))->getPt();
                npc(commands)->add(static_cast< ::java::lang::Object* >(new LineToCommand(pt)));
            } else if(dynamic_cast< ::poi::sl::draw::binding::CTPath2DArcTo* >(ch) != nullptr) {
                auto arc = java_cast< ::poi::sl::draw::binding::CTPath2DArcTo* >(ch);
                npc(commands)->add(static_cast< ::java::lang::Object* >(new ArcToCommand(arc)));
            } else if(dynamic_cast< ::poi::sl::draw::binding::CTPath2DQuadBezierTo* >(ch) != nullptr) {
                auto bez = (java_cast< ::poi::sl::draw::binding::CTPath2DQuadBezierTo* >(ch));
                auto pt1 = java_cast< ::poi::sl::draw::binding::CTAdjPoint2D* >(npc(npc(bez)->getPt())->get(0));
                auto pt2 = java_cast< ::poi::sl::draw::binding::CTAdjPoint2D* >(npc(npc(bez)->getPt())->get(1));
                npc(commands)->add(static_cast< ::java::lang::Object* >(new QuadToCommand(pt1, pt2)));
            } else if(dynamic_cast< ::poi::sl::draw::binding::CTPath2DCubicBezierTo* >(ch) != nullptr) {
                auto bez = (java_cast< ::poi::sl::draw::binding::CTPath2DCubicBezierTo* >(ch));
                auto pt1 = java_cast< ::poi::sl::draw::binding::CTAdjPoint2D* >(npc(npc(bez)->getPt())->get(0));
                auto pt2 = java_cast< ::poi::sl::draw::binding::CTAdjPoint2D* >(npc(npc(bez)->getPt())->get(1));
                auto pt3 = java_cast< ::poi::sl::draw::binding::CTAdjPoint2D* >(npc(npc(bez)->getPt())->get(2));
                npc(commands)->add(static_cast< ::java::lang::Object* >(new CurveToCommand(pt1, pt2, pt3)));
            } else if(dynamic_cast< ::poi::sl::draw::binding::CTPath2DClose* >(ch) != nullptr) {
                npc(commands)->add(static_cast< ::java::lang::Object* >(new ClosePathCommand()));
            } else {
                throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unsupported path segment: "_j)->append(static_cast< ::java::lang::Object* >(ch))->toString());
            }
        }
    }
}

void poi::sl::draw::geom::Path::addCommand(PathCommand* cmd)
{
    npc(commands)->add(static_cast< ::java::lang::Object* >(cmd));
}

java::awt::geom::Path2D_Double* poi::sl::draw::geom::Path::getPath(Context* ctx)
{
    auto path = new ::java::awt::geom::Path2D_Double();
    for (auto _i = npc(commands)->iterator(); _i->hasNext(); ) {
        PathCommand* cmd = java_cast< PathCommand* >(_i->next());
        {
            npc(cmd)->execute(path, ctx);
        }
    }
    return path;
}

bool poi::sl::draw::geom::Path::isStroked()
{
    return _stroke;
}

bool poi::sl::draw::geom::Path::isFilled()
{
    return _fill != ::poi::sl::usermodel::PaintStyle_PaintModifier::NONE;
}

poi::sl::usermodel::PaintStyle_PaintModifier* poi::sl::draw::geom::Path::getFill()
{
    return _fill;
}

int64_t poi::sl::draw::geom::Path::getW()
{
    return _w;
}

int64_t poi::sl::draw::geom::Path::getH()
{
    return _h;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::geom::Path::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.Path", 32);
    return c;
}

java::lang::Class* poi::sl::draw::geom::Path::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/sl/draw/geom/BuiltInGuide.java
#include <org/apache/poi/sl/draw/geom/BuiltInGuide.hpp>

#include <java/awt/geom/Rectangle2D.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/sl/draw/geom/Context.hpp>
#include <org/apache/poi/sl/draw/geom/Formula.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace sl
            {
                namespace draw
                {
                    namespace geom
                    {
typedef ::SubArray< ::org::apache::poi::sl::draw::geom::Formula, ::java::lang::ObjectArray > FormulaArray;
typedef ::SubArray< ::org::apache::poi::sl::draw::geom::BuiltInGuide, ::java::lang::EnumArray, FormulaArray > BuiltInGuideArray;
                    } // geom
                } // draw
            } // sl
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::draw::geom::BuiltInGuide::BuiltInGuide(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::geom::BuiltInGuide::BuiltInGuide(::java::lang::String* name, int ordinal)
    : BuiltInGuide(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_3cd4 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_3cd4"_j, 0);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_3cd8 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_3cd8"_j, 1);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_5cd8 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_5cd8"_j, 2);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_7cd8 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_7cd8"_j, 3);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_b = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_b"_j, 4);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_cd2 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_cd2"_j, 5);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_cd4 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_cd4"_j, 6);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_cd8 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_cd8"_j, 7);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_hc = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_hc"_j, 8);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_h = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_h"_j, 9);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_hd2 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_hd2"_j, 10);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_hd3 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_hd3"_j, 11);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_hd4 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_hd4"_j, 12);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_hd5 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_hd5"_j, 13);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_hd6 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_hd6"_j, 14);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_hd8 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_hd8"_j, 15);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_l = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_l"_j, 16);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_ls = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_ls"_j, 17);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_r = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_r"_j, 18);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_ss = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_ss"_j, 19);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_ssd2 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_ssd2"_j, 20);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_ssd4 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_ssd4"_j, 21);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_ssd6 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_ssd6"_j, 22);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_ssd8 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_ssd8"_j, 23);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_ssd16 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_ssd16"_j, 24);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_ssd32 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_ssd32"_j, 25);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_t = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_t"_j, 26);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_vc = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_vc"_j, 27);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_w = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_w"_j, 28);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_wd2 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_wd2"_j, 29);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_wd3 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_wd3"_j, 30);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_wd4 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_wd4"_j, 31);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_wd5 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_wd5"_j, 32);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_wd6 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_wd6"_j, 33);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_wd8 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_wd8"_j, 34);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_wd10 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_wd10"_j, 35);
org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::_wd32 = new ::org::apache::poi::sl::draw::geom::BuiltInGuide(u"_wd32"_j, 36);
java::lang::String* org::apache::poi::sl::draw::geom::BuiltInGuide::getName()
{
    return npc(name())->substring(1);
}

double org::apache::poi::sl::draw::geom::BuiltInGuide::evaluate(Context* ctx)
{
    auto anchor = npc(ctx)->getShapeAnchor();
    double height = npc(anchor)->getHeight(), width = npc(anchor)->getWidth(), ss = ::java::lang::Math::min(width, height);
    {
        auto v = this;
        if((v == _3cd4)) {
            return int32_t(270) * OOXML_DEGREE;
        }
        if((v == _3cd8)) {
            return int32_t(135) * OOXML_DEGREE;
        }
        if((v == _5cd8)) {
            return int32_t(225) * OOXML_DEGREE;
        }
        if((v == _7cd8)) {
            return int32_t(315) * OOXML_DEGREE;
        }
        if((v == _t)) {
            return npc(anchor)->getY();
        }
        if((v == _b)) {
            return npc(anchor)->getMaxY();
        }
        if((v == _l)) {
            return npc(anchor)->getX();
        }
        if((v == _r)) {
            return npc(anchor)->getMaxX();
        }
        if((v == _cd2)) {
            return int32_t(180) * OOXML_DEGREE;
        }
        if((v == _cd4)) {
            return int32_t(90) * OOXML_DEGREE;
        }
        if((v == _cd8)) {
            return int32_t(45) * OOXML_DEGREE;
        }
        if((v == _hc)) {
            return npc(anchor)->getCenterX();
        }
        if((v == _h)) {
            return height;
        }
        if((v == _hd2)) {
            return height / 2.0;
        }
        if((v == _hd3)) {
            return height / 3.0;
        }
        if((v == _hd4)) {
            return height / 4.0;
        }
        if((v == _hd5)) {
            return height / 5.0;
        }
        if((v == _hd6)) {
            return height / 6.0;
        }
        if((v == _hd8)) {
            return height / 8.0;
        }
        if((v == _ls)) {
            return ::java::lang::Math::max(width, height);
        }
        if((v == _ss)) {
            return ss;
        }
        if((v == _ssd2)) {
            return ss / 2.0;
        }
        if((v == _ssd4)) {
            return ss / 4.0;
        }
        if((v == _ssd6)) {
            return ss / 6.0;
        }
        if((v == _ssd8)) {
            return ss / 8.0;
        }
        if((v == _ssd16)) {
            return ss / 16.0;
        }
        if((v == _ssd32)) {
            return ss / 32.0;
        }
        if((v == _vc)) {
            return npc(anchor)->getCenterY();
        }
        if((v == _w)) {
            return width;
        }
        if((v == _wd2)) {
            return width / 2.0;
        }
        if((v == _wd3)) {
            return width / 3.0;
        }
        if((v == _wd4)) {
            return width / 4.0;
        }
        if((v == _wd5)) {
            return width / 5.0;
        }
        if((v == _wd6)) {
            return width / 6.0;
        }
        if((v == _wd8)) {
            return width / 8.0;
        }
        if((v == _wd10)) {
            return width / 10.0;
        }
        if((v == _wd32)) {
            return width / 32.0;
        }
        if((((v != _3cd4) && (v != _3cd8) && (v != _5cd8) && (v != _7cd8) && (v != _t) && (v != _b) && (v != _l) && (v != _r) && (v != _cd2) && (v != _cd4) && (v != _cd8) && (v != _hc) && (v != _h) && (v != _hd2) && (v != _hd3) && (v != _hd4) && (v != _hd5) && (v != _hd6) && (v != _hd8) && (v != _ls) && (v != _ss) && (v != _ssd2) && (v != _ssd4) && (v != _ssd6) && (v != _ssd8) && (v != _ssd16) && (v != _ssd32) && (v != _vc) && (v != _w) && (v != _wd2) && (v != _wd3) && (v != _wd4) && (v != _wd5) && (v != _wd6) && (v != _wd8) && (v != _wd10) && (v != _wd32)))) {
            return 0;
        }
end_switch0:;
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::geom::BuiltInGuide::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.BuiltInGuide", 40);
    return c;
}

org::apache::poi::sl::draw::geom::BuiltInGuide* org::apache::poi::sl::draw::geom::BuiltInGuide::valueOf(::java::lang::String* a0)
{
    if(_3cd4->toString()->equals(a0))
        return _3cd4;
    if(_3cd8->toString()->equals(a0))
        return _3cd8;
    if(_5cd8->toString()->equals(a0))
        return _5cd8;
    if(_7cd8->toString()->equals(a0))
        return _7cd8;
    if(_b->toString()->equals(a0))
        return _b;
    if(_cd2->toString()->equals(a0))
        return _cd2;
    if(_cd4->toString()->equals(a0))
        return _cd4;
    if(_cd8->toString()->equals(a0))
        return _cd8;
    if(_h->toString()->equals(a0))
        return _h;
    if(_hc->toString()->equals(a0))
        return _hc;
    if(_hd2->toString()->equals(a0))
        return _hd2;
    if(_hd3->toString()->equals(a0))
        return _hd3;
    if(_hd4->toString()->equals(a0))
        return _hd4;
    if(_hd5->toString()->equals(a0))
        return _hd5;
    if(_hd6->toString()->equals(a0))
        return _hd6;
    if(_hd8->toString()->equals(a0))
        return _hd8;
    if(_l->toString()->equals(a0))
        return _l;
    if(_ls->toString()->equals(a0))
        return _ls;
    if(_r->toString()->equals(a0))
        return _r;
    if(_ss->toString()->equals(a0))
        return _ss;
    if(_ssd16->toString()->equals(a0))
        return _ssd16;
    if(_ssd2->toString()->equals(a0))
        return _ssd2;
    if(_ssd32->toString()->equals(a0))
        return _ssd32;
    if(_ssd4->toString()->equals(a0))
        return _ssd4;
    if(_ssd6->toString()->equals(a0))
        return _ssd6;
    if(_ssd8->toString()->equals(a0))
        return _ssd8;
    if(_t->toString()->equals(a0))
        return _t;
    if(_vc->toString()->equals(a0))
        return _vc;
    if(_w->toString()->equals(a0))
        return _w;
    if(_wd10->toString()->equals(a0))
        return _wd10;
    if(_wd2->toString()->equals(a0))
        return _wd2;
    if(_wd3->toString()->equals(a0))
        return _wd3;
    if(_wd32->toString()->equals(a0))
        return _wd32;
    if(_wd4->toString()->equals(a0))
        return _wd4;
    if(_wd5->toString()->equals(a0))
        return _wd5;
    if(_wd6->toString()->equals(a0))
        return _wd6;
    if(_wd8->toString()->equals(a0))
        return _wd8;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::draw::geom::BuiltInGuideArray* org::apache::poi::sl::draw::geom::BuiltInGuide::values()
{
    return new org::apache::poi::sl::draw::geom::BuiltInGuideArray({
        _3cd4,
        _3cd8,
        _5cd8,
        _7cd8,
        _b,
        _cd2,
        _cd4,
        _cd8,
        _h,
        _hc,
        _hd2,
        _hd3,
        _hd4,
        _hd5,
        _hd6,
        _hd8,
        _l,
        _ls,
        _r,
        _ss,
        _ssd16,
        _ssd2,
        _ssd32,
        _ssd4,
        _ssd6,
        _ssd8,
        _t,
        _vc,
        _w,
        _wd10,
        _wd2,
        _wd3,
        _wd32,
        _wd4,
        _wd5,
        _wd6,
        _wd8,
    });
}

java::lang::Class* org::apache::poi::sl::draw::geom::BuiltInGuide::getClass0()
{
    return class_();
}


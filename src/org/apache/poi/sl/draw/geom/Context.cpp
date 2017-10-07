// Generated from /POI/java/org/apache/poi/sl/draw/geom/Context.java
#include <org/apache/poi/sl/draw/geom/Context.hpp>

#include <java/awt/geom/Rectangle2D.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/sl/draw/geom/BuiltInGuide.hpp>
#include <org/apache/poi/sl/draw/geom/CustomGeometry.hpp>
#include <org/apache/poi/sl/draw/geom/Formula.hpp>
#include <org/apache/poi/sl/draw/geom/Guide.hpp>
#include <org/apache/poi/sl/draw/geom/IAdjustableShape.hpp>

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

org::apache::poi::sl::draw::geom::Context::Context(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::geom::Context::Context(CustomGeometry* geom, ::java::awt::geom::Rectangle2D* anchor, IAdjustableShape* props) 
    : Context(*static_cast< ::default_init_tag* >(0))
{
    ctor(geom,anchor,props);
}

void org::apache::poi::sl::draw::geom::Context::init()
{
    _ctx = new ::java::util::HashMap();
}

void org::apache::poi::sl::draw::geom::Context::ctor(CustomGeometry* geom, ::java::awt::geom::Rectangle2D* anchor, IAdjustableShape* props)
{
    super::ctor();
    init();
    _props = props;
    _anchor = anchor;
    for (auto _i = npc(npc(geom)->adjusts)->iterator(); _i->hasNext(); ) {
        Guide* gd = java_cast< Guide* >(_i->next());
        {
            evaluate(gd);
        }
    }
    for (auto _i = npc(npc(geom)->guides)->iterator(); _i->hasNext(); ) {
        Guide* gd = java_cast< Guide* >(_i->next());
        {
            evaluate(gd);
        }
    }
}

java::awt::geom::Rectangle2D* org::apache::poi::sl::draw::geom::Context::getShapeAnchor()
{
    return _anchor;
}

org::apache::poi::sl::draw::geom::Guide* org::apache::poi::sl::draw::geom::Context::getAdjustValue(::java::lang::String* name)
{
    return npc(_props)->getAdjustValue(name);
}

double org::apache::poi::sl::draw::geom::Context::getValue(::java::lang::String* key)
{
    if(npc(key)->matches(u"(\\+|-)?\\d+"_j)) {
        return ::java::lang::Double::parseDouble(key);
    }
    auto val = java_cast< ::java::lang::Double* >(npc(_ctx)->get(key));
    return (val != nullptr) ? (npc(val))->doubleValue() : evaluate(BuiltInGuide::valueOf(::java::lang::StringBuilder().append(u"_"_j)->append(key)->toString()));
}

double org::apache::poi::sl::draw::geom::Context::evaluate(Formula* fmla)
{
    auto result = npc(fmla)->evaluate(this);
    if(dynamic_cast< Guide* >(fmla) != nullptr) {
        auto key = npc((java_cast< Guide* >(fmla)))->getName();
        if(key != nullptr) {
            npc(_ctx)->put(key, ::java::lang::Double::valueOf(result));
        }
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::geom::Context::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.Context", 35);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::geom::Context::getClass0()
{
    return class_();
}


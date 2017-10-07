// Generated from /POI/java/org/apache/poi/sl/draw/geom/CustomGeometry.java
#include <org/apache/poi/sl/draw/geom/CustomGeometry.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/sl/draw/binding/CTCustomGeometry2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTGeomGuide.hpp>
#include <org/apache/poi/sl/draw/binding/CTGeomGuideList.hpp>
#include <org/apache/poi/sl/draw/binding/CTGeomRect.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DList.hpp>
#include <org/apache/poi/sl/draw/geom/AdjustValue.hpp>
#include <org/apache/poi/sl/draw/geom/ClosePathCommand.hpp>
#include <org/apache/poi/sl/draw/geom/Guide.hpp>
#include <org/apache/poi/sl/draw/geom/LineToCommand.hpp>
#include <org/apache/poi/sl/draw/geom/MoveToCommand.hpp>
#include <org/apache/poi/sl/draw/geom/Path.hpp>

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

org::apache::poi::sl::draw::geom::CustomGeometry::CustomGeometry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::geom::CustomGeometry::CustomGeometry(::org::apache::poi::sl::draw::binding::CTCustomGeometry2D* geom) 
    : CustomGeometry(*static_cast< ::default_init_tag* >(0))
{
    ctor(geom);
}

void org::apache::poi::sl::draw::geom::CustomGeometry::init()
{
    adjusts = new ::java::util::ArrayList();
    guides = new ::java::util::ArrayList();
    paths = new ::java::util::ArrayList();
}

void org::apache::poi::sl::draw::geom::CustomGeometry::ctor(::org::apache::poi::sl::draw::binding::CTCustomGeometry2D* geom)
{
    super::ctor();
    init();
    auto avLst = npc(geom)->getAvLst();
    if(avLst != nullptr) {
        for (auto _i = npc(npc(avLst)->getGd())->iterator(); _i->hasNext(); ) {
            ::org::apache::poi::sl::draw::binding::CTGeomGuide* gd = java_cast< ::org::apache::poi::sl::draw::binding::CTGeomGuide* >(_i->next());
            {
                npc(adjusts)->add(static_cast< ::java::lang::Object* >(new AdjustValue(gd)));
            }
        }
    }
    auto gdLst = npc(geom)->getGdLst();
    if(gdLst != nullptr) {
        for (auto _i = npc(npc(gdLst)->getGd())->iterator(); _i->hasNext(); ) {
            ::org::apache::poi::sl::draw::binding::CTGeomGuide* gd = java_cast< ::org::apache::poi::sl::draw::binding::CTGeomGuide* >(_i->next());
            {
                npc(guides)->add(static_cast< ::java::lang::Object* >(new Guide(gd)));
            }
        }
    }
    auto pathLst = npc(geom)->getPathLst();
    if(pathLst != nullptr) {
        for (auto _i = npc(npc(pathLst)->getPath())->iterator(); _i->hasNext(); ) {
            ::org::apache::poi::sl::draw::binding::CTPath2D* spPath = java_cast< ::org::apache::poi::sl::draw::binding::CTPath2D* >(_i->next());
            {
                npc(paths)->add(static_cast< ::java::lang::Object* >(new Path(spPath)));
            }
        }
    }
    auto rect = npc(geom)->getRect();
    if(rect != nullptr) {
        textBounds = new Path();
        npc(textBounds)->addCommand(new MoveToCommand(npc(rect)->getL(), npc(rect)->getT()));
        npc(textBounds)->addCommand(new LineToCommand(npc(rect)->getR(), npc(rect)->getT()));
        npc(textBounds)->addCommand(new LineToCommand(npc(rect)->getR(), npc(rect)->getB()));
        npc(textBounds)->addCommand(new LineToCommand(npc(rect)->getL(), npc(rect)->getB()));
        npc(textBounds)->addCommand(new ClosePathCommand());
    }
}

java::util::Iterator* org::apache::poi::sl::draw::geom::CustomGeometry::iterator()
{
    return npc(paths)->iterator();
}

org::apache::poi::sl::draw::geom::Path* org::apache::poi::sl::draw::geom::CustomGeometry::getTextBounds()
{
    return textBounds;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::geom::CustomGeometry::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.CustomGeometry", 42);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::geom::CustomGeometry::getClass0()
{
    return class_();
}


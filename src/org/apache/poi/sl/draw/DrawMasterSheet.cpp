// Generated from /POI/java/org/apache/poi/sl/draw/DrawMasterSheet.java
#include <org/apache/poi/sl/draw/DrawMasterSheet.hpp>

#include <java/awt/Graphics2D.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/usermodel/MasterSheet.hpp>
#include <org/apache/poi/sl/usermodel/Placeholder.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/SimpleShape.hpp>
#include <org/apache/poi/sl/usermodel/Slide.hpp>

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

org::apache::poi::sl::draw::DrawMasterSheet::DrawMasterSheet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawMasterSheet::DrawMasterSheet(::org::apache::poi::sl::usermodel::MasterSheet* sheet) 
    : DrawMasterSheet(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheet);
}

void org::apache::poi::sl::draw::DrawMasterSheet::ctor(::org::apache::poi::sl::usermodel::MasterSheet* sheet)
{
    super::ctor(sheet);
}

bool org::apache::poi::sl::draw::DrawMasterSheet::canDraw(::java::awt::Graphics2D* graphics, ::org::apache::poi::sl::usermodel::Shape* shape)
{
    auto slide = java_cast< ::org::apache::poi::sl::usermodel::Slide* >(npc(graphics)->getRenderingHint(Drawable::CURRENT_SLIDE()));
    if(dynamic_cast< ::org::apache::poi::sl::usermodel::SimpleShape* >(shape) != nullptr) {
        auto ph = npc((java_cast< ::org::apache::poi::sl::usermodel::SimpleShape* >(shape)))->getPlaceholder();
        if(ph != nullptr) {
            return npc(slide)->getDisplayPlaceholder(ph);
        }
    }
    return npc(slide)->getFollowMasterGraphics();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawMasterSheet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawMasterSheet", 38);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::DrawMasterSheet::getClass0()
{
    return class_();
}


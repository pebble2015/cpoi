// Generated from /POI/java/org/apache/poi/sl/draw/DrawSlide.java
#include <org/apache/poi/sl/draw/DrawSlide.hpp>

#include <java/awt/Graphics2D.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/sl/draw/DrawBackground.hpp>
#include <org/apache/poi/sl/draw/DrawFactory.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/usermodel/Background.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>
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

poi::sl::draw::DrawSlide::DrawSlide(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawSlide::DrawSlide(::poi::sl::usermodel::Slide* slide) 
    : DrawSlide(*static_cast< ::default_init_tag* >(0))
{
    ctor(slide);
}

void poi::sl::draw::DrawSlide::ctor(::poi::sl::usermodel::Slide* slide)
{
    super::ctor(slide);
}

void poi::sl::draw::DrawSlide::draw(::java::awt::Graphics2D* graphics)
{
    npc(graphics)->setRenderingHint(Drawable::CURRENT_SLIDE(), java_cast< ::poi::sl::usermodel::Sheet* >(this->sheet));
    auto bg = npc(sheet)->getBackground();
    if(bg != nullptr) {
        auto drawFact = DrawFactory::getInstance(graphics);
        Drawable* db = npc(drawFact)->getDrawable(static_cast< ::poi::sl::usermodel::Background* >(bg));
        npc(db)->draw(graphics);
    }
    super::draw(graphics);
    npc(graphics)->setRenderingHint(Drawable::CURRENT_SLIDE(), nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawSlide::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawSlide", 32);
    return c;
}

java::lang::Class* poi::sl::draw::DrawSlide::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/sl/draw/DrawGraphicalFrame.java
#include <org/apache/poi/sl/draw/DrawGraphicalFrame.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/sl/draw/DrawFactory.hpp>
#include <org/apache/poi/sl/draw/DrawPictureShape.hpp>
#include <org/apache/poi/sl/usermodel/GraphicalFrame.hpp>
#include <org/apache/poi/sl/usermodel/PictureShape.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>

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

org::apache::poi::sl::draw::DrawGraphicalFrame::DrawGraphicalFrame(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawGraphicalFrame::DrawGraphicalFrame(::org::apache::poi::sl::usermodel::GraphicalFrame* shape) 
    : DrawGraphicalFrame(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

void org::apache::poi::sl::draw::DrawGraphicalFrame::ctor(::org::apache::poi::sl::usermodel::GraphicalFrame* shape)
{
    super::ctor(shape);
}

void org::apache::poi::sl::draw::DrawGraphicalFrame::draw(::java::awt::Graphics2D* context)
{
    auto ps = npc((java_cast< ::org::apache::poi::sl::usermodel::GraphicalFrame* >(getShape())))->getFallbackPicture();
    if(ps == nullptr) {
        return;
    }
    auto dps = npc(DrawFactory::getInstance(context))->getDrawable(static_cast< ::org::apache::poi::sl::usermodel::PictureShape* >(ps));
    npc(dps)->draw(context);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawGraphicalFrame::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawGraphicalFrame", 41);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::DrawGraphicalFrame::getClass0()
{
    return class_();
}


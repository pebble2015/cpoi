// Generated from /POI/java/org/apache/poi/sl/draw/DrawPaint.java
#include <org/apache/poi/sl/draw/DrawPaint_SimpleSolidPaint.hpp>

#include <java/awt/Color.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/sl/draw/DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1.hpp>
#include <org/apache/poi/sl/usermodel/ColorStyle.hpp>

poi::sl::draw::DrawPaint_SimpleSolidPaint::DrawPaint_SimpleSolidPaint(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawPaint_SimpleSolidPaint::DrawPaint_SimpleSolidPaint(::java::awt::Color* color) 
    : DrawPaint_SimpleSolidPaint(*static_cast< ::default_init_tag* >(0))
{
    ctor(color);
}

poi::sl::draw::DrawPaint_SimpleSolidPaint::DrawPaint_SimpleSolidPaint(::poi::sl::usermodel::ColorStyle* color) 
    : DrawPaint_SimpleSolidPaint(*static_cast< ::default_init_tag* >(0))
{
    ctor(color);
}

void poi::sl::draw::DrawPaint_SimpleSolidPaint::ctor(::java::awt::Color* color)
{
    super::ctor();
    if(color == nullptr) {
        throw new ::java::lang::NullPointerException(u"Color needs to be specified"_j);
    }
    this->solidColor = new DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1(this, color);
}

void poi::sl::draw::DrawPaint_SimpleSolidPaint::ctor(::poi::sl::usermodel::ColorStyle* color)
{
    super::ctor();
    if(color == nullptr) {
        throw new ::java::lang::NullPointerException(u"Color needs to be specified"_j);
    }
    this->solidColor = color;
}

poi::sl::usermodel::ColorStyle* poi::sl::draw::DrawPaint_SimpleSolidPaint::getSolidColor()
{
    return solidColor;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawPaint_SimpleSolidPaint::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawPaint.SimpleSolidPaint", 49);
    return c;
}

java::lang::Class* poi::sl::draw::DrawPaint_SimpleSolidPaint::getClass0()
{
    return class_();
}


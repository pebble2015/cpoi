// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextBox.java
#include <org/apache/poi/sl/draw/DrawTextBox.hpp>

#include <org/apache/poi/sl/usermodel/TextBox.hpp>

org::apache::poi::sl::draw::DrawTextBox::DrawTextBox(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawTextBox::DrawTextBox(::org::apache::poi::sl::usermodel::TextBox* shape) 
    : DrawTextBox(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

void org::apache::poi::sl::draw::DrawTextBox::ctor(::org::apache::poi::sl::usermodel::TextBox* shape)
{
    super::ctor(shape);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawTextBox::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawTextBox", 34);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::DrawTextBox::getClass0()
{
    return class_();
}


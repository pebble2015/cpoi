// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextParagraph.java
#include <org/apache/poi/sl/draw/DrawTextParagraph_getParagraphShape_1.hpp>

#include <java/awt/geom/Rectangle2D.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/sl/draw/DrawTextParagraph.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>
#include <org/apache/poi/sl/usermodel/TextParagraph.hpp>
#include <org/apache/poi/sl/usermodel/TextShape.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::draw::DrawTextParagraph_getParagraphShape_1::DrawTextParagraph_getParagraphShape_1(DrawTextParagraph *DrawTextParagraph_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , DrawTextParagraph_this(DrawTextParagraph_this)
{
    clinit();
    ctor();
}

poi::sl::usermodel::ShapeContainer* poi::sl::draw::DrawTextParagraph_getParagraphShape_1::getParent()
{
    return nullptr;
}

java::awt::geom::Rectangle2D* poi::sl::draw::DrawTextParagraph_getParagraphShape_1::getAnchor()
{
    return npc(npc(DrawTextParagraph_this->paragraph)->getParentShape())->getAnchor();
}

void poi::sl::draw::DrawTextParagraph_getParagraphShape_1::setAnchor(::java::awt::geom::Rectangle2D* anchor)
{
}

double poi::sl::draw::DrawTextParagraph_getParagraphShape_1::getRotation()
{
    return 0;
}

void poi::sl::draw::DrawTextParagraph_getParagraphShape_1::setRotation(double theta)
{
}

void poi::sl::draw::DrawTextParagraph_getParagraphShape_1::setFlipHorizontal(bool flip)
{
}

void poi::sl::draw::DrawTextParagraph_getParagraphShape_1::setFlipVertical(bool flip)
{
}

bool poi::sl::draw::DrawTextParagraph_getParagraphShape_1::getFlipHorizontal()
{
    return false;
}

bool poi::sl::draw::DrawTextParagraph_getParagraphShape_1::getFlipVertical()
{
    return false;
}

poi::sl::usermodel::Sheet* poi::sl::draw::DrawTextParagraph_getParagraphShape_1::getSheet()
{
    return npc(npc(DrawTextParagraph_this->paragraph)->getParentShape())->getSheet();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawTextParagraph_getParagraphShape_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::sl::draw::DrawTextParagraph_getParagraphShape_1::getClass0()
{
    return class_();
}


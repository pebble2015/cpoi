// Generated from /POI/java/org/apache/poi/sl/draw/DrawFreeformShape.java
#include <org/apache/poi/sl/draw/DrawFreeformShape.hpp>

#include <java/awt/Graphics2D.hpp>
#include <java/awt/Shape.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Path2D_Double.hpp>
#include <java/awt/geom/Path2D.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/draw/geom/Outline.hpp>
#include <org/apache/poi/sl/draw/geom/Path.hpp>
#include <org/apache/poi/sl/usermodel/FillStyle.hpp>
#include <org/apache/poi/sl/usermodel/FreeformShape.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/StrokeStyle.hpp>
#include <org/apache/poi/sl/usermodel/TextShape.hpp>

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

poi::sl::draw::DrawFreeformShape::DrawFreeformShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawFreeformShape::DrawFreeformShape(::poi::sl::usermodel::FreeformShape* shape) 
    : DrawFreeformShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

void poi::sl::draw::DrawFreeformShape::ctor(::poi::sl::usermodel::FreeformShape* shape)
{
    super::ctor(shape);
}

java::util::Collection* poi::sl::draw::DrawFreeformShape::computeOutlines(::java::awt::Graphics2D* graphics)
{
    ::java::util::List* lst = new ::java::util::ArrayList();
    auto fsh = java_cast< ::poi::sl::usermodel::FreeformShape* >(getShape());
    ::java::awt::geom::Path2D* sh = npc(fsh)->getPath();
    auto tx = java_cast< ::java::awt::geom::AffineTransform* >(npc(graphics)->getRenderingHint(Drawable::GROUP_TRANSFORM()));
    if(tx == nullptr) {
        tx = new ::java::awt::geom::AffineTransform();
    }
    auto canvasShape = npc(tx)->createTransformedShape(sh);
    auto fs = npc(fsh)->getFillStyle();
    auto ss = npc(fsh)->getStrokeStyle();
    auto path = new ::poi::sl::draw::geom::Path(fs != nullptr, ss != nullptr);
    npc(lst)->add(static_cast< ::java::lang::Object* >(new ::poi::sl::draw::geom::Outline(canvasShape, path)));
    return lst;
}

poi::sl::usermodel::TextShape* poi::sl::draw::DrawFreeformShape::getShape()
{
    return java_cast< ::poi::sl::usermodel::TextShape* >(shape);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawFreeformShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawFreeformShape", 40);
    return c;
}

java::lang::Class* poi::sl::draw::DrawFreeformShape::getClass0()
{
    return class_();
}


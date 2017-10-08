// Generated from /POI/java/org/apache/poi/sl/draw/DrawSheet.java
#include <org/apache/poi/sl/draw/DrawSheet.hpp>

#include <java/awt/Color.hpp>
#include <java/awt/Dimension.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/sl/draw/DrawFactory.hpp>
#include <org/apache/poi/sl/draw/DrawMasterSheet.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/usermodel/MasterSheet.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>
#include <org/apache/poi/sl/usermodel/SlideShow.hpp>

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

poi::sl::draw::DrawSheet::DrawSheet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawSheet::DrawSheet(::poi::sl::usermodel::Sheet* sheet) 
    : DrawSheet(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheet);
}

void poi::sl::draw::DrawSheet::ctor(::poi::sl::usermodel::Sheet* sheet)
{
    super::ctor();
    this->sheet = sheet;
}

void poi::sl::draw::DrawSheet::draw(::java::awt::Graphics2D* graphics)
{
    auto dim = npc(npc(sheet)->getSlideShow())->getPageSize();
    auto whiteTrans = new ::java::awt::Color(1.0f, 1.0f, 1.0f, 0.0f);
    npc(graphics)->setColor(whiteTrans);
    npc(graphics)->fillRect(0, 0, static_cast< int32_t >(npc(dim)->getWidth()), static_cast< int32_t >(npc(dim)->getHeight()));
    auto drawFact = DrawFactory::getInstance(graphics);
    auto master = npc(sheet)->getMasterSheet();
    if(npc(sheet)->getFollowMasterGraphics() && master != nullptr) {
        Drawable* drawer = npc(drawFact)->getDrawable(static_cast< ::poi::sl::usermodel::MasterSheet* >(master));
        npc(drawer)->draw(graphics);
    }
    npc(graphics)->setRenderingHint(Drawable::GROUP_TRANSFORM(), new ::java::awt::geom::AffineTransform());
    for (auto _i = npc(npc(sheet)->getShapes())->iterator(); _i->hasNext(); ) {
        ::poi::sl::usermodel::Shape* shape = java_cast< ::poi::sl::usermodel::Shape* >(_i->next());
        {
            if(!canDraw(graphics, shape)) {
                continue;
            }
            auto at = npc(graphics)->getTransform();
            npc(graphics)->setRenderingHint(Drawable::GSAVE(), ::java::lang::Boolean::valueOf(true));
            auto drawer = npc(drawFact)->getDrawable(static_cast< ::poi::sl::usermodel::Shape* >(shape));
            npc(drawer)->applyTransform(graphics);
            npc(drawer)->draw(graphics);
            npc(graphics)->setTransform(at);
            npc(graphics)->setRenderingHint(Drawable::GRESTORE(), ::java::lang::Boolean::valueOf(true));
        }
    }
}

void poi::sl::draw::DrawSheet::applyTransform(::java::awt::Graphics2D* context)
{
}

void poi::sl::draw::DrawSheet::drawContent(::java::awt::Graphics2D* context)
{
}

bool poi::sl::draw::DrawSheet::canDraw(::java::awt::Graphics2D* graphics, ::poi::sl::usermodel::Shape* shape)
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawSheet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawSheet", 32);
    return c;
}

java::lang::Class* poi::sl::draw::DrawSheet::getClass0()
{
    return class_();
}


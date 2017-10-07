// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextParagraph.java
#include <org/apache/poi/sl/draw/DrawTextParagraph_XlinkAttribute.hpp>

#include <java/io/InvalidObjectException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/sl/draw/DrawTextParagraph.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::draw::DrawTextParagraph_XlinkAttribute::DrawTextParagraph_XlinkAttribute(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawTextParagraph_XlinkAttribute::DrawTextParagraph_XlinkAttribute(::java::lang::String* name) 
    : DrawTextParagraph_XlinkAttribute(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void org::apache::poi::sl::draw::DrawTextParagraph_XlinkAttribute::ctor(::java::lang::String* name)
{
    super::ctor(name);
}

java::lang::Object* org::apache::poi::sl::draw::DrawTextParagraph_XlinkAttribute::readResolve() /* throws(InvalidObjectException) */
{
    if(npc(npc(DrawTextParagraph::HYPERLINK_HREF())->getName())->equals(static_cast< ::java::lang::Object* >(getName()))) {
        return DrawTextParagraph::HYPERLINK_HREF();
    }
    if(npc(npc(DrawTextParagraph::HYPERLINK_LABEL())->getName())->equals(static_cast< ::java::lang::Object* >(getName()))) {
        return DrawTextParagraph::HYPERLINK_LABEL();
    }
    throw new ::java::io::InvalidObjectException(u"unknown attribute name"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawTextParagraph_XlinkAttribute::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawTextParagraph.XlinkAttribute", 55);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::DrawTextParagraph_XlinkAttribute::getClass0()
{
    return class_();
}


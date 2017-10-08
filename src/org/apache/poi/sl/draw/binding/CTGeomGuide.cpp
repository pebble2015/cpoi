// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTGeomGuide.java
#include <org/apache/poi/sl/draw/binding/CTGeomGuide.hpp>

#include <java/lang/String.hpp>

poi::sl::draw::binding::CTGeomGuide::CTGeomGuide(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTGeomGuide::CTGeomGuide()
    : CTGeomGuide(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* poi::sl::draw::binding::CTGeomGuide::getName()
{
    return name;
}

void poi::sl::draw::binding::CTGeomGuide::setName(::java::lang::String* value)
{
    this->name = value;
}

bool poi::sl::draw::binding::CTGeomGuide::isSetName()
{
    return (this->name != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTGeomGuide::getFmla()
{
    return fmla;
}

void poi::sl::draw::binding::CTGeomGuide::setFmla(::java::lang::String* value)
{
    this->fmla = value;
}

bool poi::sl::draw::binding::CTGeomGuide::isSetFmla()
{
    return (this->fmla != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTGeomGuide::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTGeomGuide", 42);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTGeomGuide::getClass0()
{
    return class_();
}


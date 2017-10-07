// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTOfficeArtExtension.java
#include <org/apache/poi/sl/draw/binding/CTOfficeArtExtension.hpp>

#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>

org::apache::poi::sl::draw::binding::CTOfficeArtExtension::CTOfficeArtExtension(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTOfficeArtExtension::CTOfficeArtExtension()
    : CTOfficeArtExtension(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Object* org::apache::poi::sl::draw::binding::CTOfficeArtExtension::getAny()
{
    return any;
}

void org::apache::poi::sl::draw::binding::CTOfficeArtExtension::setAny(::java::lang::Object* value)
{
    this->any = value;
}

bool org::apache::poi::sl::draw::binding::CTOfficeArtExtension::isSetAny()
{
    return (this->any != nullptr);
}

java::lang::String* org::apache::poi::sl::draw::binding::CTOfficeArtExtension::getUri()
{
    return uri;
}

void org::apache::poi::sl::draw::binding::CTOfficeArtExtension::setUri(::java::lang::String* value)
{
    this->uri = value;
}

bool org::apache::poi::sl::draw::binding::CTOfficeArtExtension::isSetUri()
{
    return (this->uri != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTOfficeArtExtension::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTOfficeArtExtension", 51);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTOfficeArtExtension::getClass0()
{
    return class_();
}


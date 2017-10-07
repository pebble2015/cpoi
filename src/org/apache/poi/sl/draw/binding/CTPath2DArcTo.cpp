// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPath2DArcTo.java
#include <org/apache/poi/sl/draw/binding/CTPath2DArcTo.hpp>

#include <java/lang/String.hpp>

org::apache::poi::sl::draw::binding::CTPath2DArcTo::CTPath2DArcTo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTPath2DArcTo::CTPath2DArcTo()
    : CTPath2DArcTo(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* org::apache::poi::sl::draw::binding::CTPath2DArcTo::getWR()
{
    return wr;
}

void org::apache::poi::sl::draw::binding::CTPath2DArcTo::setWR(::java::lang::String* value)
{
    this->wr = value;
}

bool org::apache::poi::sl::draw::binding::CTPath2DArcTo::isSetWR()
{
    return (this->wr != nullptr);
}

java::lang::String* org::apache::poi::sl::draw::binding::CTPath2DArcTo::getHR()
{
    return hr;
}

void org::apache::poi::sl::draw::binding::CTPath2DArcTo::setHR(::java::lang::String* value)
{
    this->hr = value;
}

bool org::apache::poi::sl::draw::binding::CTPath2DArcTo::isSetHR()
{
    return (this->hr != nullptr);
}

java::lang::String* org::apache::poi::sl::draw::binding::CTPath2DArcTo::getStAng()
{
    return stAng;
}

void org::apache::poi::sl::draw::binding::CTPath2DArcTo::setStAng(::java::lang::String* value)
{
    this->stAng = value;
}

bool org::apache::poi::sl::draw::binding::CTPath2DArcTo::isSetStAng()
{
    return (this->stAng != nullptr);
}

java::lang::String* org::apache::poi::sl::draw::binding::CTPath2DArcTo::getSwAng()
{
    return swAng;
}

void org::apache::poi::sl::draw::binding::CTPath2DArcTo::setSwAng(::java::lang::String* value)
{
    this->swAng = value;
}

bool org::apache::poi::sl::draw::binding::CTPath2DArcTo::isSetSwAng()
{
    return (this->swAng != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTPath2DArcTo::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPath2DArcTo", 44);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTPath2DArcTo::getClass0()
{
    return class_();
}


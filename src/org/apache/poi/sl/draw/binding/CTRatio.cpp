// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTRatio.java
#include <org/apache/poi/sl/draw/binding/CTRatio.hpp>

org::apache::poi::sl::draw::binding::CTRatio::CTRatio(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTRatio::CTRatio()
    : CTRatio(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int64_t org::apache::poi::sl::draw::binding::CTRatio::getN()
{
    return n;
}

void org::apache::poi::sl::draw::binding::CTRatio::setN(int64_t value)
{
    this->n = value;
}

bool org::apache::poi::sl::draw::binding::CTRatio::isSetN()
{
    return true;
}

int64_t org::apache::poi::sl::draw::binding::CTRatio::getD()
{
    return d;
}

void org::apache::poi::sl::draw::binding::CTRatio::setD(int64_t value)
{
    this->d = value;
}

bool org::apache::poi::sl::draw::binding::CTRatio::isSetD()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTRatio::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTRatio", 38);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTRatio::getClass0()
{
    return class_();
}


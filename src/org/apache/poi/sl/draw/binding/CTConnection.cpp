// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTConnection.java
#include <org/apache/poi/sl/draw/binding/CTConnection.hpp>

org::apache::poi::sl::draw::binding::CTConnection::CTConnection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTConnection::CTConnection()
    : CTConnection(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int64_t org::apache::poi::sl::draw::binding::CTConnection::getId()
{
    return id;
}

void org::apache::poi::sl::draw::binding::CTConnection::setId(int64_t value)
{
    this->id = value;
}

bool org::apache::poi::sl::draw::binding::CTConnection::isSetId()
{
    return true;
}

int64_t org::apache::poi::sl::draw::binding::CTConnection::getIdx()
{
    return idx;
}

void org::apache::poi::sl::draw::binding::CTConnection::setIdx(int64_t value)
{
    this->idx = value;
}

bool org::apache::poi::sl::draw::binding::CTConnection::isSetIdx()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTConnection::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTConnection", 43);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTConnection::getClass0()
{
    return class_();
}


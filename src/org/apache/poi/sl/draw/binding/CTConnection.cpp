// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTConnection.java
#include <org/apache/poi/sl/draw/binding/CTConnection.hpp>

poi::sl::draw::binding::CTConnection::CTConnection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTConnection::CTConnection()
    : CTConnection(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int64_t poi::sl::draw::binding::CTConnection::getId()
{
    return id;
}

void poi::sl::draw::binding::CTConnection::setId(int64_t value)
{
    this->id = value;
}

bool poi::sl::draw::binding::CTConnection::isSetId()
{
    return true;
}

int64_t poi::sl::draw::binding::CTConnection::getIdx()
{
    return idx;
}

void poi::sl::draw::binding::CTConnection::setIdx(int64_t value)
{
    this->idx = value;
}

bool poi::sl::draw::binding::CTConnection::isSetIdx()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTConnection::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTConnection", 43);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTConnection::getClass0()
{
    return class_();
}


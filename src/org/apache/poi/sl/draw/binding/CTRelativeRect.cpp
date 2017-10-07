// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTRelativeRect.java
#include <org/apache/poi/sl/draw/binding/CTRelativeRect.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::draw::binding::CTRelativeRect::CTRelativeRect(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTRelativeRect::CTRelativeRect()
    : CTRelativeRect(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t org::apache::poi::sl::draw::binding::CTRelativeRect::getL()
{
    if(l == nullptr) {
        return 0;
    } else {
        return (npc(l))->intValue();
    }
}

void org::apache::poi::sl::draw::binding::CTRelativeRect::setL(int32_t value)
{
    this->l = ::java::lang::Integer::valueOf(value);
}

bool org::apache::poi::sl::draw::binding::CTRelativeRect::isSetL()
{
    return (this->l != nullptr);
}

void org::apache::poi::sl::draw::binding::CTRelativeRect::unsetL()
{
    this->l = nullptr;
}

int32_t org::apache::poi::sl::draw::binding::CTRelativeRect::getT()
{
    if(t == nullptr) {
        return 0;
    } else {
        return (npc(t))->intValue();
    }
}

void org::apache::poi::sl::draw::binding::CTRelativeRect::setT(int32_t value)
{
    this->t = ::java::lang::Integer::valueOf(value);
}

bool org::apache::poi::sl::draw::binding::CTRelativeRect::isSetT()
{
    return (this->t != nullptr);
}

void org::apache::poi::sl::draw::binding::CTRelativeRect::unsetT()
{
    this->t = nullptr;
}

int32_t org::apache::poi::sl::draw::binding::CTRelativeRect::getR()
{
    if(r == nullptr) {
        return 0;
    } else {
        return (npc(r))->intValue();
    }
}

void org::apache::poi::sl::draw::binding::CTRelativeRect::setR(int32_t value)
{
    this->r = ::java::lang::Integer::valueOf(value);
}

bool org::apache::poi::sl::draw::binding::CTRelativeRect::isSetR()
{
    return (this->r != nullptr);
}

void org::apache::poi::sl::draw::binding::CTRelativeRect::unsetR()
{
    this->r = nullptr;
}

int32_t org::apache::poi::sl::draw::binding::CTRelativeRect::getB()
{
    if(b == nullptr) {
        return 0;
    } else {
        return (npc(b))->intValue();
    }
}

void org::apache::poi::sl::draw::binding::CTRelativeRect::setB(int32_t value)
{
    this->b = ::java::lang::Integer::valueOf(value);
}

bool org::apache::poi::sl::draw::binding::CTRelativeRect::isSetB()
{
    return (this->b != nullptr);
}

void org::apache::poi::sl::draw::binding::CTRelativeRect::unsetB()
{
    this->b = nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTRelativeRect::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTRelativeRect", 45);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTRelativeRect::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPath2D.java
#include <org/apache/poi/sl/draw/binding/CTPath2D.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/sl/draw/binding/STPathFillMode.hpp>

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

org::apache::poi::sl::draw::binding::CTPath2D::CTPath2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTPath2D::CTPath2D()
    : CTPath2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* org::apache::poi::sl::draw::binding::CTPath2D::getCloseOrMoveToOrLnTo()
{
    if(closeOrMoveToOrLnTo == nullptr) {
        closeOrMoveToOrLnTo = new ::java::util::ArrayList();
    }
    return java_cast< ::java::util::List* >(this->closeOrMoveToOrLnTo);
}

bool org::apache::poi::sl::draw::binding::CTPath2D::isSetCloseOrMoveToOrLnTo()
{
    return ((java_cast< ::java::util::List* >(this->closeOrMoveToOrLnTo) != nullptr) && (!npc(java_cast< ::java::util::List* >(this->closeOrMoveToOrLnTo))->isEmpty()));
}

void org::apache::poi::sl::draw::binding::CTPath2D::unsetCloseOrMoveToOrLnTo()
{
    this->closeOrMoveToOrLnTo = nullptr;
}

int64_t org::apache::poi::sl::draw::binding::CTPath2D::getW()
{
    if(w == nullptr) {
        return 0LL;
    } else {
        return (npc(w))->longValue();
    }
}

void org::apache::poi::sl::draw::binding::CTPath2D::setW(int64_t value)
{
    this->w = ::java::lang::Long::valueOf(value);
}

bool org::apache::poi::sl::draw::binding::CTPath2D::isSetW()
{
    return (this->w != nullptr);
}

void org::apache::poi::sl::draw::binding::CTPath2D::unsetW()
{
    this->w = nullptr;
}

int64_t org::apache::poi::sl::draw::binding::CTPath2D::getH()
{
    if(h == nullptr) {
        return 0LL;
    } else {
        return (npc(h))->longValue();
    }
}

void org::apache::poi::sl::draw::binding::CTPath2D::setH(int64_t value)
{
    this->h = ::java::lang::Long::valueOf(value);
}

bool org::apache::poi::sl::draw::binding::CTPath2D::isSetH()
{
    return (this->h != nullptr);
}

void org::apache::poi::sl::draw::binding::CTPath2D::unsetH()
{
    this->h = nullptr;
}

org::apache::poi::sl::draw::binding::STPathFillMode* org::apache::poi::sl::draw::binding::CTPath2D::getFill()
{
    if(fill == nullptr) {
        return STPathFillMode::NORM;
    } else {
        return fill;
    }
}

void org::apache::poi::sl::draw::binding::CTPath2D::setFill(STPathFillMode* value)
{
    this->fill = value;
}

bool org::apache::poi::sl::draw::binding::CTPath2D::isSetFill()
{
    return (this->fill != nullptr);
}

bool org::apache::poi::sl::draw::binding::CTPath2D::isStroke()
{
    if(stroke == nullptr) {
        return true;
    } else {
        return (npc(stroke))->booleanValue();
    }
}

void org::apache::poi::sl::draw::binding::CTPath2D::setStroke(bool value)
{
    this->stroke = ::java::lang::Boolean::valueOf(value);
}

bool org::apache::poi::sl::draw::binding::CTPath2D::isSetStroke()
{
    return (this->stroke != nullptr);
}

void org::apache::poi::sl::draw::binding::CTPath2D::unsetStroke()
{
    this->stroke = nullptr;
}

bool org::apache::poi::sl::draw::binding::CTPath2D::isExtrusionOk()
{
    if(extrusionOk == nullptr) {
        return true;
    } else {
        return (npc(extrusionOk))->booleanValue();
    }
}

void org::apache::poi::sl::draw::binding::CTPath2D::setExtrusionOk(bool value)
{
    this->extrusionOk = ::java::lang::Boolean::valueOf(value);
}

bool org::apache::poi::sl::draw::binding::CTPath2D::isSetExtrusionOk()
{
    return (this->extrusionOk != nullptr);
}

void org::apache::poi::sl::draw::binding::CTPath2D::unsetExtrusionOk()
{
    this->extrusionOk = nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTPath2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPath2D", 39);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTPath2D::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTHslColor.java
#include <org/apache/poi/sl/draw/binding/CTHslColor.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>

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

poi::sl::draw::binding::CTHslColor::CTHslColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTHslColor::CTHslColor()
    : CTHslColor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* poi::sl::draw::binding::CTHslColor::getEGColorTransform()
{
    if(egColorTransform == nullptr) {
        egColorTransform = new ::java::util::ArrayList();
    }
    return java_cast< ::java::util::List* >(this->egColorTransform);
}

bool poi::sl::draw::binding::CTHslColor::isSetEGColorTransform()
{
    return ((java_cast< ::java::util::List* >(this->egColorTransform) != nullptr) && (!npc(java_cast< ::java::util::List* >(this->egColorTransform))->isEmpty()));
}

void poi::sl::draw::binding::CTHslColor::unsetEGColorTransform()
{
    this->egColorTransform = nullptr;
}

int32_t poi::sl::draw::binding::CTHslColor::getHue()
{
    return hue;
}

void poi::sl::draw::binding::CTHslColor::setHue(int32_t value)
{
    this->hue = value;
}

bool poi::sl::draw::binding::CTHslColor::isSetHue()
{
    return true;
}

int32_t poi::sl::draw::binding::CTHslColor::getSat()
{
    return sat;
}

void poi::sl::draw::binding::CTHslColor::setSat(int32_t value)
{
    this->sat = value;
}

bool poi::sl::draw::binding::CTHslColor::isSetSat()
{
    return true;
}

int32_t poi::sl::draw::binding::CTHslColor::getLum()
{
    return lum;
}

void poi::sl::draw::binding::CTHslColor::setLum(int32_t value)
{
    this->lum = value;
}

bool poi::sl::draw::binding::CTHslColor::isSetLum()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTHslColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTHslColor", 41);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTHslColor::getClass0()
{
    return class_();
}


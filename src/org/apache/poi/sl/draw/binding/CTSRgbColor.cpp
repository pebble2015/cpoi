// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTSRgbColor.java
#include <org/apache/poi/sl/draw/binding/CTSRgbColor.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <Array.hpp>

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

poi::sl::draw::binding::CTSRgbColor::CTSRgbColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTSRgbColor::CTSRgbColor()
    : CTSRgbColor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* poi::sl::draw::binding::CTSRgbColor::getEGColorTransform()
{
    if(egColorTransform == nullptr) {
        egColorTransform = new ::java::util::ArrayList();
    }
    return java_cast< ::java::util::List* >(this->egColorTransform);
}

bool poi::sl::draw::binding::CTSRgbColor::isSetEGColorTransform()
{
    return ((java_cast< ::java::util::List* >(this->egColorTransform) != nullptr) && (!npc(java_cast< ::java::util::List* >(this->egColorTransform))->isEmpty()));
}

void poi::sl::draw::binding::CTSRgbColor::unsetEGColorTransform()
{
    this->egColorTransform = nullptr;
}

int8_tArray* poi::sl::draw::binding::CTSRgbColor::getVal()
{
    return val;
}

void poi::sl::draw::binding::CTSRgbColor::setVal(::int8_tArray* value)
{
    this->val = (value != nullptr) ? npc(value)->clone() : static_cast< ::int8_tArray* >(nullptr);
}

bool poi::sl::draw::binding::CTSRgbColor::isSetVal()
{
    return (this->val != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTSRgbColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTSRgbColor", 42);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTSRgbColor::getClass0()
{
    return class_();
}


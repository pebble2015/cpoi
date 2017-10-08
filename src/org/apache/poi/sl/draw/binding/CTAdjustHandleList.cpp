// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTAdjustHandleList.java
#include <org/apache/poi/sl/draw/binding/CTAdjustHandleList.hpp>

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

poi::sl::draw::binding::CTAdjustHandleList::CTAdjustHandleList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTAdjustHandleList::CTAdjustHandleList()
    : CTAdjustHandleList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* poi::sl::draw::binding::CTAdjustHandleList::getAhXYOrAhPolar()
{
    if(ahXYOrAhPolar == nullptr) {
        ahXYOrAhPolar = new ::java::util::ArrayList();
    }
    return java_cast< ::java::util::List* >(this->ahXYOrAhPolar);
}

bool poi::sl::draw::binding::CTAdjustHandleList::isSetAhXYOrAhPolar()
{
    return ((java_cast< ::java::util::List* >(this->ahXYOrAhPolar) != nullptr) && (!npc(java_cast< ::java::util::List* >(this->ahXYOrAhPolar))->isEmpty()));
}

void poi::sl::draw::binding::CTAdjustHandleList::unsetAhXYOrAhPolar()
{
    this->ahXYOrAhPolar = nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTAdjustHandleList::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTAdjustHandleList", 49);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTAdjustHandleList::getClass0()
{
    return class_();
}


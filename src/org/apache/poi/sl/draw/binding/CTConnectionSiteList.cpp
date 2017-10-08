// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTConnectionSiteList.java
#include <org/apache/poi/sl/draw/binding/CTConnectionSiteList.hpp>

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

poi::sl::draw::binding::CTConnectionSiteList::CTConnectionSiteList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTConnectionSiteList::CTConnectionSiteList()
    : CTConnectionSiteList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* poi::sl::draw::binding::CTConnectionSiteList::getCxn()
{
    if(cxn == nullptr) {
        cxn = new ::java::util::ArrayList();
    }
    return java_cast< ::java::util::List* >(this->cxn);
}

bool poi::sl::draw::binding::CTConnectionSiteList::isSetCxn()
{
    return ((java_cast< ::java::util::List* >(this->cxn) != nullptr) && (!npc(java_cast< ::java::util::List* >(this->cxn))->isEmpty()));
}

void poi::sl::draw::binding::CTConnectionSiteList::unsetCxn()
{
    this->cxn = nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTConnectionSiteList::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTConnectionSiteList", 51);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTConnectionSiteList::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPath2DList.java
#include <org/apache/poi/sl/draw/binding/CTPath2DList.hpp>

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

poi::sl::draw::binding::CTPath2DList::CTPath2DList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTPath2DList::CTPath2DList()
    : CTPath2DList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* poi::sl::draw::binding::CTPath2DList::getPath()
{
    if(path == nullptr) {
        path = new ::java::util::ArrayList();
    }
    return java_cast< ::java::util::List* >(this->path);
}

bool poi::sl::draw::binding::CTPath2DList::isSetPath()
{
    return ((java_cast< ::java::util::List* >(this->path) != nullptr) && (!npc(java_cast< ::java::util::List* >(this->path))->isEmpty()));
}

void poi::sl::draw::binding::CTPath2DList::unsetPath()
{
    this->path = nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTPath2DList::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPath2DList", 43);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTPath2DList::getClass0()
{
    return class_();
}


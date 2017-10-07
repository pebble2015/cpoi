// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTOfficeArtExtensionList.java
#include <org/apache/poi/sl/draw/binding/CTOfficeArtExtensionList.hpp>

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

org::apache::poi::sl::draw::binding::CTOfficeArtExtensionList::CTOfficeArtExtensionList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTOfficeArtExtensionList::CTOfficeArtExtensionList()
    : CTOfficeArtExtensionList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* org::apache::poi::sl::draw::binding::CTOfficeArtExtensionList::getExt()
{
    if(ext == nullptr) {
        ext = new ::java::util::ArrayList();
    }
    return java_cast< ::java::util::List* >(this->ext);
}

bool org::apache::poi::sl::draw::binding::CTOfficeArtExtensionList::isSetExt()
{
    return ((java_cast< ::java::util::List* >(this->ext) != nullptr) && (!npc(java_cast< ::java::util::List* >(this->ext))->isEmpty()));
}

void org::apache::poi::sl::draw::binding::CTOfficeArtExtensionList::unsetExt()
{
    this->ext = nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTOfficeArtExtensionList::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTOfficeArtExtensionList", 55);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTOfficeArtExtensionList::getClass0()
{
    return class_();
}


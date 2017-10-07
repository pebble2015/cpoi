// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPresetColor.java
#include <org/apache/poi/sl/draw/binding/CTPresetColor.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/sl/draw/binding/STPresetColorVal.hpp>

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

org::apache::poi::sl::draw::binding::CTPresetColor::CTPresetColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTPresetColor::CTPresetColor()
    : CTPresetColor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* org::apache::poi::sl::draw::binding::CTPresetColor::getEGColorTransform()
{
    if(egColorTransform == nullptr) {
        egColorTransform = new ::java::util::ArrayList();
    }
    return java_cast< ::java::util::List* >(this->egColorTransform);
}

bool org::apache::poi::sl::draw::binding::CTPresetColor::isSetEGColorTransform()
{
    return ((java_cast< ::java::util::List* >(this->egColorTransform) != nullptr) && (!npc(java_cast< ::java::util::List* >(this->egColorTransform))->isEmpty()));
}

void org::apache::poi::sl::draw::binding::CTPresetColor::unsetEGColorTransform()
{
    this->egColorTransform = nullptr;
}

org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::CTPresetColor::getVal()
{
    return val;
}

void org::apache::poi::sl::draw::binding::CTPresetColor::setVal(STPresetColorVal* value)
{
    this->val = value;
}

bool org::apache::poi::sl::draw::binding::CTPresetColor::isSetVal()
{
    return (this->val != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTPresetColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPresetColor", 44);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTPresetColor::getClass0()
{
    return class_();
}


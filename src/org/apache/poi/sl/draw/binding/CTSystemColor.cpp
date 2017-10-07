// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTSystemColor.java
#include <org/apache/poi/sl/draw/binding/CTSystemColor.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
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

org::apache::poi::sl::draw::binding::CTSystemColor::CTSystemColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTSystemColor::CTSystemColor()
    : CTSystemColor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* org::apache::poi::sl::draw::binding::CTSystemColor::getEGColorTransform()
{
    if(egColorTransform == nullptr) {
        egColorTransform = new ::java::util::ArrayList();
    }
    return java_cast< ::java::util::List* >(this->egColorTransform);
}

bool org::apache::poi::sl::draw::binding::CTSystemColor::isSetEGColorTransform()
{
    return ((java_cast< ::java::util::List* >(this->egColorTransform) != nullptr) && (!npc(java_cast< ::java::util::List* >(this->egColorTransform))->isEmpty()));
}

void org::apache::poi::sl::draw::binding::CTSystemColor::unsetEGColorTransform()
{
    this->egColorTransform = nullptr;
}

java::lang::String* org::apache::poi::sl::draw::binding::CTSystemColor::getVal()
{
    return val;
}

void org::apache::poi::sl::draw::binding::CTSystemColor::setVal(::java::lang::String* value)
{
    this->val = value;
}

bool org::apache::poi::sl::draw::binding::CTSystemColor::isSetVal()
{
    return (this->val != nullptr);
}

int8_tArray* org::apache::poi::sl::draw::binding::CTSystemColor::getLastClr()
{
    return lastClr;
}

void org::apache::poi::sl::draw::binding::CTSystemColor::setLastClr(::int8_tArray* value)
{
    this->lastClr = (value != nullptr) ? npc(value)->clone() : static_cast< ::int8_tArray* >(nullptr);
}

bool org::apache::poi::sl::draw::binding::CTSystemColor::isSetLastClr()
{
    return (this->lastClr != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTSystemColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTSystemColor", 44);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTSystemColor::getClass0()
{
    return class_();
}


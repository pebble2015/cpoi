// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPath2DCubicBezierTo.java
#include <org/apache/poi/sl/draw/binding/CTPath2DCubicBezierTo.hpp>

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

org::apache::poi::sl::draw::binding::CTPath2DCubicBezierTo::CTPath2DCubicBezierTo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTPath2DCubicBezierTo::CTPath2DCubicBezierTo()
    : CTPath2DCubicBezierTo(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* org::apache::poi::sl::draw::binding::CTPath2DCubicBezierTo::getPt()
{
    if(pt == nullptr) {
        pt = new ::java::util::ArrayList();
    }
    return java_cast< ::java::util::List* >(this->pt);
}

bool org::apache::poi::sl::draw::binding::CTPath2DCubicBezierTo::isSetPt()
{
    return ((java_cast< ::java::util::List* >(this->pt) != nullptr) && (!npc(java_cast< ::java::util::List* >(this->pt))->isEmpty()));
}

void org::apache::poi::sl::draw::binding::CTPath2DCubicBezierTo::unsetPt()
{
    this->pt = nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTPath2DCubicBezierTo::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPath2DCubicBezierTo", 52);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTPath2DCubicBezierTo::getClass0()
{
    return class_();
}


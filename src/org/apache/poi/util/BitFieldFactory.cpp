// Generated from /POI/java/org/apache/poi/util/BitFieldFactory.java
#include <org/apache/poi/util/BitFieldFactory.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/util/BitField.hpp>

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

org::apache::poi::util::BitFieldFactory::BitFieldFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::BitFieldFactory::BitFieldFactory()
    : BitFieldFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Map*& org::apache::poi::util::BitFieldFactory::instances()
{
    clinit();
    return instances_;
}
java::util::Map* org::apache::poi::util::BitFieldFactory::instances_;

org::apache::poi::util::BitField* org::apache::poi::util::BitFieldFactory::getInstance(int32_t mask)
{
    clinit();
    auto f = java_cast< BitField* >(npc(instances_)->get(::java::lang::Integer::valueOf(mask)));
    if(f == nullptr) {
        f = new BitField(mask);
        npc(instances_)->put(::java::lang::Integer::valueOf(mask), f);
    }
    return f;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::BitFieldFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.BitFieldFactory", 35);
    return c;
}

void org::apache::poi::util::BitFieldFactory::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instances_ = new ::java::util::HashMap();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::util::BitFieldFactory::getClass0()
{
    return class_();
}


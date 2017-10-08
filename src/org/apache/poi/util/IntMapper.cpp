// Generated from /POI/java/org/apache/poi/util/IntMapper.java
#include <org/apache/poi/util/IntMapper.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>

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

poi::util::IntMapper::IntMapper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::IntMapper::IntMapper() 
    : IntMapper(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::util::IntMapper::IntMapper(int32_t initialCapacity) 
    : IntMapper(*static_cast< ::default_init_tag* >(0))
{
    ctor(initialCapacity);
}

constexpr int32_t poi::util::IntMapper::_default_size;

void poi::util::IntMapper::ctor()
{
    ctor(_default_size);
}

void poi::util::IntMapper::ctor(int32_t initialCapacity)
{
    super::ctor();
    elements = new ::java::util::ArrayList(initialCapacity);
    valueKeyMap = new ::java::util::HashMap(initialCapacity);
}

bool poi::util::IntMapper::add(::java::lang::Object* value)
{
    auto index = npc(elements)->size();
    npc(elements)->add(static_cast< ::java::lang::Object* >(value));
    npc(valueKeyMap)->put(value, ::java::lang::Integer::valueOf(index));
    return true;
}

int32_t poi::util::IntMapper::size()
{
    return npc(elements)->size();
}

java::lang::Object* poi::util::IntMapper::get(int32_t index)
{
    return java_cast< ::java::lang::Object* >(npc(elements)->get(index));
}

int32_t poi::util::IntMapper::getIndex(::java::lang::Object* o)
{
    auto i = java_cast< ::java::lang::Integer* >(npc(valueKeyMap)->get(o));
    if(i == nullptr)
        return -int32_t(1);

    return npc(i)->intValue();
}

java::util::Iterator* poi::util::IntMapper::iterator()
{
    return npc(elements)->iterator();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::IntMapper::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.IntMapper", 29);
    return c;
}

java::lang::Class* poi::util::IntMapper::getClass0()
{
    return class_();
}


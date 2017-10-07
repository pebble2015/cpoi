// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap_SubMap.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Set.hpp>
#include <java/util/TreeMap.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

extern void unimplemented_(const char16_t* name);
java::util::TreeMap_SubMap::TreeMap_SubMap(TreeMap *TreeMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , TreeMap_this(TreeMap_this)
{
    clinit();
}

constexpr int64_t java::util::TreeMap_SubMap::serialVersionUID;

/* private: void ::java::util::TreeMap_SubMap::ctor() */
java::util::Comparator* java::util::TreeMap_SubMap::comparator()
{ /* stub */
    unimplemented_(u"java::util::Comparator* java::util::TreeMap_SubMap::comparator()");
    return 0;
}

java::util::Set* java::util::TreeMap_SubMap::entrySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::util::TreeMap_SubMap::entrySet()");
    return 0;
}

java::lang::Object* java::util::TreeMap_SubMap::firstKey()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap_SubMap::firstKey()");
    return 0;
}

java::util::SortedMap* java::util::TreeMap_SubMap::headMap(::java::lang::Object* toKey)
{ /* stub */
    unimplemented_(u"java::util::SortedMap* java::util::TreeMap_SubMap::headMap(::java::lang::Object* toKey)");
    return 0;
}

java::lang::Object* java::util::TreeMap_SubMap::lastKey()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap_SubMap::lastKey()");
    return 0;
}

/* private: java::lang::Object* java::util::TreeMap_SubMap::readResolve() */
java::util::SortedMap* java::util::TreeMap_SubMap::subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey)
{ /* stub */
    unimplemented_(u"java::util::SortedMap* java::util::TreeMap_SubMap::subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey)");
    return 0;
}

java::util::SortedMap* java::util::TreeMap_SubMap::tailMap(::java::lang::Object* fromKey)
{ /* stub */
    unimplemented_(u"java::util::SortedMap* java::util::TreeMap_SubMap::tailMap(::java::lang::Object* fromKey)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_SubMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.SubMap", 24);
    return c;
}

void java::util::TreeMap_SubMap::clear()
{
    AbstractMap::clear();
}

bool java::util::TreeMap_SubMap::containsKey(::java::lang::Object* key)
{
    return AbstractMap::containsKey(key);
}

bool java::util::TreeMap_SubMap::containsValue(::java::lang::Object* value)
{
    return AbstractMap::containsValue(value);
}

bool java::util::TreeMap_SubMap::equals(::java::lang::Object* o)
{
    return AbstractMap::equals(o);
}

java::lang::Object* java::util::TreeMap_SubMap::get(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(AbstractMap::get(key));
}

int32_t java::util::TreeMap_SubMap::hashCode()
{
    return AbstractMap::hashCode();
}

bool java::util::TreeMap_SubMap::isEmpty()
{
    return AbstractMap::isEmpty();
}

java::lang::Object* java::util::TreeMap_SubMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(AbstractMap::put(key, value));
}

void java::util::TreeMap_SubMap::putAll(Map* m)
{
    AbstractMap::putAll(m);
}

java::lang::Object* java::util::TreeMap_SubMap::remove(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(AbstractMap::remove(key));
}

int32_t java::util::TreeMap_SubMap::size()
{
    return AbstractMap::size();
}

java::util::Set* java::util::TreeMap_SubMap::keySet()
{
    return java_cast< Set* >(AbstractMap::keySet());
}

java::util::Collection* java::util::TreeMap_SubMap::values()
{
    return java_cast< Collection* >(AbstractMap::values());
}

bool java::util::TreeMap_SubMap::remove(::java::lang::Object* key, ::java::lang::Object* value)
{
    return super::remove(key, value);
}

java::lang::Class* java::util::TreeMap_SubMap::getClass0()
{
    return class_();
}


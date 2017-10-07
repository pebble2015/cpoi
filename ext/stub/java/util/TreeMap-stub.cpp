// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::TreeMap::TreeMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeMap::TreeMap()
    : TreeMap(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::TreeMap::TreeMap(Comparator* comparator)
    : TreeMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(comparator);
}

java::util::TreeMap::TreeMap(Map* m)
    : TreeMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(m);
}

java::util::TreeMap::TreeMap(SortedMap* m)
    : TreeMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(m);
}

constexpr bool java::util::TreeMap::BLACK;
constexpr bool java::util::TreeMap::RED;
java::lang::Object*& java::util::TreeMap::UNBOUNDED()
{
    clinit();
    return UNBOUNDED_;
}
java::lang::Object* java::util::TreeMap::UNBOUNDED_;
constexpr int64_t java::util::TreeMap::serialVersionUID;

void ::java::util::TreeMap::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap::ctor()");
}

void ::java::util::TreeMap::ctor(Comparator* comparator)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap::ctor(Comparator* comparator)");
}

void ::java::util::TreeMap::ctor(Map* m)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap::ctor(Map* m)");
}

void ::java::util::TreeMap::ctor(SortedMap* m)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap::ctor(SortedMap* m)");
}

void java::util::TreeMap::addAllForTreeSet(SortedSet* set, ::java::lang::Object* defaultVal)
{ /* stub */
    unimplemented_(u"void java::util::TreeMap::addAllForTreeSet(SortedSet* set, ::java::lang::Object* defaultVal)");
}

/* private: void java::util::TreeMap::buildFromSorted(int32_t size, Iterator* it, ::java::io::ObjectInputStream* str, ::java::lang::Object* defaultVal) */
/* private: java::util::TreeMap_Entry* java::util::TreeMap::buildFromSorted(int32_t level, int32_t lo, int32_t hi, int32_t redLevel, Iterator* it, ::java::io::ObjectInputStream* str, ::java::lang::Object* defaultVal) */
java::util::Map_Entry* java::util::TreeMap::ceilingEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::TreeMap::ceilingEntry(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::TreeMap::ceilingKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap::ceilingKey(::java::lang::Object* key)");
    return 0;
}

void java::util::TreeMap::clear()
{ /* stub */
    unimplemented_(u"void java::util::TreeMap::clear()");
}

java::lang::Object* java::util::TreeMap::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap::clone()");
    return 0;
}

/* private: bool java::util::TreeMap::colorOf(TreeMap_Entry* p) */
java::util::Comparator* java::util::TreeMap::comparator()
{ /* stub */
    unimplemented_(u"java::util::Comparator* java::util::TreeMap::comparator()");
    return 0;
}

int32_t java::util::TreeMap::compare(::java::lang::Object* k1, ::java::lang::Object* k2)
{ /* stub */
    unimplemented_(u"int32_t java::util::TreeMap::compare(::java::lang::Object* k1, ::java::lang::Object* k2)");
    return 0;
}

/* private: int32_t java::util::TreeMap::computeRedLevel(int32_t sz) */
bool java::util::TreeMap::containsKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"bool java::util::TreeMap::containsKey(::java::lang::Object* key)");
    return 0;
}

bool java::util::TreeMap::containsValue(::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"bool java::util::TreeMap::containsValue(::java::lang::Object* value)");
    return 0;
}

/* private: void java::util::TreeMap::deleteEntry(TreeMap_Entry* p) */
java::util::Iterator* java::util::TreeMap::descendingKeyIterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::TreeMap::descendingKeyIterator()");
    return 0;
}

java::util::NavigableSet* java::util::TreeMap::descendingKeySet()
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::TreeMap::descendingKeySet()");
    return 0;
}

java::util::Spliterator* java::util::TreeMap::descendingKeySpliterator()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::TreeMap::descendingKeySpliterator()");
    return 0;
}

java::util::NavigableMap* java::util::TreeMap::descendingMap()
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::TreeMap::descendingMap()");
    return 0;
}

java::util::Set* java::util::TreeMap::entrySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::util::TreeMap::entrySet()");
    return 0;
}

java::util::Map_Entry* java::util::TreeMap::exportEntry(TreeMap_Entry* e)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Map_Entry* java::util::TreeMap::exportEntry(TreeMap_Entry* e)");
    return 0;
}

java::util::Map_Entry* java::util::TreeMap::firstEntry()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::TreeMap::firstEntry()");
    return 0;
}

java::lang::Object* java::util::TreeMap::firstKey()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap::firstKey()");
    return 0;
}

/* private: void java::util::TreeMap::fixAfterDeletion(TreeMap_Entry* x) */
/* private: void java::util::TreeMap::fixAfterInsertion(TreeMap_Entry* x) */
java::util::Map_Entry* java::util::TreeMap::floorEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::TreeMap::floorEntry(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::TreeMap::floorKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap::floorKey(::java::lang::Object* key)");
    return 0;
}

void java::util::TreeMap::forEach(::java::util::function::BiConsumer* action)
{ /* stub */
    unimplemented_(u"void java::util::TreeMap::forEach(::java::util::function::BiConsumer* action)");
}

java::lang::Object* java::util::TreeMap::get(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap::get(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap::getCeilingEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap::getCeilingEntry(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap::getEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap::getEntry(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap::getEntryUsingComparator(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap::getEntryUsingComparator(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap::getFirstEntry()
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap::getFirstEntry()");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap::getFloorEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap::getFloorEntry(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap::getHigherEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap::getHigherEntry(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap::getLastEntry()
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap::getLastEntry()");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap::getLowerEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap::getLowerEntry(::java::lang::Object* key)");
    return 0;
}

java::util::SortedMap* java::util::TreeMap::headMap(::java::lang::Object* toKey)
{ /* stub */
    unimplemented_(u"java::util::SortedMap* java::util::TreeMap::headMap(::java::lang::Object* toKey)");
    return 0;
}

java::util::NavigableMap* java::util::TreeMap::headMap(::java::lang::Object* toKey, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::TreeMap::headMap(::java::lang::Object* toKey, bool inclusive)");
    return 0;
}

java::util::Map_Entry* java::util::TreeMap::higherEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::TreeMap::higherEntry(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::TreeMap::higherKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap::higherKey(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::TreeMap::key(TreeMap_Entry* e)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Object* java::util::TreeMap::key(TreeMap_Entry* e)");
    return 0;
}

java::util::Iterator* java::util::TreeMap::keyIterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::TreeMap::keyIterator()");
    return 0;
}

java::lang::Object* java::util::TreeMap::keyOrNull(TreeMap_Entry* e)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Object* java::util::TreeMap::keyOrNull(TreeMap_Entry* e)");
    return 0;
}

java::util::Set* java::util::TreeMap::keySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::util::TreeMap::keySet()");
    return 0;
}

java::util::Spliterator* java::util::TreeMap::keySpliterator()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::TreeMap::keySpliterator()");
    return 0;
}

java::util::Spliterator* java::util::TreeMap::keySpliteratorFor(NavigableMap* m)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Spliterator* java::util::TreeMap::keySpliteratorFor(NavigableMap* m)");
    return 0;
}

java::util::Map_Entry* java::util::TreeMap::lastEntry()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::TreeMap::lastEntry()");
    return 0;
}

java::lang::Object* java::util::TreeMap::lastKey()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap::lastKey()");
    return 0;
}

/* private: java::util::TreeMap_Entry* java::util::TreeMap::leftOf(TreeMap_Entry* p) */
java::util::Map_Entry* java::util::TreeMap::lowerEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::TreeMap::lowerEntry(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::TreeMap::lowerKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap::lowerKey(::java::lang::Object* key)");
    return 0;
}

java::util::NavigableSet* java::util::TreeMap::navigableKeySet()
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::TreeMap::navigableKeySet()");
    return 0;
}

/* private: java::util::TreeMap_Entry* java::util::TreeMap::parentOf(TreeMap_Entry* p) */
java::util::Map_Entry* java::util::TreeMap::pollFirstEntry()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::TreeMap::pollFirstEntry()");
    return 0;
}

java::util::Map_Entry* java::util::TreeMap::pollLastEntry()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::TreeMap::pollLastEntry()");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap::predecessor(TreeMap_Entry* t)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap::predecessor(TreeMap_Entry* t)");
    return 0;
}

java::lang::Object* java::util::TreeMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap::put(::java::lang::Object* key, ::java::lang::Object* value)");
    return 0;
}

void java::util::TreeMap::putAll(Map* map)
{ /* stub */
    unimplemented_(u"void java::util::TreeMap::putAll(Map* map)");
}

/* private: void java::util::TreeMap::readObject(::java::io::ObjectInputStream* s) */
void java::util::TreeMap::readTreeSet(int32_t size, ::java::io::ObjectInputStream* s, ::java::lang::Object* defaultVal)
{ /* stub */
    unimplemented_(u"void java::util::TreeMap::readTreeSet(int32_t size, ::java::io::ObjectInputStream* s, ::java::lang::Object* defaultVal)");
}

java::lang::Object* java::util::TreeMap::remove(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap::remove(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::TreeMap::replace(::java::lang::Object* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap::replace(::java::lang::Object* key, ::java::lang::Object* value)");
    return 0;
}

bool java::util::TreeMap::replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{ /* stub */
    unimplemented_(u"bool java::util::TreeMap::replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)");
    return 0;
}

void java::util::TreeMap::replaceAll(::java::util::function::BiFunction* function)
{ /* stub */
    unimplemented_(u"void java::util::TreeMap::replaceAll(::java::util::function::BiFunction* function)");
}

/* private: java::util::TreeMap_Entry* java::util::TreeMap::rightOf(TreeMap_Entry* p) */
/* private: void java::util::TreeMap::rotateLeft(TreeMap_Entry* p) */
/* private: void java::util::TreeMap::rotateRight(TreeMap_Entry* p) */
/* private: void java::util::TreeMap::setColor(TreeMap_Entry* p, bool c) */
int32_t java::util::TreeMap::size()
{ /* stub */
    unimplemented_(u"int32_t java::util::TreeMap::size()");
    return 0;
}

java::util::SortedMap* java::util::TreeMap::subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey)
{ /* stub */
    unimplemented_(u"java::util::SortedMap* java::util::TreeMap::subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey)");
    return 0;
}

java::util::NavigableMap* java::util::TreeMap::subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::TreeMap::subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap::successor(TreeMap_Entry* t)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap::successor(TreeMap_Entry* t)");
    return 0;
}

java::util::SortedMap* java::util::TreeMap::tailMap(::java::lang::Object* fromKey)
{ /* stub */
    unimplemented_(u"java::util::SortedMap* java::util::TreeMap::tailMap(::java::lang::Object* fromKey)");
    return 0;
}

java::util::NavigableMap* java::util::TreeMap::tailMap(::java::lang::Object* fromKey, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::TreeMap::tailMap(::java::lang::Object* fromKey, bool inclusive)");
    return 0;
}

bool java::util::TreeMap::valEquals(::java::lang::Object* o1, ::java::lang::Object* o2)
{ /* stub */
    clinit();
    unimplemented_(u"bool java::util::TreeMap::valEquals(::java::lang::Object* o1, ::java::lang::Object* o2)");
    return 0;
}

java::util::Collection* java::util::TreeMap::values()
{ /* stub */
    unimplemented_(u"java::util::Collection* java::util::TreeMap::values()");
    return 0;
}

/* private: void java::util::TreeMap::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap", 17);
    return c;
}

bool java::util::TreeMap::equals(::java::lang::Object* o)
{
    return AbstractMap::equals(o);
}

int32_t java::util::TreeMap::hashCode()
{
    return AbstractMap::hashCode();
}

bool java::util::TreeMap::isEmpty()
{
    return AbstractMap::isEmpty();
}

bool java::util::TreeMap::remove(::java::lang::Object* key, ::java::lang::Object* value)
{
    return super::remove(key, value);
}

java::lang::Class* java::util::TreeMap::getClass0()
{
    return class_();
}


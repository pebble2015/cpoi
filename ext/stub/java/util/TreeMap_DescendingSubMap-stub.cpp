// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap_DescendingSubMap.hpp>

#include <java/util/SortedMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::TreeMap_DescendingSubMap::TreeMap_DescendingSubMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeMap_DescendingSubMap::TreeMap_DescendingSubMap(TreeMap* m, bool fromStart, ::java::lang::Object* lo, bool loInclusive, bool toEnd, ::java::lang::Object* hi, bool hiInclusive)
    : TreeMap_DescendingSubMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(m, fromStart, lo, loInclusive, toEnd, hi, hiInclusive);
}

constexpr int64_t java::util::TreeMap_DescendingSubMap::serialVersionUID;

void ::java::util::TreeMap_DescendingSubMap::ctor(TreeMap* m, bool fromStart, ::java::lang::Object* lo, bool loInclusive, bool toEnd, ::java::lang::Object* hi, bool hiInclusive)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap_DescendingSubMap::ctor(TreeMap* m, bool fromStart, ::java::lang::Object* lo, bool loInclusive, bool toEnd, ::java::lang::Object* hi, bool hiInclusive)");
}

java::util::Comparator* java::util::TreeMap_DescendingSubMap::comparator()
{ /* stub */
    unimplemented_(u"java::util::Comparator* java::util::TreeMap_DescendingSubMap::comparator()");
    return 0;
}

java::util::Iterator* java::util::TreeMap_DescendingSubMap::descendingKeyIterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::TreeMap_DescendingSubMap::descendingKeyIterator()");
    return 0;
}

java::util::NavigableMap* java::util::TreeMap_DescendingSubMap::descendingMap()
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::TreeMap_DescendingSubMap::descendingMap()");
    return 0;
}

java::util::Set* java::util::TreeMap_DescendingSubMap::entrySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::util::TreeMap_DescendingSubMap::entrySet()");
    return 0;
}

java::util::NavigableMap* java::util::TreeMap_DescendingSubMap::headMap(::java::lang::Object* toKey, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::TreeMap_DescendingSubMap::headMap(::java::lang::Object* toKey, bool inclusive)");
    return 0;
}

java::util::Iterator* java::util::TreeMap_DescendingSubMap::keyIterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::TreeMap_DescendingSubMap::keyIterator()");
    return 0;
}

java::util::Spliterator* java::util::TreeMap_DescendingSubMap::keySpliterator()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::TreeMap_DescendingSubMap::keySpliterator()");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_DescendingSubMap::subCeiling(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_DescendingSubMap::subCeiling(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_DescendingSubMap::subFloor(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_DescendingSubMap::subFloor(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_DescendingSubMap::subHigher(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_DescendingSubMap::subHigher(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_DescendingSubMap::subHighest()
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_DescendingSubMap::subHighest()");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_DescendingSubMap::subLower(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_DescendingSubMap::subLower(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_DescendingSubMap::subLowest()
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_DescendingSubMap::subLowest()");
    return 0;
}

java::util::NavigableMap* java::util::TreeMap_DescendingSubMap::subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::TreeMap_DescendingSubMap::subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive)");
    return 0;
}

java::util::NavigableMap* java::util::TreeMap_DescendingSubMap::tailMap(::java::lang::Object* fromKey, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::TreeMap_DescendingSubMap::tailMap(::java::lang::Object* fromKey, bool inclusive)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_DescendingSubMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.DescendingSubMap", 34);
    return c;
}

java::util::SortedMap* java::util::TreeMap_DescendingSubMap::headMap(::java::lang::Object* toKey)
{
    return super::headMap(toKey);
}

java::util::SortedMap* java::util::TreeMap_DescendingSubMap::subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey)
{
    return super::subMap(fromKey, toKey);
}

java::util::SortedMap* java::util::TreeMap_DescendingSubMap::tailMap(::java::lang::Object* fromKey)
{
    return super::tailMap(fromKey);
}

java::lang::Class* java::util::TreeMap_DescendingSubMap::getClass0()
{
    return class_();
}


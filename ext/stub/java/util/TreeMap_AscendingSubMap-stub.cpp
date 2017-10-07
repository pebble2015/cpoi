// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap_AscendingSubMap.hpp>

#include <java/util/SortedMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::TreeMap_AscendingSubMap::TreeMap_AscendingSubMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeMap_AscendingSubMap::TreeMap_AscendingSubMap(TreeMap* m, bool fromStart, ::java::lang::Object* lo, bool loInclusive, bool toEnd, ::java::lang::Object* hi, bool hiInclusive)
    : TreeMap_AscendingSubMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(m, fromStart, lo, loInclusive, toEnd, hi, hiInclusive);
}

constexpr int64_t java::util::TreeMap_AscendingSubMap::serialVersionUID;

void ::java::util::TreeMap_AscendingSubMap::ctor(TreeMap* m, bool fromStart, ::java::lang::Object* lo, bool loInclusive, bool toEnd, ::java::lang::Object* hi, bool hiInclusive)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap_AscendingSubMap::ctor(TreeMap* m, bool fromStart, ::java::lang::Object* lo, bool loInclusive, bool toEnd, ::java::lang::Object* hi, bool hiInclusive)");
}

java::util::Comparator* java::util::TreeMap_AscendingSubMap::comparator()
{ /* stub */
    unimplemented_(u"java::util::Comparator* java::util::TreeMap_AscendingSubMap::comparator()");
    return 0;
}

java::util::Iterator* java::util::TreeMap_AscendingSubMap::descendingKeyIterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::TreeMap_AscendingSubMap::descendingKeyIterator()");
    return 0;
}

java::util::NavigableMap* java::util::TreeMap_AscendingSubMap::descendingMap()
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::TreeMap_AscendingSubMap::descendingMap()");
    return 0;
}

java::util::Set* java::util::TreeMap_AscendingSubMap::entrySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::util::TreeMap_AscendingSubMap::entrySet()");
    return 0;
}

java::util::NavigableMap* java::util::TreeMap_AscendingSubMap::headMap(::java::lang::Object* toKey, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::TreeMap_AscendingSubMap::headMap(::java::lang::Object* toKey, bool inclusive)");
    return 0;
}

java::util::Iterator* java::util::TreeMap_AscendingSubMap::keyIterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::TreeMap_AscendingSubMap::keyIterator()");
    return 0;
}

java::util::Spliterator* java::util::TreeMap_AscendingSubMap::keySpliterator()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::TreeMap_AscendingSubMap::keySpliterator()");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_AscendingSubMap::subCeiling(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_AscendingSubMap::subCeiling(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_AscendingSubMap::subFloor(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_AscendingSubMap::subFloor(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_AscendingSubMap::subHigher(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_AscendingSubMap::subHigher(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_AscendingSubMap::subHighest()
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_AscendingSubMap::subHighest()");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_AscendingSubMap::subLower(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_AscendingSubMap::subLower(::java::lang::Object* key)");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_AscendingSubMap::subLowest()
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_AscendingSubMap::subLowest()");
    return 0;
}

java::util::NavigableMap* java::util::TreeMap_AscendingSubMap::subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::TreeMap_AscendingSubMap::subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive)");
    return 0;
}

java::util::NavigableMap* java::util::TreeMap_AscendingSubMap::tailMap(::java::lang::Object* fromKey, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::TreeMap_AscendingSubMap::tailMap(::java::lang::Object* fromKey, bool inclusive)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_AscendingSubMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.AscendingSubMap", 33);
    return c;
}

java::util::SortedMap* java::util::TreeMap_AscendingSubMap::headMap(::java::lang::Object* toKey)
{
    return super::headMap(toKey);
}

java::util::SortedMap* java::util::TreeMap_AscendingSubMap::subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey)
{
    return super::subMap(fromKey, toKey);
}

java::util::SortedMap* java::util::TreeMap_AscendingSubMap::tailMap(::java::lang::Object* fromKey)
{
    return super::tailMap(fromKey);
}

java::lang::Class* java::util::TreeMap_AscendingSubMap::getClass0()
{
    return class_();
}


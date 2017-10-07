// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap_KeySet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <ObjectArray.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

extern void unimplemented_(const char16_t* name);
java::util::TreeMap_KeySet::TreeMap_KeySet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeMap_KeySet::TreeMap_KeySet(NavigableMap* map)
    : TreeMap_KeySet(*static_cast< ::default_init_tag* >(0))
{
    ctor(map);
}


void ::java::util::TreeMap_KeySet::ctor(NavigableMap* map)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap_KeySet::ctor(NavigableMap* map)");
}

java::lang::Object* java::util::TreeMap_KeySet::ceiling(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap_KeySet::ceiling(::java::lang::Object* e)");
    return 0;
}

void java::util::TreeMap_KeySet::clear()
{ /* stub */
    unimplemented_(u"void java::util::TreeMap_KeySet::clear()");
}

java::util::Comparator* java::util::TreeMap_KeySet::comparator()
{ /* stub */
    unimplemented_(u"java::util::Comparator* java::util::TreeMap_KeySet::comparator()");
    return 0;
}

bool java::util::TreeMap_KeySet::contains(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::TreeMap_KeySet::contains(::java::lang::Object* o)");
    return 0;
}

java::util::Iterator* java::util::TreeMap_KeySet::descendingIterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::TreeMap_KeySet::descendingIterator()");
    return 0;
}

java::util::NavigableSet* java::util::TreeMap_KeySet::descendingSet()
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::TreeMap_KeySet::descendingSet()");
    return 0;
}

java::lang::Object* java::util::TreeMap_KeySet::first()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap_KeySet::first()");
    return 0;
}

java::lang::Object* java::util::TreeMap_KeySet::floor(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap_KeySet::floor(::java::lang::Object* e)");
    return 0;
}

java::util::SortedSet* java::util::TreeMap_KeySet::headSet(::java::lang::Object* toElement)
{ /* stub */
    unimplemented_(u"java::util::SortedSet* java::util::TreeMap_KeySet::headSet(::java::lang::Object* toElement)");
    return 0;
}

java::util::NavigableSet* java::util::TreeMap_KeySet::headSet(::java::lang::Object* toElement, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::TreeMap_KeySet::headSet(::java::lang::Object* toElement, bool inclusive)");
    return 0;
}

java::lang::Object* java::util::TreeMap_KeySet::higher(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap_KeySet::higher(::java::lang::Object* e)");
    return 0;
}

bool java::util::TreeMap_KeySet::isEmpty()
{ /* stub */
    unimplemented_(u"bool java::util::TreeMap_KeySet::isEmpty()");
    return 0;
}

java::util::Iterator* java::util::TreeMap_KeySet::iterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::TreeMap_KeySet::iterator()");
    return 0;
}

java::lang::Object* java::util::TreeMap_KeySet::last()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap_KeySet::last()");
    return 0;
}

java::lang::Object* java::util::TreeMap_KeySet::lower(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap_KeySet::lower(::java::lang::Object* e)");
    return 0;
}

java::lang::Object* java::util::TreeMap_KeySet::pollFirst()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap_KeySet::pollFirst()");
    return 0;
}

java::lang::Object* java::util::TreeMap_KeySet::pollLast()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap_KeySet::pollLast()");
    return 0;
}

bool java::util::TreeMap_KeySet::remove(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::TreeMap_KeySet::remove(::java::lang::Object* o)");
    return 0;
}

int32_t java::util::TreeMap_KeySet::size()
{ /* stub */
    unimplemented_(u"int32_t java::util::TreeMap_KeySet::size()");
    return 0;
}

java::util::Spliterator* java::util::TreeMap_KeySet::spliterator()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::TreeMap_KeySet::spliterator()");
    return 0;
}

java::util::SortedSet* java::util::TreeMap_KeySet::subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement)
{ /* stub */
    unimplemented_(u"java::util::SortedSet* java::util::TreeMap_KeySet::subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement)");
    return 0;
}

java::util::NavigableSet* java::util::TreeMap_KeySet::subSet(::java::lang::Object* fromElement, bool fromInclusive, ::java::lang::Object* toElement, bool toInclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::TreeMap_KeySet::subSet(::java::lang::Object* fromElement, bool fromInclusive, ::java::lang::Object* toElement, bool toInclusive)");
    return 0;
}

java::util::SortedSet* java::util::TreeMap_KeySet::tailSet(::java::lang::Object* fromElement)
{ /* stub */
    unimplemented_(u"java::util::SortedSet* java::util::TreeMap_KeySet::tailSet(::java::lang::Object* fromElement)");
    return 0;
}

java::util::NavigableSet* java::util::TreeMap_KeySet::tailSet(::java::lang::Object* fromElement, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::TreeMap_KeySet::tailSet(::java::lang::Object* fromElement, bool inclusive)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_KeySet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.KeySet", 24);
    return c;
}

bool java::util::TreeMap_KeySet::add(::java::lang::Object* e)
{
    return AbstractCollection::add(e);
}

bool java::util::TreeMap_KeySet::addAll(Collection* c)
{
    return AbstractCollection::addAll(c);
}

bool java::util::TreeMap_KeySet::containsAll(Collection* c)
{
    return AbstractCollection::containsAll(c);
}

bool java::util::TreeMap_KeySet::equals(::java::lang::Object* o)
{
    return AbstractSet::equals(o);
}

int32_t java::util::TreeMap_KeySet::hashCode()
{
    return AbstractSet::hashCode();
}

bool java::util::TreeMap_KeySet::removeAll(Collection* c)
{
    return AbstractSet::removeAll(c);
}

bool java::util::TreeMap_KeySet::retainAll(Collection* c)
{
    return AbstractCollection::retainAll(c);
}

java::lang::ObjectArray* java::util::TreeMap_KeySet::toArray_()
{
    return AbstractCollection::toArray_();
}

java::lang::ObjectArray* java::util::TreeMap_KeySet::toArray_(::java::lang::ObjectArray* a)
{
    return java_cast< ::java::lang::ObjectArray* >(AbstractCollection::toArray_(a));
}

java::lang::Class* java::util::TreeMap_KeySet::getClass0()
{
    return class_();
}


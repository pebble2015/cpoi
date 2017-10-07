// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeSet.hpp>

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
java::util::TreeSet::TreeSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeSet::TreeSet()
    : TreeSet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::TreeSet::TreeSet(NavigableMap* m)
    : TreeSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(m);
}

java::util::TreeSet::TreeSet(Comparator* comparator)
    : TreeSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(comparator);
}

java::util::TreeSet::TreeSet(Collection* c)
    : TreeSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(c);
}

java::util::TreeSet::TreeSet(SortedSet* s)
    : TreeSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::lang::Object*& java::util::TreeSet::PRESENT()
{
    clinit();
    return PRESENT_;
}
java::lang::Object* java::util::TreeSet::PRESENT_;
constexpr int64_t java::util::TreeSet::serialVersionUID;

void ::java::util::TreeSet::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeSet::ctor()");
}

void ::java::util::TreeSet::ctor(NavigableMap* m)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeSet::ctor(NavigableMap* m)");
}

void ::java::util::TreeSet::ctor(Comparator* comparator)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeSet::ctor(Comparator* comparator)");
}

void ::java::util::TreeSet::ctor(Collection* c)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeSet::ctor(Collection* c)");
}

void ::java::util::TreeSet::ctor(SortedSet* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeSet::ctor(SortedSet* s)");
}

bool java::util::TreeSet::add(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"bool java::util::TreeSet::add(::java::lang::Object* e)");
    return 0;
}

bool java::util::TreeSet::addAll(Collection* c)
{ /* stub */
    unimplemented_(u"bool java::util::TreeSet::addAll(Collection* c)");
    return 0;
}

java::lang::Object* java::util::TreeSet::ceiling(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeSet::ceiling(::java::lang::Object* e)");
    return 0;
}

void java::util::TreeSet::clear()
{ /* stub */
    unimplemented_(u"void java::util::TreeSet::clear()");
}

java::lang::Object* java::util::TreeSet::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeSet::clone()");
    return 0;
}

java::util::Comparator* java::util::TreeSet::comparator()
{ /* stub */
    unimplemented_(u"java::util::Comparator* java::util::TreeSet::comparator()");
    return 0;
}

bool java::util::TreeSet::contains(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::TreeSet::contains(::java::lang::Object* o)");
    return 0;
}

java::util::Iterator* java::util::TreeSet::descendingIterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::TreeSet::descendingIterator()");
    return 0;
}

java::util::NavigableSet* java::util::TreeSet::descendingSet()
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::TreeSet::descendingSet()");
    return 0;
}

java::lang::Object* java::util::TreeSet::first()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeSet::first()");
    return 0;
}

java::lang::Object* java::util::TreeSet::floor(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeSet::floor(::java::lang::Object* e)");
    return 0;
}

java::util::SortedSet* java::util::TreeSet::headSet(::java::lang::Object* toElement)
{ /* stub */
    unimplemented_(u"java::util::SortedSet* java::util::TreeSet::headSet(::java::lang::Object* toElement)");
    return 0;
}

java::util::NavigableSet* java::util::TreeSet::headSet(::java::lang::Object* toElement, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::TreeSet::headSet(::java::lang::Object* toElement, bool inclusive)");
    return 0;
}

java::lang::Object* java::util::TreeSet::higher(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeSet::higher(::java::lang::Object* e)");
    return 0;
}

bool java::util::TreeSet::isEmpty()
{ /* stub */
    unimplemented_(u"bool java::util::TreeSet::isEmpty()");
    return 0;
}

java::util::Iterator* java::util::TreeSet::iterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::TreeSet::iterator()");
    return 0;
}

java::lang::Object* java::util::TreeSet::last()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeSet::last()");
    return 0;
}

java::lang::Object* java::util::TreeSet::lower(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeSet::lower(::java::lang::Object* e)");
    return 0;
}

java::lang::Object* java::util::TreeSet::pollFirst()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeSet::pollFirst()");
    return 0;
}

java::lang::Object* java::util::TreeSet::pollLast()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeSet::pollLast()");
    return 0;
}

/* private: void java::util::TreeSet::readObject(::java::io::ObjectInputStream* s) */
bool java::util::TreeSet::remove(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::TreeSet::remove(::java::lang::Object* o)");
    return 0;
}

int32_t java::util::TreeSet::size()
{ /* stub */
    unimplemented_(u"int32_t java::util::TreeSet::size()");
    return 0;
}

java::util::Spliterator* java::util::TreeSet::spliterator()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::TreeSet::spliterator()");
    return 0;
}

java::util::SortedSet* java::util::TreeSet::subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement)
{ /* stub */
    unimplemented_(u"java::util::SortedSet* java::util::TreeSet::subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement)");
    return 0;
}

java::util::NavigableSet* java::util::TreeSet::subSet(::java::lang::Object* fromElement, bool fromInclusive, ::java::lang::Object* toElement, bool toInclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::TreeSet::subSet(::java::lang::Object* fromElement, bool fromInclusive, ::java::lang::Object* toElement, bool toInclusive)");
    return 0;
}

java::util::SortedSet* java::util::TreeSet::tailSet(::java::lang::Object* fromElement)
{ /* stub */
    unimplemented_(u"java::util::SortedSet* java::util::TreeSet::tailSet(::java::lang::Object* fromElement)");
    return 0;
}

java::util::NavigableSet* java::util::TreeSet::tailSet(::java::lang::Object* fromElement, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::TreeSet::tailSet(::java::lang::Object* fromElement, bool inclusive)");
    return 0;
}

/* private: void java::util::TreeSet::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeSet", 17);
    return c;
}

bool java::util::TreeSet::containsAll(Collection* c)
{
    return AbstractCollection::containsAll(c);
}

bool java::util::TreeSet::equals(::java::lang::Object* o)
{
    return AbstractSet::equals(o);
}

int32_t java::util::TreeSet::hashCode()
{
    return AbstractSet::hashCode();
}

bool java::util::TreeSet::removeAll(Collection* c)
{
    return AbstractSet::removeAll(c);
}

bool java::util::TreeSet::retainAll(Collection* c)
{
    return AbstractCollection::retainAll(c);
}

java::lang::ObjectArray* java::util::TreeSet::toArray_()
{
    return AbstractCollection::toArray_();
}

java::lang::ObjectArray* java::util::TreeSet::toArray_(::java::lang::ObjectArray* a)
{
    return java_cast< ::java::lang::ObjectArray* >(AbstractCollection::toArray_(a));
}

java::lang::Class* java::util::TreeSet::getClass0()
{
    return class_();
}


// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Collections_SynchronizedSet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Spliterator.hpp>
#include <java/util/stream/Stream.hpp>
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
java::util::Collections_SynchronizedSet::Collections_SynchronizedSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_SynchronizedSet::Collections_SynchronizedSet(Set* s)
    : Collections_SynchronizedSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::util::Collections_SynchronizedSet::Collections_SynchronizedSet(Set* s, ::java::lang::Object* mutex)
    : Collections_SynchronizedSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(s, mutex);
}

constexpr int64_t java::util::Collections_SynchronizedSet::serialVersionUID;

void ::java::util::Collections_SynchronizedSet::ctor(Set* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Collections_SynchronizedSet::ctor(Set* s)");
}

void ::java::util::Collections_SynchronizedSet::ctor(Set* s, ::java::lang::Object* mutex)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Collections_SynchronizedSet::ctor(Set* s, ::java::lang::Object* mutex)");
}

bool java::util::Collections_SynchronizedSet::equals(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::Collections_SynchronizedSet::equals(::java::lang::Object* o)");
    return 0;
}

int32_t java::util::Collections_SynchronizedSet::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::util::Collections_SynchronizedSet::hashCode()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections_SynchronizedSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.SynchronizedSet", 37);
    return c;
}

void java::util::Collections_SynchronizedSet::forEach(::java::util::function::Consumer* action)
{
    Collections_SynchronizedCollection::forEach(action);
}

java::util::stream::Stream* java::util::Collections_SynchronizedSet::parallelStream()
{
    return java_cast< ::java::util::stream::Stream* >(Collections_SynchronizedCollection::parallelStream());
}

bool java::util::Collections_SynchronizedSet::removeIf(::java::util::function::Predicate* filter)
{
    return Collections_SynchronizedCollection::removeIf(filter);
}

java::util::stream::Stream* java::util::Collections_SynchronizedSet::stream()
{
    return java_cast< ::java::util::stream::Stream* >(Collections_SynchronizedCollection::stream());
}

bool java::util::Collections_SynchronizedSet::add(::java::lang::Object* e)
{
    return Collections_SynchronizedCollection::add(e);
}

bool java::util::Collections_SynchronizedSet::addAll(Collection* c)
{
    return Collections_SynchronizedCollection::addAll(c);
}

void java::util::Collections_SynchronizedSet::clear()
{
    Collections_SynchronizedCollection::clear();
}

bool java::util::Collections_SynchronizedSet::contains(::java::lang::Object* o)
{
    return Collections_SynchronizedCollection::contains(o);
}

bool java::util::Collections_SynchronizedSet::containsAll(Collection* c)
{
    return Collections_SynchronizedCollection::containsAll(c);
}

bool java::util::Collections_SynchronizedSet::isEmpty()
{
    return Collections_SynchronizedCollection::isEmpty();
}

java::util::Iterator* java::util::Collections_SynchronizedSet::iterator()
{
    return java_cast< Iterator* >(Collections_SynchronizedCollection::iterator());
}

bool java::util::Collections_SynchronizedSet::remove(::java::lang::Object* o)
{
    return Collections_SynchronizedCollection::remove(o);
}

bool java::util::Collections_SynchronizedSet::removeAll(Collection* c)
{
    return Collections_SynchronizedCollection::removeAll(c);
}

bool java::util::Collections_SynchronizedSet::retainAll(Collection* c)
{
    return Collections_SynchronizedCollection::retainAll(c);
}

int32_t java::util::Collections_SynchronizedSet::size()
{
    return Collections_SynchronizedCollection::size();
}

java::util::Spliterator* java::util::Collections_SynchronizedSet::spliterator()
{
    return java_cast< Spliterator* >(Collections_SynchronizedCollection::spliterator());
}

java::lang::ObjectArray* java::util::Collections_SynchronizedSet::toArray_()
{
    return Collections_SynchronizedCollection::toArray_();
}

java::lang::ObjectArray* java::util::Collections_SynchronizedSet::toArray_(::java::lang::ObjectArray* a)
{
    return java_cast< ::java::lang::ObjectArray* >(Collections_SynchronizedCollection::toArray_(a));
}

java::lang::Class* java::util::Collections_SynchronizedSet::getClass0()
{
    return class_();
}


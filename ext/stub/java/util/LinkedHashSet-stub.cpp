// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/LinkedHashSet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/util/Iterator.hpp>
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
java::util::LinkedHashSet::LinkedHashSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::LinkedHashSet::LinkedHashSet()
    : LinkedHashSet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::LinkedHashSet::LinkedHashSet(int32_t initialCapacity)
    : LinkedHashSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(initialCapacity);
}

java::util::LinkedHashSet::LinkedHashSet(Collection* c)
    : LinkedHashSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(c);
}

java::util::LinkedHashSet::LinkedHashSet(int32_t initialCapacity, float loadFactor)
    : LinkedHashSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(initialCapacity, loadFactor);
}

constexpr int64_t java::util::LinkedHashSet::serialVersionUID;

void ::java::util::LinkedHashSet::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedHashSet::ctor()");
}

void ::java::util::LinkedHashSet::ctor(int32_t initialCapacity)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedHashSet::ctor(int32_t initialCapacity)");
}

void ::java::util::LinkedHashSet::ctor(Collection* c)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedHashSet::ctor(Collection* c)");
}

void ::java::util::LinkedHashSet::ctor(int32_t initialCapacity, float loadFactor)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedHashSet::ctor(int32_t initialCapacity, float loadFactor)");
}

java::util::Spliterator* java::util::LinkedHashSet::spliterator()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::LinkedHashSet::spliterator()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::LinkedHashSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.LinkedHashSet", 23);
    return c;
}

bool java::util::LinkedHashSet::add(::java::lang::Object* e)
{
    return HashSet::add(e);
}

bool java::util::LinkedHashSet::addAll(Collection* c)
{
    return AbstractCollection::addAll(c);
}

void java::util::LinkedHashSet::clear()
{
    HashSet::clear();
}

bool java::util::LinkedHashSet::contains(::java::lang::Object* o)
{
    return HashSet::contains(o);
}

bool java::util::LinkedHashSet::containsAll(Collection* c)
{
    return AbstractCollection::containsAll(c);
}

bool java::util::LinkedHashSet::equals(::java::lang::Object* o)
{
    return AbstractSet::equals(o);
}

int32_t java::util::LinkedHashSet::hashCode()
{
    return AbstractSet::hashCode();
}

bool java::util::LinkedHashSet::isEmpty()
{
    return HashSet::isEmpty();
}

java::util::Iterator* java::util::LinkedHashSet::iterator()
{
    return java_cast< Iterator* >(HashSet::iterator());
}

bool java::util::LinkedHashSet::remove(::java::lang::Object* o)
{
    return HashSet::remove(o);
}

bool java::util::LinkedHashSet::removeAll(Collection* c)
{
    return AbstractSet::removeAll(c);
}

bool java::util::LinkedHashSet::retainAll(Collection* c)
{
    return AbstractCollection::retainAll(c);
}

int32_t java::util::LinkedHashSet::size()
{
    return HashSet::size();
}

java::lang::ObjectArray* java::util::LinkedHashSet::toArray_()
{
    return AbstractCollection::toArray_();
}

java::lang::ObjectArray* java::util::LinkedHashSet::toArray_(::java::lang::ObjectArray* a)
{
    return java_cast< ::java::lang::ObjectArray* >(AbstractCollection::toArray_(a));
}

java::lang::Class* java::util::LinkedHashSet::getClass0()
{
    return class_();
}


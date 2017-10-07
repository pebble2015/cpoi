// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap_NavigableSubMap_SubMapKeyIterator.hpp>

#include <java/util/TreeMap_NavigableSubMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::TreeMap_NavigableSubMap_SubMapKeyIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, const ::default_init_tag&)
    : super(TreeMap_NavigableSubMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::TreeMap_NavigableSubMap_SubMapKeyIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, TreeMap_Entry* first, TreeMap_Entry* fence)
    : TreeMap_NavigableSubMap_SubMapKeyIterator(TreeMap_NavigableSubMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(first, fence);
}


void ::java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::ctor(TreeMap_Entry* first, TreeMap_Entry* fence)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::ctor(TreeMap_Entry* first, TreeMap_Entry* fence)");
}

int32_t java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::characteristics()");
    return 0;
}

int64_t java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::estimateSize()
{ /* stub */
    unimplemented_(u"int64_t java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::estimateSize()");
    return 0;
}

void java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::forEachRemaining(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::forEachRemaining(::java::util::function::Consumer* action)");
}

java::util::Comparator* java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::getComparator()
{ /* stub */
    unimplemented_(u"java::util::Comparator* java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::getComparator()");
    return 0;
}

java::lang::Object* java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::next()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::next()");
    return 0;
}

void java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::remove()
{ /* stub */
    unimplemented_(u"void java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::remove()");
}

bool java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::tryAdvance(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"bool java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::tryAdvance(::java::util::function::Consumer* action)");
    return 0;
}

java::util::Spliterator* java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::trySplit()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.NavigableSubMap.SubMapKeyIterator", 51);
    return c;
}

java::lang::Class* java::util::TreeMap_NavigableSubMap_SubMapKeyIterator::getClass0()
{
    return class_();
}


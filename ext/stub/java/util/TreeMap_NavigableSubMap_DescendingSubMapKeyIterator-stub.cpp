// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap_NavigableSubMap_DescendingSubMapKeyIterator.hpp>

#include <java/util/TreeMap_NavigableSubMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, const ::default_init_tag&)
    : super(TreeMap_NavigableSubMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, TreeMap_Entry* last, TreeMap_Entry* fence)
    : TreeMap_NavigableSubMap_DescendingSubMapKeyIterator(TreeMap_NavigableSubMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(last, fence);
}


void ::java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::ctor(TreeMap_Entry* last, TreeMap_Entry* fence)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::ctor(TreeMap_Entry* last, TreeMap_Entry* fence)");
}

int32_t java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::characteristics()");
    return 0;
}

int64_t java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::estimateSize()
{ /* stub */
    unimplemented_(u"int64_t java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::estimateSize()");
    return 0;
}

void java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::forEachRemaining(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::forEachRemaining(::java::util::function::Consumer* action)");
}

java::lang::Object* java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::next()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::next()");
    return 0;
}

void java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::remove()
{ /* stub */
    unimplemented_(u"void java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::remove()");
}

bool java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::tryAdvance(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"bool java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::tryAdvance(::java::util::function::Consumer* action)");
    return 0;
}

java::util::Spliterator* java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::trySplit()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.NavigableSubMap.DescendingSubMapKeyIterator", 61);
    return c;
}

java::lang::Class* java::util::TreeMap_NavigableSubMap_DescendingSubMapKeyIterator::getClass0()
{
    return class_();
}


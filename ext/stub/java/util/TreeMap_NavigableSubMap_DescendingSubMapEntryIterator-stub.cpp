// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap_NavigableSubMap_DescendingSubMapEntryIterator.hpp>

#include <java/util/TreeMap_NavigableSubMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, const ::default_init_tag&)
    : super(TreeMap_NavigableSubMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, TreeMap_Entry* last, TreeMap_Entry* fence)
    : TreeMap_NavigableSubMap_DescendingSubMapEntryIterator(TreeMap_NavigableSubMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(last, fence);
}


void ::java::util::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator::ctor(TreeMap_Entry* last, TreeMap_Entry* fence)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator::ctor(TreeMap_Entry* last, TreeMap_Entry* fence)");
}

java::util::Map_Entry* java::util::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator::next()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator::next()");
    return 0;
}

void java::util::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator::remove()
{ /* stub */
    unimplemented_(u"void java::util::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator::remove()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.NavigableSubMap.DescendingSubMapEntryIterator", 63);
    return c;
}

java::lang::Class* java::util::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator::getClass0()
{
    return class_();
}


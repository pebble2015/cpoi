// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap_NavigableSubMap_SubMapEntryIterator.hpp>

#include <java/util/TreeMap_NavigableSubMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::TreeMap_NavigableSubMap_SubMapEntryIterator::TreeMap_NavigableSubMap_SubMapEntryIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, const ::default_init_tag&)
    : super(TreeMap_NavigableSubMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeMap_NavigableSubMap_SubMapEntryIterator::TreeMap_NavigableSubMap_SubMapEntryIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, TreeMap_Entry* first, TreeMap_Entry* fence)
    : TreeMap_NavigableSubMap_SubMapEntryIterator(TreeMap_NavigableSubMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(first, fence);
}


void ::java::util::TreeMap_NavigableSubMap_SubMapEntryIterator::ctor(TreeMap_Entry* first, TreeMap_Entry* fence)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap_NavigableSubMap_SubMapEntryIterator::ctor(TreeMap_Entry* first, TreeMap_Entry* fence)");
}

java::util::Map_Entry* java::util::TreeMap_NavigableSubMap_SubMapEntryIterator::next()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::TreeMap_NavigableSubMap_SubMapEntryIterator::next()");
    return 0;
}

void java::util::TreeMap_NavigableSubMap_SubMapEntryIterator::remove()
{ /* stub */
    unimplemented_(u"void java::util::TreeMap_NavigableSubMap_SubMapEntryIterator::remove()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_NavigableSubMap_SubMapEntryIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.NavigableSubMap.SubMapEntryIterator", 53);
    return c;
}

java::lang::Class* java::util::TreeMap_NavigableSubMap_SubMapEntryIterator::getClass0()
{
    return class_();
}


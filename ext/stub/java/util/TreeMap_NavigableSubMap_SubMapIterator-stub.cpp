// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap_NavigableSubMap_SubMapIterator.hpp>

#include <java/util/TreeMap_NavigableSubMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::TreeMap_NavigableSubMap_SubMapIterator::TreeMap_NavigableSubMap_SubMapIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , TreeMap_NavigableSubMap_this(TreeMap_NavigableSubMap_this)
{
    clinit();
}

java::util::TreeMap_NavigableSubMap_SubMapIterator::TreeMap_NavigableSubMap_SubMapIterator(TreeMap_NavigableSubMap *TreeMap_NavigableSubMap_this, TreeMap_Entry* first, TreeMap_Entry* fence)
    : TreeMap_NavigableSubMap_SubMapIterator(TreeMap_NavigableSubMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(first, fence);
}


void ::java::util::TreeMap_NavigableSubMap_SubMapIterator::ctor(TreeMap_Entry* first, TreeMap_Entry* fence)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap_NavigableSubMap_SubMapIterator::ctor(TreeMap_Entry* first, TreeMap_Entry* fence)");
}

bool java::util::TreeMap_NavigableSubMap_SubMapIterator::hasNext()
{ /* stub */
    unimplemented_(u"bool java::util::TreeMap_NavigableSubMap_SubMapIterator::hasNext()");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_NavigableSubMap_SubMapIterator::nextEntry()
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_NavigableSubMap_SubMapIterator::nextEntry()");
    return 0;
}

java::util::TreeMap_Entry* java::util::TreeMap_NavigableSubMap_SubMapIterator::prevEntry()
{ /* stub */
    unimplemented_(u"java::util::TreeMap_Entry* java::util::TreeMap_NavigableSubMap_SubMapIterator::prevEntry()");
    return 0;
}

void java::util::TreeMap_NavigableSubMap_SubMapIterator::removeAscending()
{ /* stub */
    unimplemented_(u"void java::util::TreeMap_NavigableSubMap_SubMapIterator::removeAscending()");
}

void java::util::TreeMap_NavigableSubMap_SubMapIterator::removeDescending()
{ /* stub */
    unimplemented_(u"void java::util::TreeMap_NavigableSubMap_SubMapIterator::removeDescending()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_NavigableSubMap_SubMapIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.NavigableSubMap.SubMapIterator", 48);
    return c;
}

java::lang::Class* java::util::TreeMap_NavigableSubMap_SubMapIterator::getClass0()
{
    return class_();
}


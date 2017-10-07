// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap_EntrySpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::TreeMap_EntrySpliterator::TreeMap_EntrySpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeMap_EntrySpliterator::TreeMap_EntrySpliterator(TreeMap* tree, TreeMap_Entry* origin, TreeMap_Entry* fence, int32_t side, int32_t est, int32_t expectedModCount)
    : TreeMap_EntrySpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(tree, origin, fence, side, est, expectedModCount);
}


void ::java::util::TreeMap_EntrySpliterator::ctor(TreeMap* tree, TreeMap_Entry* origin, TreeMap_Entry* fence, int32_t side, int32_t est, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap_EntrySpliterator::ctor(TreeMap* tree, TreeMap_Entry* origin, TreeMap_Entry* fence, int32_t side, int32_t est, int32_t expectedModCount)");
}

int32_t java::util::TreeMap_EntrySpliterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::TreeMap_EntrySpliterator::characteristics()");
    return 0;
}

void java::util::TreeMap_EntrySpliterator::forEachRemaining(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::TreeMap_EntrySpliterator::forEachRemaining(::java::util::function::Consumer* action)");
}

java::util::Comparator* java::util::TreeMap_EntrySpliterator::getComparator()
{ /* stub */
    unimplemented_(u"java::util::Comparator* java::util::TreeMap_EntrySpliterator::getComparator()");
    return 0;
}

bool java::util::TreeMap_EntrySpliterator::tryAdvance(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"bool java::util::TreeMap_EntrySpliterator::tryAdvance(::java::util::function::Consumer* action)");
    return 0;
}

java::util::TreeMap_EntrySpliterator* java::util::TreeMap_EntrySpliterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::TreeMap_EntrySpliterator* java::util::TreeMap_EntrySpliterator::trySplit()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_EntrySpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.EntrySpliterator", 34);
    return c;
}

int64_t java::util::TreeMap_EntrySpliterator::estimateSize()
{
    return TreeMap_TreeMapSpliterator::estimateSize();
}

java::lang::Class* java::util::TreeMap_EntrySpliterator::getClass0()
{
    return class_();
}


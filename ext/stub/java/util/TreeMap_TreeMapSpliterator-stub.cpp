// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap_TreeMapSpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::TreeMap_TreeMapSpliterator::TreeMap_TreeMapSpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeMap_TreeMapSpliterator::TreeMap_TreeMapSpliterator(TreeMap* tree, TreeMap_Entry* origin, TreeMap_Entry* fence, int32_t side, int32_t est, int32_t expectedModCount)
    : TreeMap_TreeMapSpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(tree, origin, fence, side, est, expectedModCount);
}


void ::java::util::TreeMap_TreeMapSpliterator::ctor(TreeMap* tree, TreeMap_Entry* origin, TreeMap_Entry* fence, int32_t side, int32_t est, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap_TreeMapSpliterator::ctor(TreeMap* tree, TreeMap_Entry* origin, TreeMap_Entry* fence, int32_t side, int32_t est, int32_t expectedModCount)");
}

int64_t java::util::TreeMap_TreeMapSpliterator::estimateSize()
{ /* stub */
    unimplemented_(u"int64_t java::util::TreeMap_TreeMapSpliterator::estimateSize()");
    return 0;
}

int32_t java::util::TreeMap_TreeMapSpliterator::getEstimate()
{ /* stub */
    unimplemented_(u"int32_t java::util::TreeMap_TreeMapSpliterator::getEstimate()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_TreeMapSpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.TreeMapSpliterator", 36);
    return c;
}

java::lang::Class* java::util::TreeMap_TreeMapSpliterator::getClass0()
{
    return class_();
}


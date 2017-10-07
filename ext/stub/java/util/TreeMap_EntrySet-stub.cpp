// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TreeMap_EntrySet.hpp>

#include <java/util/TreeMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::TreeMap_EntrySet::TreeMap_EntrySet(TreeMap *TreeMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , TreeMap_this(TreeMap_this)
{
    clinit();
}

java::util::TreeMap_EntrySet::TreeMap_EntrySet(TreeMap *TreeMap_this)
    : TreeMap_EntrySet(TreeMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::util::TreeMap_EntrySet::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TreeMap_EntrySet::ctor()");
}

void java::util::TreeMap_EntrySet::clear()
{ /* stub */
    unimplemented_(u"void java::util::TreeMap_EntrySet::clear()");
}

bool java::util::TreeMap_EntrySet::contains(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::TreeMap_EntrySet::contains(::java::lang::Object* o)");
    return 0;
}

java::util::Iterator* java::util::TreeMap_EntrySet::iterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::TreeMap_EntrySet::iterator()");
    return 0;
}

bool java::util::TreeMap_EntrySet::remove(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::TreeMap_EntrySet::remove(::java::lang::Object* o)");
    return 0;
}

int32_t java::util::TreeMap_EntrySet::size()
{ /* stub */
    unimplemented_(u"int32_t java::util::TreeMap_EntrySet::size()");
    return 0;
}

java::util::Spliterator* java::util::TreeMap_EntrySet::spliterator()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::TreeMap_EntrySet::spliterator()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_EntrySet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.EntrySet", 26);
    return c;
}

java::lang::Class* java::util::TreeMap_EntrySet::getClass0()
{
    return class_();
}


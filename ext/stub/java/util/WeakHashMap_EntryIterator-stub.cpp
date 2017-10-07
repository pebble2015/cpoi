// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/WeakHashMap_EntryIterator.hpp>

#include <java/util/WeakHashMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::WeakHashMap_EntryIterator::WeakHashMap_EntryIterator(WeakHashMap *WeakHashMap_this, const ::default_init_tag&)
    : super(WeakHashMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}


/* private: void ::java::util::WeakHashMap_EntryIterator::ctor() */
java::util::Map_Entry* java::util::WeakHashMap_EntryIterator::next()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::WeakHashMap_EntryIterator::next()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::WeakHashMap_EntryIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.WeakHashMap.EntryIterator", 35);
    return c;
}

java::lang::Class* java::util::WeakHashMap_EntryIterator::getClass0()
{
    return class_();
}


// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/LinkedHashMap_LinkedEntrySet.hpp>

#include <java/util/LinkedHashMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::LinkedHashMap_LinkedEntrySet::LinkedHashMap_LinkedEntrySet(LinkedHashMap *LinkedHashMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , LinkedHashMap_this(LinkedHashMap_this)
{
    clinit();
}

java::util::LinkedHashMap_LinkedEntrySet::LinkedHashMap_LinkedEntrySet(LinkedHashMap *LinkedHashMap_this)
    : LinkedHashMap_LinkedEntrySet(LinkedHashMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::util::LinkedHashMap_LinkedEntrySet::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedHashMap_LinkedEntrySet::ctor()");
}

void java::util::LinkedHashMap_LinkedEntrySet::clear()
{ /* stub */
    unimplemented_(u"void java::util::LinkedHashMap_LinkedEntrySet::clear()");
}

bool java::util::LinkedHashMap_LinkedEntrySet::contains(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedHashMap_LinkedEntrySet::contains(::java::lang::Object* o)");
    return 0;
}

void java::util::LinkedHashMap_LinkedEntrySet::forEach(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::LinkedHashMap_LinkedEntrySet::forEach(::java::util::function::Consumer* action)");
}

java::util::Iterator* java::util::LinkedHashMap_LinkedEntrySet::iterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::LinkedHashMap_LinkedEntrySet::iterator()");
    return 0;
}

bool java::util::LinkedHashMap_LinkedEntrySet::remove(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedHashMap_LinkedEntrySet::remove(::java::lang::Object* o)");
    return 0;
}

int32_t java::util::LinkedHashMap_LinkedEntrySet::size()
{ /* stub */
    unimplemented_(u"int32_t java::util::LinkedHashMap_LinkedEntrySet::size()");
    return 0;
}

java::util::Spliterator* java::util::LinkedHashMap_LinkedEntrySet::spliterator()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::LinkedHashMap_LinkedEntrySet::spliterator()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::LinkedHashMap_LinkedEntrySet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.LinkedHashMap.LinkedEntrySet", 38);
    return c;
}

java::lang::Class* java::util::LinkedHashMap_LinkedEntrySet::getClass0()
{
    return class_();
}


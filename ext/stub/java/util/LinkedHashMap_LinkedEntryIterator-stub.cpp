// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/LinkedHashMap_LinkedEntryIterator.hpp>

#include <java/util/LinkedHashMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::LinkedHashMap_LinkedEntryIterator::LinkedHashMap_LinkedEntryIterator(LinkedHashMap *LinkedHashMap_this, const ::default_init_tag&)
    : super(LinkedHashMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::LinkedHashMap_LinkedEntryIterator::LinkedHashMap_LinkedEntryIterator(LinkedHashMap *LinkedHashMap_this)
    : LinkedHashMap_LinkedEntryIterator(LinkedHashMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::util::LinkedHashMap_LinkedEntryIterator::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedHashMap_LinkedEntryIterator::ctor()");
}

java::util::Map_Entry* java::util::LinkedHashMap_LinkedEntryIterator::next()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::LinkedHashMap_LinkedEntryIterator::next()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::LinkedHashMap_LinkedEntryIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.LinkedHashMap.LinkedEntryIterator", 43);
    return c;
}

bool java::util::LinkedHashMap_LinkedEntryIterator::hasNext()
{
    return LinkedHashMap_LinkedHashIterator::hasNext();
}

void java::util::LinkedHashMap_LinkedEntryIterator::remove()
{
    LinkedHashMap_LinkedHashIterator::remove();
}

java::lang::Class* java::util::LinkedHashMap_LinkedEntryIterator::getClass0()
{
    return class_();
}


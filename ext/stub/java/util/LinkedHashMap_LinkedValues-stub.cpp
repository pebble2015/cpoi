// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/LinkedHashMap_LinkedValues.hpp>

#include <java/util/LinkedHashMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::LinkedHashMap_LinkedValues::LinkedHashMap_LinkedValues(LinkedHashMap *LinkedHashMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , LinkedHashMap_this(LinkedHashMap_this)
{
    clinit();
}

java::util::LinkedHashMap_LinkedValues::LinkedHashMap_LinkedValues(LinkedHashMap *LinkedHashMap_this)
    : LinkedHashMap_LinkedValues(LinkedHashMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::util::LinkedHashMap_LinkedValues::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedHashMap_LinkedValues::ctor()");
}

void java::util::LinkedHashMap_LinkedValues::clear()
{ /* stub */
    unimplemented_(u"void java::util::LinkedHashMap_LinkedValues::clear()");
}

bool java::util::LinkedHashMap_LinkedValues::contains(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedHashMap_LinkedValues::contains(::java::lang::Object* o)");
    return 0;
}

void java::util::LinkedHashMap_LinkedValues::forEach(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::LinkedHashMap_LinkedValues::forEach(::java::util::function::Consumer* action)");
}

java::util::Iterator* java::util::LinkedHashMap_LinkedValues::iterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::LinkedHashMap_LinkedValues::iterator()");
    return 0;
}

int32_t java::util::LinkedHashMap_LinkedValues::size()
{ /* stub */
    unimplemented_(u"int32_t java::util::LinkedHashMap_LinkedValues::size()");
    return 0;
}

java::util::Spliterator* java::util::LinkedHashMap_LinkedValues::spliterator()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::LinkedHashMap_LinkedValues::spliterator()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::LinkedHashMap_LinkedValues::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.LinkedHashMap.LinkedValues", 36);
    return c;
}

java::lang::Class* java::util::LinkedHashMap_LinkedValues::getClass0()
{
    return class_();
}


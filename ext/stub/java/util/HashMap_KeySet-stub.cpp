// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/HashMap_KeySet.hpp>

#include <java/util/HashMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::HashMap_KeySet::HashMap_KeySet(HashMap *HashMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , HashMap_this(HashMap_this)
{
    clinit();
}

java::util::HashMap_KeySet::HashMap_KeySet(HashMap *HashMap_this)
    : HashMap_KeySet(HashMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::util::HashMap_KeySet::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::HashMap_KeySet::ctor()");
}

void java::util::HashMap_KeySet::clear()
{ /* stub */
    unimplemented_(u"void java::util::HashMap_KeySet::clear()");
}

bool java::util::HashMap_KeySet::contains(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::HashMap_KeySet::contains(::java::lang::Object* o)");
    return 0;
}

void java::util::HashMap_KeySet::forEach(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::HashMap_KeySet::forEach(::java::util::function::Consumer* action)");
}

java::util::Iterator* java::util::HashMap_KeySet::iterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::HashMap_KeySet::iterator()");
    return 0;
}

bool java::util::HashMap_KeySet::remove(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"bool java::util::HashMap_KeySet::remove(::java::lang::Object* key)");
    return 0;
}

int32_t java::util::HashMap_KeySet::size()
{ /* stub */
    unimplemented_(u"int32_t java::util::HashMap_KeySet::size()");
    return 0;
}

java::util::Spliterator* java::util::HashMap_KeySet::spliterator()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::HashMap_KeySet::spliterator()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::HashMap_KeySet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap.KeySet", 24);
    return c;
}

java::lang::Class* java::util::HashMap_KeySet::getClass0()
{
    return class_();
}


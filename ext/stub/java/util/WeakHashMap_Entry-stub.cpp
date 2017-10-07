// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/WeakHashMap_Entry.hpp>

extern void unimplemented_(const char16_t* name);
java::util::WeakHashMap_Entry::WeakHashMap_Entry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::WeakHashMap_Entry::WeakHashMap_Entry(::java::lang::Object* key, ::java::lang::Object* value, ::java::lang::ref::ReferenceQueue* queue, int32_t hash, WeakHashMap_Entry* next)
    : WeakHashMap_Entry(*static_cast< ::default_init_tag* >(0))
{
    ctor(key, value, queue, hash, next);
}


void ::java::util::WeakHashMap_Entry::ctor(::java::lang::Object* key, ::java::lang::Object* value, ::java::lang::ref::ReferenceQueue* queue, int32_t hash, WeakHashMap_Entry* next)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::WeakHashMap_Entry::ctor(::java::lang::Object* key, ::java::lang::Object* value, ::java::lang::ref::ReferenceQueue* queue, int32_t hash, WeakHashMap_Entry* next)");
}

bool java::util::WeakHashMap_Entry::equals(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::WeakHashMap_Entry::equals(::java::lang::Object* o)");
    return 0;
}

java::lang::Object* java::util::WeakHashMap_Entry::getKey()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::WeakHashMap_Entry::getKey()");
    return 0;
}

java::lang::Object* java::util::WeakHashMap_Entry::getValue()
{ /* stub */
return value ; /* getter */
}

int32_t java::util::WeakHashMap_Entry::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::util::WeakHashMap_Entry::hashCode()");
    return 0;
}

java::lang::Object* java::util::WeakHashMap_Entry::setValue(::java::lang::Object* newValue)
{ /* stub */
}

java::lang::String* java::util::WeakHashMap_Entry::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::WeakHashMap_Entry::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::WeakHashMap_Entry::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.WeakHashMap.Entry", 27);
    return c;
}

java::lang::Class* java::util::WeakHashMap_Entry::getClass0()
{
    return class_();
}


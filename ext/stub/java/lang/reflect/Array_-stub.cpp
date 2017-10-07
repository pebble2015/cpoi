// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/lang/reflect/Array_.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::reflect::Array_::Array_(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}


/* private: void ::java::lang::reflect::Array_::ctor() */
java::lang::Object* java::lang::reflect::Array_::newInstance(::java::lang::Class* componentType, int32_t length)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Object* java::lang::reflect::Array_::newInstance(::java::lang::Class* componentType, int32_t length)");
    return 0;
}

java::lang::Object* java::lang::reflect::Array_::newInstance(::java::lang::Class* componentType, ::int32_tArray* dimensions)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Object* java::lang::reflect::Array_::newInstance(::java::lang::Class* componentType, ::int32_tArray* dimensions)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::reflect::Array_::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.Array", 23);
    return c;
}

java::lang::Class* java::lang::reflect::Array_::getClass0()
{
    return class_();
}


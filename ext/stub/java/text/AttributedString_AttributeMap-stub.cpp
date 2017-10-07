// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/AttributedString_AttributeMap.hpp>

#include <java/text/AttributedString.hpp>

extern void unimplemented_(const char16_t* name);
java::text::AttributedString_AttributeMap::AttributedString_AttributeMap(AttributedString *AttributedString_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , AttributedString_this(AttributedString_this)
{
    clinit();
}

java::text::AttributedString_AttributeMap::AttributedString_AttributeMap(AttributedString *AttributedString_this, int32_t runIndex, int32_t beginIndex, int32_t endIndex)
    : AttributedString_AttributeMap(AttributedString_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(runIndex, beginIndex, endIndex);
}


void ::java::text::AttributedString_AttributeMap::ctor(int32_t runIndex, int32_t beginIndex, int32_t endIndex)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::AttributedString_AttributeMap::ctor(int32_t runIndex, int32_t beginIndex, int32_t endIndex)");
}

java::util::Set* java::text::AttributedString_AttributeMap::entrySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::text::AttributedString_AttributeMap::entrySet()");
    return 0;
}

java::lang::Object* java::text::AttributedString_AttributeMap::get(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::text::AttributedString_AttributeMap::get(::java::lang::Object* key)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::AttributedString_AttributeMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.AttributedString.AttributeMap", 39);
    return c;
}

java::lang::Class* java::text::AttributedString_AttributeMap::getClass0()
{
    return class_();
}


// Generated from /POI/java/org/apache/poi/ddf/AbstractEscherOptRecord.java
#include <org/apache/poi/ddf/AbstractEscherOptRecord_sortProperties_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ddf/AbstractEscherOptRecord.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ddf::AbstractEscherOptRecord_sortProperties_1::AbstractEscherOptRecord_sortProperties_1(AbstractEscherOptRecord *AbstractEscherOptRecord_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , AbstractEscherOptRecord_this(AbstractEscherOptRecord_this)
{
    clinit();
    ctor();
}

int32_t poi::ddf::AbstractEscherOptRecord_sortProperties_1::compare(EscherProperty* p1, EscherProperty* p2)
{
    auto s1 = npc(p1)->getPropertyNumber();
    auto s2 = npc(p2)->getPropertyNumber();
    return s1 < s2 ? -int32_t(1) : s1 == s2 ? int32_t(0) : int32_t(1);
}

int32_t poi::ddf::AbstractEscherOptRecord_sortProperties_1::compare(::java::lang::Object* o1, ::java::lang::Object* o2)
{ 
    return compare(dynamic_cast< EscherProperty* >(o1), dynamic_cast< EscherProperty* >(o2));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ddf::AbstractEscherOptRecord_sortProperties_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

bool poi::ddf::AbstractEscherOptRecord_sortProperties_1::equals(::java::lang::Object* obj)
{
    return Object::equals(obj);
}

java::lang::Class* poi::ddf::AbstractEscherOptRecord_sortProperties_1::getClass0()
{
    return class_();
}


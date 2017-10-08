// Generated from /POI/java/org/apache/poi/ss/formula/NameIdentifier.java
#include <org/apache/poi/ss/formula/NameIdentifier.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::NameIdentifier::NameIdentifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::NameIdentifier::NameIdentifier(::java::lang::String* name, bool isQuoted) 
    : NameIdentifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,isQuoted);
}

void poi::ss::formula::NameIdentifier::ctor(::java::lang::String* name, bool isQuoted)
{
    super::ctor();
    _name = name;
    _isQuoted = isQuoted;
}

java::lang::String* poi::ss::formula::NameIdentifier::getName()
{
    return _name;
}

bool poi::ss::formula::NameIdentifier::isQuoted()
{
    return _isQuoted;
}

java::lang::String* poi::ss::formula::NameIdentifier::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(sb)->append(npc(getClass())->getName());
    npc(sb)->append(u" ["_j);
    if(_isQuoted) {
        npc(npc(npc(sb)->append(u"'"_j))->append(_name))->append(u"'"_j);
    } else {
        npc(sb)->append(_name);
    }
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::NameIdentifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.NameIdentifier", 40);
    return c;
}

java::lang::Class* poi::ss::formula::NameIdentifier::getClass0()
{
    return class_();
}


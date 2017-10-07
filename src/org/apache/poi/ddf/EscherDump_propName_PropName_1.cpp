// Generated from /POI/java/org/apache/poi/ddf/EscherDump.java
#include <org/apache/poi/ddf/EscherDump_propName_PropName_1.hpp>

#include <java/lang/String.hpp>
#include <org/apache/poi/ddf/EscherDump.hpp>

org::apache::poi::ddf::EscherDump_propName_PropName_1::EscherDump_propName_PropName_1(EscherDump *EscherDump_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , EscherDump_this(EscherDump_this)
{
    clinit();
}

org::apache::poi::ddf::EscherDump_propName_PropName_1::EscherDump_propName_PropName_1(EscherDump *EscherDump_this, int32_t id, ::java::lang::String* name) 
    : EscherDump_propName_PropName_1(EscherDump_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(id,name);
}

void org::apache::poi::ddf::EscherDump_propName_PropName_1::ctor(int32_t id, ::java::lang::String* name)
{
    super::ctor();
    _id = id;
    _name = name;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherDump_propName_PropName_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ddf::EscherDump_propName_PropName_1::getClass0()
{
    return class_();
}


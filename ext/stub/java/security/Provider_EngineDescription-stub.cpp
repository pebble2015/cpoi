// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/security/Provider_EngineDescription.hpp>

extern void unimplemented_(const char16_t* name);
java::security::Provider_EngineDescription::Provider_EngineDescription(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::Provider_EngineDescription::Provider_EngineDescription(::java::lang::String* name, bool sp, ::java::lang::String* paramName)
    : Provider_EngineDescription(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, sp, paramName);
}


void ::java::security::Provider_EngineDescription::ctor(::java::lang::String* name, bool sp, ::java::lang::String* paramName)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::Provider_EngineDescription::ctor(::java::lang::String* name, bool sp, ::java::lang::String* paramName)");
}

java::lang::Class* java::security::Provider_EngineDescription::getConstructorParameterClass()
{ /* stub */
return constructorParameterClass ; /* getter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::Provider_EngineDescription::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.Provider.EngineDescription", 40);
    return c;
}

java::lang::Class* java::security::Provider_EngineDescription::getClass0()
{
    return class_();
}


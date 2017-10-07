// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/security/Provider_Service.hpp>

extern void unimplemented_(const char16_t* name);
java::security::Provider_Service::Provider_Service(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::Provider_Service::Provider_Service(Provider* provider, ::java::lang::String* type, ::java::lang::String* algorithm, ::java::lang::String* className, ::java::util::List* aliases, ::java::util::Map* attributes)
    : Provider_Service(*static_cast< ::default_init_tag* >(0))
{
    ctor(provider, type, algorithm, className, aliases, attributes);
}

java::lang::ClassArray*& java::security::Provider_Service::CLASS0()
{
    clinit();
    return CLASS0_;
}
java::lang::ClassArray* java::security::Provider_Service::CLASS0_;

/* private: void ::java::security::Provider_Service::ctor(Provider* provider) */
void ::java::security::Provider_Service::ctor(Provider* provider, ::java::lang::String* type, ::java::lang::String* algorithm, ::java::lang::String* className, ::java::util::List* aliases, ::java::util::Map* attributes)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::Provider_Service::ctor(Provider* provider, ::java::lang::String* type, ::java::lang::String* algorithm, ::java::lang::String* className, ::java::util::List* aliases, ::java::util::Map* attributes)");
}

/* private: void java::security::Provider_Service::addAlias(::java::lang::String* alias) */
void java::security::Provider_Service::addAttribute(::java::lang::String* type, ::java::lang::String* value)
{ /* stub */
    unimplemented_(u"void java::security::Provider_Service::addAttribute(::java::lang::String* type, ::java::lang::String* value)");
}

java::lang::String* java::security::Provider_Service::getAlgorithm()
{ /* stub */
return algorithm ; /* getter */
}

/* private: java::util::List* java::security::Provider_Service::getAliases() */
java::lang::String* java::security::Provider_Service::getAttribute(::java::lang::String* name)
{ /* stub */
    unimplemented_(u"java::lang::String* java::security::Provider_Service::getAttribute(::java::lang::String* name)");
    return 0;
}

java::lang::String* java::security::Provider_Service::getClassName()
{ /* stub */
return className ; /* getter */
}

/* private: java::lang::Class* java::security::Provider_Service::getImplClass() */
/* private: java::lang::Class* java::security::Provider_Service::getKeyClass(::java::lang::String* name) */
java::security::Provider* java::security::Provider_Service::getProvider()
{ /* stub */
return provider ; /* getter */
}

java::lang::String* java::security::Provider_Service::getType()
{ /* stub */
return type ; /* getter */
}

/* private: bool java::security::Provider_Service::hasKeyAttributes() */
/* private: bool java::security::Provider_Service::isValid() */
java::lang::Object* java::security::Provider_Service::newInstance(::java::lang::Object* constructorParameter)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::Provider_Service::newInstance(::java::lang::Object* constructorParameter)");
    return 0;
}

/* private: java::lang::Object* java::security::Provider_Service::newInstanceGeneric(::java::lang::Object* constructorParameter) */
/* private: bool java::security::Provider_Service::supportsKeyClass(Key* key) */
/* private: bool java::security::Provider_Service::supportsKeyFormat(Key* key) */
bool java::security::Provider_Service::supportsParameter(::java::lang::Object* parameter)
{ /* stub */
    unimplemented_(u"bool java::security::Provider_Service::supportsParameter(::java::lang::Object* parameter)");
    return 0;
}

java::lang::String* java::security::Provider_Service::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::security::Provider_Service::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::Provider_Service::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.Provider.Service", 30);
    return c;
}

java::lang::Class* java::security::Provider_Service::getClass0()
{
    return class_();
}


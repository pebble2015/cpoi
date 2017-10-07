// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/security/Security.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang

    namespace util
    {
typedef ::SubArray< ::java::util::Dictionary, ::java::lang::ObjectArray > DictionaryArray;
typedef ::SubArray< ::java::util::Map, ::java::lang::ObjectArray > MapArray;
typedef ::SubArray< ::java::util::Hashtable, DictionaryArray, MapArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > HashtableArray;
typedef ::SubArray< ::java::util::Properties, HashtableArray > PropertiesArray;
    } // util

    namespace security
    {
typedef ::SubArray< ::java::security::Provider, ::java::util::PropertiesArray > ProviderArray;
    } // security
} // java

extern void unimplemented_(const char16_t* name);
java::security::Security::Security(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Properties*& java::security::Security::props()
{
    clinit();
    return props_;
}
java::util::Properties* java::security::Security::props_;
sun::security::util::Debug*& java::security::Security::sdebug()
{
    clinit();
    return sdebug_;
}
sun::security::util::Debug* java::security::Security::sdebug_;
java::util::Map*& java::security::Security::spiMap()
{
    clinit();
    return spiMap_;
}
java::util::Map* java::security::Security::spiMap_;

/* private: void ::java::security::Security::ctor() */
int32_t java::security::Security::addProvider(Provider* provider)
{ /* stub */
    clinit();
    unimplemented_(u"int32_t java::security::Security::addProvider(Provider* provider)");
    return 0;
}

/* private: void java::security::Security::check(::java::lang::String* directive) */
/* private: void java::security::Security::checkInsertProvider(::java::lang::String* name) */
java::lang::String* java::security::Security::getAlgorithmProperty(::java::lang::String* algName, ::java::lang::String* propName)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::String* java::security::Security::getAlgorithmProperty(::java::lang::String* algName, ::java::lang::String* propName)");
    return 0;
}

java::util::Set* java::security::Security::getAlgorithms(::java::lang::String* serviceName)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Set* java::security::Security::getAlgorithms(::java::lang::String* serviceName)");
    return 0;
}

/* private: java::util::LinkedHashSet* java::security::Security::getAllQualifyingCandidates(::java::lang::String* filterKey, ::java::lang::String* filterValue, ProviderArray* allProviders) */
java::lang::StringArray* java::security::Security::getFilterComponents(::java::lang::String* filterKey, ::java::lang::String* filterValue)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::StringArray* java::security::Security::getFilterComponents(::java::lang::String* filterKey, ::java::lang::String* filterValue)");
    return 0;
}

java::lang::ObjectArray* java::security::Security::getImpl(::java::lang::String* algorithm, ::java::lang::String* type, ::java::lang::String* provider)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::ObjectArray* java::security::Security::getImpl(::java::lang::String* algorithm, ::java::lang::String* type, ::java::lang::String* provider)");
    return 0;
}

java::lang::ObjectArray* java::security::Security::getImpl(::java::lang::String* algorithm, ::java::lang::String* type, Provider* provider)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::ObjectArray* java::security::Security::getImpl(::java::lang::String* algorithm, ::java::lang::String* type, Provider* provider)");
    return 0;
}

java::lang::ObjectArray* java::security::Security::getImpl(::java::lang::String* algorithm, ::java::lang::String* type, ::java::lang::String* provider, ::java::lang::Object* params)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::ObjectArray* java::security::Security::getImpl(::java::lang::String* algorithm, ::java::lang::String* type, ::java::lang::String* provider, ::java::lang::Object* params)");
    return 0;
}

java::lang::ObjectArray* java::security::Security::getImpl(::java::lang::String* algorithm, ::java::lang::String* type, Provider* provider, ::java::lang::Object* params)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::ObjectArray* java::security::Security::getImpl(::java::lang::String* algorithm, ::java::lang::String* type, Provider* provider, ::java::lang::Object* params)");
    return 0;
}

java::lang::String* java::security::Security::getProperty(::java::lang::String* key)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::String* java::security::Security::getProperty(::java::lang::String* key)");
    return 0;
}

java::security::Provider* java::security::Security::getProvider(::java::lang::String* name)
{ /* stub */
    clinit();
    unimplemented_(u"java::security::Provider* java::security::Security::getProvider(::java::lang::String* name)");
    return 0;
}

/* private: java::security::Security_ProviderProperty* java::security::Security::getProviderProperty(::java::lang::String* key) */
/* private: java::lang::String* java::security::Security::getProviderProperty(::java::lang::String* key, Provider* provider) */
java::security::ProviderArray* java::security::Security::getProviders()
{ /* stub */
    clinit();
    unimplemented_(u"java::security::ProviderArray* java::security::Security::getProviders()");
    return 0;
}

java::security::ProviderArray* java::security::Security::getProviders(::java::lang::String* filter)
{ /* stub */
    clinit();
    unimplemented_(u"java::security::ProviderArray* java::security::Security::getProviders(::java::lang::String* filter)");
    return 0;
}

java::security::ProviderArray* java::security::Security::getProviders(::java::util::Map* filter)
{ /* stub */
    clinit();
    unimplemented_(u"java::security::ProviderArray* java::security::Security::getProviders(::java::util::Map* filter)");
    return 0;
}

/* private: java::util::LinkedHashSet* java::security::Security::getProvidersNotUsingCache(::java::lang::String* serviceName, ::java::lang::String* algName, ::java::lang::String* attrName, ::java::lang::String* filterValue, ProviderArray* allProviders) */
/* private: java::lang::Class* java::security::Security::getSpiClass(::java::lang::String* type) */
/* private: void java::security::Security::initialize() */
/* private: void java::security::Security::initializeStatic() */
int32_t java::security::Security::insertProviderAt(Provider* provider, int32_t position)
{ /* stub */
    clinit();
    unimplemented_(u"int32_t java::security::Security::insertProviderAt(Provider* provider, int32_t position)");
    return 0;
}

/* private: void java::security::Security::invalidateSMCache(::java::lang::String* key) */
/* private: bool java::security::Security::isConstraintSatisfied(::java::lang::String* attribute, ::java::lang::String* value, ::java::lang::String* prop) */
/* private: bool java::security::Security::isCriterionSatisfied(Provider* prov, ::java::lang::String* serviceName, ::java::lang::String* algName, ::java::lang::String* attrName, ::java::lang::String* filterValue) */
/* private: bool java::security::Security::isStandardAttr(::java::lang::String* attribute) */
void java::security::Security::removeProvider(::java::lang::String* name)
{ /* stub */
    clinit();
    unimplemented_(u"void java::security::Security::removeProvider(::java::lang::String* name)");
}

/* private: java::io::File* java::security::Security::securityPropFile(::java::lang::String* filename) */
void java::security::Security::setProperty(::java::lang::String* key, ::java::lang::String* datum)
{ /* stub */
    clinit();
    unimplemented_(u"void java::security::Security::setProperty(::java::lang::String* key, ::java::lang::String* datum)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::Security::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.Security", 22);
    return c;
}

java::lang::Class* java::security::Security::getClass0()
{
    return class_();
}

